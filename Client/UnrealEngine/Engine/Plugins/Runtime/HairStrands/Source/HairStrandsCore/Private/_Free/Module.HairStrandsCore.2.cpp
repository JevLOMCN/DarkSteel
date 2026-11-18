// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 385

// CurveGroupName'' @ 1414086b0

void __cdecl `dynamic_initializer_for_'FDataflowCurveSelection::CurveGroupName__(void)

{
  ::FName::FName(&FDataflowCurveSelection::CurveGroupName,"Curves");
  return;
}

// EmptyFrame'' @ 1414086d0

void __cdecl `dynamic_initializer_for_'FGroomCacheBuffers::EmptyFrame__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGroomCacheBuffers::EmptyFrame__);
  return;
}

// FacesGroupName'' @ 1414086f0

void __cdecl `dynamic_initializer_for_'FDataflowFaceSelection::FacesGroupName__(void)

{
  ::FName::FName(&FDataflowFaceSelection::FacesGroupName,"Faces");
  return;
}

// GeometryGroupName'' @ 141408710

void __cdecl `dynamic_initializer_for_'FDataflowGeometrySelection::GeometryGroupName__(void)

{
  ::FName::FName(&FDataflowGeometrySelection::GeometryGroupName,"Geometry");
  return;
}

// MaterialGroupName'' @ 141408730

void __cdecl `dynamic_initializer_for_'FDataflowMaterialSelection::MaterialGroupName__(void)

{
  ::FName::FName(&FDataflowMaterialSelection::MaterialGroupName,"Material");
  return;
}

// ShaderTypeRegistration'' @ 141408750

void __cdecl `dynamic_initializer_for_'FHairStrandCopyPositionCS::ShaderTypeRegistration__(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FShaderTypeRegistration *local_18 [2];
  
  bVar3 = FShaderTypeRegistration::AreShaderTypesInitialized();
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AreShaderTypesInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                       ,0x63a,
                       L"Shader type was loaded too late, use ELoadingPhase::PostConfigInit on your module to cause it to load earlier. This shader will not be compiled or function.  The module and shader will appear in the callstack of this assert."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = FShaderTypeRegistration::GetInstances();
  local_18[0] = &FHairStrandCopyPositionCS::ShaderTypeRegistration;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(FShaderTypeRegistration **)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  atexit(`dynamic_atexit_destructor_for_'FHairStrandCopyPositionCS::ShaderTypeRegistration__);
  return;
}

// TransformGroupName'' @ 141408850

void __cdecl `dynamic_initializer_for_'FDataflowTransformSelection::TransformGroupName__(void)

{
  ::FName::FName(&FDataflowTransformSelection::TransformGroupName,"Transform");
  return;
}

// TypeName'' @ 141408870

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<signed_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<signed_char>::TypeName,L"int8");
  return;
}

// TypeName'' @ 141408890

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_char>::TypeName,L"uint8");
  return;
}

// TypeName'' @ 1414088b0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<short>::TypeName,L"int16");
  return;
}

// TypeName'' @ 1414088d0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_short>::TypeName,L"uint16");
  return;
}

// TypeName'' @ 1414088f0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<int>::TypeName,L"int32");
  return;
}

// TypeName'' @ 141408910

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_int>::TypeName,L"uint32");
  return;
}

// TypeName'' @ 141408930

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<float>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<float>::TypeName,L"float");
  return;
}

// TypeName'' @ 141408950

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<double>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<double>::TypeName,L"double");
  return;
}

// TypeName'' @ 141408970

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName,L"FIntPoint");
  return;
}

// TypeName'' @ 141408990

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName,L"FIntVector3");
  return;
}

// TypeName'' @ 1414089b0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName,L"FIntVector4");
  return;
}

// TypeName'' @ 1414089d0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName,L"TObjectPtr<UObject>");
  return;
}

// TypeName'' @ 1414089f0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName,L"FQuat4f");
  return;
}

// TypeName'' @ 141408a10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName,L"FQuat");
  return;
}

// TypeName'' @ 141408a30

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName,L"FRotator");
  return;
}

// TypeName'' @ 141408a50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName,L"FTransform");
  return;
}

// TypeName'' @ 141408a70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName,L"FVector2f");
  return;
}

// TypeName'' @ 141408a90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName,L"FVector2D");
  return;
}

// TypeName'' @ 141408ab0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName,L"FVector4f");
  return;
}

// TypeName'' @ 141408ad0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName,L"FVector4");
  return;
}

// TypeName'' @ 141408af0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName,L"FVector3f");
  return;
}

// TypeName'' @ 141408b10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName,L"FVector");
  return;
}

// TypeName'' @ 141408b30

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName,
                 L"FDataflowCurveSelection");
  return;
}

// TypeName'' @ 141408b50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName,
                 L"FDataflowFaceSelection");
  return;
}

// TypeName'' @ 141408b70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName,
                 L"FDataflowGeometrySelection");
  return;
}

// TypeName'' @ 141408b90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName,
                 L"FDataflowMaterialSelection");
  return;
}

// TypeName'' @ 141408bb0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName,
                 L"FDataflowTransformSelection");
  return;
}

// TypeName'' @ 141408bd0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName,
                 L"FDataflowVertexSelection");
  return;
}

// TypeName'' @ 141408bf0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FLinearColor>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FLinearColor>::TypeName,L"FLinearColor");
  return;
}

// TypeName'' @ 141408c10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<int8>");
  return;
}

// TypeName'' @ 141408c30

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint8>");
  return;
}

// TypeName'' @ 141408c50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int16>");
  return;
}

// TypeName'' @ 141408c70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint16>");
  return;
}

// TypeName'' @ 141408c90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int32>");
  return;
}

// TypeName'' @ 141408cb0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint32>");
  return;
}

// TypeName'' @ 141408cd0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<float>");
  return;
}

// TypeName'' @ 141408cf0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<double>");
  return;
}

// TypeName'' @ 141408d10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntPoint>");
  return;
}

// TypeName'' @ 141408d30

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector3>");
  return;
}

// TypeName'' @ 141408d50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector4>");
  return;
}

// TypeName'' @ 141408d70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat4f>");
  return;
}

// TypeName'' @ 141408d90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat>");
  return;
}

// TypeName'' @ 141408db0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FRotator>");
  return;
}

// TypeName'' @ 141408dd0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2f>");
  return;
}

// TypeName'' @ 141408df0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2D>");
  return;
}

// TypeName'' @ 141408e10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4f>");
  return;
}

// TypeName'' @ 141408e30

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4>");
  return;
}

// TypeName'' @ 141408e50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector3f>");
  return;
}

// TypeName'' @ 141408e70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector>");
  return;
}

// TypeName'' @ 141408e90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<FLinearColor>");
  return;
}

// TypeName'' @ 141408eb0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FName>");
  return;
}

// TypeName'' @ 141408ed0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FString>");
  return;
}

// TypeName'' @ 141408ef0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int64>");
  return;
}

// TypeName'' @ 141408f10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint64>");
  return;
}

// TypeName'' @ 141408f30

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FName>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FName>::TypeName,L"FName");
  return;
}

// TypeName'' @ 141408f50

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FString>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FString>::TypeName,L"FString");
  return;
}

// TypeName'' @ 141408f70

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FText>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FText>::TypeName,L"FText");
  return;
}

// TypeName'' @ 141408f90

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<__int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<__int64>::TypeName,L"int64");
  return;
}

// TypeName'' @ 141408fb0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned___int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned___int64>::TypeName,L"uint64");
  return;
}

// TypeName'' @ 141408fd0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<bool>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<bool>::TypeName,L"bool");
  return;
}

// VerticesGroupName'' @ 141408ff0

void __cdecl `dynamic_initializer_for_'FDataflowVertexSelection::VerticesGroupName__(void)

{
  ::FName::FName(&FDataflowVertexSelection::VerticesGroupName,"Vertices");
  return;
}

// `dynamic_initializer_for_'CVarGroomCacheStreamingEnable'' @ 141409010

void __cdecl _dynamic_initializer_for__CVarGroomCacheStreamingEnable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGroomCacheStreamingEnable,L"GroomCache.EnableStreaming",&GUseGroomCacheStreaming,
             L"Enable groom cache streaming and prebuffering. Do not switch while groom caches are in use."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGroomCacheStreamingEnable__);
  return;
}

// `dynamic_initializer_for_'CVarHairBindingValidationEnable'' @ 141409060

void __cdecl _dynamic_initializer_for__CVarHairBindingValidationEnable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairBindingValidationEnable,L"r.HairStrands.BindingValidation",
             &GHairBindingValidationEnable,
             L"Enable groom binding validation, which report error/warnings with details about the cause."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHairBindingValidationEnable__);
  return;
}

// `dynamic_initializer_for_'CVarHairClusterBuilder_MaxVoxelResolution'' @ 1414090b0

void __cdecl _dynamic_initializer_for__CVarHairClusterBuilder_MaxVoxelResolution__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairClusterBuilder_MaxVoxelResolution,
             L"r.HairStrands.ClusterBuilder.MaxVoxelResolution",
             &GHairClusterBuilder_MaxVoxelResolution,
             L"Max voxel resolution used when building hair strands cluster data to avoid too long building time (default:128).  "
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHairClusterBuilder_MaxVoxelResolution__);
  return;
}

// `dynamic_initializer_for_'CVarHairEnableAdaptiveSubsteps'' @ 141409100

void __cdecl _dynamic_initializer_for__CVarHairEnableAdaptiveSubsteps__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairEnableAdaptiveSubsteps,L"r.HairStrands.EnableAdaptiveSubsteps",
             &GHairEnableAdaptiveSubsteps,L"Enable adaptive solver substeps",0);
  atexit(_dynamic_atexit_destructor_for__CVarHairEnableAdaptiveSubsteps__);
  return;
}

// `dynamic_initializer_for_'CVarHairGroupIndexBuilder_MaxVoxelResolution'' @ 141409150

void __cdecl _dynamic_initializer_for__CVarHairGroupIndexBuilder_MaxVoxelResolution__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairGroupIndexBuilder_MaxVoxelResolution,
             L"r.HairStrands.HairGroupBuilder.MaxVoxelResolution",
             &GHairGroupIndexBuilder_MaxVoxelResolution,
             L"Max voxel resolution used when voxelizing hair strands to transfer group index grom strands to cards. This avoids too long building time (default:64).  "
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHairGroupIndexBuilder_MaxVoxelResolution__);
  return;
}

// `dynamic_initializer_for_'CVarHairInterpolationMetric_Angle'' @ 1414091a0

void __cdecl _dynamic_initializer_for__CVarHairInterpolationMetric_Angle__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairInterpolationMetric_Angle,L"r.HairStrands.InterpolationMetric.Angle",
             &GHairInterpolationMetric_Angle,L"Hair strands interpolation metric weights for angle",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarHairInterpolationMetric_Angle__);
  return;
}

// `dynamic_initializer_for_'CVarHairInterpolationMetric_AngleAttenuation'' @ 1414091f0

void __cdecl _dynamic_initializer_for__CVarHairInterpolationMetric_AngleAttenuation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairInterpolationMetric_AngleAttenuation,
             L"r.HairStrands.InterpolationMetric.AngleAttenuation",
             &GHairInterpolationMetric_AngleAttenuation,
             L"Hair strands interpolation angle attenuation",0);
  atexit(_dynamic_atexit_destructor_for__CVarHairInterpolationMetric_AngleAttenuation__);
  return;
}

// `dynamic_initializer_for_'CVarHairInterpolationMetric_Distance'' @ 141409240

void __cdecl _dynamic_initializer_for__CVarHairInterpolationMetric_Distance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairInterpolationMetric_Distance,L"r.HairStrands.InterpolationMetric.Distance",
             &GHairInterpolationMetric_Distance,
             L"Hair strands interpolation metric weights for distance",0);
  atexit(_dynamic_atexit_destructor_for__CVarHairInterpolationMetric_Distance__);
  return;
}

// `dynamic_initializer_for_'CVarHairInterpolationMetric_Length'' @ 141409290

void __cdecl _dynamic_initializer_for__CVarHairInterpolationMetric_Length__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairInterpolationMetric_Length,L"r.HairStrands.InterpolationMetric.Length",
             &GHairInterpolationMetric_Length,
             L"Hair strands interpolation metric weights for length",0);
  atexit(_dynamic_atexit_destructor_for__CVarHairInterpolationMetric_Length__);
  return;
}

// `dynamic_initializer_for_'CVarHairStrandsDump_GroomComponent'' @ 1414092e0

void __cdecl _dynamic_initializer_for__CVarHairStrandsDump_GroomComponent__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = DumpLoadedGroomComponent;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairStrandsDump_GroomComponent,L"r.HairStrands.Dump.GroomComponent",
             &GHairStrandsDump_GroomComponent,L"Dump information of all active groom components.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarHairStrandsDump_GroomComponent__);
  return;
}

// `dynamic_initializer_for_'CVarHairStrandsResetSimulationOnAllGroomComponents'' @ 141409420

void __cdecl _dynamic_initializer_for__CVarHairStrandsResetSimulationOnAllGroomComponents__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = ResetSimulationOnAllGroomComponents;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairStrandsResetSimulationOnAllGroomComponents,
             L"r.HairStrands.Simulation.ResetAll",&GHairStrandsResetSimulationOnAllGroomComponents,
             L"Reset hair strands simulation on all groom components.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarHairStrandsResetSimulationOnAllGroomComponents__);
  return;
}

// `dynamic_initializer_for_'CVarHairStrands_BoundsMode'' @ 141409560

void __cdecl _dynamic_initializer_for__CVarHairStrands_BoundsMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairStrands_BoundsMode,L"r.HairStrands.BoundMode",&GHairStrands_BoundsMode,
             L"Define how hair bound are computed at runtime when attached to a skel. mesh.\n 0: Use skel.mesh extented with grooms bounds.\n 1: Use skel.mesh bounds.\n 2: Use skel.mesh extented with grooms bounds (conservative)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHairStrands_BoundsMode__);
  return;
}

// `dynamic_initializer_for_'CVarHairStrands_ForceVelocityOutput'' @ 1414095b0

void __cdecl _dynamic_initializer_for__CVarHairStrands_ForceVelocityOutput__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairStrands_ForceVelocityOutput,L"r.HairStrands.ForceVelocityOutput",
             &GHairStrands_ForceVelocityOutput,
             L"When enabled, force the cards/meshes to write velocity vectors.",0);
  atexit(_dynamic_atexit_destructor_for__CVarHairStrands_ForceVelocityOutput__);
  return;
}

// `dynamic_initializer_for_'CVarHairStrands_Streaming_Prediction'' @ 141409600

void __cdecl _dynamic_initializer_for__CVarHairStrands_Streaming_Prediction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairStrands_Streaming_Prediction,L"r.HairStrands.Streaming.Prediction",
             &GHairStrands_Streaming_Prediction,L"Enable LOD streaming prediction.",0);
  atexit(_dynamic_atexit_destructor_for__CVarHairStrands_Streaming_Prediction__);
  return;
}

// `dynamic_initializer_for_'CVarHairStrands_UseAttachedSimulationComponents'' @ 141409650

void __cdecl _dynamic_initializer_for__CVarHairStrands_UseAttachedSimulationComponents__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairStrands_UseAttachedSimulationComponents,
             L"r.HairStrands.UseAttachedSimulationComponents",
             &GHairStrands_UseAttachedSimulationComponents,
             L"Boolean to check if we are using already attached niagara components for simulation (WIP)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHairStrands_UseAttachedSimulationComponents__);
  return;
}

// `dynamic_initializer_for_'CVarHairStrands_ViewModeClumpIndex'' @ 1414096a0

void __cdecl _dynamic_initializer_for__CVarHairStrands_ViewModeClumpIndex__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairStrands_ViewModeClumpIndex,L"r.HairStrands.ViewMode.ClumpIndex",
             &GHairStrands_ViewModeClumpIndex,
             L"Define the ClumpID index (0, 1, or 2) which should be visualized",0);
  atexit(_dynamic_atexit_destructor_for__CVarHairStrands_ViewModeClumpIndex__);
  return;
}

// `dynamic_initializer_for_'CVarUseProxyLocalToWorld'' @ 1414096f0

void __cdecl _dynamic_initializer_for__CVarUseProxyLocalToWorld__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseProxyLocalToWorld,L"r.HairStrands.UseProxyLocalToWorld",&GUseProxyLocalToWorld,
             L"Enable the use of the groom proxy local to world instead of extracting it from the game thread."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseProxyLocalToWorld__);
  return;
}

// `dynamic_initializer_for_'GStrandsPositionQueries'' @ 141409740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GStrandsPositionQueries__(void)

{
  GStrandsPositionQueries.Head = operator_new(0x10);
  if (GStrandsPositionQueries.Head != (TNode *)0x0) {
    (GStrandsPositionQueries.Head)->NextNode = (TNode *)0x0;
    (GStrandsPositionQueries.Head)->Item = (FStrandsPositionData *)0x0;
    (GStrandsPositionQueries.Head)->NextNode = (TNode *)0x0;
  }
  GStrandsPositionQueries.Tail = GStrandsPositionQueries.Head;
  atexit(_dynamic_atexit_destructor_for__GStrandsPositionQueries__);
  return;
}

// `dynamic_initializer_for_'GStrandsPositionReadbacks'' @ 141409790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GStrandsPositionReadbacks__(void)

{
  GStrandsPositionReadbacks.Head = operator_new(0x10);
  if (GStrandsPositionReadbacks.Head != (TNode *)0x0) {
    (GStrandsPositionReadbacks.Head)->NextNode = (TNode *)0x0;
    (GStrandsPositionReadbacks.Head)->Item = (FStrandsPositionData *)0x0;
    (GStrandsPositionReadbacks.Head)->NextNode = (TNode *)0x0;
  }
  GStrandsPositionReadbacks.Tail = GStrandsPositionReadbacks.Head;
  atexit(_dynamic_atexit_destructor_for__GStrandsPositionReadbacks__);
  return;
}

// `dynamic_initializer_for_'LogGroomBuilder'' @ 1414097e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGroomBuilder__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGroomBuilder,L"LogGroomBuilder",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGroomBuilder__);
  return;
}

// `dynamic_initializer_for_'LogGroomCacheStreaming'' @ 141409820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGroomCacheStreaming__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGroomCacheStreaming,L"LogGroomCacheStreaming",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogGroomCacheStreaming__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 141409860

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1414098f0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 141409980

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 141409a10

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 141409aa0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 141409b30

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 141409bc0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 141409c50

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 141409ce0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 141409d70

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h__Script_HairStrandsCore_2649704291'' @ 141409e00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h__Script_HairStrandsCore_2649704291__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HairStrandsCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h__Script_HairStrandsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h__Script_HairStrandsCore_3043376443'' @ 141409e40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h__Script_HairStrandsCore_3043376443__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HairStrandsCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h__Script_HairStrandsCore_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h__Script_HairStrandsCore_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h__Script_HairStrandsCore_291596304'' @ 141409e90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h__Script_HairStrandsCore_291596304__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HairStrandsCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h__Script_HairStrandsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h__Script_HairStrandsCore_3134041460'' @ 141409ed0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h__Script_HairStrandsCore_3134041460__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HairStrandsCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h__Script_HairStrandsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterQueuedGroomBindingAssetCompilation'' @ 141409f10

void __cdecl _dynamic_initializer_for____GTraceCounterQueuedGroomBindingAssetCompilation__(void)

{
  __GTraceCounterQueuedGroomBindingAssetCompilation.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"AsyncCompilation/QueuedGroomBinding",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterQueuedGroomBindingAssetCompilation.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterQueuedGroomBindingAssetCompilation__);
  return;
}

// Z_Construct_UClass_UGroomCache_NoRegister @ 14dfe40d0

UClass * __cdecl Z_Construct_UClass_UGroomCache_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCache",
               &Z_Registration_Info_UClass_UGroomCache.InnerSingleton,
               UGroomCache::StaticRegisterNativesUGroomCache,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomCache>,
               InternalVTableHelperCtorCaller<UGroomCache>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCache.InnerSingleton;
}

// Z_Construct_UClass_UGroomBlueprintLibrary @ 14dfe4230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGroomBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UGroomBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGroomBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UGroomBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGroomBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset @ 14dfe4270

UFunction * __cdecl
Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath @ 14dfe42b0

UFunction * __cdecl
Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset @ 14dfe42f0

UFunction * __cdecl Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath @ 14dfe4330

UFunction * __cdecl
Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dfe4370

void __cdecl
Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld @ 14dfe4380

UFunction * __cdecl Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomBlueprintLibrary_IsHairStrandsSupportedInWorld_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGroomCache @ 14dfe4440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGroomCache(void)

{
  if (Z_Registration_Info_UClass_UGroomCache.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGroomCache.OuterSingleton,
               &Z_Construct_UClass_UGroomCache_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGroomCache.OuterSingleton;
}

// Z_Construct_UScriptStruct_FGroomCacheInfo @ 14dfe4480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGroomCacheInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGroomCacheInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGroomCacheInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGroomCacheInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGroomCacheInfo.InnerSingleton;
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

// Z_Construct_UClass_UGroomComponent @ 14dfe4810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGroomComponent(void)

{
  if (Z_Registration_Info_UClass_UGroomComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGroomComponent.OuterSingleton,
               &Z_Construct_UClass_UGroomComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGroomComponent.OuterSingleton;
}

// Z_Construct_UFunction_UGroomComponent_AddCollisionComponent @ 14dfe4850

UFunction * __cdecl Z_Construct_UFunction_UGroomComponent_AddCollisionComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dfe4890

void __cdecl
Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled @ 14dfe48a0

UFunction * __cdecl Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent @ 14dfe48e0

UFunction * __cdecl Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents @ 14dfe4920

UFunction * __cdecl Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGroomComponent_ResetSimulation @ 14dfe4960

UFunction * __cdecl Z_Construct_UFunction_UGroomComponent_ResetSimulation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomComponent_ResetSimulation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGroomComponent_SetBindingAsset @ 14dfe49a0

UFunction * __cdecl Z_Construct_UFunction_UGroomComponent_SetBindingAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInEnableSimulation_SetBit @ 14dfe49e0

void __cdecl
Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::
NewProp_bInEnableSimulation_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGroomComponent_SetEnableSimulation @ 14dfe49f0

UFunction * __cdecl Z_Construct_UFunction_UGroomComponent_SetEnableSimulation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes @ 14dfe4a30

UEnum * __cdecl Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes(void)

{
  if (Z_Registration_Info_UEnum_EGroomCacheAttributes.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGroomCacheAttributes.InnerSingleton,
               &Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGroomCacheAttributes.InnerSingleton;
}

// Z_Construct_UEnum_HairStrandsCore_EGroomCacheType @ 14dfe4a70

UEnum * __cdecl Z_Construct_UEnum_HairStrandsCore_EGroomCacheType(void)

{
  if (Z_Registration_Info_UEnum_EGroomCacheType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGroomCacheType.InnerSingleton,
               &Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGroomCacheType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGroomAnimationInfo @ 14dfe4ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGroomAnimationInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGroomAnimationInfo.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGroomAnimationInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGroomAnimationInfo.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FGroomAnimationInfo.InnerSingleton;
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

// EGroomCacheAttributes_StaticEnum @ 14dfe4b30

UEnum * __cdecl EGroomCacheAttributes_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGroomCacheAttributes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UEnum_EGroomCacheAttributes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes,(UObject *)pUVar1,
                       L"EGroomCacheAttributes");
  }
  return Z_Registration_Info_UEnum_EGroomCacheAttributes.OuterSingleton;
}

// Z_Construct_UFunction_UGroomComponent_SetGroomAsset @ 14dfe4b70

UFunction * __cdecl Z_Construct_UFunction_UGroomComponent_SetGroomAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGroomComponent_SetGroomCache @ 14dfe4bb0

UFunction * __cdecl Z_Construct_UFunction_UGroomComponent_SetGroomCache(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomComponent_SetGroomCache_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dfe4bf0

void * __cdecl Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGroomAnimationInfo,&UE::CoreUObject::Private::Construct<FGroomAnimationInfo>,&UE::CoreUObject::Private::ConstructForTests<FGroomAnimationInfo>,&UE::CoreUObject::Private::Destruct<FGroomAnimationInfo>,&UE::CoreUObject::Private::Copy<FGroomAnimationInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGroomComponent_SetHairLengthScale @ 14dfe4c30

UFunction * __cdecl Z_Construct_UFunction_UGroomComponent_SetHairLengthScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 14dfe4c70

void __cdecl
Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::NewProp_bEnable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable @ 14dfe4c80

UFunction * __cdecl Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGroomComponent_SetMeshDeformer @ 14dfe4cc0

UFunction * __cdecl Z_Construct_UFunction_UGroomComponent_SetMeshDeformer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EGroomCacheType_StaticEnum @ 14dfe4d00

UEnum * __cdecl EGroomCacheType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGroomCacheType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UEnum_EGroomCacheType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomCacheType,(UObject *)pUVar1,
                       L"EGroomCacheType");
  }
  return Z_Registration_Info_UEnum_EGroomCacheType.OuterSingleton;
}

// Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset @ 14dfe4d40

UFunction * __cdecl Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EGroomBasisType_StaticEnum @ 14dfe4d80

UEnum * __cdecl EGroomBasisType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGroomBasisType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UEnum_EGroomBasisType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomBasisType,(UObject *)pUVar1,
                       L"EGroomBasisType");
  }
  return Z_Registration_Info_UEnum_EGroomBasisType.OuterSingleton;
}

// NewProp_bUseCards_SetBit @ 14dfe4dc0

void __cdecl Z_Construct_UClass_UGroomComponent_Statics::NewProp_bUseCards_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x770) = 1;
  return;
}

// EGroomCurveType_StaticEnum @ 14dfe4dd0

UEnum * __cdecl EGroomCurveType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGroomCurveType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UEnum_EGroomCurveType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomCurveType,(UObject *)pUVar1,
                       L"EGroomCurveType");
  }
  return Z_Registration_Info_UEnum_EGroomCurveType.OuterSingleton;
}

// NewProp_bRunning_SetBit @ 14dfe4e10

void __cdecl Z_Construct_UClass_UGroomComponent_Statics::NewProp_bRunning_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x771) = 1;
  return;
}

// NewProp_bLooping_SetBit @ 14dfe4e20

void __cdecl Z_Construct_UClass_UGroomComponent_Statics::NewProp_bLooping_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x772) = 1;
  return;
}

// NewProp_bManualTick_SetBit @ 14dfe4e30

void __cdecl Z_Construct_UClass_UGroomComponent_Statics::NewProp_bManualTick_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x773) = 1;
  return;
}

// NewStructOps @ 14dfe4e40

void * __cdecl Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGroomCacheInfo,&UE::CoreUObject::Private::Construct<FGroomCacheInfo>,&UE::CoreUObject::Private::ConstructForTests<FGroomCacheInfo>,&UE::CoreUObject::Private::Destruct<FGroomCacheInfo>,&UE::CoreUObject::Private::Copy<FGroomCacheInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// AddPass<`FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>'::__l2::<lambda_1>_> @ 14dfe4fe0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairStrandCopyPositionCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairStrandCopyPositionCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairStrandCopyPositionCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairUpdateMeshSamplesCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>'::__l2::<lambda_1>_> @ 14dfe53d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>_::__l2::<lambda_1>_>
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
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFHairStrandCopyPositionCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFHairStrandCopyPositionCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FHairStrandCopyPositionCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairUpdateMeshSamplesCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
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

// Async<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l104::<lambda_2>_> @ 14dfe5ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FGroomCacheStreamingData::UpdateStreamingStatus_::__l104::<lambda_2>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_2> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned_int> *paVar2;
  atomic<int> *paVar3;
  atomic<unsigned_int> aVar4;
  atomic<int> aVar5;
  code *pcVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTaskBase *pFVar12;
  FTSTicker *this;
  FTaskBase *pFVar13;
  FRunnableThread *pFVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  code **ppcVar17;
  FPipe *pFVar18;
  FSharedReferencer<1> FVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  longlong *plVar22;
  ForAnyElementType FVar23;
  FTaskBase *pFVar24;
  Type TVar25;
  undefined1 auStackY_1d8 [32];
  EExtendedTaskPriority local_198;
  ETaskPriority local_197 [7];
  TPromise<void> local_190;
  FRunnableThread *local_178;
  FTaskBase *local_170;
  FRunnableThread *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  TFutureState<void> *local_130;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  code *local_b8;
  code *pcStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar24 = (FTaskBase *)0x0;
  local_178 = (FRunnableThread *)((ulonglong)local_178 & 0xffffffff00000000);
  local_f8 = (FTaskBase *)0x0;
  local_170 = (FTaskBase *)param_3;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController = FMemory::Malloc(0x58,8);
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount =
       (atomic<unsigned___int64>)0x0;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).Object
       = (TEventCount<unsigned_int> *)0x0;
  paVar1 = &((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FGroomCacheStreamingData::UpdateStreamingStatus'::`104'::<lambda_2>,1,1>
        ::_vftable_;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))->
  LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)0x0;
  *(undefined4 *)
   &((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))->
    TaskCount = 0;
  *(undefined4 *)
   &(((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))->
    TaskCount).field_0x4 = 0x80;
  *(undefined4 *)
   &(((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))->
    EmptyEventRef).Object = 0xffffffff;
  *(undefined4 *)
   ((longlong)
    &(((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))
     ->EmptyEventRef).Object + 4) = 0;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))->
  DebugName = (wchar_t *)0x0;
  *(undefined4 *)
   &((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x50))->
    LastTask = 0;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>::
  Move<TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>_>
            ((TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>
              *)paVar1,&param_2->ReadyForDeletion);
  if (paVar1 != (atomic<unsigned___int64> *)0x0) {
    local_f8 = (FTaskBase *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l104::<lambda_2>,void>
               ::Call;
  }
  TPromise<void>::TPromise<void>(&local_190,param_3);
  if ((local_190.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar6)();
    return pTVar11;
  }
  local_190.bFutureRetrieved = true;
  if ((local_190.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar6)();
    return pTVar11;
  }
  FVar21.ReferenceController = local_190.State.SharedReferenceCount.ReferenceController;
  local_130 = local_190.State.Object;
  if (local_190.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar12 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar24;
    if (pFVar12 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar12,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar12->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar12;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar20[1]._padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pFVar20[1]._padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar24;
    }
    pFVar20[1].Pipe = (FPipe *)local_190.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_190.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_190.bFutureRetrieved;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_197,&local_198);
    UE::Tasks::Private::FTaskBase::Init(pFVar20,L"GraphTask",local_197[0],local_198,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar2 = &pFVar20->RefCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pcStack_b0 = (code *)CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_190.State.Object;
    local_90 = local_190.State.SharedReferenceCount.ReferenceController;
    local_88 = local_190.bFutureRetrieved;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object = (TFutureState<void> *)0x0;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FGroomCacheStreamingData::UpdateStreamingStatus'::`104'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar17 = local_50 + 2;
    *ppcVar17 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    local_50[4] = local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar17 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar17 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l104::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar17 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar17 = local_50;
      }
      (**(code **)(*ppcVar17 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar6)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar18 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar18 = local_a0;
      }
      (**(code **)(*(code **)pFVar18 + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pFVar13 = operator_new(0x70);
      pFVar20 = local_170;
      pFVar12 = pFVar24;
      if (pFVar13 != (FTaskBase *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar6)();
          return pTVar11;
        }
        pTVar8 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar6)();
          return pTVar11;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar13->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar13->_padding_ = (longlong)local_f8;
        pFVar13->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar13->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar13->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar13->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar13->_padding_ != 0) {
          local_f8 = pFVar24;
        }
        *(TFutureState<void> **)&(pFVar13->StateChangeEvent).Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar13->ExecutingThreadId =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &(pFVar13->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_160.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (pFVar13->TraceId).field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar13->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar24;
        pFVar24 = pFVar13;
        pFVar12 = (FTaskBase *)&DAT_00000001;
      }
      if (pFVar12 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar23.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar14 = FRunnableThread::Create
                          ((FRunnable *)pFVar24,(wchar_t *)FVar23.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_178 = pFVar14;
      if ((pFVar14 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar6)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar6)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_178);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar6)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar24 = local_f8;
      FVar19.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar19.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar19.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar24)(uVar16);
      if (local_190.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar6)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar6)();
          return pTVar11;
        }
      }
      pTVar7 = local_190.State.Object;
      if ((*(TAtomic<bool> *)&(local_190.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar6)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
      pFVar13 = operator_new(0x70);
      pFVar20 = local_170;
      pFVar12 = pFVar24;
      if (pFVar13 != (FTaskBase *)0x0) {
        if ((local_148.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar6)();
          return pTVar11;
        }
        pTVar8 = local_148.State.Object;
        local_148.bFutureRetrieved = true;
        if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar6)();
          return pTVar11;
        }
        if (local_148.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar13->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar13->_padding_ = (longlong)local_f8;
        pFVar13->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar13->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar13->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar13->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar13->_padding_ != 0) {
          local_f8 = pFVar24;
        }
        *(TFutureState<void> **)&(pFVar13->StateChangeEvent).Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar13->ExecutingThreadId =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &(pFVar13->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_148.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (pFVar13->TraceId).field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar13->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar24;
        pFVar24 = pFVar13;
        pFVar12 = (FTaskBase *)&DAT_00000002;
      }
      if (pFVar12 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar23.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar14 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar24,(wchar_t *)FVar23.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar14;
      if ((pFVar14 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar6)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar6)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_148,&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_148.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar6)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar24 = local_f8;
      FVar19.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar19.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar19.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar24)(uVar16);
      if (local_190.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar6)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar6)();
          return pTVar11;
        }
      }
      pTVar7 = local_190.State.Object;
      if ((*(TAtomic<bool> *)&(local_190.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar6)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar6)();
        return pTVar11;
      }
      pcVar6 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar15 = operator_new(0x60);
      if (puVar15 == (undefined8 *)0x0) {
        (*pcVar6)(GThreadPool,0,3);
      }
      else {
        puVar15[1] = 0;
        *puVar15 = &___7__TAsyncQueuedWork_X__6B_;
        puVar15[2] = local_f8;
        puVar15[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(undefined4 *)(puVar15 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar15 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar15 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar15[6] = local_e8.EmptyEventRef.Object;
        if (puVar15[2] != 0) {
          local_f8 = pFVar24;
        }
        puVar15[8] = local_190.State.Object;
        puVar15[9] = local_190.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar15 + 10) = local_190.bFutureRetrieved;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (*pcVar6)(GThreadPool,puVar15,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar24 = local_f8;
      FVar19.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar19.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar19.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar24)(uVar16);
      if (local_190.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar6)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar6)();
          return pTVar11;
        }
      }
      pTVar7 = local_190.State.Object;
      if ((*(TAtomic<bool> *)&(local_190.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar6)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar6)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = local_130;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar21.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_190.State.Object != (TFutureState<void> *)0x0) &&
      (((TAtomic<bool> *)&(local_190.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar6)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 0x10))();
  }
  if (local_170->_padding_ != 0) {
    plVar22 = &local_170->_padding_;
    if ((longlong *)local_170->_padding_ != (longlong *)0x0) {
      plVar22 = (longlong *)local_170->_padding_;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  return __return_storage_ptr__;
}

// BindForLegacyShaderParameters<FHairStrandCopyPositionCS::FParameters> @ 14dfe6790

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
BindForLegacyShaderParameters<FHairStrandCopyPositionCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FHairStrandCopyPositionCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// Cast<UGeometryCacheComponent,UMeshComponent> @ 14dfe67f0

UGeometryCacheComponent * __cdecl
Cast<UGeometryCacheComponent,UMeshComponent>(UMeshComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UMeshComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (UGeometryCacheComponent *)param_1;
    }
  }
  return (UGeometryCacheComponent *)0x0;
}

// Cast<USkeletalMeshComponent,UMeshComponent> @ 14dfe6840

USkeletalMeshComponent * __cdecl
Cast<USkeletalMeshComponent,UMeshComponent>(UMeshComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UMeshComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (USkeletalMeshComponent *)param_1;
    }
  }
  return (USkeletalMeshComponent *)0x0;
}

// ClearUnusedGraphResources<FHairStrandCopyPositionCS> @ 14dfe6890

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
ClearUnusedGraphResources<FHairStrandCopyPositionCS>
          (TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable> *param_1,
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

// ComputeCurvesMetric<16> @ 14dfe7970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl
HairInterpolationBuilder::ComputeCurvesMetric<16>
          (FHairStrandsDatas *param_1,uint param_2,FHairStrandsDatas *param_3,uint param_4,
          TStaticArray<UE::Math::TVector<float>,16,4294967295> *param_5,
          TStaticArray<UE::Math::TVector<float>,16,4294967295> *param_6,float param_7,float param_8,
          float param_9)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar13 = 0;
  uVar8 = 0;
  if ((int)param_4 < (int)param_3->_padding_) {
    uVar8 = ~param_4 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      fVar15 = (float)(*pcVar6)();
      return fVar15;
    }
  }
  lVar10 = param_3->_padding_;
  uVar8 = 0;
  if ((int)param_2 < (int)param_1->_padding_) {
    uVar8 = ~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      fVar15 = (float)(*pcVar6)();
      return fVar15;
    }
  }
  uVar8 = 0;
  if ((int)param_2 < (int)param_1->_padding_) {
    uVar8 = ~param_2 >> 0x1f;
  }
  fVar15 = (*(float *)(param_1->_padding_ + (longlong)(int)param_2 * 4) +
           *(float *)(lVar10 + (longlong)(int)param_4 * 4)) * __real_3f000000;
  if (fVar15 <= __real_322bcc77) {
    fVar15 = __real_322bcc77;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      fVar15 = (float)(*pcVar6)();
      return fVar15;
    }
  }
  uVar8 = *(uint *)(param_1->_padding_ + (longlong)(int)param_2 * 4);
  lVar10 = (longlong)(int)uVar8;
  uVar9 = 0;
  if ((int)uVar8 < (int)param_1->_padding_) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      fVar15 = (float)(*pcVar6)();
      return fVar15;
    }
  }
  lVar4 = param_1->_padding_;
  uVar8 = 0;
  if ((int)param_4 < (int)param_3->_padding_) {
    uVar8 = ~param_4 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      fVar15 = (float)(*pcVar6)();
      return fVar15;
    }
  }
  uVar8 = *(uint *)(param_3->_padding_ + (longlong)(int)param_4 * 4);
  lVar11 = (longlong)(int)uVar8;
  uVar9 = 0;
  if ((int)uVar8 < (int)param_3->_padding_) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      fVar15 = (float)(*pcVar6)();
      return fVar15;
    }
  }
  lVar5 = param_3->_padding_;
  fVar23 = 0.0;
  fVar24 = 0.0;
  lVar14 = (longlong)param_5 - (longlong)param_6;
  pfVar12 = &param_6->Elements[0].field0_0x0._s_0.Y;
  fVar2 = *(float *)(lVar5 + lVar11 * 0xc);
  fVar3 = *(float *)(lVar5 + 4 + lVar11 * 0xc);
  do {
    fVar16 = expf((float)uVar13 * param_7 * ___real_bd888889);
    fVar22 = *pfVar12;
    fVar19 = ((TVector<float>_u_0_s_0 *)(pfVar12 + -1))->X -
             *(float *)(lVar14 + -4 + (longlong)pfVar12);
    fVar18 = fVar22 - *(float *)(lVar14 + (longlong)pfVar12);
    fVar17 = pfVar12[1] - *(float *)(lVar14 + 4 + (longlong)pfVar12);
    uVar13 = uVar13 + 1;
    fVar20 = ((((TVector<float>_u_0_s_0 *)(pfVar12 + -1))->X - fVar2) -
             *(float *)(lVar14 + -4 + (longlong)pfVar12)) + *(float *)(lVar4 + lVar10 * 0xc);
    pfVar1 = (float *)(lVar14 + (longlong)pfVar12);
    fVar21 = ((pfVar12[1] - *(float *)(lVar5 + 8 + lVar11 * 0xc)) -
             *(float *)(lVar14 + 4 + (longlong)pfVar12)) + *(float *)(lVar4 + 8 + lVar10 * 0xc);
    pfVar12 = pfVar12 + 3;
    fVar22 = ((fVar22 - fVar3) - *pfVar1) + *(float *)(lVar4 + 4 + lVar10 * 0xc);
    fVar23 = fVar23 + SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) * fVar16;
    fVar24 = fVar24 + SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar21 * fVar21) * fVar16;
  } while (uVar13 < 0x10);
  fVar15 = expf((float)((uint)((__real_3d888889 / fVar15) * fVar24 * param_8 +
                              (__real_3d888889 / fVar15) * fVar23 * param_9) ^
                       __xmm_80000000800000008000000080000000));
  return fVar15;
}

// ConstructItems<TRefCountPtr<FHairGroupInstance>,TRefCountPtr<FHairGroupInstance>,int> @ 14dfe7da0

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

void __cdecl
ConstructItems<TRefCountPtr<FHairGroupInstance>,TRefCountPtr<FHairGroupInstance>,int>
          (void *param_1,TRefCountPtr<FHairGroupInstance> *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(longlong *)param_1 = 0;
      lVar1 = *(longlong *)(lVar2 + (longlong)param_1);
      *(longlong *)param_1 = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<`FGroomBindingCompilingManager::FinishCompilation'::__l29::FCompilableGroomBindingAsset,UGroomBindingAsset_*,int> @ 14dfe7de0

void __cdecl
ConstructItems<_FGroomBindingCompilingManager::FinishCompilation_::__l29::FCompilableGroomBindingAsset,UGroomBindingAsset_*,int>
          (void *param_1,UGroomBindingAsset **param_2,int param_3)

{
  UGroomBindingAsset *this;
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      this = *param_2;
      puVar1[-1] = &`FGroomBindingCompilingManager::FinishCompilation'::`29'::
                    FCompilableGroomBindingAsset::_vftable_;
      *puVar1 = 0;
      if (this != (UGroomBindingAsset *)0x0) {
        UObjectBase::AddRef((UObjectBase *)this);
        *puVar1 = this;
      }
      puVar1 = puVar1 + 2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CopyToBulkData<FHairClusterIndexFormat> @ 14dfe7e70

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairClusterIndexFormat>
          (FHairBulkContainer *param_1,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  TBulkData<unsigned_char> *this;
  void *_Dst;
  uint uVar1;
  
  this = &param_1->Data;
  uVar1 = param_2->ArrayNum << 2;
  FBulkData::Lock((FBulkData *)this,2);
  _Dst = FBulkData::Realloc((FBulkData *)this,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)this);
  return;
}

// CopyToBulkData<FHairClusterIndexFormat> @ 14dfe7ee0

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairClusterIndexFormat>
          (TBulkData<unsigned_char> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  void *_Dst;
  uint uVar1;
  
  uVar1 = param_2->ArrayNum << 2;
  FBulkData::Lock((FBulkData *)param_1,2);
  _Dst = FBulkData::Realloc((FBulkData *)param_1,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)param_1);
  return;
}

// CopyToBulkData<FHairClusterInfoFormat> @ 14dfe7f40

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairClusterInfoFormat>
          (FHairBulkContainer *param_1,
          TArray<FHairClusterInfo::Packed,TSizedDefaultAllocator<32>_> *param_2)

{
  TBulkData<unsigned_char> *this;
  void *_Dst;
  uint uVar1;
  
  this = &param_1->Data;
  uVar1 = param_2->ArrayNum << 4;
  FBulkData::Lock((FBulkData *)this,2);
  _Dst = FBulkData::Realloc((FBulkData *)this,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)this);
  return;
}

// CopyToBulkData<FHairClusterInfoFormat> @ 14dfe7fb0

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairClusterInfoFormat>
          (TBulkData<unsigned_char> *param_1,
          TArray<FHairClusterInfo::Packed,TSizedDefaultAllocator<32>_> *param_2)

{
  void *_Dst;
  uint uVar1;
  
  uVar1 = param_2->ArrayNum << 4;
  FBulkData::Lock((FBulkData *)param_1,2);
  _Dst = FBulkData::Realloc((FBulkData *)param_1,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)param_1);
  return;
}

// CopyToBulkData<FHairStrandsAttributeFormat> @ 14dfe8010

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsAttributeFormat>
          (FHairBulkContainer *param_1,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  TBulkData<unsigned_char> *this;
  void *_Dst;
  uint uVar1;
  
  this = &param_1->Data;
  uVar1 = param_2->ArrayNum << 2;
  FBulkData::Lock((FBulkData *)this,2);
  _Dst = FBulkData::Realloc((FBulkData *)this,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)this);
  return;
}

// CopyToBulkData<FHairStrandsAttributeFormat> @ 14dfe8080

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsAttributeFormat>
          (TBulkData<unsigned_char> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  void *_Dst;
  uint uVar1;
  
  uVar1 = param_2->ArrayNum << 2;
  FBulkData::Lock((FBulkData *)param_1,2);
  _Dst = FBulkData::Realloc((FBulkData *)param_1,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)param_1);
  return;
}

// CopyToBulkData<FHairStrandsCurveFormat> @ 14dfe80e0

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsCurveFormat>
          (FHairBulkContainer *param_1,TArray<FPackedHairCurve,TSizedDefaultAllocator<32>_> *param_2
          )

{
  TBulkData<unsigned_char> *this;
  void *_Dst;
  uint uVar1;
  
  this = &param_1->Data;
  uVar1 = param_2->ArrayNum << 2;
  FBulkData::Lock((FBulkData *)this,2);
  _Dst = FBulkData::Realloc((FBulkData *)this,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)this);
  return;
}

// CopyToBulkData<FHairStrandsCurveFormat> @ 14dfe8150

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsCurveFormat>
          (TBulkData<unsigned_char> *param_1,
          TArray<FPackedHairCurve,TSizedDefaultAllocator<32>_> *param_2)

{
  void *_Dst;
  uint uVar1;
  
  uVar1 = param_2->ArrayNum << 2;
  FBulkData::Lock((FBulkData *)param_1,2);
  _Dst = FBulkData::Realloc((FBulkData *)param_1,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)param_1);
  return;
}

// CopyToBulkData<FHairStrandsIndexFormat> @ 14dfe81b0

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsIndexFormat>
          (FHairBulkContainer *param_1,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  TBulkData<unsigned_char> *this;
  void *_Dst;
  uint uVar1;
  
  this = &param_1->Data;
  uVar1 = param_2->ArrayNum << 2;
  FBulkData::Lock((FBulkData *)this,2);
  _Dst = FBulkData::Realloc((FBulkData *)this,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)this);
  return;
}

// CopyToBulkData<FHairStrandsIndexFormat> @ 14dfe8220

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsIndexFormat>
          (TBulkData<unsigned_char> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  void *_Dst;
  uint uVar1;
  
  uVar1 = param_2->ArrayNum << 2;
  FBulkData::Lock((FBulkData *)param_1,2);
  _Dst = FBulkData::Realloc((FBulkData *)param_1,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)param_1);
  return;
}

// CopyToBulkData<FHairStrandsInterpolationFormat> @ 14dfe8280

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsInterpolationFormat>
          (FHairBulkContainer *param_1,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  TBulkData<unsigned_char> *this;
  void *_Dst;
  uint uVar1;
  
  this = &param_1->Data;
  uVar1 = param_2->ArrayNum << 2;
  FBulkData::Lock((FBulkData *)this,2);
  _Dst = FBulkData::Realloc((FBulkData *)this,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)this);
  return;
}

// CopyToBulkData<FHairStrandsInterpolationFormat> @ 14dfe82f0

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsInterpolationFormat>
          (TBulkData<unsigned_char> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  void *_Dst;
  uint uVar1;
  
  uVar1 = param_2->ArrayNum << 2;
  FBulkData::Lock((FBulkData *)param_1,2);
  _Dst = FBulkData::Realloc((FBulkData *)param_1,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)param_1);
  return;
}

// CopyToBulkData<FHairStrandsPointToCurveFormat> @ 14dfe8350

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsPointToCurveFormat>
          (FHairBulkContainer *param_1,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  TBulkData<unsigned_char> *this;
  void *_Dst;
  uint uVar1;
  
  this = &param_1->Data;
  uVar1 = param_2->ArrayNum << 2;
  FBulkData::Lock((FBulkData *)this,2);
  _Dst = FBulkData::Realloc((FBulkData *)this,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)this);
  return;
}

// CopyToBulkData<FHairStrandsPointToCurveFormat> @ 14dfe83c0

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsPointToCurveFormat>
          (TBulkData<unsigned_char> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  void *_Dst;
  uint uVar1;
  
  uVar1 = param_2->ArrayNum << 2;
  FBulkData::Lock((FBulkData *)param_1,2);
  _Dst = FBulkData::Realloc((FBulkData *)param_1,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)param_1);
  return;
}

// CopyToBulkData<FHairStrandsPositionFormat> @ 14dfe8420

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsPositionFormat>
          (FHairBulkContainer *param_1,
          TArray<FPackedHairVertex,TSizedDefaultAllocator<32>_> *param_2)

{
  TBulkData<unsigned_char> *this;
  void *_Dst;
  uint uVar1;
  
  this = &param_1->Data;
  uVar1 = param_2->ArrayNum << 3;
  FBulkData::Lock((FBulkData *)this,2);
  _Dst = FBulkData::Realloc((FBulkData *)this,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)this);
  return;
}

// CopyToBulkData<FHairStrandsPositionFormat> @ 14dfe8490

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsPositionFormat>
          (TBulkData<unsigned_char> *param_1,
          TArray<FPackedHairVertex,TSizedDefaultAllocator<32>_> *param_2)

{
  void *_Dst;
  uint uVar1;
  
  uVar1 = param_2->ArrayNum << 3;
  FBulkData::Lock((FBulkData *)param_1,2);
  _Dst = FBulkData::Realloc((FBulkData *)param_1,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)param_1);
  return;
}

// CopyToBulkData<FHairStrandsTranscodedPositionFormat> @ 14dfe84f0

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsTranscodedPositionFormat>
          (FHairBulkContainer *param_1,
          TArray<FTranscodedHairPositions,TSizedDefaultAllocator<32>_> *param_2)

{
  TBulkData<unsigned_char> *this;
  void *_Dst;
  uint uVar1;
  
  this = &param_1->Data;
  uVar1 = param_2->ArrayNum << 4;
  FBulkData::Lock((FBulkData *)this,2);
  _Dst = FBulkData::Realloc((FBulkData *)this,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)this);
  return;
}

// CopyToBulkData<FHairStrandsTranscodedPositionFormat> @ 14dfe8560

void __cdecl
HairStrandsBuilder::CopyToBulkData<FHairStrandsTranscodedPositionFormat>
          (TBulkData<unsigned_char> *param_1,
          TArray<FTranscodedHairPositions,TSizedDefaultAllocator<32>_> *param_2)

{
  void *_Dst;
  uint uVar1;
  
  uVar1 = param_2->ArrayNum << 4;
  FBulkData::Lock((FBulkData *)param_1,2);
  _Dst = FBulkData::Realloc((FBulkData *)param_1,(ulonglong)uVar1,1);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(ulonglong)uVar1);
  FBulkData::Unlock((FBulkData *)param_1);
  return;
}

// DefaultConstructItems<`HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData'::__l2::FCluster,int> @ 14dfe85c0

void __cdecl
DefaultConstructItems<_HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData_::__l2::FCluster,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined8 *)((longlong)puVar1 + 0xc) =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      *(float *)((longlong)puVar1 + 0x14) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      puVar1[3] = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      *(float *)(puVar1 + 4) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      puVar1[5] = 0;
      puVar1[6] = 0;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 8;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<GroomBuilder_Cluster::FClusterGrid::FCluster,int> @ 14dfe8620

void __cdecl
DefaultConstructItems<GroomBuilder_Cluster::FClusterGrid::FCluster,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData'::__l2::FCurve,int> @ 14dfe8650

void __cdecl
DefaultConstructItems<_HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData_::__l2::FCurve,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      lVar1 = lVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`GroomBuilder_Cluster::BuildClusterData'::__l21::FCurveInfo,int> @ 14dfe8690

void __cdecl
DefaultConstructItems<_GroomBuilder_Cluster::BuildClusterData_::__l21::FCurveInfo,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined4 *)(lVar1 + -8) = 0;
      *(undefined8 *)(lVar1 + -4) = 0x7f7fffff;
      *(undefined4 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FHairStrandsVoxelData::FData,int> @ 14dfe86c0

void __cdecl DefaultConstructItems<FHairStrandsVoxelData::FData,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FGroomCacheChunk,int> @ 14dfe86d0

void __cdecl DefaultConstructItems<FGroomCacheChunk,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)((longlong)puVar1 + 0xd) = 0xffffffff;
      *(undefined1 *)((longlong)puVar1 + 0x11) = 0xff;
      puVar1[3] = FIoChunkId::InvalidChunkId.Id._0_8_;
      *(undefined4 *)(puVar1 + 4) = FIoChunkId::InvalidChunkId.Id._8_4_;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 6;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGroomCacheGroupData,int> @ 14dfe8720

void __cdecl DefaultConstructItems<FGroomCacheGroupData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined1 *)(lVar1 + 0x8c) = 0;
      lVar1 = lVar1 + 0xa0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGroomCacheInputData,int> @ 14dfe8780

void __cdecl DefaultConstructItems<FGroomCacheInputData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0x304;
    do {
      FHairStrandsCommonDatas::FHairStrandsCommonDatas((FHairStrandsCommonDatas *)(lVar1 + -0x304));
      *(undefined8 *)(lVar1 + -0x194) = 0x3f800000;
      *(undefined8 *)(lVar1 + -0x18c) = 0;
      *(undefined8 *)(lVar1 + -0x184) = 0;
      *(undefined4 *)(lVar1 + -0x17c) = 0;
      *(undefined1 *)(lVar1 + -0x178) = 0;
      *(undefined2 *)(lVar1 + -0x177) = 0;
      *(undefined1 *)(lVar1 + -0x175) = 0;
      FHairStrandsCommonDatas::FHairStrandsCommonDatas((FHairStrandsCommonDatas *)(lVar1 + -0x174));
      *(undefined8 *)(lVar1 + -4) = 0x3f800000;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
      *(undefined1 *)(lVar1 + 0x18) = 0;
      *(undefined2 *)(lVar1 + 0x19) = 0;
      *(undefined1 *)(lVar1 + 0x1b) = 0;
      lVar1 = lVar1 + 800;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FHairClusterInfo,int> @ 14dfe8840

void __cdecl DefaultConstructItems<FHairClusterInfo,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x24);
    do {
      *(undefined8 *)(puVar1 + -9) = 0;
      *puVar1 = 0x3f800000;
      puVar1[8] = 0x1010101;
      *(undefined8 *)(puVar1 + -7) = 0;
      puVar1[1] = 0x3f800000;
      puVar1[2] = 0x3f800000;
      *(undefined8 *)(puVar1 + -5) = 0;
      puVar1[3] = 0x3f800000;
      puVar1[4] = 0x3f800000;
      puVar1[9] = 0x1010101;
      *(undefined8 *)(puVar1 + -3) = 0;
      puVar1[5] = 0x3f800000;
      puVar1[6] = 0x3f800000;
      puVar1[-1] = 0;
      puVar1[7] = 0x3f800000;
      puVar1 = puVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FHairDescriptionGroup,int> @ 14dfe88c0

void __cdecl DefaultConstructItems<FHairDescriptionGroup,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      FHairStrandsCommonDatas::FHairStrandsCommonDatas((FHairStrandsCommonDatas *)(puVar1 + 6));
      FHairStrandsCommonDatas::FHairStrandsCommonDatas((FHairStrandsCommonDatas *)(puVar1 + 0x34));
      puVar1 = puVar1 + 99;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FHairStrandsSceneProxy::FHairGroupMaterialProxy,int> @ 14dfe8940

void __cdecl
DefaultConstructItems<FHairStrandsSceneProxy::FHairGroupMaterialProxy,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FHairLODInfo,int> @ 14dfe8980

void __cdecl DefaultConstructItems<FHairLODInfo,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0x3f800000;
      puVar1[1] = 0x3f800000;
      *(undefined1 *)(puVar1 + 2) = 1;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FHairGroupInstance::FCards::FLOD,int> @ 14dfe89c0

void __cdecl DefaultConstructItems<FHairGroupInstance::FCards::FLOD,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1 = puVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FHairGroupInstance::FMeshes::FLOD,int> @ 14dfe8a20

void __cdecl DefaultConstructItems<FHairGroupInstance::FMeshes::FLOD,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<HairStrandsBuilder::FPackedCluster,int> @ 14dfe8a60

void __cdecl
DefaultConstructItems<HairStrandsBuilder::FPackedCluster,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xd;
    do {
      *(undefined8 *)(lVar1 + -0xd) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      *(float *)(lVar1 + -5) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      *(ushort *)(lVar1 + 3) = 0;
      *(undefined4 *)(lVar1 + -1) = 0;
      FGenericPlatformMath::StoreHalf((ushort *)(lVar1 + 3),0.0);
      *(ushort *)(lVar1 + 5) = 0;
      FGenericPlatformMath::StoreHalf((ushort *)(lVar1 + 5),0.0);
      *(ushort *)(lVar1 + 7) = 0;
      FGenericPlatformMath::StoreHalf((ushort *)(lVar1 + 7),0.0);
      *(ushort *)(lVar1 + 9) = 0;
      FGenericPlatformMath::StoreHalf((ushort *)(lVar1 + 9),0.0);
      *(ushort *)(lVar1 + 0xb) = 0;
      FGenericPlatformMath::StoreHalf((ushort *)(lVar1 + 0xb),0.0);
      *(ushort *)(lVar1 + 0xd) = 0;
      FGenericPlatformMath::StoreHalf((ushort *)(lVar1 + 0xd),0.0);
      *(ushort *)(lVar1 + 0xf) = 0;
      FGenericPlatformMath::StoreHalf((ushort *)(lVar1 + 0xf),0.0);
      *(ushort *)(lVar1 + 0x11) = 0;
      FGenericPlatformMath::StoreHalf((ushort *)(lVar1 + 0x11),0.0);
      *(undefined8 *)(lVar1 + 0x13) = 0;
      *(undefined8 *)(lVar1 + 0x1b) = 0;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPackedHairCurve,int> @ 14dfe8b40

void __cdecl DefaultConstructItems<FPackedHairCurve,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FPackedHairVertex,int> @ 14dfe8b50

void __cdecl DefaultConstructItems<FPackedHairVertex,int>(void *param_1,int param_2)

{
  undefined2 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined2 *)((longlong)param_1 + 4);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FTranscodedHairPositions,int> @ 14dfe8b80

void __cdecl DefaultConstructItems<FTranscodedHairPositions,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<GroomBuilder_Voxelization::FHairGrid::FVoxel,int> @ 14dfe8b90

void __cdecl
DefaultConstructItems<GroomBuilder_Voxelization::FHairGrid::FVoxel,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<GroomBuilder_Voxelization::FVoxelCoverage,int> @ 14dfe8bc0

void __cdecl
DefaultConstructItems<GroomBuilder_Voxelization::FVoxelCoverage,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FHairClusterInfo::Packed,int> @ 14dfe8bf0

void __cdecl DefaultConstructItems<FHairClusterInfo::Packed,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<`HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData'::__l2::FCluster,int> @ 14dfe8c20

void __cdecl
DestructItems<_HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData_::__l2::FCluster,int>
          (FCluster *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<_void___cdecl_HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData(FHairStrandsDatas_const_&,FRenderCurveResourceData_&)_::_2_::FCurve,TSizedDefaultAllocator<32>_>
  *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Curves;
    do {
      DestructItems<_HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData_::__l2::FCurve,int>
                ((FCurve *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GroomBuilder_Cluster::FClusterGrid::FCluster,int> @ 14dfe8c70

void __cdecl
DestructItems<GroomBuilder_Cluster::FClusterGrid::FCluster,int>(FCluster *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<GroomBuilder_Cluster::FClusterGrid::FCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ClusterCurves;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData'::__l2::FCurve,int> @ 14dfe8cb0

void __cdecl
DestructItems<_HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData_::__l2::FCurve,int>
          (FCurve *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Radius;
    do {
      pFVar1 = (((TArray<bool,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FCurve *)(pTVar2 + -2))->Points).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGroomCacheChunk,int> @ 14dfe8d20

void __cdecl DestructItems<FGroomCacheChunk,int>(FGroomCacheChunk *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FBulkData::~FBulkData((FBulkData *)&param_1->BulkData);
    param_1 = (FGroomCacheChunk *)(&param_1->BulkData + 1);
  }
  return;
}

// DestructItems<FGroomCacheGroupData,int> @ 14dfe8d60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl DestructItems<FGroomCacheGroupData,int>(FGroomCacheGroupData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->StrandData).CurvesLength.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    FGroomCacheVertexData::~FGroomCacheVertexData(&param_1->VertexData);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FGroomCacheInputData,int> @ 14dfe8db0

void __cdecl DestructItems<FGroomCacheInputData,int>(FGroomCacheInputData *param_1,int param_2)

{
  FHairStrandsPoints *this;
  
  if (param_2 != 0) {
    this = (FHairStrandsPoints *)&param_1->Guides;
    do {
      FHairStrandsCurves::~FHairStrandsCurves((FHairStrandsCurves *)(this + 1));
      FHairStrandsPoints::~FHairStrandsPoints(this);
      FHairStrandsCurves::~FHairStrandsCurves((FHairStrandsCurves *)&this[-3].PointsAO);
      FHairStrandsPoints::~FHairStrandsPoints((FHairStrandsPoints *)&this[-4].PointsAO);
      this = (FHairStrandsPoints *)&this[6].PointsAO;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FHairDescriptionGroup,int> @ 14dfe8e10

void __cdecl DestructItems<FHairDescriptionGroup,int>(FHairDescriptionGroup *param_1,int param_2)

{
  void *pvVar1;
  FHairStrandsCurves *this;
  
  if (param_2 != 0) {
    this = (FHairStrandsCurves *)&(param_1->Strands).field_0x78;
    do {
      FHairStrandsCurves::~FHairStrandsCurves
                ((FHairStrandsCurves *)&this[1].GroomIDToIndex.field_0x20);
      FHairStrandsPoints::~FHairStrandsPoints((FHairStrandsPoints *)&this[1].CurvesCount.ArrayNum);
      FHairStrandsCurves::~FHairStrandsCurves(this);
      FHairStrandsPoints::~FHairStrandsPoints
                ((FHairStrandsPoints *)&this[-1].GroomIDToIndex.field_0x18);
      pvVar1 = *(void **)&this[-1].GroomIDToIndex.field_0x8;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      this = (FHairStrandsCurves *)&this[3].StrandIDs.ArrayNum;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FHairStrandsSceneProxy::FHairGroupMaterialProxy,int> @ 14dfe8e90

void __cdecl
DestructItems<FHairStrandsSceneProxy::FHairGroupMaterialProxy,int>
          (FHairGroupMaterialProxy *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FMaterialRenderProxy_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = &param_1->Cards;
    pFVar1 = pTVar2[1].AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FHairGroupMaterialProxy *)(pTVar2 + 2);
  }
  return;
}

// DestructItems<FHairGroupInstance::FCards::FLOD,int> @ 14dfe8ee0

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

void __cdecl DestructItems<FHairGroupInstance::FCards::FLOD,int>(FLOD *param_1,int param_2)

{
  TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->UniformBuffer;
    do {
      if (*pTVar1 != (TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)*pTVar1);
      }
      pTVar1 = pTVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FHairGroupInstance::FMeshes::FLOD,int> @ 14dfe8f20

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

void __cdecl DestructItems<FHairGroupInstance::FMeshes::FLOD,int>(FLOD *param_1,int param_2)

{
  TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->UniformBuffer;
    do {
      if (*pTVar1 != (TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)*pTVar1);
      }
      pTVar1 = pTVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<HairStrandsBuilder::FPackedCluster,int> @ 14dfe8f60

void __cdecl
DestructItems<HairStrandsBuilder::FPackedCluster,int>(FPackedCluster *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FData *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Data;
    do {
      pFVar1 = (pFVar2->PackedPoints).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<GroomBuilder_Voxelization::FHairGrid::FVoxel,int> @ 14dfe8fa0

void __cdecl
DestructItems<GroomBuilder_Voxelization::FHairGrid::FVoxel,int>(FVoxel *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->VoxelCurves).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FHairGroupInstance>,int> @ 14dfe8fe0

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

void __cdecl
DestructItems<TRefCountPtr<FHairGroupInstance>,int>
          (TRefCountPtr<FHairGroupInstance> *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FHairGroupInstance *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar3 = param_1->Reference;
    if (pFVar3 != (FHairGroupInstance *)0x0) {
      puVar1 = &pFVar3->field_0x8;
      LOCK();
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`FGroomBindingCompilingManager::FinishCompilation'::__l29::FCompilableGroomBindingAsset,int> @ 14dfe9040

void __cdecl
DestructItems<_FGroomBindingCompilingManager::FinishCompilation_::__l29::FCompilableGroomBindingAsset,int>
          (FCompilableGroomBindingAsset *param_1,int param_2)

{
  TStrongObjectPtr<UGroomBindingAsset,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->GroomBindingAsset;
    do {
      if (pTVar1->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
        pTVar1->Object = (UObject *)0x0;
      }
      ((FCompilableGroomBindingAsset *)(pTVar1 + -1))->_padding_ =
           (longlong)&___7ICompilable_AsyncCompilationHelpers__6B_;
      pTVar1 = pTVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>_> @ 14dfea320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRenderCommandPipe::
Enqueue<TRenderCommandTag<_UGroomComponent::TickAtThisTime_::__l5::TSTR_FGroomCacheUpdate3669>_>
          (FRenderCommandPipe *this,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [48];
  undefined1 local_98 [48];
  byte local_68;
  undefined1 local_58 [48];
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar3 = UE::RenderCommandPipe::IsReplaying(this);
  if (bVar3) {
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>
             ::Get();
    local_98._40_8_ = *(undefined8 *)&param_1->field_0x28;
    local_98._0_8_ = *(undefined8 *)param_1;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_98._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_98._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_98._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_98._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    local_68 = 1;
    ExecuteCommand(this,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_98,pFVar5);
    uVar8 = (ulonglong)local_68;
    if ((2 < uVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      if (local_98._0_8_ != 0) {
        plVar6 = (longlong *)(local_98 + 0x10);
        if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)local_98._40_8_;
        }
        (**(code **)(*plVar6 + 0x10))();
        return true;
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_98);
    }
    return true;
  }
  plVar6 = &this->_padding_;
  if ((plVar6 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  LOCK();
  bVar3 = (char)*plVar6 == '\0';
  if (bVar3) {
    *(undefined1 *)plVar6 = 1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow((FMutex *)plVar6);
  }
  if ((this->RecordTask).Pimpl.Reference == (FTaskBase *)0x0) {
    bVar3 = false;
  }
  else {
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>
             ::Get();
    local_58._40_8_ = *(undefined8 *)&param_1->field_0x28;
    local_58._0_8_ = *(undefined8 *)param_1;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_58._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_58._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_58._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_58._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    local_28 = 1;
    EnqueueAndLaunch(this,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                           *)local_58,pFVar5);
    uVar8 = (ulonglong)local_28;
    if ((2 < uVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      if (local_58._0_8_ != 0) {
        plVar7 = (longlong *)(local_58 + 0x10);
        if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_58._40_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
        bVar3 = true;
        goto LAB_14dfea54c;
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_58);
    }
    bVar3 = true;
  }
LAB_14dfea54c:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar6;
    *(char *)plVar6 = (char)*plVar6 + -1;
    UNLOCK();
    if ((lVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
    }
  }
  return bVar3;
}

// Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>_>'::__l2::<lambda_1>_> @ 14dfea5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UGroomComponent::TickAtThisTime_::__l5::TSTR_FGroomCacheUpdate3669>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_UGroomComponent::TickAtThisTime_::__l5::TSTR_FGroomCacheUpdate3669>_>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FRenderCommandTag *pFVar11;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar12;
  undefined8 uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar14;
  <lambda_1> *p<Var15;
  FTaskBase *this_02;
  FName FVar16;
  FNameEntryId FVar17;
  FNameEntryId FVar18;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar11 = (FRenderCommandTag *)
            TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>::
            Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar11->SpecId,pFVar11->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar11->SpecId);
  }
  bVar9 = IsInRenderingThread();
  if ((!bVar9) && ((GIsThreadedRendering != false || (bVar9 = IsInGameThread(), !bVar9)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar9 = IsInGameThread(), bVar9 &&
        (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<2708370973442179152>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                            ,0x50,
                            "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                           ), bVar9)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::`5'::TSTR_FGroomCacheUpdate3669>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar11;
      this_02[1]._padding_ = *(longlong *)param_1;
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      this_02[1].StateChangeEvent = (TEventCount<unsigned_int>)(int)uVar13;
      this_02[1].ExtendedPriority = (char)((ulonglong)uVar13 >> 0x20);
      this_02[1].TaskTriggered = (atomic<bool>)(char)((ulonglong)uVar13 >> 0x28);
      this_02[1]._padding_ = (short)((ulonglong)uVar13 >> 0x30);
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      this_02[1]._padding_ = *(longlong *)(param_1 + 0x10);
      this_02[1].RefCount = (atomic<unsigned_int>)(int)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)(int)((ulonglong)uVar13 >> 0x20);
      this_02[1].Pipe = *(FPipe **)(param_1 + 0x20);
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)param_1 = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                ,0x21d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::`5'::TSTR_FGroomCacheUpdate3669>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar14 = local_40 + 2;
      *ppcVar14 = *(code **)param_1;
      local_40[7] = *(code **)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      pcVar5 = *(code **)(param_1 + 0x18);
      local_40[4] = *(code **)(param_1 + 0x10);
      local_40[5] = pcVar5;
      local_40[6] = *(code **)(param_1 + 0x20);
      if (*ppcVar14 != (code *)0x0) {
        *(undefined8 *)param_1 = 0;
      }
      if (ppcVar14 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar11
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar14 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar14 = local_40;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
    goto LAB_14dfeaa41;
  }
  pTVar4 = (pFVar11->StatId).StatIdPtr;
  FVar18.Value = 0;
  bVar9 = false;
  bVar8 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar16 = *(FName *)&pTVar4->Name;
  FVar17 = FVar16.ComparisonIndex.Value;
  uVar10 = FVar16.Number;
  if ((FVar17.Value == 0) && (uVar10 == 0)) {
LAB_14dfea92f:
    bVar6 = false;
    FVar16 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar17.Value;
        local_a0.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dfea92f;
    local_a0.ComparisonIndex.Value = FVar17.Value;
    local_a0.Number = uVar10;
    local_98 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar6 = true;
    FVar18.Value = local_98.ComparisonIndex.Value;
  }
  pFVar12 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar5 = *(code **)param_1;
  p<Var15 = param_1 + 0x10;
  if (*(<lambda_1> **)(param_1 + 0x28) != (<lambda_1> *)0x0) {
    p<Var15 = *(<lambda_1> **)(param_1 + 0x28);
  }
  uVar13 = (**(code **)(*(longlong *)p<Var15 + 8))();
  (*pcVar5)(uVar13,pFVar12);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_14dfeaa41:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>,TUniqueFunction<void___cdecl(FRHICommandList_&)>_> @ 14dfeaa90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRenderCommandList::
Enqueue<TRenderCommandTag<_UGroomComponent::TickAtThisTime_::__l5::TSTR_FGroomCacheUpdate3669>,TUniqueFunction<void___cdecl(FRHICommandList_&)>_>
          (FRenderCommandList *this,FRenderCommandPipe *param_1,
          TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  FCommandList *this_00;
  FRenderCommandTag *pFVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [48];
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (this->bInitialized == 0) {
    Init(this);
  }
  if (param_1 != (FRenderCommandPipe *)0x0) {
    uVar1 = param_1->Index;
    if (uVar1 != 0xffffffff) {
      iVar2 = (this->CommandLists).ArrayNum;
      uVar7 = 0;
      if ((int)uVar1 < iVar2) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_78 = (longlong)(int)uVar1;
        local_70 = (longlong)iVar2;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      this_00 = (this->CommandLists).AllocatorInstance.Data + (int)uVar1;
      goto LAB_14dfeab2b;
    }
  }
  this_00 = GetRenderThread(this);
LAB_14dfeab2b:
  local_68._0_8_ = *(undefined8 *)param_2;
  local_68._40_8_ = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_68._32_8_ = *(undefined8 *)&param_2->field_0x20;
  local_68._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_68._24_8_ = *(undefined8 *)&param_2->field_0x18;
  if (local_68._0_8_ != 0) {
    *(undefined8 *)param_2 = 0;
  }
  local_38 = 1;
  pFVar8 = (FRenderCommandTag *)
           TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>::
           Get();
  bVar4 = UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_68,pFVar8);
  uVar10 = (ulonglong)local_38;
  if (2 < uVar10) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10] ==
      UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
      Destruct) {
    if (local_68._0_8_ != 0) {
      plVar9 = (longlong *)(local_68 + 0x10);
      if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_68._40_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(local_68);
  }
  return bVar4;
}

// Enqueue<TRenderCommandTag<`UGroomComponent::SetForcedLOD'::__l28::TSTR_FHairComponentSendLODIndex1879>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14dfeac20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UGroomComponent::SetForcedLOD_::__l28::TSTR_FHairComponentSendLODIndex1879>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UGroomComponent::SetForcedLOD'::__l28::TSTR_FHairComponentSendLODIndex1879>
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
      if (bVar8) goto LAB_14dfead71;
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
    goto LAB_14dfeaf65;
  }
LAB_14dfead71:
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
LAB_14dfeae4f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dfeae4f;
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
LAB_14dfeaf65:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UGroomComponent::TickComponent'::__l58::TSTR_FHairStrandsTick_TransformUpdate3839>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14dfeafa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UGroomComponent::TickComponent_::__l58::TSTR_FHairStrandsTick_TransformUpdate3839>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UGroomComponent::TickComponent'::__l58::TSTR_FHairStrandsTick_TransformUpdate3839>
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
      if (bVar8) goto LAB_14dfeb0f1;
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
    goto LAB_14dfeb2e5;
  }
LAB_14dfeb0f1:
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
LAB_14dfeb1cf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dfeb1cf;
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
LAB_14dfeb2e5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UGroomComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FHairStrandsTick_TransformUpdate3885>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14dfeb320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UGroomComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FHairStrandsTick_TransformUpdate3885>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UGroomComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FHairStrandsTick_TransformUpdate3885>
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
      if (bVar8) goto LAB_14dfeb471;
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
    goto LAB_14dfeb665;
  }
LAB_14dfeb471:
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
LAB_14dfeb54f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dfeb54f;
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
LAB_14dfeb665:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UGroomComponent::UpdateSimulatedGroups'::__l5::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14dfeb6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UGroomComponent::UpdateSimulatedGroups_::__l5::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UGroomComponent::UpdateSimulatedGroups'::__l5::TSTR_FHairStrandsTick_UEnableSimulatedGroups2450>
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
      if (bVar8) goto LAB_14dfeb7f1;
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
    goto LAB_14dfeb9e5;
  }
LAB_14dfeb7f1:
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
LAB_14dfeb8cf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dfeb8cf;
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
LAB_14dfeb9e5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetCurvePositions<16> @ 14dfebad0

void __cdecl
HairInterpolationBuilder::GetCurvePositions<16>
          (FHairStrandsDatas *param_1,uint param_2,
          TStaticArray<UE::Math::TVector<float>,16,4294967295> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  float *pfVar15;
  uint uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar14 = 0;
  if ((int)param_2 < (int)param_1->_padding_) {
    uVar14 = ~param_2 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar14 = 0;
  if ((int)param_2 < (int)param_1->_padding_) {
    uVar14 = ~param_2 >> 0x1f;
  }
  fVar21 = (float)((double)*(ushort *)(param_1->_padding_ + (longlong)(int)param_2 * 2) -
                  __real_3ff0000000000000);
  if (uVar14 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar9 = __real_3d888889;
  fVar8 = __real_3f800000;
  pfVar15 = &param_3->Elements[0].field0_0x0._s_0.Z;
  uVar14 = 0;
  iVar5 = *(int *)(param_1->_padding_ + (longlong)(int)param_2 * 4);
  do {
    fVar19 = (float)uVar14 * fVar21 * fVar9;
    if (uVar14 == 0) {
      fVar17 = 0.0;
    }
    else if (uVar14 == 0xf) {
      fVar17 = fVar21 - fVar8;
    }
    else {
      iVar13 = (int)fVar19;
      fVar17 = fVar19;
      if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar19)) {
        auVar18._4_4_ = fVar19;
        auVar18._0_4_ = fVar19;
        auVar18._8_8_ = 0;
        uVar11 = movmskps(uVar14,auVar18);
        fVar17 = (float)(int)(iVar13 - (uVar11 & 1));
      }
    }
    uVar16 = (int)(longlong)fVar17 + iVar5;
    uVar11 = 0;
    if ((int)uVar16 < (int)param_1->_padding_) {
      uVar11 = ~uVar16 >> 0x1f;
    }
    fVar19 = fVar19 - (float)((longlong)fVar17 & 0xffffffff);
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar12 = (longlong)(int)uVar16;
    fVar20 = fVar8 - fVar19;
    uVar16 = uVar16 + 1;
    lVar6 = param_1->_padding_;
    fVar17 = *(float *)(lVar6 + lVar12 * 0xc);
    fVar1 = *(float *)(lVar6 + 4 + lVar12 * 0xc);
    fVar2 = *(float *)(lVar6 + 8 + lVar12 * 0xc);
    uVar11 = 0;
    if ((int)uVar16 < (int)param_1->_padding_) {
      uVar11 = ~uVar16 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar12 = (longlong)(int)uVar16;
    uVar14 = uVar14 + 1;
    lVar6 = param_1->_padding_;
    fVar3 = *(float *)(lVar6 + 4 + lVar12 * 0xc);
    fVar4 = *(float *)(lVar6 + 8 + lVar12 * 0xc);
    ((TVector<float>_u_0_s_0 *)(pfVar15 + -2))->X =
         fVar19 * *(float *)(lVar6 + lVar12 * 0xc) + fVar20 * fVar17;
    pfVar15[-1] = fVar20 * fVar1 + fVar19 * fVar3;
    *pfVar15 = fVar20 * fVar2 + fVar19 * fVar4;
    pfVar15 = pfVar15 + 3;
  } while (uVar14 < 0x10);
  return;
}

// GetDefault<UGroomPluginSettings> @ 14dfebdc0

UGroomPluginSettings * __cdecl GetDefault<UGroomPluginSettings>(void)

{
  UClass *this;
  
  this = Z_Construct_UClass_UGroomPluginSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UGroomPluginSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UGroomPluginSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// InternalAddDedicatedVideoMemoryBytes<FHairCardsDeformedResource_*> @ 14dfec070

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
InternalAddDedicatedVideoMemoryBytes<FHairCardsDeformedResource_*>
          (FResourceSizeEx *param_1,FHairCardsDeformedResource *param_2)

{
  FRDGPooledBuffer *pFVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != (FHairCardsDeformedResource *)0x0) {
    pFVar1 = param_2->DeformedPositionBuffer[0].Buffer.Reference;
    iVar2 = 0;
    if (pFVar1 == (FRDGPooledBuffer *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
    }
    pFVar1 = param_2->DeformedPositionBuffer[1].Buffer.Reference;
    if (pFVar1 != (FRDGPooledBuffer *)0x0) {
      iVar2 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
    }
    FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)(uint)(iVar3 + iVar2));
    return;
  }
  return;
}

// InternalAddDedicatedVideoMemoryBytes<FHairMeshesDeformedResource_*> @ 14dfec0c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
InternalAddDedicatedVideoMemoryBytes<FHairMeshesDeformedResource_*>
          (FResourceSizeEx *param_1,FHairMeshesDeformedResource *param_2)

{
  FRDGPooledBuffer *pFVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != (FHairMeshesDeformedResource *)0x0) {
    pFVar1 = param_2->DeformedPositionBuffer[0].Buffer.Reference;
    iVar2 = 0;
    if (pFVar1 == (FRDGPooledBuffer *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
    }
    pFVar1 = param_2->DeformedPositionBuffer[1].Buffer.Reference;
    if (pFVar1 != (FRDGPooledBuffer *)0x0) {
      iVar2 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
    }
    FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)(uint)(iVar3 + iVar2));
    return;
  }
  return;
}

// InternalAddDedicatedVideoMemoryBytes<FHairStrandsDeformedResource_*> @ 14dfec110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
InternalAddDedicatedVideoMemoryBytes<FHairStrandsDeformedResource_*>
          (FResourceSizeEx *param_1,FHairStrandsDeformedResource *param_2)

{
  uint uVar1;
  
  if (param_2 != (FHairStrandsDeformedResource *)0x0) {
    uVar1 = FHairStrandsDeformedResource::GetResourcesSize(param_2);
    FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)uVar1);
  }
  return;
}

// InternalAddDedicatedVideoMemoryBytes<FHairStrandsDeformedRootResource_*> @ 14dfec140

void __cdecl
InternalAddDedicatedVideoMemoryBytes<FHairStrandsDeformedRootResource_*>
          (FResourceSizeEx *param_1,FHairStrandsDeformedRootResource *param_2)

{
  uint uVar1;
  
  if (param_2 != (FHairStrandsDeformedRootResource *)0x0) {
    uVar1 = FHairStrandsDeformedRootResource::GetResourcesSize(param_2);
    FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)uVar1);
  }
  return;
}

// InternalConstructor<UGroomBlueprintLibrary> @ 14dfec170

void __cdecl InternalConstructor<UGroomBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGroomBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UGroomCache> @ 14dfec1a0

void __cdecl InternalConstructor<UGroomCache>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x18 = 0;
    *(undefined ***)this = &UGroomCache::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UGroomCache::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this[1].field_0x8 = &UGroomCache::_vftable__for__IChaosCacheData__;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    this[3].field_0x4 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x7f7fffff;
    *(undefined4 *)&this[2].field_0x20 = 0x800000;
    *(undefined4 *)&this[2].field_0x24 = 0x7fffffff;
    *(undefined4 *)(this + 3) = 0x80000000;
  }
  return;
}

// InternalConstructor<UGroomComponent> @ 14dfec230

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl InternalConstructor<UGroomComponent>(FObjectInitializer *param_1)

{
  if ((UGroomComponent *)param_1->Obj != (UGroomComponent *)0x0) {
    UGroomComponent::UGroomComponent((UGroomComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalResourceRelease<FHairCardsDeformedResource> @ 14dfec250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
InternalResourceRelease<FHairCardsDeformedResource>(FHairCardsDeformedResource **param_1)

{
  FHairCardsDeformedResource *pFVar1;
  
  if (*param_1 != (FHairCardsDeformedResource *)0x0) {
    (**(code **)((*param_1)->_padding_ + 0x20))();
    pFVar1 = *param_1;
    if (pFVar1 != (FHairCardsDeformedResource *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    *param_1 = (FHairCardsDeformedResource *)0x0;
  }
  return;
}

// InternalResourceRelease<FHairMeshesDeformedResource> @ 14dfec290

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
InternalResourceRelease<FHairMeshesDeformedResource>(FHairMeshesDeformedResource **param_1)

{
  FHairMeshesDeformedResource *pFVar1;
  
  if (*param_1 != (FHairMeshesDeformedResource *)0x0) {
    (**(code **)((*param_1)->_padding_ + 0x20))();
    pFVar1 = *param_1;
    if (pFVar1 != (FHairMeshesDeformedResource *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    *param_1 = (FHairMeshesDeformedResource *)0x0;
  }
  return;
}

// InternalResourceRelease<FHairStrandsCullingResource> @ 14dfec2d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
InternalResourceRelease<FHairStrandsCullingResource>(FHairStrandsCullingResource **param_1)

{
  FHairStrandsCullingResource *pFVar1;
  
  if (*param_1 != (FHairStrandsCullingResource *)0x0) {
    (**(code **)((*param_1)->_padding_ + 0x20))();
    pFVar1 = *param_1;
    if (pFVar1 != (FHairStrandsCullingResource *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    *param_1 = (FHairStrandsCullingResource *)0x0;
  }
  return;
}

// InternalResourceRelease<FHairStrandsDeformedResource> @ 14dfec310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
InternalResourceRelease<FHairStrandsDeformedResource>(FHairStrandsDeformedResource **param_1)

{
  FHairStrandsDeformedResource *pFVar1;
  
  if (*param_1 != (FHairStrandsDeformedResource *)0x0) {
    (**(code **)((*param_1)->_padding_ + 0x20))();
    pFVar1 = *param_1;
    if (pFVar1 != (FHairStrandsDeformedResource *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    *param_1 = (FHairStrandsDeformedResource *)0x0;
  }
  return;
}

// InternalResourceRelease<FHairStrandsDeformedRootResource> @ 14dfec350

void __cdecl
InternalResourceRelease<FHairStrandsDeformedRootResource>
          (FHairStrandsDeformedRootResource **param_1)

{
  FHairStrandsDeformedRootResource *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if (*param_1 != (FHairStrandsDeformedRootResource *)0x0) {
    FHairStrandsDeformedRootResource::ReleaseResource(*param_1);
    pFVar1 = *param_1;
    if (pFVar1 != (FHairStrandsDeformedRootResource *)0x0) {
      pFVar2 = (pFVar1->LODs).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      operator_delete(pFVar1,0x18);
    }
    *param_1 = (FHairStrandsDeformedRootResource *)0x0;
  }
  return;
}

// InternalResourceRelease<FHairStrandsRaytracingResource> @ 14dfec3b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
InternalResourceRelease<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource **param_1)

{
  FHairStrandsRaytracingResource *pFVar1;
  
  if (*param_1 != (FHairStrandsRaytracingResource *)0x0) {
    (**(code **)((*param_1)->_padding_ + 0x20))();
    pFVar1 = *param_1;
    if (pFVar1 != (FHairStrandsRaytracingResource *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    *param_1 = (FHairStrandsRaytracingResource *)0x0;
  }
  return;
}

// InternalResourceRelease<FHairCardsVertexFactory> @ 14dfec3f0

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

void __cdecl InternalResourceRelease<FHairCardsVertexFactory>(FHairCardsVertexFactory **param_1)

{
  FHairCardsVertexFactory *pFVar1;
  
  if (*param_1 != (FHairCardsVertexFactory *)0x0) {
    (**(code **)((*param_1)->_padding_ + 0x20))();
    pFVar1 = *param_1;
    if (pFVar1 != (FHairCardsVertexFactory *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    *param_1 = (FHairCardsVertexFactory *)0x0;
  }
  return;
}

// InternalResourceRelease<FHairStrandsVertexFactory> @ 14dfec430

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

void __cdecl InternalResourceRelease<FHairStrandsVertexFactory>(FHairStrandsVertexFactory **param_1)

{
  FHairStrandsVertexFactory *pFVar1;
  
  if (*param_1 != (FHairStrandsVertexFactory *)0x0) {
    (**(code **)((*param_1)->_padding_ + 0x20))();
    pFVar1 = *param_1;
    if (pFVar1 != (FHairStrandsVertexFactory *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    *param_1 = (FHairStrandsVertexFactory *)0x0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UGroomBlueprintLibrary> @ 14dfec470

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGroomBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGroomBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGroomBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGroomCache> @ 14dfec520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGroomCache>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGroomCache::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &UGroomCache::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UGroomCache::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&pUVar1[1].field_0x8 = &UGroomCache::_vftable__for__IChaosCacheData__;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x7f7fffff;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0x800000;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0x7fffffff;
    *(undefined4 *)(pUVar1 + 3) = 0x80000000;
    pUVar1[3].field_0x4 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGroomComponent> @ 14dfec630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGroomComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshComponent *this;
  UMeshComponent *pUVar3;
  undefined8 local_res10;
  
  pUVar3 = (UMeshComponent *)0x0;
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGroomComponent::GetPrivateStaticClass();
  this = (UMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UGroomComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UGroomComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UGroomComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UGroomComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ = (longlong)&UGroomComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UGroomComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = (longlong)&UGroomComponent::_vftable__for__ILODSyncInterface__;
    this[1]._padding_ =
         (longlong)&UGroomComponent::_vftable__for__INiagaraPhysicsAssetDICollectorInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FHairSimulationSettings::FHairSimulationSettings((FHairSimulationSettings *)&this[1]._padding_);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 2) = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0xbf800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xbf800000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    local_res10 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_res10);
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// IsObjectPtrEqual<UGroomAsset,void_*,0> @ 14dfec8b0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UGroomAsset,void_*,0>
          (TObjectPtr<UGroomAsset> *param_1,void **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UGroomAsset *)0x0) {
    return *param_2 == (UGroomAsset *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UGroomCache,UGroomCache_*,0> @ 14dfec8d0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UGroomCache,UGroomCache_*,0>
          (TObjectPtr<UGroomCache> *param_1,UGroomCache **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UGroomCache *)0x0) {
    return *param_2 == (UGroomCache *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// ReportSize<unsigned_int> @ 14dfece10

void __cdecl
ReportSize<unsigned_int>(wchar_t *param_1,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// ReportSize<FPackedHairCurve> @ 14dfece20

void __cdecl
ReportSize<FPackedHairCurve>
          (wchar_t *param_1,TArray<FPackedHairCurve,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// ReportSize<FPackedHairVertex> @ 14dfece30

void __cdecl
ReportSize<FPackedHairVertex>
          (wchar_t *param_1,TArray<FPackedHairVertex,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// ReportSize<FTranscodedHairPositions> @ 14dfece40

void __cdecl
ReportSize<FTranscodedHairPositions>
          (wchar_t *param_1,TArray<FTranscodedHairPositions,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// ReportSize<FHairClusterInfo::Packed> @ 14dfece50

void __cdecl
ReportSize<FHairClusterInfo::Packed>
          (wchar_t *param_1,TArray<FHairClusterInfo::Packed,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// StaticEnum<enum_EGroomBasisType> @ 14dfece60

UEnum * __cdecl StaticEnum<enum_EGroomBasisType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGroomBasisType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UEnum_EGroomBasisType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomBasisType,(UObject *)pUVar1,
                       L"EGroomBasisType");
  }
  return Z_Registration_Info_UEnum_EGroomBasisType.OuterSingleton;
}

// StaticEnum<enum_EGroomCacheAttributes> @ 14dfecea0

UEnum * __cdecl StaticEnum<enum_EGroomCacheAttributes>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGroomCacheAttributes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UEnum_EGroomCacheAttributes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes,(UObject *)pUVar1,
                       L"EGroomCacheAttributes");
  }
  return Z_Registration_Info_UEnum_EGroomCacheAttributes.OuterSingleton;
}

// StaticEnum<enum_EGroomCacheType> @ 14dfecee0

UEnum * __cdecl StaticEnum<enum_EGroomCacheType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGroomCacheType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UEnum_EGroomCacheType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomCacheType,(UObject *)pUVar1,
                       L"EGroomCacheType");
  }
  return Z_Registration_Info_UEnum_EGroomCacheType.OuterSingleton;
}

// StaticEnum<enum_EGroomCurveType> @ 14dfecf20

UEnum * __cdecl StaticEnum<enum_EGroomCurveType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGroomCurveType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UEnum_EGroomCurveType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomCurveType,(UObject *)pUVar1,
                       L"EGroomCurveType");
  }
  return Z_Registration_Info_UEnum_EGroomCurveType.OuterSingleton;
}

// SwapValue<int> @ 14dfecf60

void __cdecl HairInterpolationBuilder::SwapValue<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// SwapValue<float> @ 14dfecf80

void __cdecl HairInterpolationBuilder::SwapValue<float>(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = fVar1;
  return;
}

// UnsetShaderUAVs<FRHIComputeCommandList,FHairStrandCopyPositionCS> @ 14dfecfa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderUAVs<FRHIComputeCommandList,FHairStrandCopyPositionCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable> *param_2,
          FRHIComputeShader *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  FHairStrandCopyPositionCS *pFVar4;
  longlong lVar5;
  void *_Src;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  IRHIComputeContext *pIVar9;
  undefined8 *puVar10;
  void *_Dst;
  undefined1 *puVar11;
  byte *pbVar12;
  undefined1 local_res20 [8];
  undefined1 local_78 [16];
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  if (GRHIGlobals.NeedsShaderUnbinds) {
    if (0 < *(int *)&param_1->field_0xd8) {
      local_res20[0] = 0;
      bVar7 = `FRHICommandListBase::GetScratchShaderUnbinds'::__l3::<lambda_1>::operator()
                        (local_res20);
      if (!bVar7) {
        *(undefined4 *)&param_1->field_0xd8 = 0;
        if (*(int *)&param_1->field_0xdc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,0,(ForAnyElementType *)&param_1->field_0xd0,0,(int *)&param_1->field_0xdc);
        }
      }
    }
    pFVar4 = param_2->ShaderContent;
    puVar1 = &param_1->field_0xd0;
    if ((*(short *)&pFVar4->field_0x54 != -1) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                           ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar11 = *(undefined1 **)&pFVar4->field_0x10;
    if (((ulonglong)puVar11 & 1) != 0) {
      puVar11 = &pFVar4->field_0x10 + ((longlong)puVar11 >> 0x18);
    }
    iVar3 = *(int *)&pFVar4->field_0x18;
    pbVar12 = puVar11 + 2;
    while( true ) {
      if (*(int *)&pFVar4->field_0x18 != iVar3) {
        local_78[0] = 0;
        `TCheckedPointerIterator<FShaderParameterBindings::FResourceParameter_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_78);
      }
      if (pbVar12 + -2 == puVar11 + (longlong)iVar3 * 4) break;
      if ((pbVar12[1] == 7) || ((pbVar12[1] - 0xe & 0xfb) == 0)) {
        iVar8 = *(int *)&param_1->field_0xd8;
        bVar2 = *pbVar12;
        if (iVar8 == *(int *)&param_1->field_0xdc) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x204,(ForAnyElementType *)puVar1,(int *)&param_1->field_0xdc);
        }
        *(int *)&param_1->field_0xd8 = iVar8 + 1;
        lVar5 = *(longlong *)puVar1;
        *(ushort *)(lVar5 + (longlong)iVar8 * 4) = (ushort)bVar2;
        *(undefined1 *)(lVar5 + (longlong)iVar8 * 4 + 2) = 1;
      }
      pbVar12 = pbVar12 + 4;
    }
    iVar3 = *(int *)&param_1->field_0xd8;
    if (0 < iVar3) {
      _Src = *(void **)puVar1;
      local_68 = _Src;
      iStack_60 = iVar3;
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
          puVar10 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
          *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
          **(undefined8 **)&param_1->field_0x30 = puVar10;
          *(undefined8 **)&param_1->field_0x30 = puVar10 + 1;
          _Dst = FMemStackBase::Alloc((FMemStackBase *)param_1,(longlong)iVar3 << 2,2);
          memcpy(_Dst,_Src,(longlong)iVar3 << 2);
          puVar10[1] = 0;
          *puVar10 = &___7__FRHICommandSetShaderUnbinds_VFRHIComputeShader____6B_;
          puVar10[3] = _Dst;
          puVar10[4] = CONCAT44(uStack_4c,iVar3);
          puVar10[2] = param_3;
          local_58 = _Dst;
          iStack_50 = iVar3;
        }
        else {
          pIVar9 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
          local_48 = (undefined4)local_68;
          uStack_44 = local_68._4_4_;
          iStack_40 = iStack_60;
          uStack_3c = uStack_5c;
          (**(code **)(pIVar9->_padding_ + 0xa8))(pIVar9,param_3,&local_48);
        }
      }
      *(undefined4 *)&param_1->field_0xd8 = 0;
      if (*(int *)&param_1->field_0xdc < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,2,0,(ForAnyElementType *)puVar1,0,(int *)&param_1->field_0xdc);
      }
    }
  }
  return;
}

// ~<lambda_1> @ 14dff0e00

void __thiscall
`Async<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l104::<lambda_2>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x00014dff0e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>_>'::__l2::<lambda_1>,1,1> @ 14dff0ea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_UGroomComponent::TickAtThisTime_::__l5::TSTR_FGroomCacheUpdate3669>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::`5'::TSTR_FGroomCacheUpdate3669>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014dff0ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Async<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l104::<lambda_2>_>'::__l4::<lambda_1>,1,1> @ 14dff0ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l104::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FGroomCacheStreamingData::UpdateStreamingStatus_::__l104::<lambda_2>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FGroomCacheStreamingData::UpdateStreamingStatus'::`104'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l104::<lambda_2>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UGroomComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1> @ 14dff0ef0

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

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGroomComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UGroomComponent::SendRenderDynamicData_Concurrent_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGroomComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<TRefCountPtr<FHairGroupInstance>,int>
            (*(TRefCountPtr<FHairGroupInstance> **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UGroomComponent::TickAtThisTime'::__l5::<lambda_1>,1,0> @ 14dff0f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGroomComponent::TickAtThisTime'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UGroomComponent::TickAtThisTime_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGroomComponent::TickAtThisTime'::`5'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGroomComponent::UpdateSimulatedGroups'::__l5::<lambda_1>,1,1> @ 14dff0f50

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

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGroomComponent::UpdateSimulatedGroups'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UGroomComponent::UpdateSimulatedGroups_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGroomComponent::UpdateSimulatedGroups'::`5'::<lambda_1>,1,1>::
        _vftable_;
  DestructItems<TRefCountPtr<FHairGroupInstance>,int>
            (*(TRefCountPtr<FHairGroupInstance> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FGroomCacheStreamingManager::PrefetchData'::__l7::<lambda_1>,1,0> @ 14dff0f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGroomCacheStreamingManager::PrefetchData'::__l7::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FGroomCacheStreamingManager::PrefetchData_::__l7::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGroomCacheStreamingManager::PrefetchData'::`7'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGroomComponent::UpdateGroomCache'::__l10::<lambda_1>,1,0> @ 14dff0fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGroomComponent::UpdateGroomCache'::__l10::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UGroomComponent::UpdateGroomCache_::__l10::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGroomComponent::UpdateGroomCache'::`10'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l18::<lambda_1>,0,1> @ 14dff0fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l18::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FGroomCacheStreamingData::UpdateStreamingStatus_::__l18::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGroomCacheStreamingData::UpdateStreamingStatus'::`18'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGroomComponent::SetForcedLOD'::__l28::<lambda_1>,1,1> @ 14dff0ff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGroomComponent::SetForcedLOD'::__l28::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UGroomComponent::SetForcedLOD_::__l28::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGroomComponent::SetForcedLOD'::`28'::<lambda_1>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGroomComponent::TickComponent'::__l58::<lambda_1>,1,1> @ 14dff1010

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

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGroomComponent::TickComponent'::__l58::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UGroomComponent::TickComponent_::__l58::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGroomComponent::TickComponent'::`58'::<lambda_1>,1,1>::_vftable_;
  DestructItems<TRefCountPtr<FHairGroupInstance>,int>
            (*(TRefCountPtr<FHairGroupInstance> **)((longlong)this + 0x18),
             *(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l104::<lambda_2>,1,1> @ 14dff1050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l104::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FGroomCacheStreamingData::UpdateStreamingStatus_::__l104::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGroomCacheStreamingData::UpdateStreamingStatus'::`104'::<lambda_2>,1,1>
        ::_vftable_;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  return;
}

// operator() @ 14dff3660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`GroomBuilder_Cluster::BuildClusterData'::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStackY_a8 [32];
  byte local_78;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_70;
  uint local_60 [8];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  lVar3 = *(longlong *)((longlong)this + 0x18);
  uVar7 = 0;
  if ((int)param_1 < *(int *)(lVar3 + 0x90)) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)((longlong)this + 0x18);
  uVar7 = *(uint *)(*(longlong *)(lVar3 + 0x88) + (longlong)(int)param_1 * 4);
  uVar13 = 0;
  if ((int)param_1 < *(int *)(lVar4 + 0x80)) {
    uVar13 = ~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = *(ushort *)(*(longlong *)(lVar4 + 0x78) + (longlong)(int)param_1 * 2);
  uVar13 = (uint)uVar2;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_70,uVar13,Default);
  if (2 < uVar2) {
    GroomBuilder_Cluster::DecimateCurveLOD
              (*(TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> **)
                ((longlong)this + 0x18),uVar7,uVar13,
               (TArray<FHairLODSettings,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)((longlong)this + 0x10) + 8),local_60,&local_70);
    uVar12 = 0;
    if (*(int *)this != 0) {
      do {
        LOCK();
        piVar1 = (int *)(*(longlong *)((longlong)this + 8) + uVar12 * 4);
        *piVar1 = *piVar1 + local_60[uVar12];
        UNLOCK();
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)this);
    }
  }
  local_78 = 0;
  if (*(int *)this != 0) {
    uVar11 = 0;
    do {
      uVar10 = 0;
      if (uVar2 != 0) {
        do {
          uVar8 = 0;
          if ((int)uVar10 < local_70.ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((byte)local_70.AllocatorInstance.Data[(int)uVar10] &
              (byte)(1 << ((byte)uVar11 & 0x1f))) != 0) {
            lVar3 = *(longlong *)((longlong)this + 0x20);
            uVar8 = uVar10 + uVar7;
            uVar9 = 0;
            if ((int)uVar8 < *(int *)(lVar3 + 0x38)) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(uint *)(*(longlong *)(lVar3 + 0x30) + (longlong)(int)uVar8 * 4) = uVar11;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar13);
      }
      local_78 = local_78 + 1;
      uVar11 = (uint)local_78;
    } while (uVar11 < *(uint *)this);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14dff3b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`HairInterpolationBuilder::BuildInterpolationData'::__l2::<lambda_1>::operator()
          (void *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ITextData *pIVar4;
  FSlowTask *this_00;
  FRootsGrid *pFVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  int iVar9;
  undefined8 uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  FDateTime FVar16;
  FText *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  FClosestGuides FVar20;
  FVertexInterpolationDesc *pFVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  float fVar27;
  longlong *plVar28;
  ulonglong uVar29;
  float fVar30;
  bool bVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStackY_418 [32];
  undefined8 in_stack_fffffffffffffc28;
  undefined8 in_stack_fffffffffffffc30;
  float local_3a8;
  uint local_3a4;
  float local_398 [2];
  FHairStrandsDatas *local_390;
  float local_388;
  longlong local_380;
  int local_378;
  float local_374;
  int local_370 [2];
  longlong *local_368;
  longlong local_360;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_358;
  float local_348;
  longlong local_340;
  FTextBuilder local_338;
  undefined8 local_320;
  FTimespan local_310;
  FTextFormat local_308;
  TSharedPtr<FCulture,1> local_2f8;
  undefined8 local_2e8;
  FFormatArgumentValue local_2d8;
  undefined1 local_2b8 [8];
  FText local_2b0;
  FText local_2a0;
  FText local_290;
  undefined1 local_280 [16];
  FVertexInterpolationDesc local_270;
  FVertexInterpolationDesc local_260;
  FVertexInterpolationDesc local_250;
  FText local_240;
  FTextFormat local_230;
  TStaticArray<UE::Math::TVector<float>,16,4294967295> local_218;
  TStaticArray<UE::Math::TVector<float>,16,4294967295> local_158;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_418;
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1611,
               "HairInterpolationBuilder::ComputingClosestGuidesAndWeights",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
               ,0x64b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1611);
  }
  LOCK();
  **(int **)((longlong)this + 0x68) = **(int **)((longlong)this + 0x68) + 1;
  UNLOCK();
  bVar11 = IsInGameThread();
  fVar40 = __real_3f800000;
  fVar30 = 0.0;
  if (bVar11) {
    LOCK();
    uVar1 = **(uint **)((longlong)this + 0x68);
    **(uint **)((longlong)this + 0x68) = 0;
    UNLOCK();
    fVar12 = *(float *)(*(longlong *)((longlong)this + 0x70) + 0x20);
    fVar38 = fVar12 - *(float *)(*(longlong *)((longlong)this + 0x70) + 0x24);
    if (fVar12 <= fVar38) {
      fVar38 = fVar12;
    }
    if (fVar38 <= fVar40) {
      fVar38 = fVar40;
    }
    FVar16 = FDateTime::UtcNow();
    lVar23 = (*(longlong *)FVar16.Ticks - *(longlong *)this) +
             SUB168(SEXT816(-0x29406b2a1a85bd43) *
                    SEXT816(*(longlong *)FVar16.Ticks - *(longlong *)this),8);
    lVar26 = (lVar23 >> 0x17) - (lVar23 >> 0x3f);
    lVar23 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar26),8) + lVar26;
    local_338.Lines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_338.Lines.ArrayNum = 0;
    local_338.Lines.ArrayMax = 0;
    local_338.IndentCount = 0;
    local_2f8 = (TSharedPtr<FCulture,1>)ZEXT816(0);
    auVar33._8_8_ = 0;
    auVar33._0_8_ =
         (double)((float)((int)lVar26 + ((int)(lVar23 >> 5) - (int)(lVar23 >> 0x3f)) * -0x3c) /
                 *(float *)(*(longlong *)((longlong)this + 0x70) + 0x24)) * (double)fVar38 *
         __real_416312d000000000 + __real_3fe0000000000000;
    auVar33 = roundpd((undefined1  [16])local_2f8,auVar33,1);
    local_310.Ticks = (long64)auVar33._0_8_;
    pFVar17 = FText::AsTimespan(&local_240,&local_310,&local_2f8);
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (&local_2a0,L"GroomBuilder",L"ComputeGuidesAndWeights",
                         L"Computing closest guides and weights ({0})");
    pFVar19 = FTextFormat::FTextFormat(&local_230,pFVar18,Default);
    local_2d8.Type = Text;
    FText::FText((FText *)&local_2d8.TextValue,pFVar17);
    if ((local_2d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0xbd,
                            L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_358.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_358.AllocatorInstance,1,&local_358.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_358.AllocatorInstance.Data,&local_2d8,1);
    local_308.TextFormatData.Object = (pFVar19->TextFormatData).Object;
    local_308.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar19->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_308.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_308.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_308.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar18 = FText::Format(&local_2b0,&local_308,&local_358);
    FTextBuilder::BuildAndAppendLine(&local_338,pFVar18);
    if (local_2b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b0.TextData.Reference + 0x10))();
    }
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_358.AllocatorInstance.Data,local_358.ArrayNum);
    if ((FFormatArgumentValue *)local_358.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_358.AllocatorInstance.Data);
    }
    if (local_2d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_2d8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar19->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar4 = (pFVar17->TextData).Reference;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
    if (local_2a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2a0.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f8.SharedReferenceCount.ReferenceController);
    this_00 = *(FSlowTask **)((longlong)this + 0x70);
    pFVar17 = FTextBuilder::ToText(&local_338,&local_290);
    FSlowTask::EnterProgressFrame(this_00,(float)uVar1,pFVar17);
    if (local_290.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
    }
    DestructItems<FText,int>
              ((FText *)local_338.Lines.AllocatorInstance.Data,local_338.Lines.ArrayNum);
    if ((FText *)local_338.Lines.AllocatorInstance.Data != (FText *)0x0) {
      FMemory::Free(local_338.Lines.AllocatorInstance.Data);
    }
  }
  fVar38 = (float)(~param_1 >> 0x1f);
  fVar12 = fVar30;
  if ((int)param_1 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8)) {
    fVar12 = fVar38;
  }
  if ((fVar12 == 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar12 = 0.0;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    pFVar5 = *(FRootsGrid **)((longlong)this + 0x48);
    fVar39 = fVar30;
    if ((int)param_1 < *(int *)(*(longlong *)((longlong)this + 0x60) + 8)) {
      fVar39 = fVar38;
    }
    if ((fVar39 == 0.0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_368 = (longlong *)((longlong)this + 0x28);
    local_360 = (longlong)(int)param_1;
    FVar20 = HairInterpolationBuilder::FRootsGrid::FindClosestRoots
                       (pFVar5,(uint)local_2b8,
                        (TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> *)
                        (ulonglong)param_1,
                        *(TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> **
                         )((longlong)this + 0x20),*(FHairStrandsDatas **)((longlong)this + 0x38),
                        (FHairStrandsDatas *)*local_368,
                        SUB81(*(undefined8 *)((longlong)this + 0x40),0),
                        *(bool *)((longlong)this + 0x1a),
                        (TIntVector3<int> *)
                        CONCAT71((int7)((ulonglong)in_stack_fffffffffffffc28 >> 8),
                                 *(undefined1 *)((longlong)this + 0x1b)));
                    /* WARNING: Load size is inaccurate */
    FVar20.Indices = *FVar20.Indices;
  }
  else {
    plVar28 = (longlong *)((longlong)this + 0x28);
    local_368 = plVar28;
    if (*(char *)((longlong)this + 0x18) == '\x01') {
      HairInterpolationBuilder::GetCurvePositions<16>
                (*(FHairStrandsDatas **)((longlong)this + 0x28),param_1,&local_218);
      pFVar5 = *(FRootsGrid **)((longlong)this + 0x48);
      fVar39 = fVar12;
      if ((int)param_1 < *(int *)(*(longlong *)((longlong)this + 0x60) + 8)) {
        fVar39 = fVar38;
      }
      if ((fVar39 == 0.0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_360 = (longlong)(int)param_1;
      FVar20 = HairInterpolationBuilder::FRootsGrid::FindBestClosestRoots
                         (pFVar5,(uint)local_280,
                          (TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> *
                          )(ulonglong)param_1,
                          *(TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_>
                            **)((longlong)this + 0x20),
                          *(FHairStrandsDatas **)((longlong)this + 0x38),
                          (FHairStrandsDatas *)*plVar28,
                          *(TStaticArray<UE::Math::TVector<float>,16,4294967295> **)
                           ((longlong)this + 0x40),SUB81(&local_218,0),
                          *(bool *)((longlong)this + 0x1a),
                          (TIntVector3<int> *)
                          CONCAT71((int7)((ulonglong)in_stack_fffffffffffffc30 >> 8),
                                   *(undefined1 *)((longlong)this + 0x1b)));
                    /* WARNING: Load size is inaccurate */
      FVar20.Indices = *FVar20.Indices;
    }
    else {
      HairInterpolationBuilder::GetCurvePositions<16>
                (*(FHairStrandsDatas **)((longlong)this + 0x28),param_1,&local_158);
      plVar6 = *(longlong **)((longlong)this + 0x60);
      fVar39 = fVar12;
      if ((int)param_1 < (int)plVar6[1]) {
        fVar39 = fVar38;
      }
      if ((fVar39 == 0.0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_360 = (longlong)(int)param_1;
      FVar20 = HairInterpolationBuilder::FindBestRoots
                         (param_1,*(TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_>
                                    **)((longlong)this + 0x20),
                          *(TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_>
                            **)((longlong)this + 0x38),(FHairStrandsDatas *)*plVar28,
                          *(FHairStrandsDatas **)((longlong)this + 0x40),&local_158,
                          *(bool *)((longlong)this + 0x1a),*(bool *)((longlong)this + 0x1b),
                          (TIntVector3<int> *)(*plVar6 + local_360 * 0xc));
      local_368 = plVar28;
    }
  }
  plVar28 = (longlong *)((longlong)this + 0x28);
  lVar26 = (longlong)(int)param_1;
  lVar23 = *plVar28;
  local_370[0] = FVar20.Indices[0];
  local_370[1] = FVar20.Indices[1];
  fVar13 = 0.0;
  fVar39 = fVar13;
  if ((int)param_1 < *(int *)(lVar23 + 0x80)) {
    fVar39 = fVar38;
  }
  if ((fVar39 == 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar25 = *plVar28;
  local_374 = (float)(uint)*(ushort *)(*(longlong *)(lVar23 + 0x78) + lVar26 * 2);
  fVar39 = fVar13;
  if ((int)param_1 < *(int *)(lVar25 + 0x90)) {
    fVar39 = fVar38;
  }
  if ((fVar39 == 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar1 = *(uint *)(*(longlong *)(lVar25 + 0x88) + lVar26 * 4);
  local_348 = (float)(~uVar1 >> 0x1f);
  fVar39 = fVar13;
  if ((int)uVar1 < *(int *)(*plVar28 + 8)) {
    fVar39 = (float)(~uVar1 >> 0x1f);
  }
  if ((fVar39 == 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  plVar6 = *(longlong **)((longlong)this + 0x58);
  iVar9 = local_370[0];
  lVar23 = (longlong)local_370[0];
  fVar39 = fVar13;
  if ((int)param_1 < (int)plVar6[1]) {
    fVar39 = fVar38;
  }
  if ((fVar39 == 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_398[0] = 0.0;
  *(int *)(*plVar6 + lVar26 * 8) = iVar9;
  lVar25 = *(longlong *)((longlong)this + 0x40);
  fVar39 = fVar13;
  if (iVar9 < *(int *)(lVar25 + 0x90)) {
    fVar39 = (float)((uint)~iVar9 >> 0x1f);
  }
  if ((fVar39 == 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(lVar25 + 0x88) + lVar23 * 4);
  lVar23 = *(longlong *)((longlong)this + 0x58);
  fVar39 = fVar13;
  if ((int)param_1 < *(int *)(lVar23 + 0x28)) {
    fVar39 = fVar38;
  }
  if ((fVar39 == 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar9 = local_370[1];
  lVar25 = (longlong)local_370[1];
  *(undefined4 *)(*(longlong *)(lVar23 + 0x20) + lVar26 * 8) = uVar2;
  plVar6 = *(longlong **)((longlong)this + 0x58);
  fVar39 = fVar13;
  if ((int)param_1 < (int)plVar6[1]) {
    fVar39 = fVar38;
  }
  if ((fVar39 == 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_398[1] = 0.0;
  *(int *)(*plVar6 + 4 + lVar26 * 8) = iVar9;
  lVar23 = *(longlong *)((longlong)this + 0x40);
  fVar39 = fVar13;
  if (iVar9 < *(int *)(lVar23 + 0x90)) {
    fVar39 = (float)((uint)~iVar9 >> 0x1f);
  }
  if ((fVar39 == 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(lVar23 + 0x88) + lVar25 * 4);
  lVar23 = *(longlong *)((longlong)this + 0x58);
  fVar39 = fVar13;
  if ((int)param_1 < *(int *)(lVar23 + 0x28)) {
    fVar39 = fVar38;
  }
  if ((fVar39 == 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(undefined4 *)(*(longlong *)(lVar23 + 0x20) + 4 + lVar26 * 8) = uVar2;
  fVar39 = __real_38d1b717;
  local_3a8 = 0.0;
  fVar15 = 0.0;
  uVar29 = 0;
  if (local_374 != 0.0) {
    do {
      plVar6 = (longlong *)*plVar28;
      uVar24 = (int)uVar29 + uVar1;
      fVar27 = (float)(~uVar24 >> 0x1f);
      local_388 = fVar27;
      fVar14 = fVar13;
      if ((int)uVar24 < (int)plVar6[1]) {
        fVar14 = fVar27;
      }
      if ((fVar14 == 0.0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar23 = *plVar28;
      local_340 = *plVar6;
      lVar26 = (longlong)(int)uVar24;
      fVar14 = fVar13;
      if ((int)uVar24 < *(int *)(lVar23 + 0x28)) {
        fVar14 = fVar27;
      }
      if ((fVar14 == 0.0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar25 = *(longlong *)(lVar23 + 0x20);
      fVar14 = fVar12;
      if ((int)param_1 < *(int *)(lVar23 + 0xa0)) {
        fVar14 = fVar38;
      }
      if ((fVar14 == 0.0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar14 = local_388;
      local_3a4 = 0;
      fVar27 = *(float *)(*(longlong *)(lVar23 + 0x98) + local_360 * 4) *
               *(float *)(lVar25 + lVar26 * 4);
      uVar29 = 0;
      do {
        if ((*(char *)((longlong)this + 0x19) == '\0') ||
           (*(char *)((longlong)this + 0x19) == '\x03')) {
          uVar24 = *(uint *)((longlong)local_370 + uVar29);
          lVar23 = *(longlong *)((longlong)this + 0x40);
          fVar32 = fVar12;
          if ((int)uVar24 < *(int *)(lVar23 + 0x90)) {
            fVar32 = (float)(~uVar24 >> 0x1f);
          }
          if ((fVar32 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_378 = *(int *)(*(longlong *)(lVar23 + 0x88) + (longlong)(int)uVar24 * 4);
          local_390 = *(FHairStrandsDatas **)((longlong)this + 0x40);
          if (*(char *)((longlong)this + 0x19) == '\0') {
            pFVar21 = HairInterpolationBuilder::FindMatchingVertex
                                (&local_260,fVar27,local_390,uVar24);
            local_320._0_4_ = pFVar21->Index0;
            local_320._4_4_ = pFVar21->Index1;
            local_388 = pFVar21->T;
          }
          else {
            plVar28 = (longlong *)*local_368;
            fVar32 = fVar12;
            if ((int)((int)local_3a8 + uVar1) < (int)plVar28[1]) {
              fVar32 = fVar14;
            }
            if ((fVar32 == 0.0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar21 = HairInterpolationBuilder::FindMatchingVertex
                                (&local_250,(TVector<float> *)(*plVar28 + lVar26 * 0xc),local_390,
                                 uVar24);
            local_320._0_4_ = pFVar21->Index0;
            local_320._4_4_ = pFVar21->Index1;
            local_388 = pFVar21->T;
          }
          plVar28 = *(longlong **)((longlong)this + 0x40);
          uVar10 = local_320;
          uVar24 = local_378 + (int)local_320;
          local_380 = CONCAT44(local_380._4_4_,(int)local_320);
          fVar32 = fVar12;
          if ((int)uVar24 < (int)plVar28[1]) {
            fVar32 = (float)(~uVar24 >> 0x1f);
          }
          local_320 = uVar10;
          if ((fVar32 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          plVar6 = *(longlong **)((longlong)this + 0x40);
          lVar23 = (longlong)(int)uVar24;
          uVar24 = local_320._4_4_ + local_378;
          local_390 = (FHairStrandsDatas *)*plVar28;
          fVar32 = fVar13;
          if ((int)uVar24 < (int)plVar6[1]) {
            fVar32 = (float)(~uVar24 >> 0x1f);
          }
          if ((fVar32 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar32 = local_388;
          fVar34 = fVar40 - local_388;
          lVar22 = (longlong)(int)uVar24;
          lVar25 = *plVar6;
          lVar7 = *(longlong *)((longlong)this + 0x58);
          fVar37 = (local_388 * *(float *)(lVar25 + lVar22 * 0xc) +
                   fVar34 * *(float *)((longlong)local_390 + lVar23 * 0xc)) -
                   *(float *)(local_340 + lVar26 * 0xc);
          fVar36 = (local_388 * *(float *)(lVar25 + 4 + lVar22 * 0xc) +
                   fVar34 * *(float *)((longlong)local_390 + 4 + lVar23 * 0xc)) -
                   *(float *)(local_340 + 4 + lVar26 * 0xc);
          fVar35 = fVar13;
          if ((int)((int)local_3a8 + uVar1) < *(int *)(lVar7 + 0x38)) {
            fVar35 = fVar14;
          }
          fVar34 = (local_388 * *(float *)(lVar25 + 8 + lVar22 * 0xc) +
                   fVar34 * *(float *)((longlong)local_390 + 8 + lVar23 * 0xc)) -
                   *(float *)(local_340 + 8 + lVar26 * 0xc);
          fVar34 = SQRT(fVar36 * fVar36 + fVar37 * fVar37 + fVar34 * fVar34);
          if (fVar34 <= fVar39) {
            fVar34 = fVar39;
          }
          if ((fVar35 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(int *)(*(longlong *)(lVar7 + 0x30) + ((longlong)(int)local_3a4 + lVar26 * 2) * 4) =
               (int)local_380;
          lVar23 = *(longlong *)((longlong)this + 0x58);
          fVar35 = fVar15;
          if ((int)((int)local_3a8 + uVar1) < *(int *)(lVar23 + 0x48)) {
            fVar35 = fVar14;
          }
          if ((fVar35 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar23 = *(longlong *)(lVar23 + 0x40);
          *(float *)((longlong)local_398 + uVar29) =
               fVar40 / fVar34 + *(float *)((longlong)local_398 + uVar29);
          *(float *)(lVar23 + ((longlong)(int)local_3a4 + lVar26 * 2) * 4) = fVar32;
        }
        if (*(char *)((longlong)this + 0x19) == '\x01') {
          uVar24 = *(uint *)((longlong)local_370 + uVar29);
          lVar23 = *(longlong *)((longlong)this + 0x40);
          fVar32 = fVar15;
          if ((int)uVar24 < *(int *)(lVar23 + 0x90)) {
            fVar32 = (float)(~uVar24 >> 0x1f);
          }
          if ((fVar32 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar3 = *(uint *)(*(longlong *)(lVar23 + 0x88) + (longlong)(int)uVar24 * 4);
          plVar28 = *(longlong **)((longlong)this + 0x40);
          fVar32 = fVar15;
          if ((int)uVar3 < (int)plVar28[1]) {
            fVar32 = (float)(~uVar3 >> 0x1f);
          }
          if ((fVar32 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_390 = (FHairStrandsDatas *)((longlong)(int)uVar3 * 3);
          local_380 = *plVar28;
          plVar28 = (longlong *)*local_368;
          fVar32 = fVar15;
          if ((int)uVar1 < (int)plVar28[1]) {
            fVar32 = local_348;
          }
          if ((fVar32 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar23 = *plVar28;
          lVar25 = (longlong)(int)uVar1;
          fVar32 = *(float *)(local_380 + 8 + (longlong)local_390 * 4) -
                   *(float *)(lVar23 + 8 + lVar25 * 0xc);
          fVar34 = *(float *)(local_380 + 4 + (longlong)local_390 * 4) -
                   *(float *)(lVar23 + 4 + lVar25 * 0xc);
          fVar35 = *(float *)(local_380 + (longlong)local_390 * 4) -
                   *(float *)(lVar23 + lVar25 * 0xc);
          fVar32 = SQRT(fVar34 * fVar34 + fVar35 * fVar35 + fVar32 * fVar32);
          if (fVar32 <= fVar39) {
            fVar32 = fVar39;
          }
          pFVar21 = HairInterpolationBuilder::FindMatchingVertex
                              (&local_270,fVar27,*(FHairStrandsDatas **)((longlong)this + 0x40),
                               uVar24);
          lVar23 = *(longlong *)((longlong)this + 0x58);
          local_380 = CONCAT44(local_380._4_4_,pFVar21->T);
          fVar35 = fVar15;
          if ((int)((int)local_3a8 + uVar1) < *(int *)(lVar23 + 0x38)) {
            fVar35 = fVar14;
          }
          local_2e8._0_4_ = pFVar21->Index0;
          local_2e8._4_4_ = pFVar21->Index1;
          if ((fVar35 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(undefined4 *)
           (*(longlong *)(lVar23 + 0x30) + ((longlong)(int)local_3a4 + lVar26 * 2) * 4) =
               (undefined4)local_2e8;
          lVar23 = *(longlong *)((longlong)this + 0x58);
          fVar35 = fVar15;
          if ((int)((int)local_3a8 + uVar1) < *(int *)(lVar23 + 0x48)) {
            fVar35 = fVar14;
          }
          if ((fVar35 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar23 = *(longlong *)(lVar23 + 0x40);
          uVar2 = (int)local_380;
          *(float *)((longlong)local_398 + uVar29) =
               fVar40 / fVar32 + *(float *)((longlong)local_398 + uVar29);
          *(undefined4 *)(lVar23 + ((longlong)(int)local_3a4 + lVar26 * 2) * 4) = uVar2;
        }
        if (*(char *)((longlong)this + 0x19) == '\x02') {
          lVar23 = *(longlong *)((longlong)this + 0x40);
          uVar24 = *(uint *)((longlong)local_370 + uVar29);
          fVar32 = fVar15;
          if ((int)uVar24 < *(int *)(lVar23 + 0x90)) {
            fVar32 = (float)(~uVar24 >> 0x1f);
          }
          if ((fVar32 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_380 = CONCAT44(local_380._4_4_,
                               *(undefined4 *)
                                (*(longlong *)(lVar23 + 0x88) + (longlong)(int)uVar24 * 4));
          lVar23 = *(longlong *)((longlong)this + 0x40);
          fVar32 = fVar15;
          if ((int)uVar24 < *(int *)(lVar23 + 0x80)) {
            fVar32 = (float)(~uVar24 >> 0x1f);
          }
          if ((fVar32 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          plVar28 = *(longlong **)((longlong)this + 0x40);
          fVar32 = (float)(*(ushort *)(*(longlong *)(lVar23 + 0x78) + (longlong)(int)uVar24 * 2) - 1
                          );
          if ((uint)local_3a8 < (uint)fVar32) {
            fVar32 = local_3a8;
          }
          fVar35 = fVar15;
          if (fVar32 != 0.0) {
            fVar35 = fVar32;
          }
          uVar24 = (int)local_380 + (int)fVar35;
          fVar32 = fVar15;
          if ((int)uVar24 < (int)plVar28[1]) {
            fVar32 = (float)(~uVar24 >> 0x1f);
          }
          if ((fVar32 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar25 = (longlong)(int)uVar24;
          lVar23 = *plVar28;
          fVar34 = *(float *)(lVar23 + 8 + lVar25 * 0xc) - *(float *)(local_340 + 8 + lVar26 * 0xc);
          fVar37 = *(float *)(lVar23 + 4 + lVar25 * 0xc) - *(float *)(local_340 + 4 + lVar26 * 0xc);
          fVar36 = *(float *)(lVar23 + lVar25 * 0xc) - *(float *)(local_340 + lVar26 * 0xc);
          lVar23 = *(longlong *)((longlong)this + 0x58);
          fVar32 = fVar15;
          if ((int)((int)local_3a8 + uVar1) < *(int *)(lVar23 + 0x38)) {
            fVar32 = fVar14;
          }
          fVar34 = SQRT(fVar37 * fVar37 + fVar36 * fVar36 + fVar34 * fVar34);
          if (fVar34 <= fVar39) {
            fVar34 = fVar39;
          }
          if ((fVar32 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(float *)(*(longlong *)(lVar23 + 0x30) + ((longlong)(int)local_3a4 + lVar26 * 2) * 4) =
               fVar35;
          lVar23 = *(longlong *)((longlong)this + 0x58);
          fVar32 = fVar15;
          if ((int)((int)local_3a8 + uVar1) < *(int *)(lVar23 + 0x48)) {
            fVar32 = fVar14;
          }
          if ((fVar32 == 0.0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar23 = *(longlong *)(lVar23 + 0x40);
          *(float *)((longlong)local_398 + uVar29) =
               fVar40 / fVar34 + *(float *)((longlong)local_398 + uVar29);
          *(undefined4 *)(lVar23 + ((longlong)(int)local_3a4 + lVar26 * 2) * 4) = 0x3f800000;
        }
        uVar29 = uVar29 + 4;
        local_3a4 = local_3a4 + 1;
      } while (local_3a4 < 2);
      local_3a8 = (float)((int)local_3a8 + 1);
      uVar29 = (ulonglong)(uint)local_3a8;
      lVar26 = local_360;
      plVar28 = local_368;
    } while ((uint)local_3a8 < (uint)local_374);
  }
  lVar23 = *(longlong *)((longlong)this + 0x58);
  fVar12 = local_398[1] + local_398[0];
  if (local_398[1] + local_398[0] <= __real_3a83126f) {
    fVar12 = __real_3a83126f;
  }
  if ((int)param_1 < *(int *)(lVar23 + 0x18)) {
    fVar15 = fVar38;
  }
  fVar39 = (fVar40 / fVar12) * local_398[0];
  if ((fVar15 == 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar40 = (fVar40 / fVar12) * local_398[1];
  *(float *)(*(longlong *)(lVar23 + 0x10) + lVar26 * 8) = fVar39;
  lVar23 = *(longlong *)((longlong)this + 0x58);
  if ((int)param_1 < *(int *)(lVar23 + 0x18)) {
    fVar30 = fVar38;
  }
  if ((fVar30 == 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(float *)(*(longlong *)(lVar23 + 0x10) + 4 + lVar26 * 8) = fVar40;
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14dff4fb0

void __thiscall
`GroomBuilder_Voxelization::ComputeCoverage'::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  float *pfVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 local_res10 [8];
  
  plVar2 = *(longlong **)((longlong)this + 8);
  lVar11 = (longlong)(int)param_1;
  uVar8 = 0;
  if ((int)param_1 < (int)plVar2[1]) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar12 = (longlong *)(lVar11 * 0x10 + *plVar2);
  plVar2 = *(longlong **)((longlong)this + 0x10);
  uVar8 = 0;
  if ((int)param_1 < (int)plVar2[1]) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *plVar2;
  *(int *)(lVar3 + lVar11 * 0xc) = (int)plVar12[1];
  lVar6 = plVar12[1];
  lVar9 = *plVar12;
  lVar10 = (longlong)(int)lVar6 * 0x1c + lVar9;
  while( true ) {
    if ((int)plVar12[1] != (int)lVar6) {
      `TCheckedPointerIterator<GroomBuilder_Voxelization::FHairGrid::FCurve_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar9 == lVar10) break;
    pfVar1 = (float *)(lVar9 + 0x14);
    lVar9 = lVar9 + 0x1c;
    *(float *)(lVar3 + 4 + lVar11 * 0xc) =
         *pfVar1 / *(float *)this + *(float *)(lVar3 + 4 + lVar11 * 0xc);
  }
  uVar8 = *(uint *)(lVar3 + lVar11 * 0xc);
  uVar5 = uVar8;
  if (uVar8 == 0) {
    uVar5 = 1;
  }
  fVar13 = *(float *)(lVar3 + 4 + lVar11 * 0xc) / (float)uVar5;
  *(float *)(lVar3 + 4 + lVar11 * 0xc) = fVar13;
  fVar13 = GetHairCoverage(uVar8,fVar13);
  *(float *)(lVar3 + 8 + lVar11 * 0xc) = fVar13;
  return;
}

// operator() @ 14dff5110

void __thiscall
`GroomBuilder_Voxelization::RemoveCurveAndComputeCoverageScaling'::__l2::<lambda_1>::operator()
          (void *this,uint param_1)

{
  float *pfVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  byte bVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong local_res20;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  uVar12 = 0;
  if ((int)param_1 < (int)plVar3[1]) {
    uVar12 = ~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar7 = *plVar3;
  lVar8 = (longlong)(int)param_1 * 0x10;
  uVar12 = 0;
  iVar11 = 0;
  fVar18 = 0.0;
  iVar16 = *(int *)(lVar8 + 8 + lVar7);
  lVar10 = *(longlong *)(lVar8 + lVar7);
  lVar14 = (longlong)iVar16 * 0x1c + lVar10;
  local_res18 = lVar7;
  while( true ) {
    if (*(int *)(lVar8 + 8 + lVar7) != iVar16) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<GroomBuilder_Voxelization::FHairGrid::FCurve,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
      lVar7 = local_res18;
    }
    if (lVar10 == lVar14) break;
    if ((*(uint *)(lVar10 + 0x10) < *(uint *)((longlong)this + 0x18)) ||
       (*(uint *)((longlong)this + 0x1c) < *(uint *)(lVar10 + 0x10))) {
      pfVar1 = (float *)(lVar10 + 0x14);
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 0x1c;
      fVar18 = fVar18 + *pfVar1 / *(float *)this;
    }
    else {
      iVar11 = iVar11 + 1;
      lVar10 = lVar10 + 0x1c;
    }
  }
  uVar2 = 1;
  if (1 < uVar12) {
    uVar2 = uVar12;
  }
  fVar17 = GetHairCoverage(uVar12,fVar18 / (float)uVar2);
  fVar18 = __real_3f800000;
  if (0.0 < fVar17) {
    plVar3 = *(longlong **)((longlong)this + 0x10);
    uVar12 = 0;
    if ((int)param_1 < (int)plVar3[1]) {
      uVar12 = ~param_1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar18 = *(float *)(*plVar3 + 8 + (longlong)(int)param_1 * 0xc) / fVar17;
  }
  fVar18 = (float)*(ulonglong *)((longlong)this + 0x20) * fVar18;
  lVar7 = 0;
  if ((__real_5f000000 <= fVar18) && (fVar18 = fVar18 - __real_5f000000, fVar18 < __real_5f000000))
  {
    lVar7 = -0x8000000000000000;
  }
  LOCK();
  **(longlong **)((longlong)this + 0x28) =
       **(longlong **)((longlong)this + 0x28) + (longlong)fVar18 + lVar7;
  UNLOCK();
  if (iVar11 != 0) {
    uVar12 = *(uint *)((longlong)this + 0x18);
    uVar2 = *(uint *)((longlong)this + 0x1c);
    iVar16 = *(int *)(lVar8 + 8 + local_res18);
    lVar7 = (longlong)iVar16;
    if (iVar16 != 0) {
      lVar10 = *(longlong *)(lVar8 + local_res18);
      iVar16 = 0;
      if ((*(uint *)(lVar10 + 0x10) < uVar12) || (uVar2 < *(uint *)(lVar10 + 0x10))) {
        bVar15 = 1;
      }
      else {
        bVar15 = 0;
      }
      lVar14 = 0;
      iVar11 = 0;
      local_res20 = lVar10;
      do {
        lVar14 = lVar14 + 1;
        iVar13 = iVar11 + 1;
        if (lVar14 < lVar7) {
          puVar9 = (uint *)(lVar14 * 0x1c + 0x10 + lVar10);
          do {
            if ((*puVar9 < uVar12) || (uVar2 < *puVar9)) {
              bVar6 = 1;
            }
            else {
              bVar6 = 0;
            }
            if (bVar15 != bVar6) break;
            iVar13 = iVar13 + 1;
            lVar14 = lVar14 + 1;
            puVar9 = puVar9 + 7;
          } while (lVar14 < lVar7);
        }
        if (bVar15 != 0) {
          if (iVar16 != iVar11) {
            memmove((void *)((longlong)iVar16 * 0x1c + lVar10),
                    (void *)((longlong)iVar11 * 0x1c + lVar10),(longlong)(iVar13 - iVar11) * 0x1c);
            lVar10 = local_res20;
          }
          iVar16 = iVar16 + (iVar13 - iVar11);
        }
        bVar15 = bVar15 ^ 1;
        iVar11 = iVar13;
      } while (lVar14 < lVar7);
      *(int *)(lVar8 + 8 + local_res18) = iVar16;
    }
  }
  return;
}

// operator() @ 14dff6000

FPosition __thiscall
`HairStrandsBuilder::BuildBulkData'[::C]::<lambda_1>::operator()
          (void *this,FPackedHairVertex *param_1,bool *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar5;
  uint uVar6;
  bool bVar3;
  FPosition FVar4;
  uint uVar7;
  uint uVar8;
  undefined1 *in_R9;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar9 = FGenericPlatformMath::LoadHalf((ushort *)param_2);
  fVar13 = (fVar9 - *(float *)this) / *(float *)((longlong)this + 0xc);
  fVar9 = FGenericPlatformMath::LoadHalf((ushort *)(param_2 + 2));
  fVar12 = (fVar9 - *(float *)((longlong)this + 4)) / *(float *)((longlong)this + 0x10);
  fVar10 = FGenericPlatformMath::LoadHalf((ushort *)(param_2 + 4));
  fVar11 = __real_3f8020c5;
  fVar9 = __real_ba83126f;
  fVar10 = (fVar10 - *(float *)((longlong)this + 8)) / *(float *)((longlong)this + 0x14);
  if ((fVar13 < __real_ba83126f) || (__real_3f8020c5 < fVar13)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NP.X >= 0-bPrecisionError && NP.X <= 1+bPrecisionError",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                       ,0x1ea,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FPosition)(*pcVar1)();
      return FVar4;
    }
  }
  if ((fVar12 < fVar9) || (fVar11 < fVar12)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NP.Y >= 0-bPrecisionError && NP.Y <= 1+bPrecisionError",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                       ,0x1eb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FPosition)(*pcVar1)();
      return FVar4;
    }
  }
  if ((fVar10 < fVar9) || (fVar11 < fVar10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NP.Z >= 0-bPrecisionError && NP.Z <= 1+bPrecisionError",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                       ,0x1ec,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FPosition)(*pcVar1)();
      return FVar4;
    }
  }
  fVar9 = __real_3a802008;
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar8 = (uint)(longlong)(fVar13 * __real_447fc000);
  uVar6._0_2_ = param_1->X;
  uVar6._2_2_ = param_1->Y;
  uVar5._0_2_ = param_1->X;
  uVar5._2_2_ = param_1->Y;
  uVar5 = (uVar8 ^ uVar6) & 0x3ff ^ uVar5;
  uVar7 = (uint)(longlong)(fVar12 * __real_447fc000);
  uVar6 = (uint)(longlong)(fVar10 * __real_447fc000);
  uVar5 = (((uVar7 << 10 ^ uVar5) & 0xffc00 ^ uVar5) & 0xfffff ^ uVar6 << 0x14) & 0x3fffffff |
          (param_2[7] & 0xffffffc0) << 0x18;
  param_1->X = (FFloat16)(short)uVar5;
  param_1->Y = (FFloat16)(short)(uVar5 >> 0x10);
  fVar11 = (float)((uint)((float)(uVar7 & 0x3ff) * fVar9 - fVar12) & uVar2);
  fVar12 = (float)((uint)((float)(uVar8 & 0x3ff) * fVar9 - fVar13) & uVar2);
  if (fVar11 <= fVar12) {
    fVar11 = fVar12;
  }
  fVar9 = (float)((uint)((float)(uVar6 & 0x3ff) * fVar9 - fVar10) & uVar2);
  if (fVar11 <= fVar9) {
    fVar11 = fVar9;
  }
  if (__real_3c23d70a < fVar11) {
    *in_R9 = 0;
  }
  return SUB84(param_1,0);
}

// `vector_deleting_destructor'`adjustor{40}' @ 14dff6470

/* [thunk]:public: virtual void * __ptr64 __cdecl UGroomCache::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGroomCache::_vector_deleting_destructor__adjustor_40__(UGroomCache *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGroomCache *)&this[-1].GroomCacheInfo.AnimationInfo.Duration,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14dff6480

/* [thunk]:public: virtual void * __ptr64 __cdecl UGroomCache::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UGroomCache::_vector_deleting_destructor__adjustor_48__(UGroomCache *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGroomCache *)&this[-1].GroomCacheInfo.AnimationInfo,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14dff6490

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UGroomComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UGroomComponent::_vector_deleting_destructor__adjustor_592__(UGroomComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGroomComponent *)&this[-1].GroomAsset,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14dff64a4

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UGroomComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UGroomComponent::_vector_deleting_destructor__adjustor_600__(UGroomComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGroomComponent *)&this[-1].field_0x598,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14dff64b8

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UGroomComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UGroomComponent::_vector_deleting_destructor__adjustor_608__(UGroomComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGroomComponent *)&this[-1].field_0x590,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14dff64cc

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UGroomComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGroomComponent::_vector_deleting_destructor__adjustor_40__(UGroomComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGroomComponent *)&this[-1].GroomSolver.SoftObjectPtr.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1424}' @ 14dff64dc

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UGroomComponent::`vector deleting
   destructor'`adjustor{1424}' (unsigned int) __ptr64 */

void * __thiscall
UGroomComponent::_vector_deleting_destructor__adjustor_1424__(UGroomComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGroomComponent *)&this[-1].field_0x260,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1432}' @ 14dff64f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UGroomComponent::`vector deleting
   destructor'`adjustor{1432}' (unsigned int) __ptr64 */

void * __thiscall
UGroomComponent::_vector_deleting_destructor__adjustor_1432__(UGroomComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGroomComponent *)&this[-1].field_0x258,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14dff6510

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGroomBindingCompilingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6540

void * __thiscall
AsyncCompilationHelpers::TCompilableAsyncTask<FGroomBindingAsyncBuildTask>::
_scalar_deleting_destructor_(TCompilableAsyncTask<FGroomBindingAsyncBuildTask> *this,uint param_1)

{
  *this = (TCompilableAsyncTask<FGroomBindingAsyncBuildTask>)
          &___7ICompilable_AsyncCompilationHelpers__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::`5'::TSTR_FGroomCacheUpdate3669>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff65e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l104::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FGroomCacheStreamingData::UpdateStreamingStatus'::`104'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l104::<lambda_2>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6630

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

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGroomComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGroomComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<TRefCountPtr<FHairGroupInstance>,int>
            (*(TRefCountPtr<FHairGroupInstance> **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGroomComponent::TickAtThisTime'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGroomComponent::TickAtThisTime'::`5'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff66d0

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

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGroomComponent::UpdateSimulatedGroups'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGroomComponent::UpdateSimulatedGroups'::`5'::<lambda_1>,1,1>::
        _vftable_;
  DestructItems<TRefCountPtr<FHairGroupInstance>,int>
            (*(TRefCountPtr<FHairGroupInstance> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGroomCacheStreamingManager::PrefetchData'::__l7::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGroomCacheStreamingManager::PrefetchData'::`7'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGroomComponent::UpdateGroomCache'::__l10::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGroomComponent::UpdateGroomCache'::`10'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff67b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l18::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGroomCacheStreamingData::UpdateStreamingStatus'::`18'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff67f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGroomComponent::SetForcedLOD'::__l28::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGroomComponent::SetForcedLOD'::`28'::<lambda_1>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6830

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

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGroomComponent::TickComponent'::__l58::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGroomComponent::TickComponent'::`58'::<lambda_1>,1,1>::_vftable_;
  DestructItems<TRefCountPtr<FHairGroupInstance>,int>
            (*(TRefCountPtr<FHairGroupInstance> **)((longlong)this + 0x18),
             *(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l104::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGroomCacheStreamingData::UpdateStreamingStatus'::`104'::<lambda_2>,1,1>
        ::_vftable_;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6900

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6960

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGroomCacheBuffers,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FGroomCacheBuffers,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff69a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGroomCacheStreamedBuffers,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FGroomCacheStreamedBuffers,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff69e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FHairStrandCopyPositionCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FHairStrandCopyPositionCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6a10

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>'::__l2::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 14dff6a70

void * __thiscall
`FGroomBindingCompilingManager::FinishCompilation'::__l29::FCompilableGroomBindingAsset::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(UObject **)((longlong)this + 8) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)this + 8));
    *(undefined8 *)((longlong)this + 8) = 0;
  }
  *(undefined ***)this = &___7ICompilable_AsyncCompilationHelpers__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6ad0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
FGroomBindingCompilingManager::_scalar_deleting_destructor_
          (FGroomBindingCompilingManager *this,uint param_1)

{
  ~FGroomBindingCompilingManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6b10

void * __thiscall
FGroomCacheBuffers::_scalar_deleting_destructor_(FGroomCacheBuffers *this,uint param_1)

{
  ~FGroomCacheBuffers(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6b50

void * __thiscall
FGroomCacheStreamedBuffers::_scalar_deleting_destructor_
          (FGroomCacheStreamedBuffers *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGroomCacheStreamedBuffers__6B_;
  ResetInternal(this);
  FGroomCacheBuffers::~FGroomCacheBuffers((FGroomCacheBuffers *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6ba0

void * __thiscall
FGroomCacheStreamingManager::_scalar_deleting_destructor_
          (FGroomCacheStreamingManager *this,uint param_1)

{
  ~FGroomCacheStreamingManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6be0

void * __thiscall
FHairDebugModeMaterialRenderProxy::_scalar_deleting_destructor_
          (FHairDebugModeMaterialRenderProxy *this,uint param_1)

{
  FMaterialRenderProxy::~FMaterialRenderProxy((FMaterialRenderProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6c20

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

void * __thiscall
FHairGroupInstance::_scalar_deleting_destructor_(FHairGroupInstance *this,uint param_1)

{
  ~FHairGroupInstance(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x490);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6c60

void * __thiscall
FHairStrandsInstance::_scalar_deleting_destructor_(FHairStrandsInstance *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6c90

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

void * __thiscall
FHairStrandsSceneProxy::_scalar_deleting_destructor_(FHairStrandsSceneProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FHairStrandsSceneProxy__6B_;
  DestructItems<FHairStrandsSceneProxy::FHairGroupMaterialProxy,int>
            ((FHairGroupMaterialProxy *)(this->HairGroupMaterialProxies).AllocatorInstance.Data,
             (this->HairGroupMaterialProxies).ArrayNum);
  pFVar1 = (this->HairGroupMaterialProxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<FHairGroupInstance>,int>
            ((TRefCountPtr<FHairGroupInstance> *)(this->HairGroupInstances).AllocatorInstance.Data,
             (this->HairGroupInstances).ArrayNum);
  pFVar1 = (this->HairGroupInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6d20

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

void * __thiscall
FHairStrandsVertexFactory::_scalar_deleting_destructor_
          (FHairStrandsVertexFactory *this,uint param_1)

{
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6d60

void * __thiscall
FQueuedThreadPoolDynamicWrapper::_scalar_deleting_destructor_
          (FQueuedThreadPoolDynamicWrapper *this,uint param_1)

{
  FQueuedThreadPoolWrapper::~FQueuedThreadPoolWrapper((FQueuedThreadPoolWrapper *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6da0

void * __thiscall IChaosCacheData::_scalar_deleting_destructor_(IChaosCacheData *this,uint param_1)

{
  *this = (IChaosCacheData)&___7IChaosCacheData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6de0

void * __thiscall
AsyncCompilationHelpers::ICompilable::_scalar_deleting_destructor_(ICompilable *this,uint param_1)

{
  *this = (ICompilable)&___7ICompilable_AsyncCompilationHelpers__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6e20

void * __thiscall
IGroomCacheBuffers::_scalar_deleting_destructor_(IGroomCacheBuffers *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IGroomCacheBuffers__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6e70

void * __thiscall
IGroomCacheStreamingManager::_scalar_deleting_destructor_
          (IGroomCacheStreamingManager *this,uint param_1)

{
  *(undefined ***)this = &___7IStreamingManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6eb0

void * __thiscall
INiagaraPhysicsAssetDICollectorInterface::_scalar_deleting_destructor_
          (INiagaraPhysicsAssetDICollectorInterface *this,uint param_1)

{
  *this = (INiagaraPhysicsAssetDICollectorInterface)
          &___7INiagaraPhysicsAssetDICollectorInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6ef0

void * __thiscall
UGroomBlueprintLibrary::_scalar_deleting_destructor_(UGroomBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UGroomBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff6f50

void * __thiscall UGroomCache::_scalar_deleting_destructor_(UGroomCache *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IChaosCacheData__;
  DestructItems<FGroomCacheChunk,int>
            ((FGroomCacheChunk *)(this->Chunks).AllocatorInstance.Data,(this->Chunks).ArrayNum);
  pFVar1 = (this->Chunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IChaosCacheData__6B_;
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dff7010

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall UGroomComponent::_scalar_deleting_destructor_(UGroomComponent *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x590 = &_vftable__for__ILODSyncInterface__;
  *(undefined ***)&this->field_0x598 = &_vftable__for__INiagaraPhysicsAssetDICollectorInterface__;
  pvVar1 = *(void **)&(this->GroomSolver).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TRefCountPtr<FHairGroupInstance>,int>
            ((TRefCountPtr<FHairGroupInstance> *)(this->HairGroupInstances).AllocatorInstance.Data,
             (this->HairGroupInstances).ArrayNum);
  pFVar2 = (this->HairGroupInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GroomCacheBuffers).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->GroomGroupsDesc).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AttachmentName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SimulationSettings).SimulationSetup.LocalBone.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CollisionComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NiagaraComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)&this->field_0x598 = &___7INiagaraPhysicsAssetDICollectorInterface__6B_;
  *(undefined ***)&this->field_0x590 = &___7ILODSyncInterface__6B_;
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x7f0);
  }
  return this;
}

// AllocateVoxels @ 14dff80f0

void __cdecl GroomBuilder_Voxelization::AllocateVoxels(TBox<float> *param_1,FHairGrid *param_2)

{
  TArray<GroomBuilder_Voxelization::FHairGrid::FVoxel,TSizedDefaultAllocator<32>_> *this;
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  
  fVar3 = __real_40000000;
  fVar12 = __real_3f000000;
  fVar2 = __real_bf000000;
  *(undefined8 *)&(param_2->MinBound).field0_0x0 = *(undefined8 *)&(param_1->Min).field0_0x0;
  (param_2->MinBound).field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  *(undefined8 *)&(param_2->MaxBound).field0_0x0 = *(undefined8 *)&(param_1->Max).field0_0x0;
  (param_2->MaxBound).field0_0x0._s_0.Z = (param_1->Max).field0_0x0._s_0.Z;
  *(undefined8 *)&(param_2->Resolution).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (param_2->Resolution).field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  param_2->VoxelSize = 0.5;
  iVar11 = 2;
  if (2 < GHairGroupIndexBuilder_MaxVoxelResolution) {
    iVar11 = GHairGroupIndexBuilder_MaxVoxelResolution;
  }
  while( true ) {
    fVar13 = fVar3 / fVar12;
    iVar9 = -((int)ROUND(fVar2 - ((param_2->MaxBound).field0_0x0._s_0.Y -
                                 (param_2->MinBound).field0_0x0._s_0.Y) * fVar13) >> 1);
    iVar8 = -((int)ROUND(fVar2 - ((param_2->MaxBound).field0_0x0._s_0.Z -
                                 (param_2->MinBound).field0_0x0._s_0.Z) * fVar13) >> 1);
    (param_2->Resolution).field0_0x0._s_0.X =
         -((int)ROUND(fVar2 - ((param_2->MaxBound).field0_0x0._s_0.X -
                              (param_2->MinBound).field0_0x0._s_0.X) * fVar13) >> 1);
    (param_2->Resolution).field0_0x0._s_0.Y = iVar9;
    (param_2->Resolution).field0_0x0._s_0.Z = iVar8;
    if ((((param_2->Resolution).field0_0x0._s_0.X <= iVar11) && (iVar9 <= iVar11)) &&
       (iVar8 <= iVar11)) break;
    fVar12 = fVar12 + fVar12;
    param_2->VoxelSize = fVar12;
  }
  uVar4 = *(undefined8 *)&(param_2->Resolution).field0_0x0;
  this = &param_2->Voxels;
  iVar11 = (param_2->Resolution).field0_0x0._s_0.Z;
  piVar1 = &(param_2->Voxels).ArrayNum;
  fVar2 = (param_2->MinBound).field0_0x0._s_0.Y;
  fVar3 = (param_2->MinBound).field0_0x0._s_0.Z;
  (param_2->MaxBound).field0_0x0._s_0.X =
       (float)(int)uVar4 * fVar12 + (param_2->MinBound).field0_0x0._s_0.X;
  (param_2->MaxBound).field0_0x0._s_0.Y = (float)(int)((ulonglong)uVar4 >> 0x20) * fVar12 + fVar2;
  (param_2->MaxBound).field0_0x0._s_0.Z = (float)iVar11 * fVar12 + fVar3;
  iVar11 = *piVar1;
  uVar7 = (param_2->Resolution).field0_0x0._s_0.Z * (param_2->Resolution).field0_0x0._s_0.X *
          (param_2->Resolution).field0_0x0._s_0.Y;
  uVar10 = 1;
  if (1 < (int)uVar7) {
    uVar10 = uVar7;
  }
  if ((int)uVar10 <= iVar11) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((int)uVar10 < iVar11) {
      uVar7 = iVar11 - uVar10;
      if (((int)(uVar7 | uVar10) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar7 != 0) {
        TArray<GroomBuilder_Voxelization::FHairGrid::FVoxel,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this,uVar10,uVar7);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&(param_2->Voxels).ArrayMax);
      }
    }
    return;
  }
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar10 - iVar11,&this->AllocatorInstance,piVar1,
                     &(param_2->Voxels).ArrayMax);
  DefaultConstructItems<GroomBuilder_Voxelization::FHairGrid::FVoxel,int>
            ((this->AllocatorInstance).Data + (longlong)iVar8 * 0x10,uVar10 - iVar11);
  return;
}

// BuildBulkData @ 14dff9350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014dffabe5) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
HairStrandsBuilder::BuildBulkData
          (FHairStrandsDatas *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TArray<GroomBuilder_Voxelization::FCoverageScale,TSizedDefaultAllocator<32>_> *param_3,
          FHairStrandsBulkData *param_4,bool param_5)

{
  uint *puVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  FHairStrandsBulkData *pFVar13;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<GroomBuilder_Voxelization::FCoverageScale,TSizedDefaultAllocator<32>_> *pTVar15;
  bool bVar16;
  undefined2 uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  FPosition FVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  void *pvVar25;
  byte bVar26;
  FScriptContainerElement FVar27;
  char cVar28;
  longlong lVar29;
  float fVar30;
  uint uVar31;
  FBulkData *this;
  ForAnyElementType FVar32;
  FScriptContainerElement *pFVar33;
  longlong lVar34;
  ulonglong uVar35;
  size_t _Size;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar36;
  undefined4 uVar37;
  float fVar38;
  ushort uVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  FHairStrandsBulkData *pFVar43;
  FScriptContainerElement *pFVar44;
  longlong lVar45;
  bool bVar46;
  float fVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auStackY_3c8 [32];
  uint local_374;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_370;
  byte local_360;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_358;
  uint local_348;
  undefined1 local_344;
  undefined1 local_343 [3];
  float local_340;
  float local_33c;
  float local_338;
  ForAnyElementType local_330;
  undefined8 local_328;
  TArray<FPackedHairVertex,TSizedDefaultAllocator<32>_> local_320;
  ushort local_310 [4];
  uint local_308;
  uint local_304;
  uint local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  int local_2e0 [2];
  FHairStrandsBulkData *local_2d8;
  uint local_2d0;
  float local_2cc;
  uint local_2c8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_2c0;
  undefined8 local_2b0;
  undefined4 uStack_2a8;
  uint uStack_2a4;
  int local_2a0;
  longlong local_298;
  TArray<FTranscodedHairPositions,TSizedDefaultAllocator<32>_> local_290;
  longlong local_280;
  longlong local_278;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_270;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_260;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_250;
  longlong local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  int local_220;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_218;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_208;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1f8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1e8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1d8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<GroomBuilder_Voxelization::FCoverageScale,TSizedDefaultAllocator<32>_> *local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  FHairStrandsDatas *local_198;
  undefined1 local_190 [8];
  FPackedHairVertex local_188;
  TArrayView<unsigned_int_const_,int> local_180;
  TArrayView<unsigned_int_const_,int> local_170;
  TArrayView<unsigned_int_const_,int> local_160;
  TArrayView<unsigned_int_const_,int> local_150;
  TArrayView<unsigned_int_const_,int> local_140;
  TArrayView<unsigned_int_const_,int> local_130;
  TArrayView<unsigned_int_const_,int> local_120;
  uint local_110 [8];
  ulonglong local_f0;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  bVar46 = -1 < CpuChannel->Enabled;
  local_2d8 = param_4;
  local_2b0 = param_2;
  local_1b8 = param_3;
  local_198 = param_1;
  if (bVar46) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId211,"HairStrandsBuilder::BuildBulkData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
               ,0xd3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId211);
  }
  uVar40 = (uint)param_1->_padding_;
  iVar41 = (int)param_1->_padding_;
  local_2c8 = uVar40;
  local_220 = iVar41;
  if ((uVar40 != 0) && (iVar41 != 0)) {
    local_320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_320.ArrayNum = 0;
    local_320.ArrayMax = 0;
    local_330.Data = (FScriptContainerElement *)0x0;
    local_328 = 0;
    TArray<FPackedHairVertex,TSizedDefaultAllocator<32>_>::SetNum(&local_320,iVar41,Default);
    if ((int)local_328 < (int)uVar40) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar40 - (int)local_328,&local_330,(int *)&local_328,
                 (int *)((longlong)&local_328 + 4));
    }
    else {
      if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
      }
      if ((int)uVar40 < (int)local_328) {
        uVar19 = (int)local_328 - uVar40;
        if ((int)(uVar19 | uVar40) < 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar16) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        if (uVar19 != 0) {
          iVar18 = ((int)local_328 - uVar19) - uVar40;
          iVar23 = (int)local_328;
          if (iVar18 != 0) {
            memmove(local_330.Data + (longlong)(int)uVar40 * 4,
                    local_330.Data + (longlong)(int)uVar40 * 4 + (longlong)(int)uVar19 * 4,
                    (longlong)iVar18 << 2);
            iVar23 = (int)local_328;
          }
          local_328 = CONCAT44(local_328._4_4_,iVar23 - uVar19);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&local_330,iVar23 - uVar19,(int *)((longlong)&local_328 + 4));
        }
      }
    }
    local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c0.ArrayNum = 0;
    local_2c0.ArrayMax = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(&local_2c0,iVar41 + 7U >> 3,Default);
    uVar19 = FHairStrandsCommonDatas::GetAttributes((FHairStrandsCommonDatas *)param_1);
    local_348 = uVar19;
    uVar20 = FHairStrandsCommonDatas::GetAttributeFlags((FHairStrandsCommonDatas *)param_1);
    local_360 = HasHairAttributeFlags(uVar20,HasMultipleClumpIDs);
    local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.ArrayNum = 0;
    local_1c8.ArrayMax = 0;
    local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ArrayNum = 0;
    local_1d8.ArrayMax = 0;
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0;
    local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.ArrayNum = 0;
    local_250.ArrayMax = 0;
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ArrayNum = 0;
    local_1f8.ArrayMax = 0;
    local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.ArrayNum = 0;
    local_208.ArrayMax = 0;
    local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ArrayNum = 0;
    local_218.ArrayMax = 0;
    iVar23 = 2;
    if ((bool)local_360) {
      iVar23 = 8;
    }
    local_2a0 = iVar23;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
              (&local_1d8,uVar40 + 3 & 0xfffffffc,Default);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
              (&local_1e8,uVar40 * 2 + 3 & 0xfffffffc,Default);
    bVar16 = HasHairAttribute(uVar19,RootUV);
    if (bVar16) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_1c8,uVar40 * 4,Default);
    }
    bVar16 = HasHairAttribute(uVar19,ClumpID);
    if (bVar16) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
                (&local_250,iVar23 * uVar40 + 3 & 0xfffffffc,Default);
    }
    bVar16 = HasHairAttribute(uVar19,Color);
    if (bVar16) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_1f8,iVar41 * 4,Default);
    }
    bVar16 = HasHairAttribute(uVar19,Roughness);
    if (bVar16) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
                (&local_208,iVar41 + 3U & 0xfffffffc,Default);
    }
    bVar16 = HasHairAttribute(uVar19,AO);
    if (bVar16) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
                (&local_218,iVar41 + 3U & 0xfffffffc,Default);
    }
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 0;
    fVar59 = ((param_1->BoundingBox).Min.field0_0x0._s_0.X +
             (param_1->BoundingBox).Max.field0_0x0._s_0.X) * __real_3f000000;
    fVar60 = ((param_1->BoundingBox).Max.field0_0x0._s_0.Y +
             (param_1->BoundingBox).Min.field0_0x0._s_0.Y) * __real_3f000000;
    fVar61 = ((param_1->BoundingBox).Max.field0_0x0._s_0.Z +
             (param_1->BoundingBox).Min.field0_0x0._s_0.Z) * __real_3f000000;
    if (0 < (int)param_1->_padding_) {
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(&local_260,iVar41,Default);
    }
    local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_270.ArrayNum = 0;
    local_270.ArrayMax = 0;
    if (0 < (int)param_1->_padding_) {
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(&local_270,uVar40,Default);
    }
    local_338 = GetHairStrandsMaxLength(param_1);
    local_2cc = GetHairStrandsMaxRadius(param_1);
    fVar62 = __real_44ffe000;
    fVar57 = __real_437f0000;
    local_33c = (float)param_2->ArrayNum;
    uVar56 = (undefined4)__real_3ff0000000000000;
    uVar58 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar37 = (undefined4)__real_3ee4f8b580000000;
    uVar55 = (undefined4)((ulonglong)__real_3ee4f8b580000000 >> 0x20);
    local_374 = 0;
    local_300 = 0;
    local_304 = 0;
    local_308 = 0xff;
    local_278 = 0;
    local_240 = 0;
    fVar54 = __real_3f800000;
    do {
      fVar38 = local_2cc;
      uVar40 = 0;
      if ((int)local_374 < (int)param_1->_padding_) {
        uVar40 = ~local_374 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      fVar30 = *(float *)(param_1->_padding_ + (longlong)(int)local_374 * 4);
      lVar45 = (longlong)(int)fVar30;
      uVar40 = 0;
      if ((int)local_374 < (int)param_1->_padding_) {
        uVar40 = ~local_374 >> 0x1f;
      }
      local_340 = fVar30;
      if ((uVar40 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar39 = *(ushort *)(param_1->_padding_ + (longlong)(int)local_374 * 2);
      local_2d0 = (uint)uVar39;
      uVar40 = (uint)uVar39;
      if (local_308 < uVar39) {
        uVar40 = local_308;
      }
      uVar19 = local_2d0;
      if (local_2d0 < local_304) {
        uVar19 = local_304;
      }
      local_300 = local_300 + local_2d0;
      local_308 = uVar40;
      local_304 = uVar19;
      if (uVar39 != 0) {
        lVar29 = 0;
        local_280 = lVar45;
        do {
          uVar19 = ~(uint)fVar30 >> 0x1f;
          uVar40 = 0;
          if ((int)fVar30 < (int)param_1->_padding_) {
            uVar40 = uVar19;
          }
          local_298 = lVar45;
          if ((uVar40 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar7 = param_1->_padding_;
          uVar40 = 0;
          if ((int)fVar30 < (int)param_1->_padding_) {
            uVar40 = uVar19;
          }
          if ((uVar40 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          fVar53 = *(float *)(param_1->_padding_ + local_298 * 4);
          uVar40 = 0;
          if ((int)fVar30 < (int)param_1->_padding_) {
            uVar40 = uVar19;
          }
          if ((uVar40 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar34 = local_280 + lVar29;
          fVar52 = *(float *)(param_1->_padding_ + local_298 * 4);
          uVar40 = 0;
          if ((int)fVar30 < local_320.ArrayNum) {
            uVar40 = ~(uint)fVar30 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          fVar3 = *(float *)(lVar7 + 4 + lVar45 * 0xc);
          fVar4 = *(float *)(lVar7 + 8 + lVar45 * 0xc);
          pFVar33 = local_320.AllocatorInstance.Data + lVar34 * 8;
          FGenericPlatformMath::StoreHalf
                    ((ushort *)pFVar33,*(float *)(lVar7 + lVar45 * 0xc) - fVar59);
          FGenericPlatformMath::StoreHalf((ushort *)(pFVar33 + 2),fVar3 - fVar60);
          FGenericPlatformMath::StoreHalf((ushort *)(pFVar33 + 4),fVar4 - fVar61);
          fVar52 = (fVar54 / fVar38) * fVar52 * __real_427c0000;
          fVar53 = fVar53 * fVar57;
          if (__real_427c0000 <= fVar52) {
            fVar52 = __real_427c0000;
          }
          if (fVar57 <= fVar53) {
            fVar53 = fVar57;
          }
          if (fVar52 <= 0.0) {
            fVar52 = 0.0;
          }
          if (fVar53 <= 0.0) {
            fVar53 = 0.0;
          }
          pFVar33[6] = SUB41((int)fVar53,0);
          if (lVar29 == 0) {
            cVar28 = '\x01';
          }
          else {
            cVar28 = '\0';
            if ((int)fVar30 - (int)local_340 == local_2d0 - 1) {
              cVar28 = '\x02';
            }
          }
          uVar40 = (uint)fVar30 >> 3;
          uVar35 = (ulonglong)uVar40;
          pFVar33[7] = (FScriptContainerElement)
                       ((((byte)(int)fVar52 ^ (byte)pFVar33[7]) & 0x3f ^ (byte)pFVar33[7]) & 0x3f |
                       cVar28 << 6);
          uVar19 = (uint)fVar30 & 7;
          if (uVar19 == 0) {
            if ((local_2c0.ArrayNum <= (int)uVar40) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(uint *)(local_2c0.AllocatorInstance.Data + uVar35 * 4) = local_374;
          }
          else {
            if ((local_2c0.ArrayNum <= (int)uVar40) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar20 = *(uint *)(local_2c0.AllocatorInstance.Data + uVar35 * 4);
            if ((local_2c0.ArrayNum <= (int)uVar40) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar31 = 1;
            local_110[0] = uVar20 & 0xffffff;
            FVar27 = local_2c0.AllocatorInstance.Data[uVar35 * 4 + 3];
            uVar42 = (uint)(byte)FVar27;
            local_110[1] = 0;
            local_110[2] = 0;
            local_110[3] = 0;
            local_110[4] = 0;
            local_110[5] = 0;
            local_110[6] = 0;
            local_110[7] = 0;
            if (uVar19 != 0) {
              do {
                uVar22 = uVar31 - 1;
                bVar26 = (byte)uVar31;
                uVar24 = (ulonglong)uVar31;
                uVar31 = uVar31 + 1;
                local_110[uVar24] = ((byte)FVar27 >> (bVar26 & 0x1f) & 1) + local_110[uVar22];
              } while (uVar31 <= uVar19);
            }
            if (((local_110[uVar19] != local_374) && (local_110[uVar19] + 1 != local_374)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CurveIndices[LocalPointIndex] == CurveIndex || CurveIndices[LocalPointIndex]+1 == CurveIndex"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                    ,0x15d,L""), bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (local_110[uVar19] != local_374) {
              uVar42 = uVar42 | 1 << uVar19;
            }
            if ((local_2c0.ArrayNum <= (int)uVar40) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(uint *)(local_2c0.AllocatorInstance.Data + uVar35 * 4) =
                 uVar42 << 0x18 | uVar20 & 0xffffff;
            param_1 = local_198;
          }
          bVar16 = HasHairAttribute(local_348,Color);
          FVar32.Data = local_1f8.AllocatorInstance.Data;
          if (bVar16) {
            lVar45 = local_280 + lVar29;
            lVar7 = local_280 + lVar29;
            uVar40 = 0;
            if ((int)fVar30 < (int)param_1->_padding_) {
              uVar40 = ~(uint)fVar30 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar19 = (uint)(longlong)(SQRT(*(float *)(param_1->_padding_ + lVar7 * 0x10)) * fVar62);
            uVar40 = 0x7ff;
            if (uVar19 < 0x7ff) {
              uVar40 = uVar19;
            }
            uVar19 = 0;
            if (uVar40 != 0) {
              uVar19 = uVar40;
            }
            *(uint *)(FVar32.Data + lVar45 * 4) = *(uint *)(FVar32.Data + lVar45 * 4) | uVar19;
            uVar40 = 0;
            if ((int)fVar30 < (int)param_1->_padding_) {
              uVar40 = ~(uint)fVar30 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar19 = (uint)(longlong)
                           (SQRT(*(float *)(param_1->_padding_ + 4 + lVar7 * 0x10)) * fVar62);
            uVar40 = 0x7ff;
            if (uVar19 < 0x7ff) {
              uVar40 = uVar19;
            }
            uVar19 = 0;
            if (uVar40 != 0) {
              uVar19 = uVar40;
            }
            *(uint *)(FVar32.Data + lVar45 * 4) =
                 *(uint *)(FVar32.Data + lVar45 * 4) | uVar19 << 0xb;
            uVar40 = 0;
            if ((int)fVar30 < (int)param_1->_padding_) {
              uVar40 = ~(uint)fVar30 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar19 = (uint)(longlong)
                           (SQRT(*(float *)(param_1->_padding_ + 8 + lVar7 * 0x10)) *
                           __real_447fc000);
            uVar40 = 0x3ff;
            if (uVar19 < 0x3ff) {
              uVar40 = uVar19;
            }
            uVar19 = 0;
            if (uVar40 != 0) {
              uVar19 = uVar40;
            }
            *(uint *)(FVar32.Data + lVar45 * 4) =
                 *(uint *)(FVar32.Data + lVar45 * 4) | uVar19 << 0x16;
          }
          bVar16 = HasHairAttribute(local_348,Roughness);
          FVar32.Data = local_208.AllocatorInstance.Data;
          lVar45 = local_280;
          if (bVar16) {
            lVar7 = local_280 + lVar29;
            uVar40 = 0;
            if ((int)fVar30 < (int)param_1->_padding_) {
              uVar40 = ~(uint)fVar30 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar19 = (uint)(longlong)(*(float *)(param_1->_padding_ + lVar7 * 4) * fVar57);
            uVar40 = 0xff;
            if (uVar19 < 0xff) {
              uVar40 = uVar19;
            }
            FVar27 = (FScriptContainerElement)0x0;
            if (uVar40 != 0) {
              FVar27 = SUB41(uVar40,0);
            }
            FVar32.Data[lVar45 + lVar29] = FVar27;
          }
          bVar16 = HasHairAttribute(local_348,AO);
          FVar32.Data = local_218.AllocatorInstance.Data;
          if (bVar16) {
            uVar40 = 0;
            if ((int)fVar30 < (int)param_1->_padding_) {
              uVar40 = ~(uint)fVar30 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar19 = (uint)(longlong)
                           (*(float *)(param_1->_padding_ + (lVar45 + lVar29) * 4) * fVar57);
            uVar40 = 0xff;
            if (uVar19 < 0xff) {
              uVar40 = uVar19;
            }
            FVar27 = (FScriptContainerElement)0x0;
            if (uVar40 != 0) {
              FVar27 = SUB41(uVar40,0);
            }
            FVar32.Data[lVar45 + lVar29] = FVar27;
          }
          iVar41 = (int)param_1->_padding_;
          if (iVar41 != 0) {
            uVar40 = 0;
            if ((int)fVar30 < iVar41) {
              uVar40 = ~(uint)fVar30 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar37 = *(undefined4 *)(param_1->_padding_ + (lVar45 + lVar29) * 4);
            uVar40 = 0;
            if ((int)fVar30 < local_260.ArrayNum) {
              uVar40 = ~(uint)fVar30 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(undefined4 *)(local_260.AllocatorInstance.Data + (lVar45 + lVar29) * 4) = uVar37;
          }
          fVar30 = (float)((int)fVar30 + 1);
          lVar29 = lVar29 + 1;
          lVar45 = local_298 + 1;
        } while (lVar29 < (int)local_2d0);
        uVar37 = (undefined4)__real_3ee4f8b580000000;
        uVar55 = (undefined4)((ulonglong)__real_3ee4f8b580000000 >> 0x20);
        uVar56 = (undefined4)__real_3ff0000000000000;
        uVar58 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        fVar30 = local_340;
        local_298 = lVar45;
      }
      FVar32.Data = local_1e8.AllocatorInstance.Data;
      uVar40 = local_2d0;
      uVar19 = 0;
      if ((int)local_374 < (int)param_1->_padding_) {
        uVar19 = ~local_374 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FGenericPlatformMath::StoreHalf
                ((ushort *)(FVar32.Data + (ulonglong)local_374 * 2),
                 *(float *)(param_1->_padding_ + (longlong)(int)local_374 * 4));
      FVar32.Data = local_1d8.AllocatorInstance.Data;
      pTVar14 = local_2b0;
      if ((int)local_33c < 1) {
        FVar27 = (FScriptContainerElement)0x0;
      }
      else {
        uVar19 = 0;
        if ((int)local_374 < local_2b0->ArrayNum) {
          uVar19 = ~local_374 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar27 = (pTVar14->AllocatorInstance).Data[(int)local_374];
      }
      lVar45 = local_278;
      FVar32.Data[local_278] = FVar27;
      iVar41 = (int)param_1->_padding_;
      if (iVar41 != 0) {
        uVar19 = 0;
        if ((int)local_374 < iVar41) {
          uVar19 = ~local_374 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar6 = *(undefined4 *)(param_1->_padding_ + (longlong)(int)local_374 * 4);
        uVar19 = 0;
        if ((int)local_374 < local_270.ArrayNum) {
          uVar19 = ~local_374 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(undefined4 *)(local_270.AllocatorInstance.Data + (longlong)(int)local_374 * 4) = uVar6;
      }
      uVar19 = local_348;
      bVar16 = HasHairAttribute(local_348,RootUV);
      if (bVar16) {
        uVar20 = 0;
        if ((int)local_374 < (int)param_1->_padding_) {
          uVar20 = ~local_374 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        dVar12 = (double)*(float *)(param_1->_padding_ + (longlong)(int)local_374 * 8);
        dVar11 = (double)*(float *)(param_1->_padding_ + 4 + (longlong)(int)local_374 * 8);
        if (dVar12 == (double)CONCAT44(uVar58,uVar56)) {
          dVar12 = dVar12 - (double)CONCAT44(uVar55,uVar37);
        }
        if (dVar11 == (double)CONCAT44(uVar58,uVar56)) {
          dVar11 = dVar11 - (double)CONCAT44(uVar55,uVar37);
        }
        dVar48 = (double)trunc(SUB84(dVar11,0));
        dVar49 = (double)trunc(SUB84(dVar12,0));
        dVar50 = dVar49;
        if (__real_403f000000000000 <= dVar49) {
          dVar50 = __real_403f000000000000;
        }
        dVar51 = dVar48;
        if (__real_403f000000000000 <= dVar48) {
          dVar51 = __real_403f000000000000;
        }
        if (dVar50 <= 0.0) {
          dVar50 = 0.0;
        }
        if (dVar51 <= 0.0) {
          dVar51 = 0.0;
        }
        dVar11 = (dVar11 - dVar48) * __real_409ffc0000000000;
        dVar12 = (dVar12 - dVar49) * __real_409ffc0000000000;
        if (__real_409ffc0000000000 <= dVar11) {
          dVar11 = __real_409ffc0000000000;
        }
        if (dVar11 <= 0.0) {
          dVar11 = 0.0;
        }
        if (__real_409ffc0000000000 <= dVar12) {
          dVar12 = __real_409ffc0000000000;
        }
        if (dVar12 <= 0.0) {
          dVar12 = 0.0;
        }
        *(uint *)(local_1c8.AllocatorInstance.Data + lVar45 * 4) =
             (((uint)(longlong)dVar50 & 0x1f | (int)(longlong)dVar51 << 5) << 0xb |
             (uint)(longlong)dVar11 & 0x7ff) << 0xb | (uint)(longlong)dVar12 & 0x7ff;
      }
      bVar16 = HasHairAttribute(uVar19,ClumpID);
      FVar32.Data = local_250.AllocatorInstance.Data;
      if (bVar16) {
        iVar41 = (int)param_1->_padding_;
        if (local_360 == 0) {
          uVar19 = 0;
          if ((int)local_374 < iVar41) {
            uVar19 = ~local_374 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar41 = *(int *)(param_1->_padding_ + (longlong)(int)local_374 * 0xc);
          iVar23 = 0xffff;
          if (iVar41 < 0xffff) {
            iVar23 = iVar41;
          }
          uVar17 = 0;
          if (0 < iVar23) {
            uVar17 = (short)iVar23;
          }
          *(undefined2 *)(FVar32.Data + lVar45 * 2) = uVar17;
        }
        else {
          uVar19 = 0;
          if ((int)local_374 < iVar41) {
            uVar19 = ~local_374 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar45 = (longlong)(int)local_374;
          iVar41 = 0xffff;
          if (*(int *)(param_1->_padding_ + lVar45 * 0xc) < 0xffff) {
            iVar41 = *(int *)(param_1->_padding_ + lVar45 * 0xc);
          }
          iVar23 = 0;
          if (0 < iVar41) {
            iVar23 = iVar41;
          }
          *(ulonglong *)(FVar32.Data + local_240) =
               *(ulonglong *)(FVar32.Data + local_240) | (longlong)iVar23;
          uVar19 = 0;
          if ((int)local_374 < (int)param_1->_padding_) {
            uVar19 = ~local_374 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar41 = 0xffff;
          if (*(int *)(param_1->_padding_ + 4 + lVar45 * 0xc) < 0xffff) {
            iVar41 = *(int *)(param_1->_padding_ + 4 + lVar45 * 0xc);
          }
          iVar23 = 0;
          if (0 < iVar41) {
            iVar23 = iVar41;
          }
          *(ulonglong *)(FVar32.Data + local_278 * 8) =
               *(ulonglong *)(FVar32.Data + local_278 * 8) | (longlong)iVar23 << 0x10;
          uVar19 = 0;
          if ((int)local_374 < (int)param_1->_padding_) {
            uVar19 = ~local_374 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar41 = 0xffff;
          if (*(int *)(param_1->_padding_ + 8 + lVar45 * 0xc) < 0xffff) {
            iVar41 = *(int *)(param_1->_padding_ + 8 + lVar45 * 0xc);
          }
          iVar23 = 0;
          if (0 < iVar41) {
            iVar23 = iVar41;
          }
          *(ulonglong *)(FVar32.Data + local_278 * 8) =
               *(ulonglong *)(FVar32.Data + local_278 * 8) | (longlong)iVar23 << 0x20;
          lVar45 = local_278;
        }
      }
      uVar39 = (ushort)uVar40;
      if (2 < (byte)LogGroomBuilder._0_1_) {
        if (0xff < uVar39) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGroomBuilder);
        }
        if ((2 < (byte)LogGroomBuilder._0_1_) && (0xffffff < (uint)fVar30)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGroomBuilder);
        }
      }
      uVar19 = 0;
      if ((int)local_374 < (int)local_328) {
        uVar19 = ~local_374 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      fVar53 = local_2cc;
      fVar38 = local_338;
      fVar54 = __real_3f800000;
      lVar29 = (longlong)(int)local_374;
      FVar27 = (FScriptContainerElement)0xff;
      if (uVar39 < 0xff) {
        FVar27 = SUB41(uVar40,0);
      }
      local_330.Data[lVar29 * 4 + 3] = FVar27;
      fVar52 = 2.3509886e-38;
      if ((uint)fVar30 < 0xffffff) {
        fVar52 = fVar30;
      }
      local_240 = local_240 + 8;
      local_374 = local_374 + 1;
      *(uint *)(local_330.Data + lVar29 * 4) =
           *(uint *)(local_330.Data + lVar29 * 4) ^
           ((uint)fVar52 ^ *(uint *)(local_330.Data + lVar29 * 4)) & 0xffffff;
      local_278 = lVar45 + 1;
    } while (local_374 < local_2c8);
    fVar54 = (param_1->BoundingBox).Max.field0_0x0._s_0.Y -
             (param_1->BoundingBox).Min.field0_0x0._s_0.Y;
    fVar57 = (param_1->BoundingBox).Max.field0_0x0._s_0.Z -
             (param_1->BoundingBox).Min.field0_0x0._s_0.Z;
    fVar61 = (param_1->BoundingBox).Max.field0_0x0._s_0.X -
             (param_1->BoundingBox).Min.field0_0x0._s_0.X;
    local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    fVar59 = fVar54 * __real_bf000000;
    local_290.ArrayNum = 0;
    local_290.ArrayMax = 0;
    fVar60 = fVar57 * __real_bf000000;
    fVar62 = fVar61 * __real_bf000000;
    local_340 = fVar60;
    local_33c = fVar59;
    bVar16 = DoesHairStrandsSupportCompressedPosition();
    if ((bVar16) && (param_5)) {
      local_310[0] = 0;
      local_1b0 = fVar62;
      local_1ac = fVar59;
      local_1a8 = fVar60;
      local_1a4 = fVar61;
      local_1a0 = fVar54;
      local_19c = fVar57;
      FGenericPlatformMath::StoreHalf(local_310,0.0);
      local_310[1] = 0;
      FGenericPlatformMath::StoreHalf(local_310 + 1,0.0);
      local_310[2] = 0;
      FGenericPlatformMath::StoreHalf(local_310 + 2,0.0);
      local_310[3] = 0;
      uVar19 = (local_320.ArrayNum + 2U) / 3;
      TArray<FTranscodedHairPositions,TSizedDefaultAllocator<32>_>::SetNum
                (&local_290,uVar19,Default);
      fVar4 = __real_42fe0000;
      fVar3 = __real_3b808081;
      fVar52 = __real_3a83126f;
      fVar30 = __real_40400000;
      uVar40 = 0;
      if (uVar19 != 0) {
        uVar31 = 2;
        uVar20 = uStack_2a4;
        do {
          iVar41 = uVar31 - 2;
          if ((iVar41 < 0) || (local_320.ArrayNum <= iVar41)) {
            pFVar33 = (FScriptContainerElement *)local_310;
            iVar41 = local_320.ArrayNum;
          }
          else {
            uVar42 = 0;
            if (iVar41 < local_320.ArrayNum) {
              uVar42 = ~(uVar31 - 2) >> 0x1f;
            }
            if (uVar42 == 0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            pFVar33 = local_320.AllocatorInstance.Data + (longlong)iVar41 * 8;
            iVar41 = local_320.ArrayNum;
          }
          iVar23 = uVar31 - 1;
          local_238 = *(undefined8 *)pFVar33;
          if ((iVar23 < 0) || (iVar41 <= iVar23)) {
            pFVar33 = (FScriptContainerElement *)local_310;
          }
          else {
            uVar42 = 0;
            if (iVar23 < iVar41) {
              uVar42 = ~(uVar31 - 1) >> 0x1f;
            }
            if (uVar42 == 0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar41 = local_320.ArrayNum;
            }
            pFVar33 = local_320.AllocatorInstance.Data + (longlong)iVar23 * 8;
          }
          local_230 = *(ulonglong *)pFVar33;
          if (((int)uVar31 < 0) || (iVar41 <= (int)uVar31)) {
            pFVar33 = (FScriptContainerElement *)local_310;
          }
          else {
            uVar42 = 0;
            if ((int)uVar31 < iVar41) {
              uVar42 = ~uVar31 >> 0x1f;
            }
            if (uVar42 == 0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar41 = local_320.ArrayNum;
            }
            pFVar33 = local_320.AllocatorInstance.Data + (longlong)(int)uVar31 * 8;
          }
          local_228 = *(ulonglong *)pFVar33;
          if (((int)(uVar31 - 2) < 0) || (iVar41 <= (int)(uVar31 - 2))) {
            uVar37 = 0;
          }
          else {
            FVar21 = `HairStrandsBuilder::BuildBulkData'[::C]::<lambda_1>::operator()
                               (&local_1b0,&local_188,(bool *)&local_238);
            uVar37 = *(undefined4 *)CONCAT44(extraout_var,FVar21);
            iVar41 = local_320.ArrayNum;
          }
          local_2b0 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                      CONCAT44(local_2b0._4_4_,uVar37);
          if (((int)(uVar31 - 1) < 0) || (iVar41 <= (int)(uVar31 - 1))) {
            uVar37 = 0;
          }
          else {
            FVar21 = `HairStrandsBuilder::BuildBulkData'[::C]::<lambda_1>::operator()
                               (&local_1b0,(FPackedHairVertex *)(local_190 + 4),(bool *)&local_230);
            uVar37 = *(undefined4 *)CONCAT44(extraout_var_00,FVar21);
            iVar41 = local_320.ArrayNum;
          }
          local_2b0 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                      CONCAT44(uVar37,(undefined4)local_2b0);
          if (((int)uVar31 < 0) || (iVar41 <= (int)uVar31)) {
            uStack_2a8 = 0;
          }
          else {
            FVar21 = `HairStrandsBuilder::BuildBulkData'[::C]::<lambda_1>::operator()
                               (&local_1b0,(FPackedHairVertex *)local_190,(bool *)&local_228);
            uStack_2a8 = *(undefined4 *)CONCAT44(extraout_var_01,FVar21);
          }
          fVar59 = (float)local_238._6_1_ * fVar3;
          fVar60 = (float)local_228._6_1_ * fVar3;
          if (((local_238._7_1_ >> 6 == 0) && ((local_230 & 0xc000000000000000) == 0)) &&
             ((local_228 & 0xc000000000000000) == 0)) {
            fVar47 = fVar60 - fVar59;
            if (fVar60 - fVar59 <= fVar52) {
              fVar47 = fVar52;
            }
            uStack_2a4 = (((((int)(longlong)
                                  ((((float)local_230._6_1_ * fVar3 - fVar59) / fVar47) * fVar30) <<
                             6 | (uint)(longlong)(fVar60 * __real_427c0000) & 0x3f) << 6 |
                           (uint)(longlong)(fVar59 * __real_427c0000) & 0x3f) << 6 |
                          local_228._7_1_ & 0x3f) << 6 | local_230._7_1_ & 0x3f) << 6 |
                         local_238._7_1_ & 0x3f;
          }
          else {
            uStack_2a4 = ((local_228._7_1_ & 0x3f) << 6 | local_230._7_1_ & 0x3f) << 6 |
                         local_238._7_1_ & 0x3f | uVar20 & 0xfffc0000;
            bVar16 = local_238._7_1_ >> 6 != 0;
            if (!bVar16) {
              uStack_2a4 = ((int)(longlong)(fVar59 * fVar4) << 0x12 ^ uStack_2a4) & 0x1fc0000 ^
                           uStack_2a4;
            }
            if ((local_230 & 0xc000000000000000) == 0) {
              iVar41 = (int)(longlong)((float)local_230._6_1_ * fVar3 * fVar4);
              if (bVar16) {
                uStack_2a4 = uStack_2a4 ^ (iVar41 << 0x12 ^ uStack_2a4) & 0x1fc0000;
              }
              else {
                uStack_2a4 = iVar41 << 0x19 | uStack_2a4 & 0x1ffffff;
              }
              bVar16 = false;
            }
            if ((local_228 & 0xc000000000000000) == 0) {
              iVar41 = (int)(longlong)(fVar60 * fVar4);
              if (bVar16) {
                uStack_2a4 = uStack_2a4 ^ (iVar41 << 0x12 ^ uStack_2a4) & 0x1fc0000;
              }
              else {
                uStack_2a4 = iVar41 << 0x19 | uStack_2a4 & 0x1ffffff;
              }
            }
          }
          uVar20 = uStack_2a4;
          uVar42 = 0;
          if ((int)uVar40 < local_290.ArrayNum) {
            uVar42 = ~uVar40 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar31 = uVar31 + 3;
          lVar45 = (longlong)(int)uVar40;
          uVar40 = uVar40 + 1;
          *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)
           (local_290.AllocatorInstance.Data + lVar45 * 0x10) = local_2b0;
          *(ulonglong *)(local_290.AllocatorInstance.Data + lVar45 * 0x10 + 8) =
               CONCAT44(uStack_2a4,uStack_2a8);
          fVar59 = local_33c;
          fVar60 = local_340;
        } while (uVar40 < uVar19);
      }
    }
    pFVar43 = local_2d8;
    uVar19 = 0;
    uVar5 = *(undefined8 *)((longlong)&(param_1->BoundingBox).Min.field0_0x0 + 4);
    (local_2d8->Header).BoundingBox.Min.field0_0x0._s_0.X =
         (double)(param_1->BoundingBox).Min.field0_0x0._s_0.X;
    (local_2d8->Header).BoundingBox.Min.field0_0x0._s_0.Y = (double)(float)uVar5;
    (local_2d8->Header).BoundingBox.Min.field0_0x0._s_0.Z =
         (double)(float)((ulonglong)uVar5 >> 0x20);
    uVar5 = *(undefined8 *)((longlong)&(param_1->BoundingBox).Max.field0_0x0 + 4);
    (local_2d8->Header).BoundingBox.Max.field0_0x0._s_0.X =
         (double)(param_1->BoundingBox).Max.field0_0x0._s_0.X;
    (local_2d8->Header).BoundingBox.Max.field0_0x0._s_0.Y = (double)(float)uVar5;
    (local_2d8->Header).BoundingBox.Max.field0_0x0._s_0.Z =
         (double)(float)((ulonglong)uVar5 >> 0x20);
    (local_2d8->Header).BoundingBox.IsValid = '\x01';
    (local_2d8->Header).CurveCount = (uint)param_1->_padding_;
    (local_2d8->Header).PointCount = (uint)param_1->_padding_;
    (local_2d8->Header).SourceCurveCount = (uint)param_1->_padding_;
    lVar45 = param_1->_padding_;
    (local_2d8->Header).MinPointPerCurve = local_308;
    (local_2d8->Header).SourcePointCount = (uint)lVar45;
    (local_2d8->Header).MaxPointPerCurve = local_304;
    (local_2d8->Header).AvgPointPerCurve = local_300 / local_2c8;
    (local_2d8->Header).MaxLength = fVar38;
    (local_2d8->Header).MaxRadius = fVar53;
    (local_2d8->Header).Flags = 1;
    uVar40 = FHairStrandsCommonDatas::GetAttributes((FHairStrandsCommonDatas *)param_1);
    (pFVar43->Header).ImportedAttributes = uVar40;
    uVar40 = FHairStrandsCommonDatas::GetAttributeFlags((FHairStrandsCommonDatas *)param_1);
    (pFVar43->Header).ImportedAttributeFlags = uVar40;
    *(undefined8 *)&(pFVar43->Header).Transcoding.PositionOffset.field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (pFVar43->Header).Transcoding.PositionOffset.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&(pFVar43->Header).Transcoding.PositionScale.field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (pFVar43->Header).Transcoding.PositionScale.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if ((param_1->_padding_ & 2) != 0) {
      puVar1 = &(pFVar43->Header).Flags;
      *puVar1 = *puVar1 | 8;
    }
    if ((param_1->_padding_ & 1) != 0) {
      puVar1 = &(pFVar43->Header).Flags;
      *puVar1 = *puVar1 | 0x10;
    }
    if ((param_1->_padding_ & 0x10) != 0) {
      puVar1 = &(pFVar43->Header).Flags;
      *puVar1 = *puVar1 | 0x80;
    }
    if ((param_1->_padding_ & 8) != 0) {
      puVar1 = &(pFVar43->Header).Flags;
      *puVar1 = *puVar1 | 0x100;
    }
    fVar38 = (float)local_290.ArrayNum;
    local_338 = (float)local_290.ArrayNum;
    if (0 < local_290.ArrayNum) {
      puVar1 = &(pFVar43->Header).Flags;
      *puVar1 = *puVar1 | 4;
      *(ulonglong *)&(pFVar43->Header).Transcoding.PositionOffset.field0_0x0 =
           CONCAT44(fVar59,fVar62);
      *(ulonglong *)&(pFVar43->Header).Transcoding.PositionScale.field0_0x0 =
           CONCAT44(fVar54,fVar61);
      (pFVar43->Header).Transcoding.PositionScale.field0_0x0._s_0.Z = fVar57;
      (pFVar43->Header).Transcoding.PositionOffset.field0_0x0._s_0.Z = fVar60;
    }
    iVar41 = local_1c8.ArrayNum + 3 + local_250.ArrayNum + local_1e8.ArrayNum + local_1d8.ArrayNum;
    uVar40 = (int)(iVar41 + (iVar41 >> 0x1f & 3U)) >> 2;
    local_374 = 0;
    local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_370.ArrayNum = 0;
    local_370.ArrayMax = 0;
    if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
    }
    if (0 < (int)uVar40) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar40,&local_370.AllocatorInstance,0,&local_370.ArrayMax);
    }
    (pFVar43->Header).CurveAttributeOffsets[0] = 0xffffffff;
    (pFVar43->Header).CurveAttributeOffsets[1] = 0xffffffff;
    uVar31 = local_2c8 + 0x3ff >> 10;
    (pFVar43->Header).CurveAttributeOffsets[2] = 0xffffffff;
    (pFVar43->Header).CurveAttributeOffsets[3] = 0xffffffff;
    (pFVar43->Header).CurveAttributeOffsets[4] = 0xffffffff;
    uVar40 = local_348;
    iVar41 = local_2a0;
    uVar20 = uVar19;
    if (local_2c8 + 0x3ff >> 10 != 0) {
      do {
        bVar16 = HasHairAttribute(uVar40,RootUV);
        if (bVar16) {
          uVar22 = (pFVar43->Header).CurveCount + uVar19 * -0x400;
          uVar42 = 0x400;
          if (uVar22 < 0x400) {
            uVar42 = uVar22;
          }
          local_180.DataPtr = (uint *)(local_1c8.AllocatorInstance.Data + (uVar19 << 0xc));
          local_180.ArrayNum = uVar42 & 0x3fffffff;
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::
          Append<TArrayView<unsigned_int_const_,int>_>(&local_370,&local_180);
          if ((1 < uVar31) && (uVar19 == uVar31 - 1)) {
            uVar22 = 0;
            uVar42 = 0x400 - uVar42 & 0x3fffffff;
            uVar20 = local_374;
            if (uVar42 != 0) {
              do {
                local_2fc = 0;
                if (((local_370.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2fc) &&
                    ((FScriptContainerElement *)&local_2fc <
                     local_370.AllocatorInstance.Data + (longlong)local_370.ArrayMax * 4)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                iVar41 = local_370.ArrayNum;
                if (local_370.ArrayNum == local_370.ArrayMax) {
                  iVar41 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_370.AllocatorInstance,&local_370.ArrayMax);
                }
                uVar22 = uVar22 + 1;
                local_370.ArrayNum = iVar41 + 1;
                *(undefined4 *)(local_370.AllocatorInstance.Data + (longlong)iVar41 * 4) = local_2fc
                ;
                iVar41 = local_2a0;
              } while (uVar22 < uVar42);
            }
          }
          if (uVar19 == 0) {
            (pFVar43->Header).CurveAttributeOffsets[0] = uVar20;
            local_374 = local_370.ArrayNum * 4;
            uVar20 = local_374;
          }
        }
        uVar22 = (pFVar43->Header).CurveCount + uVar19 * -0x400;
        uVar42 = 0x400;
        if (uVar22 < 0x400) {
          uVar42 = uVar22;
        }
        local_170.DataPtr = (uint *)(local_1d8.AllocatorInstance.Data + uVar19 * 0x400);
        local_170.ArrayNum = uVar42 + 3 >> 2;
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::
        Append<TArrayView<unsigned_int_const_,int>_>(&local_370,&local_170);
        if (((1 < uVar31) && (uVar19 == uVar31 - 1)) && (0x403 - uVar42 >> 2 != 0)) {
          uVar35 = (ulonglong)(0x403 - uVar42 >> 2);
          do {
            local_2f8 = 0;
            if (((local_370.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2f8) &&
                ((FScriptContainerElement *)&local_2f8 <
                 local_370.AllocatorInstance.Data + (longlong)local_370.ArrayMax * 4)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar23 = local_370.ArrayNum;
            if (local_370.ArrayNum == local_370.ArrayMax) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_370.AllocatorInstance,&local_370.ArrayMax);
            }
            local_370.ArrayNum = iVar23 + 1;
            *(undefined4 *)(local_370.AllocatorInstance.Data + (longlong)iVar23 * 4) = local_2f8;
            uVar35 = uVar35 - 1;
            uVar40 = local_348;
          } while (uVar35 != 0);
        }
        if (uVar19 == 0) {
          (pFVar43->Header).CurveAttributeOffsets[1] = uVar20;
          local_374 = local_370.ArrayNum * 4;
          uVar20 = local_374;
        }
        uVar22 = (pFVar43->Header).CurveCount + uVar19 * -0x400;
        local_160.DataPtr = (uint *)(local_1e8.AllocatorInstance.Data + uVar19 * 0x800);
        uVar42 = 0x400;
        if (uVar22 < 0x400) {
          uVar42 = uVar22;
        }
        local_160.ArrayNum = uVar42 * 2 + 3 >> 2;
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::
        Append<TArrayView<unsigned_int_const_,int>_>(&local_370,&local_160);
        if (((1 < uVar31) && (uVar19 == uVar31 - 1)) &&
           (uVar42 = uVar42 * -2 + 0x803, uVar42 >> 2 != 0)) {
          uVar35 = (ulonglong)(uVar42 >> 2);
          do {
            local_2f4 = 0;
            if (((local_370.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2f4) &&
                ((FScriptContainerElement *)&local_2f4 <
                 local_370.AllocatorInstance.Data + (longlong)local_370.ArrayMax * 4)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar23 = local_370.ArrayNum;
            if (local_370.ArrayNum == local_370.ArrayMax) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_370.AllocatorInstance,&local_370.ArrayMax);
            }
            local_370.ArrayNum = iVar23 + 1;
            *(undefined4 *)(local_370.AllocatorInstance.Data + (longlong)iVar23 * 4) = local_2f4;
            uVar35 = uVar35 - 1;
            uVar40 = local_348;
          } while (uVar35 != 0);
        }
        if (uVar19 == 0) {
          (pFVar43->Header).CurveAttributeOffsets[2] = uVar20;
          local_374 = local_370.ArrayNum * 4;
          uVar20 = local_374;
        }
        bVar16 = HasHairAttribute(uVar40,ClumpID);
        if (bVar16) {
          uVar22 = (pFVar43->Header).CurveCount + uVar19 * -0x400;
          uVar42 = 0x400;
          if (uVar22 < 0x400) {
            uVar42 = uVar22;
          }
          local_150.DataPtr = (uint *)(local_250.AllocatorInstance.Data + uVar19 * 0x400 * iVar41);
          local_150.ArrayNum = uVar42 * iVar41 + 3 >> 2;
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::
          Append<TArrayView<unsigned_int_const_,int>_>(&local_370,&local_150);
          if (((1 < uVar31) && (uVar19 == uVar31 - 1)) &&
             (uVar42 = (0x400 - uVar42) * iVar41 + 3, uVar42 >> 2 != 0)) {
            uVar35 = (ulonglong)(uVar42 >> 2);
            do {
              local_2f0 = 0;
              if (((local_370.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2f0) &&
                  ((FScriptContainerElement *)&local_2f0 <
                   local_370.AllocatorInstance.Data + (longlong)local_370.ArrayMax * 4)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar23 = local_370.ArrayNum;
              if (local_370.ArrayNum == local_370.ArrayMax) {
                iVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_370.AllocatorInstance,&local_370.ArrayMax);
              }
              local_370.ArrayNum = iVar23 + 1;
              *(undefined4 *)(local_370.AllocatorInstance.Data + (longlong)iVar23 * 4) = local_2f0;
              uVar35 = uVar35 - 1;
              uVar40 = local_348;
            } while (uVar35 != 0);
          }
          if (uVar19 == 0) {
            (pFVar43->Header).CurveAttributeOffsets[(ulonglong)local_360 + 3] = uVar20;
            local_374 = local_370.ArrayNum * 4;
            uVar20 = local_374;
          }
        }
        uVar19 = uVar19 + 1;
        fVar38 = local_338;
      } while (uVar19 < uVar31);
    }
    iVar41 = local_370.ArrayNum;
    FBulkData::Lock((FBulkData *)&(pFVar43->Data).CurveAttributes.Data,2);
    pvVar25 = FBulkData::Realloc((FBulkData *)&(pFVar43->Data).CurveAttributes.Data,
                                 (ulonglong)(uint)(iVar41 * 4),1);
    memcpy(pvVar25,local_370.AllocatorInstance.Data,(ulonglong)(uint)(iVar41 * 4));
    FBulkData::Unlock((FBulkData *)&(pFVar43->Data).CurveAttributes.Data);
    if (local_370.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.AllocatorInstance.Data);
    }
    uVar40 = 0;
    uVar20 = 0;
    local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar41 = local_1f8.ArrayNum + 3 + local_218.ArrayNum + local_208.ArrayNum;
    local_358.ArrayNum = 0;
    local_358.ArrayMax = 0;
    uVar19 = (int)(iVar41 + (iVar41 >> 0x1f & 3U)) >> 2;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if (0 < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar19,&local_358.AllocatorInstance,0,&local_358.ArrayMax);
    }
    uVar19 = local_348;
    uVar31 = local_220 + 0x1fffU >> 0xd;
    (local_2d8->Header).PointAttributeOffsets[0] = 0xffffffff;
    (local_2d8->Header).PointAttributeOffsets[1] = 0xffffffff;
    (local_2d8->Header).PointAttributeOffsets[2] = 0xffffffff;
    pFVar43 = local_2d8;
    if (local_220 + 0x1fffU >> 0xd != 0) {
      do {
        bVar16 = HasHairAttribute(uVar19,Color);
        if (bVar16) {
          uVar22 = (pFVar43->Header).PointCount + uVar20 * -0x2000;
          uVar42 = 0x2000;
          if (uVar22 < 0x2000) {
            uVar42 = uVar22;
          }
          local_140.DataPtr = (uint *)(local_1f8.AllocatorInstance.Data + (uVar20 << 0xf));
          local_140.ArrayNum = uVar42 & 0x3fffffff;
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::
          Append<TArrayView<unsigned_int_const_,int>_>(&local_358,&local_140);
          if (((1 < uVar31) && (uVar20 == uVar31 - 1)) &&
             (uVar22 = 0x2000 - uVar42 & 0x3fffffff, pFVar43 = local_2d8, uVar42 = 0, uVar22 != 0))
          {
            do {
              local_2ec = 0;
              if (((local_358.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2ec) &&
                  ((FScriptContainerElement *)&local_2ec <
                   local_358.AllocatorInstance.Data + (longlong)local_358.ArrayMax * 4)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar41 = local_358.ArrayNum;
              if (local_358.ArrayNum == local_358.ArrayMax) {
                iVar41 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_358.AllocatorInstance,&local_358.ArrayMax);
              }
              uVar42 = uVar42 + 1;
              local_358.ArrayNum = iVar41 + 1;
              *(undefined4 *)(local_358.AllocatorInstance.Data + (longlong)iVar41 * 4) = local_2ec;
              pFVar43 = local_2d8;
            } while (uVar42 < uVar22);
          }
          if (uVar20 == 0) {
            (pFVar43->Header).PointAttributeOffsets[0] = uVar40;
            uVar40 = local_358.ArrayNum * 4;
          }
        }
        bVar16 = HasHairAttribute(uVar19,Roughness);
        if (bVar16) {
          uVar22 = (pFVar43->Header).PointCount + uVar20 * -0x2000;
          uVar42 = 0x2000;
          if (uVar22 < 0x2000) {
            uVar42 = uVar22;
          }
          local_130.DataPtr = (uint *)(local_208.AllocatorInstance.Data + uVar20 * 0x2000);
          local_130.ArrayNum = uVar42 + 3 >> 2;
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::
          Append<TArrayView<unsigned_int_const_,int>_>(&local_358,&local_130);
          if (((1 < uVar31) && (uVar20 == uVar31 - 1)) && (0x2003 - uVar42 >> 2 != 0)) {
            uVar35 = (ulonglong)(0x2003 - uVar42 >> 2);
            do {
              local_2e8 = 0;
              if (((local_358.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2e8) &&
                  ((FScriptContainerElement *)&local_2e8 <
                   local_358.AllocatorInstance.Data + (longlong)local_358.ArrayMax * 4)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar41 = local_358.ArrayNum;
              if (local_358.ArrayNum == local_358.ArrayMax) {
                iVar41 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_358.AllocatorInstance,&local_358.ArrayMax);
              }
              local_358.ArrayNum = iVar41 + 1;
              *(undefined4 *)(local_358.AllocatorInstance.Data + (longlong)iVar41 * 4) = local_2e8;
              uVar35 = uVar35 - 1;
            } while (uVar35 != 0);
          }
          if (uVar20 == 0) {
            (pFVar43->Header).PointAttributeOffsets[1] = uVar40;
            uVar40 = local_358.ArrayNum * 4;
          }
        }
        bVar16 = HasHairAttribute(uVar19,AO);
        if (bVar16) {
          uVar22 = (pFVar43->Header).PointCount + uVar20 * -0x2000;
          uVar42 = 0x2000;
          if (uVar22 < 0x2000) {
            uVar42 = uVar22;
          }
          local_120.DataPtr = (uint *)(local_218.AllocatorInstance.Data + uVar20 * 0x2000);
          local_120.ArrayNum = uVar42 + 3 >> 2;
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::
          Append<TArrayView<unsigned_int_const_,int>_>(&local_358,&local_120);
          if (((1 < uVar31) && (uVar20 == uVar31 - 1)) && (0x2003 - uVar42 >> 2 != 0)) {
            uVar35 = (ulonglong)(0x2003 - uVar42 >> 2);
            do {
              local_2e4 = 0;
              if (((local_358.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2e4) &&
                  ((FScriptContainerElement *)&local_2e4 <
                   local_358.AllocatorInstance.Data + (longlong)local_358.ArrayMax * 4)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar41 = local_358.ArrayNum;
              if (local_358.ArrayNum == local_358.ArrayMax) {
                iVar41 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_358.AllocatorInstance,&local_358.ArrayMax);
              }
              local_358.ArrayNum = iVar41 + 1;
              *(undefined4 *)(local_358.AllocatorInstance.Data + (longlong)iVar41 * 4) = local_2e4;
              uVar35 = uVar35 - 1;
            } while (uVar35 != 0);
          }
          if (uVar20 == 0) {
            (pFVar43->Header).PointAttributeOffsets[2] = uVar40;
            uVar40 = local_358.ArrayNum * 4;
          }
        }
        uVar20 = uVar20 + 1;
        fVar38 = local_338;
      } while (uVar20 < uVar31);
    }
    iVar41 = local_358.ArrayNum;
    if (0 < local_358.ArrayNum) {
      puVar1 = &(pFVar43->Header).Flags;
      *puVar1 = *puVar1 | 2;
      FBulkData::Lock((FBulkData *)&(pFVar43->Data).PointAttributes.Data,2);
      pvVar25 = FBulkData::Realloc((FBulkData *)&(pFVar43->Data).PointAttributes.Data,
                                   (ulonglong)(uint)(iVar41 * 4),1);
      memcpy(pvVar25,local_358.AllocatorInstance.Data,(ulonglong)(uint)(iVar41 * 4));
      FBulkData::Unlock((FBulkData *)&(pFVar43->Data).PointAttributes.Data);
    }
    if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.AllocatorInstance.Data);
    }
    if ((int)fVar38 < 1) {
      iVar41 = local_320.ArrayNum;
      this = (FBulkData *)&(pFVar43->Data).Positions.Data;
      FBulkData::Lock(this,2);
      _Size = (size_t)(uint)(iVar41 * 8);
      pvVar25 = FBulkData::Realloc(this,(ulonglong)(uint)(iVar41 * 8),1);
      FVar32.Data = local_320.AllocatorInstance.Data;
    }
    else {
      iVar41 = local_290.ArrayNum;
      this = (FBulkData *)&(pFVar43->Data).TranscodedPositions.Data;
      FBulkData::Lock(this,2);
      _Size = (size_t)(uint)(iVar41 << 4);
      pvVar25 = FBulkData::Realloc(this,_Size,1);
      FVar32.Data = local_290.AllocatorInstance.Data;
    }
    memcpy(pvVar25,FVar32.Data,_Size);
    FBulkData::Unlock(this);
    iVar41 = (int)local_328;
    FBulkData::Lock((FBulkData *)&(pFVar43->Data).Curves.Data,2);
    pvVar25 = FBulkData::Realloc((FBulkData *)&(pFVar43->Data).Curves.Data,
                                 (ulonglong)(uint)(iVar41 * 4),1);
    memcpy(pvVar25,local_330.Data,(ulonglong)(uint)(iVar41 * 4));
    FBulkData::Unlock((FBulkData *)&(pFVar43->Data).Curves.Data);
    iVar41 = local_2c0.ArrayNum;
    FBulkData::Lock((FBulkData *)&(pFVar43->Data).PointToCurve.Data,2);
    pvVar25 = FBulkData::Realloc((FBulkData *)&(pFVar43->Data).PointToCurve.Data,
                                 (ulonglong)(uint)(iVar41 * 4),1);
    memcpy(pvVar25,local_2c0.AllocatorInstance.Data,(ulonglong)(uint)(iVar41 * 4));
    FBulkData::Unlock((FBulkData *)&(pFVar43->Data).PointToCurve.Data);
    iVar41 = local_260.ArrayNum;
    if (local_260.ArrayNum != 0) {
      puVar1 = &(pFVar43->Header).Flags;
      *puVar1 = *puVar1 | 0x20;
      FBulkData::Lock((FBulkData *)&(pFVar43->Data).PointMapping.Data,2);
      pvVar25 = FBulkData::Realloc((FBulkData *)&(pFVar43->Data).PointMapping.Data,
                                   (ulonglong)(uint)(iVar41 * 4),1);
      memcpy(pvVar25,local_260.AllocatorInstance.Data,(ulonglong)(uint)(iVar41 * 4));
      FBulkData::Unlock((FBulkData *)&(pFVar43->Data).PointMapping.Data);
    }
    iVar41 = local_270.ArrayNum;
    if (local_270.ArrayNum != 0) {
      puVar1 = &(pFVar43->Header).Flags;
      *puVar1 = *puVar1 | 0x40;
      FBulkData::Lock((FBulkData *)&(pFVar43->Data).CurveMapping.Data,2);
      pvVar25 = FBulkData::Realloc((FBulkData *)&(pFVar43->Data).CurveMapping.Data,
                                   (ulonglong)(uint)(iVar41 * 4),1);
      memcpy(pvVar25,local_270.AllocatorInstance.Data,(ulonglong)(uint)(iVar41 * 4));
      FBulkData::Unlock((FBulkData *)&(pFVar43->Data).CurveMapping.Data);
    }
    uVar35 = local_328 & 0xffffffff;
    pTVar2 = &(pFVar43->Header).CurveToPointCount;
    if ((int)local_328 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar35);
    }
    if ((pFVar43->Header).CurveToPointCount.ArrayMax < (int)local_328) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_328,&pTVar2->AllocatorInstance,
                 (pFVar43->Header).CurveToPointCount.ArrayNum,
                 &(pFVar43->Header).CurveToPointCount.ArrayMax);
      uVar35 = local_328 & 0xffffffff;
    }
    iVar41 = (int)uVar35;
    pFVar33 = local_330.Data + (longlong)iVar41 * 4;
    FVar32.Data = local_330.Data;
    while( true ) {
      if ((int)uVar35 != iVar41) {
        local_344 = 0;
        `TCheckedPointerIterator<FPackedHairCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_344);
      }
      pFVar13 = local_2d8;
      if (FVar32.Data == pFVar33) break;
      local_2e0[0] = (*(uint *)FVar32.Data >> 0x18) + (*(uint *)FVar32.Data & 0xffffff);
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)local_2e0) &&
          ((FScriptContainerElement *)local_2e0 <
           pFVar8 + (longlong)(pFVar43->Header).CurveToPointCount.ArrayMax * 4)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar23 = (pFVar43->Header).CurveToPointCount.ArrayNum;
      if (iVar23 == (pFVar43->Header).CurveToPointCount.ArrayMax) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,
                            &(pFVar43->Header).CurveToPointCount.ArrayMax);
      }
      FVar32.Data = FVar32.Data + 4;
      (pFVar43->Header).CurveToPointCount.ArrayNum = iVar23 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_2e0[0];
      uVar35 = local_328 & 0xffffffff;
    }
    pTVar36 = &(local_2d8->Header).CoverageScales;
    uVar19 = local_1b8->ArrayNum;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if ((local_2d8->Header).CoverageScales.ArrayMax < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar19,&pTVar36->AllocatorInstance,(local_2d8->Header).CoverageScales.ArrayNum,
                 &(local_2d8->Header).CoverageScales.ArrayMax);
    }
    pTVar15 = local_1b8;
    pFVar44 = (local_1b8->AllocatorInstance).Data;
    iVar41 = local_1b8->ArrayNum;
    pFVar33 = pFVar44 + 4;
    pFVar8 = pFVar44 + (longlong)iVar41 * 8;
    while( true ) {
      if (pTVar15->ArrayNum != iVar41) {
        local_343[0] = 0;
        `TCheckedPointerIterator<GroomBuilder_Voxelization::FCoverageScale_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_343);
      }
      if (pFVar44 == pFVar8) break;
      pFVar9 = (pTVar36->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar33) &&
          (pFVar33 < pFVar9 + (longlong)(pFVar13->Header).CoverageScales.ArrayMax * 4)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar23 = (pFVar13->Header).CoverageScales.ArrayNum;
      if (iVar23 == (pFVar13->Header).CoverageScales.ArrayMax) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar36->AllocatorInstance,
                            &(pFVar13->Header).CoverageScales.ArrayMax);
      }
      (pFVar13->Header).CoverageScales.ArrayNum = iVar23 + 1;
      pFVar44 = pFVar44 + 8;
      uVar37 = *(undefined4 *)pFVar33;
      pFVar33 = pFVar33 + 8;
      *(undefined4 *)((pTVar36->AllocatorInstance).Data + (longlong)iVar23 * 4) = uVar37;
    }
    (local_2d8->Header).Strides.PositionStride = 8;
    (local_2d8->Header).Strides.CurveStride = 4;
    (local_2d8->Header).Strides.PointToCurveChunkStride = 4;
    (local_2d8->Header).Strides.PointToCurveChunkElementCount = 8;
    (local_2d8->Header).Strides.CurveAttributeChunkStride = local_374;
    (local_2d8->Header).Strides.PointAttributeChunkStride = uVar40;
    (local_2d8->Header).Strides.CurveAttributeChunkElementCount = 0x400;
    (local_2d8->Header).Strides.PointAttributeChunkElementCount = 0x2000;
    (local_2d8->Header).Strides.TranscodedPositionChunkElementCount = 3;
    (local_2d8->Header).Strides.TranscodedPositionChunkStride = 0x10;
    (local_2d8->Header).Strides.CurveMappingStride = 4;
    (local_2d8->Header).Strides.PointMappingStride = 4;
    if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.AllocatorInstance.Data);
    }
    if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.AllocatorInstance.Data);
    }
    if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.AllocatorInstance.Data);
    }
    if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.AllocatorInstance.Data);
    }
    if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.AllocatorInstance.Data);
    }
    if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.AllocatorInstance.Data);
    }
    if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.AllocatorInstance.Data);
    }
    if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
    }
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
    if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
    }
    if (local_330.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data);
    }
    if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.AllocatorInstance.Data);
    }
  }
  if (bVar46) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BuildClusterBulkData @ 14dffbf30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
GroomBuilder_Cluster::BuildClusterBulkData
          (FHairStrandsClusterData *param_1,FHairStrandsClusterBulkData *param_2)

{
  FHeader *pFVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_a8 [7];
  
  FHairStrandsClusterBulkData::Reset(param_2);
  (param_2->Header).ClusterCount = param_1->ClusterCount;
  pFVar1 = &param_2->Header;
  (param_2->Header).ClusterScale = param_1->ClusterScale;
  (param_2->Header).PointCount = param_1->PointCount;
  (param_2->Header).CurveCount = param_1->CurveCount;
  if (pFVar1 != (FHeader *)&param_1->LODInfos) {
    iVar3 = (param_1->LODInfos).ArrayNum;
    piVar2 = &(param_2->Header).LODInfos.ArrayMax;
    pFVar14 = (param_1->LODInfos).AllocatorInstance.Data;
    iVar7 = *piVar2;
    (param_2->Header).LODInfos.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar7 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar3,iVar7,(ForAnyElementType *)pFVar1,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pFVar1->LODInfos).AllocatorInstance.Data,pFVar14,(longlong)iVar3 * 0x14);
      }
    }
  }
  (param_2->Header).Strides.PackedClusterInfoStride = 0x10;
  (param_2->Header).Strides.CurveToClusterIdStride = 4;
  (param_2->Header).Strides.PointLODStride = 4;
  if (((param_2->Header).ClusterCount != (param_1->ClusterInfos).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Out.Header.ClusterCount == uint32(In.ClusterInfos.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xf3e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((param_2->Header).CurveCount != (param_1->CurveToClusterIds).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Out.Header.CurveCount == uint32(In.CurveToClusterIds.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xf3f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = (param_1->CurveToClusterIds).ArrayNum << 2;
  FBulkData::Lock((FBulkData *)&(param_2->Data).CurveToClusterIds.Data,2);
  pvVar8 = FBulkData::Realloc((FBulkData *)&(param_2->Data).CurveToClusterIds.Data,(ulonglong)uVar12
                              ,1);
  memcpy(pvVar8,(param_1->CurveToClusterIds).AllocatorInstance.Data,(ulonglong)uVar12);
  FBulkData::Unlock((FBulkData *)&(param_2->Data).CurveToClusterIds.Data);
  local_a8[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8[0].ArrayNum = 0;
  local_a8[0].ArrayMax = 0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
            (local_a8,(param_1->PointLODs).ArrayNum + 7U >> 3,Default);
  iVar3 = local_a8[0].ArrayNum;
  uVar12 = 0;
  if (local_a8[0].ArrayNum != 0) {
    uVar15 = 2;
    do {
      iVar7 = (param_1->PointLODs).ArrayNum;
      uVar13 = iVar7 - 1;
      if (uVar15 - 2 < uVar13) {
        uVar13 = uVar15 - 2;
      }
      uVar17 = 0;
      if ((int)uVar13 < iVar7) {
        uVar17 = ~uVar13 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (param_1->PointLODs).ArrayNum;
      uVar17 = iVar7 - 1;
      uVar13 = *(uint *)((param_1->PointLODs).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
      if (uVar15 - 1 < uVar17) {
        uVar17 = uVar15 - 1;
      }
      uVar18 = 0;
      if ((int)uVar17 < iVar7) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar17 = *(uint *)((param_1->PointLODs).AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
      iVar7 = (param_1->PointLODs).ArrayNum;
      uVar18 = iVar7 - 1;
      if (uVar15 < uVar18) {
        uVar18 = uVar15;
      }
      uVar19 = 0;
      if ((int)uVar18 < iVar7) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar18 = *(uint *)((param_1->PointLODs).AllocatorInstance.Data + (longlong)(int)uVar18 * 4);
      iVar7 = (param_1->PointLODs).ArrayNum;
      uVar19 = iVar7 - 1;
      if (uVar15 + 1 < uVar19) {
        uVar19 = uVar15 + 1;
      }
      uVar20 = 0;
      if ((int)uVar19 < iVar7) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar19 = *(uint *)((param_1->PointLODs).AllocatorInstance.Data + (longlong)(int)uVar19 * 4);
      iVar7 = (param_1->PointLODs).ArrayNum;
      uVar20 = iVar7 - 1;
      if (uVar15 + 2 < uVar20) {
        uVar20 = uVar15 + 2;
      }
      uVar21 = 0;
      if ((int)uVar20 < iVar7) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar20 = *(uint *)((param_1->PointLODs).AllocatorInstance.Data + (longlong)(int)uVar20 * 4);
      iVar7 = (param_1->PointLODs).ArrayNum;
      uVar21 = iVar7 - 1;
      if (uVar15 + 3 < uVar21) {
        uVar21 = uVar15 + 3;
      }
      uVar22 = 0;
      if ((int)uVar21 < iVar7) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar21 = *(uint *)((param_1->PointLODs).AllocatorInstance.Data + (longlong)(int)uVar21 * 4);
      iVar7 = (param_1->PointLODs).ArrayNum;
      uVar22 = iVar7 - 1;
      if (uVar15 + 4 < uVar22) {
        uVar22 = uVar15 + 4;
      }
      uVar23 = 0;
      if ((int)uVar22 < iVar7) {
        uVar23 = ~uVar22 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar22 = *(uint *)((param_1->PointLODs).AllocatorInstance.Data + (longlong)(int)uVar22 * 4);
      iVar7 = (param_1->PointLODs).ArrayNum;
      uVar23 = iVar7 - 1;
      if (uVar15 + 5 < uVar23) {
        uVar23 = uVar15 + 5;
      }
      uVar6 = 0;
      if ((int)uVar23 < iVar7) {
        uVar6 = ~uVar23 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)((param_1->PointLODs).AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
      uVar23 = 0;
      if ((int)uVar12 < local_a8[0].ArrayNum) {
        uVar23 = ~uVar12 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar15 = uVar15 + 8;
      lVar10 = (longlong)(int)uVar12;
      uVar12 = uVar12 + 1;
      *(uint *)(local_a8[0].AllocatorInstance.Data + lVar10 * 4) =
           uVar13 & 0xf | (uVar17 & 0xf) << 4 | (uVar18 & 0xf) << 8 | (uVar19 & 0xf) << 0xc |
           (uVar20 & 0xf) << 0x10 | (uVar21 & 0xf) << 0x14 | (uVar22 & 0xf) << 0x18 | iVar7 << 0x1c;
    } while (uVar12 < (uint)iVar3);
  }
  iVar3 = local_a8[0].ArrayNum;
  FBulkData::Lock((FBulkData *)&(param_2->Data).PointLODs.Data,2);
  pvVar8 = FBulkData::Realloc((FBulkData *)&(param_2->Data).PointLODs.Data,
                              (ulonglong)(uint)(iVar3 * 4),1);
  memcpy(pvVar8,local_a8[0].AllocatorInstance.Data,(ulonglong)(uint)(iVar3 * 4));
  FBulkData::Unlock((FBulkData *)&(param_2->Data).PointLODs.Data);
  if (((param_1->ClusterInfos).ArrayNum != (param_2->Header).ClusterCount) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("uint32(In.ClusterInfos.Num()) == Out.Header.ClusterCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xf5a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((param_1->CurveToClusterIds).ArrayNum != (param_2->Header).CurveCount) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("uint32(In.CurveToClusterIds.Num()) == Out.Header.CurveCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xf5b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = (param_1->ClusterInfos).ArrayNum;
  fVar30 = 0.0;
  fVar31 = 0.0;
  pFVar14 = (param_1->ClusterInfos).AllocatorInstance.Data;
  pFVar16 = pFVar14 + (longlong)iVar3 * 0x4c;
  fVar25 = __real_7f7fffff;
  fVar26 = __real_7f7fffff;
  do {
    while( true ) {
      if ((param_1->ClusterInfos).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FHairClusterInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar14 == pFVar16) {
        if ((fVar30 < fVar25) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("MinScreenSize <= MaxScreenSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                               ,0xf6d,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((fVar31 < fVar26) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("MinRadiusScale <= MaxRadiusScale",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                               ,0xf6e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar27 = __real_3f800000;
        fVar28 = fVar30 - fVar25;
        if ((float)((uint)(fVar30 - fVar25) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
            __real_38d1b717) {
          fVar28 = __real_3f800000;
        }
        fVar29 = __real_3f800000 / fVar28;
        fVar30 = fVar31 - fVar26;
        if ((float)((uint)(fVar31 - fVar26) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
            __real_38d1b717) {
          fVar30 = __real_3f800000;
        }
        (param_2->Header).ClusterInfoParameters.field0_0x0._s_0.X = fVar28;
        local_b0._0_4_ = 0;
        (param_2->Header).ClusterInfoParameters.field0_0x0._s_0.Y = fVar25;
        (param_2->Header).ClusterInfoParameters.field0_0x0._s_0.Z = fVar30;
        (param_2->Header).ClusterInfoParameters.field0_0x0._s_0.W = fVar26;
        uVar12 = (param_1->ClusterInfos).ArrayNum;
        local_b8.Data = (FScriptContainerElement *)0x0;
        local_b0 = 0;
        fVar27 = fVar27 / fVar30;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        if (0 < (int)uVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,uVar12,&local_b8,0,(int *)((longlong)&local_b0 + 4));
        }
        fVar31 = __real_437f0000;
        iVar3 = (param_1->ClusterInfos).ArrayNum;
        pFVar14 = (param_1->ClusterInfos).AllocatorInstance.Data;
        pFVar16 = pFVar14 + (longlong)iVar3 * 0x4c;
        iVar7 = (int)local_b0;
        while( true ) {
          if ((param_1->ClusterInfos).ArrayNum != iVar3) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FHairClusterInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
            iVar7 = (int)local_b0;
          }
          if (pFVar14 == pFVar16) {
            FBulkData::Lock((FBulkData *)&(param_2->Data).PackedClusterInfos.Data,2);
            pvVar8 = FBulkData::Realloc((FBulkData *)&(param_2->Data).PackedClusterInfos.Data,
                                        (ulonglong)(uint)(iVar7 << 4),1);
            memcpy(pvVar8,local_b8.Data,(ulonglong)(uint)(iVar7 << 4));
            FBulkData::Unlock((FBulkData *)&(param_2->Data).PackedClusterInfos.Data);
            if (local_b8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data);
            }
            if (local_a8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8[0].AllocatorInstance.Data);
            }
            return;
          }
          if (iVar7 == local_b0._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&local_b8,(int *)((longlong)&local_b0 + 4));
          }
          local_b0 = CONCAT44(local_b0._4_4_,iVar7 + 1);
          lVar10 = (longlong)iVar7;
          local_res18 = local_b8.Data;
          uVar12 = pFVar14[0x44] != (FScriptContainerElement)0x0 | 2;
          if (pFVar14[0x45] == (FScriptContainerElement)0x0) {
            uVar12 = (uint)(pFVar14[0x44] != (FScriptContainerElement)0x0);
          }
          uVar15 = uVar12 | 4;
          if (pFVar14[0x46] == (FScriptContainerElement)0x0) {
            uVar15 = uVar12;
          }
          uVar12 = uVar15 | 8;
          if (pFVar14[0x47] == (FScriptContainerElement)0x0) {
            uVar12 = uVar15;
          }
          uVar15 = uVar12 | 0x10;
          if (pFVar14[0x48] == (FScriptContainerElement)0x0) {
            uVar15 = uVar12;
          }
          uVar12 = uVar15 | 0x20;
          if (pFVar14[0x49] == (FScriptContainerElement)0x0) {
            uVar12 = uVar15;
          }
          uVar15 = uVar12 | 0x40;
          if (pFVar14[0x4a] == (FScriptContainerElement)0x0) {
            uVar15 = uVar12;
          }
          uVar12 = uVar15 | 0x80;
          if (pFVar14[0x4b] == (FScriptContainerElement)0x0) {
            uVar12 = uVar15;
          }
          if ((8 < *(uint *)pFVar14) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Info.LODCount <= 8",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                 ,0xf90,L""), bVar5)) break;
          uVar15 = *(uint *)pFVar14;
          *(uint *)(local_res18 + lVar10 * 0x10) = uVar15;
          uVar17 = (uint)(longlong)((*(float *)(pFVar14 + 8) - fVar25) * fVar29 * fVar31);
          uVar13 = 0xff;
          if (uVar17 < 0xff) {
            uVar13 = uVar17;
          }
          uVar17 = 0;
          if (uVar13 != 0) {
            uVar17 = uVar13;
          }
          uVar15 = uVar17 << 8 | uVar15;
          *(uint *)(local_res18 + lVar10 * 0x10) = uVar15;
          uVar17 = (uint)(longlong)((*(float *)(pFVar14 + 0xc) - fVar25) * fVar29 * fVar31);
          uVar13 = 0xff;
          if (uVar17 < 0xff) {
            uVar13 = uVar17;
          }
          uVar17 = 0;
          if (uVar13 != 0) {
            uVar17 = uVar13;
          }
          uVar15 = uVar17 << 0x10 | uVar15;
          *(uint *)(local_res18 + lVar10 * 0x10) = uVar15;
          fVar30 = *(float *)(pFVar14 + 0x10);
          *(undefined4 *)(local_res18 + lVar10 * 0x10 + 4) = 0;
          uVar17 = (uint)(longlong)((fVar30 - fVar25) * fVar29 * fVar31);
          uVar13 = 0xff;
          if (uVar17 < 0xff) {
            uVar13 = uVar17;
          }
          uVar17 = 0;
          if (uVar13 != 0) {
            uVar17 = uVar13;
          }
          *(uint *)(local_res18 + lVar10 * 0x10) = uVar17 << 0x18 | uVar15;
          uVar13 = (uint)(longlong)((*(float *)(pFVar14 + 0x14) - fVar25) * fVar29 * fVar31);
          uVar15 = 0xff;
          if (uVar13 < 0xff) {
            uVar15 = uVar13;
          }
          uVar13 = 0;
          if (uVar15 != 0) {
            uVar13 = uVar15;
          }
          *(uint *)(local_res18 + lVar10 * 0x10 + 4) = uVar13;
          uVar17 = (uint)(longlong)((*(float *)(pFVar14 + 0x18) - fVar25) * fVar29 * fVar31);
          uVar15 = 0xff;
          if (uVar17 < 0xff) {
            uVar15 = uVar17;
          }
          uVar17 = 0;
          if (uVar15 != 0) {
            uVar17 = uVar15;
          }
          uVar13 = uVar17 << 8 | uVar13;
          *(uint *)(local_res18 + lVar10 * 0x10 + 4) = uVar13;
          uVar17 = (uint)(longlong)((*(float *)(pFVar14 + 0x1c) - fVar25) * fVar29 * fVar31);
          uVar15 = 0xff;
          if (uVar17 < 0xff) {
            uVar15 = uVar17;
          }
          uVar17 = 0;
          if (uVar15 != 0) {
            uVar17 = uVar15;
          }
          uVar13 = uVar17 << 0x10 | uVar13;
          *(uint *)(local_res18 + lVar10 * 0x10 + 4) = uVar13;
          fVar30 = *(float *)(pFVar14 + 0x20);
          *(uint *)(local_res18 + lVar10 * 0x10 + 8) = uVar12;
          uVar17 = (uint)(longlong)((fVar30 - fVar25) * fVar29 * fVar31);
          uVar15 = 0xff;
          if (uVar17 < 0xff) {
            uVar15 = uVar17;
          }
          uVar17 = 0;
          if (uVar15 != 0) {
            uVar17 = uVar15;
          }
          *(uint *)(local_res18 + lVar10 * 0x10 + 4) = uVar17 << 0x18 | uVar13;
          uVar13 = (uint)(longlong)((*(float *)(pFVar14 + 0x28) - fVar26) * fVar27 * fVar31);
          uVar15 = 0xff;
          if (uVar13 < 0xff) {
            uVar15 = uVar13;
          }
          uVar13 = 0;
          if (uVar15 != 0) {
            uVar13 = uVar15;
          }
          uVar12 = uVar13 << 8 | uVar12;
          *(uint *)(local_res18 + lVar10 * 0x10 + 8) = uVar12;
          uVar13 = (uint)(longlong)((*(float *)(pFVar14 + 0x2c) - fVar26) * fVar27 * fVar31);
          uVar15 = 0xff;
          if (uVar13 < 0xff) {
            uVar15 = uVar13;
          }
          uVar13 = 0;
          if (uVar15 != 0) {
            uVar13 = uVar15;
          }
          uVar12 = uVar13 << 0x10 | uVar12;
          *(uint *)(local_res18 + lVar10 * 0x10 + 8) = uVar12;
          fVar30 = *(float *)(pFVar14 + 0x30);
          *(undefined4 *)(local_res18 + lVar10 * 0x10 + 0xc) = 0;
          uVar13 = (uint)(longlong)((fVar30 - fVar26) * fVar27 * fVar31);
          uVar15 = 0xff;
          if (uVar13 < 0xff) {
            uVar15 = uVar13;
          }
          uVar13 = 0;
          if (uVar15 != 0) {
            uVar13 = uVar15;
          }
          *(uint *)(local_res18 + lVar10 * 0x10 + 8) = uVar13 << 0x18 | uVar12;
          uVar15 = (uint)(longlong)((*(float *)(pFVar14 + 0x34) - fVar26) * fVar27 * fVar31);
          uVar12 = 0xff;
          if (uVar15 < 0xff) {
            uVar12 = uVar15;
          }
          uVar15 = 0;
          if (uVar12 != 0) {
            uVar15 = uVar12;
          }
          *(uint *)(local_res18 + lVar10 * 0x10 + 0xc) = uVar15;
          uVar13 = (uint)(longlong)((*(float *)(pFVar14 + 0x38) - fVar26) * fVar27 * fVar31);
          uVar12 = 0xff;
          if (uVar13 < 0xff) {
            uVar12 = uVar13;
          }
          uVar13 = 0;
          if (uVar12 != 0) {
            uVar13 = uVar12;
          }
          uVar15 = uVar13 << 8 | uVar15;
          *(uint *)(local_res18 + lVar10 * 0x10 + 0xc) = uVar15;
          uVar13 = (uint)(longlong)((*(float *)(pFVar14 + 0x3c) - fVar26) * fVar27 * fVar31);
          uVar12 = 0xff;
          if (uVar13 < 0xff) {
            uVar12 = uVar13;
          }
          uVar13 = 0;
          if (uVar12 != 0) {
            uVar13 = uVar12;
          }
          uVar15 = uVar13 << 0x10 | uVar15;
          *(uint *)(local_res18 + lVar10 * 0x10 + 0xc) = uVar15;
          uVar13 = (uint)(longlong)((*(float *)(pFVar14 + 0x40) - fVar26) * fVar27 * fVar31);
          uVar12 = 0xff;
          if (uVar13 < 0xff) {
            uVar12 = uVar13;
          }
          uVar13 = 0;
          if (uVar12 != 0) {
            uVar13 = uVar12;
          }
          *(uint *)(local_res18 + lVar10 * 0x10 + 0xc) = uVar13 << 0x18 | uVar15;
          pFVar14 = pFVar14 + 0x4c;
          iVar7 = (int)local_b0;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = *(uint *)pFVar14;
      uVar15 = 0;
      if (3 < uVar12) break;
      if (uVar12 != 0) {
        lVar10 = 0;
        goto LAB_14dffc65e;
      }
LAB_14dffc6a9:
      pFVar14 = pFVar14 + 0x4c;
    }
    uVar13 = (uVar12 - 4 >> 2) + 1;
    uVar11 = (ulonglong)uVar13;
    uVar15 = uVar13 * 4;
    lVar10 = (ulonglong)uVar13 * 4;
    pFVar9 = pFVar14 + 0x24;
    do {
      fVar27 = *(float *)(pFVar9 + -0x20);
      fVar28 = *(float *)pFVar9;
      fVar29 = fVar27;
      if (fVar25 <= fVar27) {
        fVar29 = fVar25;
      }
      if (fVar27 <= fVar30) {
        fVar27 = fVar30;
      }
      fVar24 = fVar28;
      if (fVar26 <= fVar28) {
        fVar24 = fVar26;
      }
      if (fVar28 <= fVar31) {
        fVar28 = fVar31;
      }
      if (*(float *)(pFVar9 + -0x1c) <= fVar29) {
        fVar29 = *(float *)(pFVar9 + -0x1c);
      }
      if (fVar27 <= *(float *)(pFVar9 + -0x1c)) {
        fVar27 = *(float *)(pFVar9 + -0x1c);
      }
      if (*(float *)(pFVar9 + 4) <= fVar24) {
        fVar24 = *(float *)(pFVar9 + 4);
      }
      if (fVar28 <= *(float *)(pFVar9 + 4)) {
        fVar28 = *(float *)(pFVar9 + 4);
      }
      if (*(float *)(pFVar9 + -0x18) <= fVar29) {
        fVar29 = *(float *)(pFVar9 + -0x18);
      }
      if (fVar27 <= *(float *)(pFVar9 + -0x18)) {
        fVar27 = *(float *)(pFVar9 + -0x18);
      }
      if (*(float *)(pFVar9 + 8) <= fVar24) {
        fVar24 = *(float *)(pFVar9 + 8);
      }
      if (fVar28 <= *(float *)(pFVar9 + 8)) {
        fVar28 = *(float *)(pFVar9 + 8);
      }
      fVar25 = fVar29;
      if (*(float *)(pFVar9 + -0x14) <= fVar29) {
        fVar25 = *(float *)(pFVar9 + -0x14);
      }
      fVar30 = fVar27;
      if (fVar27 <= *(float *)(pFVar9 + -0x14)) {
        fVar30 = *(float *)(pFVar9 + -0x14);
      }
      fVar26 = fVar24;
      if (*(float *)(pFVar9 + 0xc) <= fVar24) {
        fVar26 = *(float *)(pFVar9 + 0xc);
      }
      fVar31 = fVar28;
      if (fVar28 <= *(float *)(pFVar9 + 0xc)) {
        fVar31 = *(float *)(pFVar9 + 0xc);
      }
      uVar11 = uVar11 - 1;
      pFVar9 = pFVar9 + 0x10;
    } while (uVar11 != 0);
    if (uVar15 < uVar12) {
LAB_14dffc65e:
      pFVar9 = pFVar14 + (lVar10 + 9) * 4;
      uVar11 = (ulonglong)(uVar12 - uVar15);
      fVar27 = fVar31;
      fVar28 = fVar25;
      fVar29 = fVar26;
      do {
        fVar26 = *(float *)(pFVar9 + -0x20);
        fVar31 = *(float *)pFVar9;
        fVar25 = fVar26;
        if (fVar28 <= fVar26) {
          fVar25 = fVar28;
        }
        if (fVar26 <= fVar30) {
          fVar26 = fVar30;
        }
        fVar30 = fVar26;
        pFVar9 = pFVar9 + 4;
        fVar26 = fVar31;
        if (fVar29 <= fVar31) {
          fVar26 = fVar29;
        }
        if (fVar31 <= fVar27) {
          fVar31 = fVar27;
        }
        uVar11 = uVar11 - 1;
        fVar27 = fVar31;
        fVar28 = fVar25;
        fVar29 = fVar26;
      } while (uVar11 != 0);
      goto LAB_14dffc6a9;
    }
    pFVar14 = pFVar14 + 0x4c;
  } while( true );
}

// BuildClusterData @ 14dffcc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
GroomBuilder_Cluster::BuildClusterData
          (FHairStrandsDatas *param_1,float param_2,FHairGroupsLOD *param_3,
          FHairStrandsClusterData *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  FHairGroupsLOD *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  undefined8 *puVar24;
  FCluster *pFVar25;
  byte bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStackY_238 [32];
  byte local_1e8;
  <lambda_1> local_1e7 [3];
  uint local_1e4;
  uint local_1e0;
  undefined8 local_1d8;
  ulonglong local_1c8;
  uint local_1c0;
  uint local_1bc;
  ForAnyElementType local_1b8;
  int local_1b0 [2];
  FHairStrandsClusterData *local_1a8;
  undefined8 local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  undefined8 local_188;
  int local_180;
  ForAnyElementType local_178;
  uint local_170 [2];
  TArrayView<std::nullptr_t,int> local_168;
  code *local_158;
  uint *local_150;
  undefined8 local_148;
  uint local_138 [2];
  undefined8 *local_130;
  FHairGroupsLOD *local_128;
  FHairStrandsDatas *local_120;
  FHairStrandsClusterData *local_118;
  undefined8 local_110;
  uint uStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1d8 = param_3;
  local_1a8 = param_4;
  FHairStrandsClusterData::Reset(param_4);
  uVar21 = 8;
  if ((uint)(param_3->LODs).ArrayNum < 8) {
    uVar21 = (param_3->LODs).ArrayNum;
  }
  local_1e0 = uVar21;
  if ((uVar21 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xe31,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_1bc = (uint)param_1->_padding_;
  uVar17 = (uint)param_1->_padding_;
  param_4->PointCount = uVar17;
  uVar19 = (uint)param_1->_padding_;
  param_4->CurveCount = uVar19;
  if (((uVar17 == 0) || (uVar19 == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Out.PointCount > 0 && Out.CurveCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xe36,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = (param_4->LODInfos).ArrayNum;
  piVar1 = &(param_4->LODInfos).ArrayNum;
  if (iVar8 < (int)uVar21) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,uVar21 - iVar8,&(param_4->LODInfos).AllocatorInstance,piVar1,
                       &(param_4->LODInfos).ArrayMax);
    DefaultConstructItems<FHairLODInfo,int>
              ((param_4->LODInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x14,uVar21 - iVar8);
  }
  else {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if ((int)uVar21 < iVar8) {
      uVar17 = iVar8 - uVar21;
      if (((int)(uVar17 | uVar21) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar17 != 0) {
        pFVar12 = (param_4->LODInfos).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x14;
        iVar8 = (*piVar1 - uVar17) - uVar21;
        if (iVar8 != 0) {
          memmove(pFVar12,pFVar12 + (longlong)(int)uVar17 * 0x14,(longlong)iVar8 * 0x14);
        }
        *piVar1 = *piVar1 - uVar17;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,&(param_4->LODInfos).AllocatorInstance,*piVar1,
                   &(param_4->LODInfos).ArrayMax);
      }
    }
  }
  fVar28 = __real_bf000000;
  fVar31 = __real_3f800000;
  uVar15 = 0;
  local_1e8 = 0;
  if (uVar21 != 0) {
    do {
      iVar8 = (int)uVar15;
      if (((param_3->LODs).ArrayNum <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar27 = *(float *)((param_3->LODs).AllocatorInstance.Data + uVar15 * 0x1c);
      if (fVar31 <= fVar27) {
        fVar27 = fVar31;
      }
      uVar21 = (uint)param_1->_padding_;
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      uVar17 = -((int)ROUND(fVar28 - (fVar27 + fVar27) * (float)param_4->CurveCount) >> 1);
      if ((int)uVar17 < (int)uVar21) {
        uVar21 = uVar17;
      }
      local_1e4 = 1;
      if (1 < (int)uVar21) {
        local_1e4 = uVar21;
      }
      if ((*piVar1 <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(uint *)((param_4->LODInfos).AllocatorInstance.Data + uVar15 * 0x14) = local_1e4;
      if ((*piVar1 <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)((param_4->LODInfos).AllocatorInstance.Data + uVar15 * 0x14 + 4) = 0;
      if ((*piVar1 <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar5 = local_1d8;
      *(undefined4 *)((param_4->LODInfos).AllocatorInstance.Data + uVar15 * 0x14 + 8) = 0x3f800000;
      if (((local_1d8->LODs).ArrayNum <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = *(undefined4 *)((pFVar5->LODs).AllocatorInstance.Data + uVar15 * 0x1c + 0xc);
      if ((*piVar1 <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)((param_4->LODInfos).AllocatorInstance.Data + uVar15 * 0x14 + 0xc) = uVar2;
      if (((pFVar5->LODs).ArrayNum <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (pFVar5->LODs).AllocatorInstance.Data[uVar15 * 0x1c + 0x14];
      if ((*piVar1 <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (param_4->LODInfos).AllocatorInstance.Data[uVar15 * 0x14 + 0x10] = FVar3;
      local_1e8 = local_1e8 + 1;
      uVar15 = (ulonglong)local_1e8;
      param_3 = local_1d8;
    } while (local_1e8 < local_1e0);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
            (&param_4->PointLODs,(int)param_1->_padding_,Default);
  uVar21 = local_1e0;
  local_130 = &local_d8;
  local_138[0] = local_1e0;
  local_158 = UE::Core::Private::Function::
              TFunctionRefCaller<`GroomBuilder_Cluster::BuildClusterData'::__l2::<lambda_1>,void,int>
              ::Call;
  local_168.DataPtr = (void **)0x0;
  local_168.ArrayNum = 0;
  local_150 = local_138;
  local_128 = param_3;
  local_120 = param_1;
  local_118 = param_4;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_4->CurveCount,1,(TFunctionRef<void___cdecl(int)> *)&local_158
             ,local_1e7[0],None,&local_168);
  uVar17 = 0;
  if (uVar21 != 0) {
    puVar24 = &local_d8;
    do {
      uVar2 = *(undefined4 *)puVar24;
      uVar19 = 0;
      if ((int)uVar17 < (param_4->LODInfos).ArrayNum) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar9 = (longlong)(int)uVar17;
      puVar24 = (undefined8 *)((longlong)puVar24 + 4);
      uVar17 = uVar17 + 1;
      *(undefined4 *)((param_4->LODInfos).AllocatorInstance.Data + lVar9 * 0x14 + 4) = uVar2;
    } while (uVar17 < uVar21);
  }
  uVar17 = local_1bc;
  iVar8 = 0;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0[0] = 0;
  local_1b0[1] = 0;
  if ((int)local_1bc < 1) {
    if ((int)local_1bc < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_1bc);
    }
  }
  else {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,local_1bc,&local_1b8,local_1b0,local_1b0 + 1);
    DefaultConstructItems<_GroomBuilder_Cluster::BuildClusterData_::__l21::FCurveInfo,int>
              (local_1b8.Data + (longlong)iVar8 * 0x10,uVar17);
    iVar8 = local_1b0[0];
  }
  local_1c0 = 0;
  if (param_4->CurveCount != 0) {
    while( true ) {
      uVar21 = local_1c0;
      uVar19 = ~local_1c0 >> 0x1f;
      uVar17 = 0;
      if ((int)local_1c0 < iVar8) {
        uVar17 = uVar19;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar16.Data = local_1b8.Data;
      lVar9 = (longlong)(int)uVar21;
      uVar17 = 0;
      if ((int)uVar21 < (int)param_1->_padding_) {
        uVar17 = uVar19;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar21 = *(uint *)(param_1->_padding_ + lVar9 * 4);
      uVar17 = 0;
      if ((int)local_1c0 < (int)param_1->_padding_) {
        uVar17 = uVar19;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_1e4 = (uint)*(ushort *)(param_1->_padding_ + lVar9 * 2);
      if (local_1e4 != 0) {
        uVar17 = uVar21;
        do {
          uVar20 = ~uVar17 >> 0x1f;
          uVar19 = 0;
          if ((int)uVar17 < (int)param_1->_padding_) {
            uVar19 = uVar20;
          }
          if ((uVar19 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_1c8 = param_1->_padding_;
          lVar22 = (longlong)(int)uVar17;
          if (uVar17 != uVar21) {
            uVar19 = 0;
            if ((int)(uVar17 - 1) < (int)param_1->_padding_) {
              uVar19 = ~(uVar17 - 1) >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar10 = (longlong)(int)uVar17;
            lVar11 = param_1->_padding_;
            fVar30 = *(float *)(lVar11 + -8 + lVar10 * 0xc) -
                     *(float *)(local_1c8 + 4 + lVar22 * 0xc);
            fVar29 = *(float *)(lVar11 + -0xc + lVar10 * 0xc) - *(float *)(local_1c8 + lVar22 * 0xc)
            ;
            fVar27 = *(float *)(lVar11 + -4 + lVar10 * 0xc) -
                     *(float *)(local_1c8 + 8 + lVar22 * 0xc);
            uVar19 = 0;
            if ((int)uVar17 < (int)param_1->_padding_) {
              uVar19 = uVar20;
            }
            if ((uVar19 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(float *)(FVar16.Data + lVar9 * 0x10) =
                 SQRT(fVar30 * fVar30 + fVar29 * fVar29 + fVar27 * fVar27) *
                 *(float *)(param_1->_padding_ + lVar22 * 4) +
                 *(float *)(FVar16.Data + lVar9 * 0x10);
          }
          uVar19 = 0;
          if ((int)uVar17 < (int)param_1->_padding_) {
            uVar19 = uVar20;
          }
          if ((uVar19 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar17 = uVar17 + 1;
          fVar27 = *(float *)(param_1->_padding_ + lVar22 * 4);
          fVar29 = fVar27;
          if (fVar27 <= *(float *)(FVar16.Data + lVar9 * 0x10 + 8)) {
            fVar29 = *(float *)(FVar16.Data + lVar9 * 0x10 + 8);
          }
          *(float *)(FVar16.Data + lVar9 * 0x10 + 0xc) =
               fVar27 + *(float *)(FVar16.Data + lVar9 * 0x10 + 0xc);
          fVar30 = *(float *)(FVar16.Data + lVar9 * 0x10 + 4);
          if (*(float *)(FVar16.Data + lVar9 * 0x10 + 4) <= fVar27) {
            fVar30 = fVar27;
          }
          *(float *)(FVar16.Data + lVar9 * 0x10 + 8) = fVar29;
          *(float *)(FVar16.Data + lVar9 * 0x10 + 4) = fVar30;
          param_4 = local_1a8;
        } while (uVar17 - uVar21 < local_1e4);
      }
      uVar21 = local_1e4;
      if (local_1e4 == 0) {
        uVar21 = 1;
      }
      local_1c0 = local_1c0 + 1;
      *(float *)(FVar16.Data + lVar9 * 0x10 + 0xc) =
           *(float *)(FVar16.Data + lVar9 * 0x10 + 0xc) / (float)uVar21;
      param_3 = local_1d8;
      uVar21 = local_1e0;
      if (param_4->CurveCount <= local_1c0) break;
      iVar8 = local_1b0[0];
    }
  }
  bVar26 = 0;
  if (uVar21 != 0) {
    uVar15 = 0;
    do {
      iVar8 = (int)uVar15;
      if (((param_3->LODs).ArrayNum <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((param_3->LODs).ArrayNum <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = *(undefined4 *)((param_3->LODs).AllocatorInstance.Data + uVar15 * 0x1c + 0x10);
      if (((param_4->LODInfos).ArrayNum <= iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar26 = bVar26 + 1;
      *(undefined4 *)((param_4->LODInfos).AllocatorInstance.Data + uVar15 * 0x14 + 8) = uVar2;
      uVar15 = (ulonglong)bVar26;
    } while (bVar26 < uVar21);
  }
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  local_148 = *(undefined8 *)&(param_1->BoundingBox).Max.field0_0x0;
  local_1a0 = *(undefined8 *)&(param_1->BoundingBox).Min.field0_0x0;
  local_18c = (param_1->BoundingBox).Min.field0_0x0._s_0.Z;
  iVar8 = 2;
  if (2 < GHairClusterBuilder_MaxVoxelResolution) {
    iVar8 = GHairClusterBuilder_MaxVoxelResolution;
  }
  local_1d8._4_4_ = (float)((ulonglong)local_1a0 >> 0x20);
  local_190 = local_1d8._4_4_;
  fVar27 = (float)((ulonglong)local_148 >> 0x20) - local_1d8._4_4_;
  local_1c8 = local_1c8 & 0xffffffff00000000;
  while( true ) {
    fVar29 = __real_40000000 / fVar31;
    iVar13 = -((int)ROUND(fVar28 - fVar29 * ((float)local_148 - (float)local_1a0)) >> 1);
    iVar7 = -((int)ROUND(fVar28 - fVar29 * fVar27) >> 1);
    local_1d8 = (FHairGroupsLOD *)CONCAT44(iVar7,iVar13);
    local_180 = -((int)ROUND(fVar28 - fVar29 * ((param_1->BoundingBox).Max.field0_0x0._s_0.Z -
                                               local_18c)) >> 1);
    if (((iVar13 <= iVar8) && (iVar7 <= iVar8)) && (local_180 <= iVar8)) break;
    fVar31 = fVar31 + fVar31;
  }
  local_198 = (param_1->BoundingBox).Min.field0_0x0._s_0.Z;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170[0] = 0;
  local_170[1] = 0;
  local_194 = (float)iVar13 * fVar31 + (float)local_1a0;
  uVar19 = iVar7 * local_180 * iVar13;
  uVar17 = 1;
  if (1 < (int)uVar19) {
    uVar17 = uVar19;
  }
  local_190 = (float)iVar7 * fVar31 + local_190;
  local_18c = (float)local_180 * fVar31 + local_18c;
  local_188 = (longlong)local_1d8;
  if ((int)uVar17 < 1) {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
  }
  else {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,uVar17,&local_178,(int *)local_170,(int *)(local_170 + 1));
    DefaultConstructItems<GroomBuilder_Cluster::FClusterGrid::FCluster,int>
              (local_178.Data + (longlong)iVar8 * 0x20,uVar17);
  }
  uVar17 = local_1bc;
  fVar31 = __real_3f000000;
  local_1e4 = 0;
  uVar19 = 0;
  if (local_1bc != 0) {
    do {
      uVar21 = local_1e4;
      local_110 = 0;
      fStack_104 = 0.0;
      fStack_100 = 0.0;
      uVar20 = ~local_1e4;
      fStack_fc = 0.0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uVar19 = 0;
      if ((int)local_1e4 < (int)param_1->_padding_) {
        uVar19 = uVar20 >> 0x1f;
      }
      local_e8 = 0;
      uStack_e0 = 0;
      uStack_108 = local_1e4;
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_110 = (ulonglong)
                  CONCAT24(*(undefined2 *)(param_1->_padding_ + (longlong)(int)uVar21 * 2),
                           (uint)local_110);
      uVar19 = 0;
      if ((int)uVar21 < (int)param_1->_padding_) {
        uVar19 = uVar20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar19 = 0;
      local_110 = CONCAT44(local_110._4_4_,
                           *(undefined4 *)(param_1->_padding_ + (longlong)(int)uVar21 * 4));
      fStack_104 = 0.0;
      fStack_100 = 0.0;
      fStack_fc = 0.0;
      if (local_110._4_4_ != 0) {
        do {
          uVar20 = (uint)local_110 + uVar19;
          uVar23 = ~uVar20 >> 0x1f;
          uVar21 = 0;
          if ((int)uVar20 < (int)param_1->_padding_) {
            uVar21 = uVar23;
          }
          if ((uVar21 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_1d8 = (FHairGroupsLOD *)param_1->_padding_;
          lVar9 = (longlong)(int)uVar20;
          if (uVar19 != 0) {
            uVar21 = uVar20 - 1;
            uVar14 = 0;
            if ((int)uVar21 < (int)param_1->_padding_) {
              uVar14 = ~uVar21 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar11 = (longlong)(int)uVar21;
            lVar22 = param_1->_padding_;
            fVar29 = *(float *)(lVar22 + lVar11 * 0xc) -
                     *(float *)((longlong)local_1d8 + lVar9 * 0xc);
            fVar28 = *(float *)(lVar22 + 4 + lVar11 * 0xc) -
                     *(float *)((longlong)local_1d8 + 4 + lVar9 * 0xc);
            fVar27 = *(float *)(lVar22 + 8 + lVar11 * 0xc) -
                     *(float *)((longlong)local_1d8 + 8 + lVar9 * 0xc);
            uVar21 = 0;
            if ((int)uVar20 < (int)param_1->_padding_) {
              uVar21 = uVar23;
            }
            if ((uVar21 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fStack_104 = fStack_104 +
                         SQRT(fVar29 * fVar29 + fVar28 * fVar28 + fVar27 * fVar27) *
                         *(float *)(param_1->_padding_ + (longlong)(int)uVar20 * 4);
          }
          uVar21 = 0;
          if ((int)uVar20 < (int)param_1->_padding_) {
            uVar21 = uVar23;
          }
          if ((uVar21 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar19 = uVar19 + 1;
          fVar28 = *(float *)(param_1->_padding_ + (longlong)(int)uVar20 * 4);
          fStack_100 = fStack_100 + fVar28;
          if (fVar28 <= fStack_fc) {
            fVar28 = fStack_fc;
          }
          uVar21 = local_1e4;
          fStack_fc = fVar28;
        } while (uVar19 < local_110._4_4_);
      }
      lVar9 = (longlong)(int)(uint)local_110;
      uVar19 = local_110._4_4_;
      if (local_110._4_4_ == 0) {
        uVar19 = 1;
      }
      uVar20 = 0;
      if ((int)(uint)local_110 < (int)param_1->_padding_) {
        uVar20 = ~(uint)local_110 >> 0x1f;
      }
      fStack_100 = fStack_100 / (float)uVar19;
      if ((uVar20 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_148 = *(undefined8 *)(param_1->_padding_ + lVar9 * 0xc);
      fVar27 = ((float)local_148 - (float)local_1a0) / (local_194 - (float)local_1a0);
      fVar29 = ((float)((ulonglong)local_148 >> 0x20) - local_1a0._4_4_) /
               (local_190 - local_1a0._4_4_);
      fVar28 = (*(float *)(param_1->_padding_ + 8 + lVar9 * 0xc) - local_198) /
               (local_18c - local_198);
      iVar18 = (int)ROUND((fVar27 + fVar27) * (float)(int)local_188 - fVar31) >> 1;
      iVar13 = (int)ROUND((fVar29 + fVar29) * (float)local_188._4_4_ - fVar31) >> 1;
      iVar7 = (int)ROUND((fVar28 + fVar28) * (float)local_180 - fVar31) >> 1;
      iVar8 = local_180 + -1;
      if (iVar7 < local_180 + -1) {
        iVar8 = iVar7;
      }
      iVar7 = local_188._4_4_ + -1;
      if (iVar13 < local_188._4_4_ + -1) {
        iVar7 = iVar13;
      }
      iVar13 = (int)local_188 + -1;
      if (iVar18 < (int)local_188 + -1) {
        iVar13 = iVar18;
      }
      iVar18 = 0;
      if (0 < iVar8) {
        iVar18 = iVar8;
      }
      iVar8 = 0;
      if (0 < iVar7) {
        iVar8 = iVar7;
      }
      iVar7 = 0;
      if (0 < iVar13) {
        iVar7 = iVar13;
      }
      uVar19 = (int)local_188 * (iVar18 * local_188._4_4_ + iVar8) + iVar7;
      if ((local_170[0] <= uVar19) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CellIndex < uint32(Clusters.Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                             ,0xda0,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar20 = 0;
      if ((int)uVar19 < (int)local_170[0]) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar16.Data = local_178.Data;
      if (((*(undefined8 **)&local_178.Data[(longlong)(int)uVar19 * 0x20 + 0x10].field_0x0 <=
            &local_110) &&
          (&local_110 <
           *(undefined8 **)&local_178.Data[(longlong)(int)uVar19 * 0x20 + 0x10].field_0x0 +
           (longlong)*(int *)(local_178.Data + (longlong)(int)uVar19 * 0x20 + 0x1c) * 7)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = *(int *)(FVar16.Data + (longlong)(int)uVar19 * 0x20 + 0x18);
      if (iVar8 == *(int *)(FVar16.Data + (longlong)(int)uVar19 * 0x20 + 0x1c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x438,(ForAnyElementType *)
                                 (FVar16.Data + (longlong)(int)uVar19 * 0x20 + 0x10),
                           (int *)(FVar16.Data + (longlong)(int)uVar19 * 0x20 + 0x1c));
      }
      local_1e4 = uVar21 + 1;
      *(int *)(FVar16.Data + (longlong)(int)uVar19 * 0x20 + 0x18) = iVar8 + 1;
      lVar22 = (longlong)iVar8 * 0x38;
      lVar9 = *(longlong *)&FVar16.Data[(longlong)(int)uVar19 * 0x20 + 0x10].field_0x0;
      *(undefined8 *)(lVar22 + lVar9) = local_110;
      ((undefined8 *)(lVar22 + lVar9))[1] = CONCAT44(fStack_104,uStack_108);
      puVar24 = (undefined8 *)(lVar22 + 0x10 + lVar9);
      *puVar24 = CONCAT44(fStack_fc,fStack_100);
      puVar24[1] = uStack_f8;
      puVar24 = (undefined8 *)(lVar22 + 0x20 + lVar9);
      *puVar24 = uStack_f0;
      puVar24[1] = local_e8;
      *(undefined8 *)(lVar22 + 0x30 + lVar9) = uStack_e0;
    } while (local_1e4 < uVar17);
    param_4 = local_1a8;
    uVar21 = local_1e0;
    uVar19 = (uint)local_1c8;
  }
  uVar17 = local_170[0];
  pFVar25 = (FCluster *)(local_178.Data + (longlong)(int)local_170[0] * 0x20);
  FVar16.Data = local_178.Data;
  while( true ) {
    if (local_170[0] != uVar17) {
      local_1e7[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<GroomBuilder_Cluster::FClusterGrid::FCluster,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_1e7);
    }
    if ((FCluster *)FVar16.Data == pFVar25) break;
    if (0 < (((FCluster *)FVar16.Data)->ClusterCurves).ArrayNum) {
      uVar19 = uVar19 + 1;
    }
    FVar16.Data = FVar16.Data + 0x20;
  }
  DestructItems<GroomBuilder_Cluster::FClusterGrid::FCluster,int>
            ((FCluster *)local_178.Data,local_170[0]);
  if ((FCluster *)local_178.Data != (FCluster *)0x0) {
    FMemory::Free(local_178.Data);
  }
  uVar17 = ((int)param_1->_padding_ + 99U) / 100;
  uVar20 = 0x80;
  if (0x80 < uVar17) {
    uVar20 = uVar17;
  }
  uVar17 = uVar19;
  if (uVar19 < uVar20) {
    uVar17 = uVar20;
  }
  param_4->ClusterCount = uVar17;
  uVar20 = (uint)param_1->_padding_;
  param_4->ClusterScale = 1.0;
  if (uVar17 < uVar20) {
    uVar20 = uVar17;
  }
  param_4->ClusterCount = uVar20;
  if (0x1000 < uVar19) {
    param_4->ClusterCount = 0x1000;
    param_4->ClusterScale = (float)uVar19 * __real_39800000;
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
            (&param_4->CurveToClusterIds,(int)param_1->_padding_,Default);
  iVar8 = (param_4->ClusterInfos).ArrayNum;
  uVar17 = param_4->ClusterCount;
  if (iVar8 < (int)uVar17) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x4c,4,uVar17 - iVar8,(ForAnyElementType *)param_4,
                       &(param_4->ClusterInfos).ArrayNum,&(param_4->ClusterInfos).ArrayMax);
    DefaultConstructItems<FHairClusterInfo,int>
              ((param_4->ClusterInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x4c,
               uVar17 - iVar8);
  }
  else {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if ((int)uVar17 < iVar8) {
      uVar19 = iVar8 - uVar17;
      if (((int)(uVar17 | uVar19) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar19 != 0) {
        pFVar12 = (param_4->ClusterInfos).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x4c;
        iVar8 = ((param_4->ClusterInfos).ArrayNum - uVar17) - uVar19;
        if (iVar8 != 0) {
          memmove(pFVar12,pFVar12 + (longlong)(int)uVar19 * 0x4c,(longlong)iVar8 * 0x4c);
        }
        iVar8 = (param_4->ClusterInfos).ArrayNum - uVar19;
        (param_4->ClusterInfos).ArrayNum = iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x4c,4,(ForAnyElementType *)param_4,iVar8,&(param_4->ClusterInfos).ArrayMax);
      }
    }
  }
  uVar17 = (uint)param_1->_padding_;
  uVar15 = 0;
  uVar19 = param_4->ClusterCount;
  uVar20 = param_4->ClusterCount;
  if (uVar17 != 0) {
    do {
      uVar14 = (uint)uVar15;
      uVar23 = 0;
      if ((int)uVar14 < (param_4->CurveToClusterIds).ArrayNum) {
        uVar23 = ~uVar14 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(int *)((param_4->CurveToClusterIds).AllocatorInstance.Data + (longlong)(int)uVar14 * 4) =
           (int)(uVar15 % ((ulonglong)((uVar17 - 1) + uVar19) / (ulonglong)uVar20));
      uVar15 = (ulonglong)(uVar14 + 1);
    } while (uVar14 + 1 < uVar17);
  }
  uVar17 = 0;
  if (param_4->ClusterCount != 0) {
    do {
      uVar20 = ~uVar17 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar17 < (param_4->ClusterInfos).ArrayNum) {
        uVar19 = uVar20;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_1c8 = (longlong)(int)uVar17 * 0x4c;
      *(uint *)((param_4->ClusterInfos).AllocatorInstance.Data + local_1c8) = uVar21;
      if (uVar21 != 0) {
        local_1a8 = (FHairStrandsClusterData *)((longlong)(int)uVar17 * 0x13);
        uVar15 = 0;
        do {
          iVar8 = (int)uVar15;
          if (((param_4->LODInfos).ArrayNum <= iVar8) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar2 = *(undefined4 *)((param_4->LODInfos).AllocatorInstance.Data + uVar15 * 0x14 + 0xc);
          uVar21 = 0;
          if ((int)uVar17 < (param_4->ClusterInfos).ArrayNum) {
            uVar21 = uVar20;
          }
          if ((uVar21 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_1d8 = (FHairGroupsLOD *)
                      ((longlong)&(local_1a8->ClusterInfos).AllocatorInstance.Data + uVar15);
          *(undefined4 *)
           ((param_4->ClusterInfos).AllocatorInstance.Data + (longlong)local_1d8 * 4 + 4) = uVar2;
          if (((param_4->LODInfos).ArrayNum <= iVar8) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar2 = *(undefined4 *)((param_4->LODInfos).AllocatorInstance.Data + uVar15 * 0x14 + 8);
          uVar21 = 0;
          if ((int)uVar17 < (param_4->ClusterInfos).ArrayNum) {
            uVar21 = uVar20;
          }
          if ((uVar21 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)
           ((param_4->ClusterInfos).AllocatorInstance.Data + (longlong)local_1d8 * 4 + 0x24) = uVar2
          ;
          if (((param_4->LODInfos).ArrayNum <= iVar8) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar3 = (param_4->LODInfos).AllocatorInstance.Data[uVar15 * 0x14 + 0x10];
          uVar21 = 0;
          if ((int)uVar17 < (param_4->ClusterInfos).ArrayNum) {
            uVar21 = uVar20;
          }
          if ((uVar21 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar26 = (char)uVar15 + 1;
          (param_4->ClusterInfos).AllocatorInstance.Data[uVar15 + local_1c8 + 0x44] = FVar3;
          uVar15 = (ulonglong)bVar26;
          uVar21 = local_1e0;
        } while (bVar26 < local_1e0);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < param_4->ClusterCount);
  }
  return;
}

// BuildInternalData @ 14e001ad0

FHairStrandsDatas * __cdecl
HairStrandsBuilder::BuildInternalData
          (FHairStrandsDatas *__return_storage_ptr__,FHairStrandsCommonDatas *param_1)

{
  longlong *plVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *this;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  FHairStrandsDatas *pFVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint local_res18;
  float local_b0;
  float fStack_ac;
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId114,"HairStrandsBuilder::BuildInternalData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
               ,0x72);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId114);
  }
  FHairStrandsCommonDatas::FHairStrandsCommonDatas
            ((FHairStrandsCommonDatas *)__return_storage_ptr__);
  *(undefined8 *)&__return_storage_ptr__->HairDensity = 0x3f800000;
  uVar15 = 0;
  plVar1 = &__return_storage_ptr__->_padding_;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->BoundingBox).Min.field0_0x0 + 4) = 0;
  *(undefined8 *)&(__return_storage_ptr__->BoundingBox).Max.field0_0x0 = 0;
  (__return_storage_ptr__->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->BoundingBox).IsValid = '\0';
  (__return_storage_ptr__->BoundingBox).Pad[0] = '\0';
  (__return_storage_ptr__->BoundingBox).Pad[1] = '\0';
  (__return_storage_ptr__->BoundingBox).Pad[2] = '\0';
  if ((FHairStrandsCurves *)plVar1 != &param_1->StrandsCurves) {
    iVar5 = (param_1->StrandsCurves).CurvesCount.ArrayNum;
    piVar3 = (int *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    pFVar7 = (param_1->StrandsCurves).CurvesCount.AllocatorInstance.Data;
    iVar6 = *piVar3;
    *(int *)&__return_storage_ptr__->_padding_ = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,iVar6,(ForAnyElementType *)plVar1,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((void *)*plVar1,pFVar7,(longlong)iVar5 * 2);
      }
    }
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&__return_storage_ptr__->_padding_,
             &(param_1->StrandsCurves).CurvesOffset);
  this = &__return_storage_ptr__->_padding_;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)this,
             &(param_1->StrandsCurves).CurvesLength);
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
             &__return_storage_ptr__->_padding_,&(param_1->StrandsCurves).CurvesRootUV);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)&__return_storage_ptr__->_padding_,
             &(param_1->StrandsCurves).StrandIDs);
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
             &__return_storage_ptr__->_padding_,&(param_1->StrandsCurves).ClumpIDs);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->_padding_,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &(param_1->StrandsCurves).GroomIDToIndex);
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
             &__return_storage_ptr__->_padding_,&(param_1->StrandsCurves).CurvesClosestGuideIDs);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             &__return_storage_ptr__->_padding_,&(param_1->StrandsCurves).CurvesClosestGuideWeights)
  ;
  *(uint *)&__return_storage_ptr__->_padding_ = (param_1->StrandsCurves).AttributeFlags;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&__return_storage_ptr__->_padding_,
             &(param_1->StrandsCurves).CurvesMapping);
  *(uint *)&__return_storage_ptr__->_padding_ = (param_1->StrandsCurves).SourceCurveCount;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)__return_storage_ptr__,
             (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)param_1);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&__return_storage_ptr__->_padding_,
             &(param_1->StrandsPoints).PointsRadius);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&__return_storage_ptr__->_padding_,
             &(param_1->StrandsPoints).PointsCoordU);
  pTVar2 = &(param_1->StrandsPoints).PointsBaseColor;
  plVar1 = &__return_storage_ptr__->_padding_;
  if ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)plVar1 != pTVar2) {
    iVar5 = (param_1->StrandsPoints).PointsBaseColor.ArrayNum;
    piVar3 = (int *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    iVar6 = *piVar3;
    *(int *)&__return_storage_ptr__->_padding_ = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar5,iVar6,(ForAnyElementType *)plVar1,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((void *)*plVar1,pFVar7,(longlong)iVar5 << 4);
      }
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&__return_storage_ptr__->_padding_,
             &(param_1->StrandsPoints).PointsRoughness);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&__return_storage_ptr__->_padding_,
             &(param_1->StrandsPoints).PointsAO);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&__return_storage_ptr__->_padding_,
             &(param_1->StrandsPoints).PointsMapping);
  *(uint *)&__return_storage_ptr__->_padding_ = (param_1->StrandsPoints).SourcePointCount;
  *(uint *)&__return_storage_ptr__->_padding_ = param_1->Flags;
  (__return_storage_ptr__->BoundingBox).Min.field0_0x0._s_0.X = 3.4028235e+38;
  (__return_storage_ptr__->BoundingBox).Min.field0_0x0._s_0.Y = 3.4028235e+38;
  (__return_storage_ptr__->BoundingBox).Min.field0_0x0._s_0.Z = 3.4028235e+38;
  (__return_storage_ptr__->BoundingBox).Max.field0_0x0._s_0.X = -3.4028235e+38;
  (__return_storage_ptr__->BoundingBox).Max.field0_0x0._s_0.Y = -3.4028235e+38;
  (__return_storage_ptr__->BoundingBox).Max.field0_0x0._s_0.Z = -3.4028235e+38;
  (__return_storage_ptr__->BoundingBox).IsValid = '\0';
  if (((int)__return_storage_ptr__->_padding_ != 0) && ((int)__return_storage_ptr__->_padding_ != 0)
     ) {
    uVar18 = 0;
    if (((int)__return_storage_ptr__->_padding_ < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      pFVar12 = (FHairStrandsDatas *)(*pcVar9)();
      return pFVar12;
    }
    *(undefined4 *)__return_storage_ptr__->_padding_ = 0;
    uVar17 = uVar18;
    uVar16 = uVar15;
    if ((int)__return_storage_ptr__->_padding_ != 0) {
      do {
        uVar11 = 0;
        if ((int)uVar15 < (int)__return_storage_ptr__->_padding_) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pFVar12 = (FHairStrandsDatas *)(*pcVar9)();
          return pFVar12;
        }
        lVar8 = __return_storage_ptr__->_padding_;
        uVar18 = uVar18 + *(ushort *)(lVar8 + (longlong)(int)uVar15 * 2);
        uVar19 = uVar15 + 1;
        uVar11 = 0;
        if ((int)uVar19 < (int)__return_storage_ptr__->_padding_) {
          uVar11 = ~uVar19 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pFVar12 = (FHairStrandsDatas *)(*pcVar9)();
          return pFVar12;
        }
        fVar25 = 0.0;
        local_b0 = 0.0;
        fStack_ac = 0.0;
        fVar24 = 0.0;
        *(uint *)(__return_storage_ptr__->_padding_ + (longlong)(int)uVar19 * 4) = uVar18;
        local_res18 = 0;
        if (*(short *)(lVar8 + (longlong)(int)uVar15 * 2) != 0) {
          while( true ) {
            uVar13 = ~uVar17 >> 0x1f;
            uVar11 = 0;
            if ((int)uVar17 < (int)__return_storage_ptr__->_padding_) {
              uVar11 = uVar13;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              pFVar12 = (FHairStrandsDatas *)(*pcVar9)();
              return pFVar12;
            }
            lVar14 = __return_storage_ptr__->_padding_;
            lVar20 = (longlong)(int)uVar17;
            if ((__return_storage_ptr__->BoundingBox).IsValid == '\0') {
              *(undefined8 *)&(__return_storage_ptr__->BoundingBox).Max.field0_0x0 =
                   *(undefined8 *)(lVar14 + lVar20 * 0xc);
              fVar22 = *(float *)(lVar14 + 8 + lVar20 * 0xc);
              (__return_storage_ptr__->BoundingBox).Max.field0_0x0._s_0.Z = fVar22;
              *(undefined8 *)&(__return_storage_ptr__->BoundingBox).Min.field0_0x0 =
                   *(undefined8 *)&(__return_storage_ptr__->BoundingBox).Max.field0_0x0;
              (__return_storage_ptr__->BoundingBox).Min.field0_0x0._s_0.Z = fVar22;
            }
            else {
              fVar22 = (__return_storage_ptr__->BoundingBox).Min.field0_0x0._s_0.X;
              fVar23 = *(float *)(lVar14 + lVar20 * 0xc);
              if (fVar23 <= fVar22) {
                fVar22 = fVar23;
              }
              fVar23 = (__return_storage_ptr__->BoundingBox).Min.field0_0x0._s_0.Y;
              (__return_storage_ptr__->BoundingBox).Min.field0_0x0._s_0.X = fVar22;
              fVar22 = *(float *)(lVar14 + 4 + lVar20 * 0xc);
              if (fVar22 <= fVar23) {
                fVar23 = fVar22;
              }
              fVar22 = (__return_storage_ptr__->BoundingBox).Min.field0_0x0._s_0.Z;
              (__return_storage_ptr__->BoundingBox).Min.field0_0x0._s_0.Y = fVar23;
              fVar23 = *(float *)(lVar14 + 8 + lVar20 * 0xc);
              if (fVar23 <= fVar22) {
                fVar22 = fVar23;
              }
              fVar23 = (__return_storage_ptr__->BoundingBox).Max.field0_0x0._s_0.X;
              (__return_storage_ptr__->BoundingBox).Min.field0_0x0._s_0.Z = fVar22;
              fVar22 = *(float *)(lVar14 + lVar20 * 0xc);
              if (fVar23 <= fVar22) {
                fVar23 = fVar22;
              }
              fVar22 = (__return_storage_ptr__->BoundingBox).Max.field0_0x0._s_0.Y;
              (__return_storage_ptr__->BoundingBox).Max.field0_0x0._s_0.X = fVar23;
              fVar23 = *(float *)(lVar14 + 4 + lVar20 * 0xc);
              if (fVar22 <= fVar23) {
                fVar22 = fVar23;
              }
              fVar23 = (__return_storage_ptr__->BoundingBox).Max.field0_0x0._s_0.Z;
              (__return_storage_ptr__->BoundingBox).Max.field0_0x0._s_0.Y = fVar22;
              fVar22 = *(float *)(lVar14 + 8 + lVar20 * 0xc);
              if (fVar23 <= fVar22) {
                fVar23 = fVar22;
              }
              (__return_storage_ptr__->BoundingBox).Max.field0_0x0._s_0.Z = fVar23;
            }
            (__return_storage_ptr__->BoundingBox).IsValid = '\x01';
            if (local_res18 != 0) {
              uVar11 = 0;
              if ((int)uVar17 < (int)__return_storage_ptr__->_padding_) {
                uVar11 = uVar13;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar9 = (code *)swi(3);
                pFVar12 = (FHairStrandsDatas *)(*pcVar9)();
                return pFVar12;
              }
              lVar14 = __return_storage_ptr__->_padding_;
              fVar24 = *(float *)(lVar14 + 8 + lVar20 * 0xc) - fVar24;
              local_b0 = *(float *)(lVar14 + lVar20 * 0xc) - local_b0;
              fStack_ac = *(float *)(lVar14 + 4 + lVar20 * 0xc) - fStack_ac;
              fVar25 = fVar25 + SQRT(fStack_ac * fStack_ac + local_b0 * local_b0 + fVar24 * fVar24);
            }
            uVar11 = 0;
            if ((int)uVar16 < (int)__return_storage_ptr__->_padding_) {
              uVar11 = ~uVar16 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              pFVar12 = (FHairStrandsDatas *)(*pcVar9)();
              return pFVar12;
            }
            *(float *)(__return_storage_ptr__->_padding_ + (longlong)(int)uVar16 * 4) = fVar25;
            uVar11 = 0;
            if ((int)uVar17 < (int)__return_storage_ptr__->_padding_) {
              uVar11 = uVar13;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              pFVar12 = (FHairStrandsDatas *)(*pcVar9)();
              return pFVar12;
            }
            uVar17 = uVar17 + 1;
            uVar16 = uVar16 + 1;
            local_res18 = local_res18 + 1;
            uVar4 = *(undefined8 *)(__return_storage_ptr__->_padding_ + lVar20 * 0xc);
            fVar24 = *(float *)(__return_storage_ptr__->_padding_ + 8 + lVar20 * 0xc);
            if (*(ushort *)(lVar8 + (longlong)(int)uVar15 * 2) <= local_res18) break;
            fStack_ac = (float)((ulonglong)uVar4 >> 0x20);
            local_b0 = (float)uVar4;
          }
        }
        uVar11 = 0;
        if ((int)uVar15 < (int)__return_storage_ptr__->_padding_) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pFVar12 = (FHairStrandsDatas *)(*pcVar9)();
          return pFVar12;
        }
        *(float *)(__return_storage_ptr__->_padding_ + (longlong)(int)uVar15 * 4) = fVar25;
        uVar11 = (uint)__return_storage_ptr__->_padding_;
        uVar15 = uVar19;
      } while (uVar19 < uVar11);
      uVar18 = 0;
      uVar15 = 0;
      if (uVar11 != 0) {
        do {
          uVar16 = ~uVar18 >> 0x1f;
          uVar17 = 0;
          if ((int)uVar18 < (int)__return_storage_ptr__->_padding_) {
            uVar17 = uVar16;
          }
          if ((uVar17 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            pFVar12 = (FHairStrandsDatas *)(*pcVar9)();
            return pFVar12;
          }
          lVar8 = __return_storage_ptr__->_padding_;
          uVar17 = 0;
          lVar14 = (longlong)(int)uVar18;
          if (*(short *)(lVar8 + lVar14 * 2) != 0) {
            do {
              uVar11 = 0;
              if ((int)uVar18 < (int)__return_storage_ptr__->_padding_) {
                uVar11 = uVar16;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar9 = (code *)swi(3);
                pFVar12 = (FHairStrandsDatas *)(*pcVar9)();
                return pFVar12;
              }
              if (0.0 < *(float *)(*this + lVar14 * 4)) {
                uVar11 = 0;
                if ((int)uVar18 < (int)__return_storage_ptr__->_padding_) {
                  uVar11 = uVar16;
                }
                if ((uVar11 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  pFVar12 = (FHairStrandsDatas *)(*pcVar9)();
                  return pFVar12;
                }
                fVar24 = *(float *)(*this + lVar14 * 4);
                uVar11 = 0;
                if ((int)uVar15 < (int)__return_storage_ptr__->_padding_) {
                  uVar11 = ~uVar15 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  pFVar12 = (FHairStrandsDatas *)(*pcVar9)();
                  return pFVar12;
                }
                *(float *)(__return_storage_ptr__->_padding_ + (longlong)(int)uVar15 * 4) =
                     *(float *)(__return_storage_ptr__->_padding_ + (longlong)(int)uVar15 * 4) /
                     fVar24;
              }
              uVar17 = uVar17 + 1;
              uVar15 = uVar15 + 1;
            } while (uVar17 < *(ushort *)(lVar8 + lVar14 * 2));
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < (uint)__return_storage_ptr__->_padding_);
      }
    }
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// BuildInterplationBulkData @ 14e0024e0

void __cdecl
HairInterpolationBuilder::BuildInterplationBulkData
          (FHairStrandsDatas *param_1,FHairStrandsInterpolationDatas *param_2,
          FHairStrandsInterpolationBulkData *param_3)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  void *pvVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  float fVar20;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_98;
  uint local_88;
  uint local_84;
  int local_80;
  uint local_78 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_70 [3];
  
  FHairStrandsInterpolationBulkData::Reset(param_3);
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1745,"HairInterpolationBuilder::BuildInterplationBulkData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
               ,0x6d1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1745);
  }
  uVar2 = (param_2->PointSimIndices).ArrayNum;
  if ((uVar2 != 0) && (uVar17 = (param_2->CurveSimIndices).ArrayNum, uVar17 != 0)) {
    (param_3->Header).Flags = 1;
    (param_3->Header).PointCount = uVar2;
    (param_3->Header).CurveCount = uVar17;
    (param_3->Header).Strides.CurveInterpolationStride = 0;
    (param_3->Header).Strides.PointInterpolationStride = 0;
    uVar18 = 2 - (param_2->bUseUniqueGuide != false);
    if (param_2->bUseUniqueGuide != false) {
      (param_3->Header).Flags = 3;
    }
    local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Header).Strides.CurveInterpolationStride = uVar18 * 8;
    (param_3->Header).Strides.PointInterpolationStride = uVar18 * 2;
    local_70[0].ArrayNum = 0;
    local_70[0].ArrayMax = 0;
    local_88 = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init
              (local_70,&local_88,(uVar18 * uVar17 & 0x1fffffff) << 1);
    FVar7.Data = local_70[0].AllocatorInstance.Data;
    fVar6 = __real_437f0000;
    uVar16 = 0;
    if (uVar17 != 0) {
      do {
        lVar11 = (longlong)(int)uVar16;
        uVar14 = 0;
        uVar12 = ~uVar16 >> 0x1f;
        local_80 = uVar16 * uVar18;
        local_84 = uVar12;
        do {
          uVar13 = (ulonglong)(uVar14 + local_80);
          uVar9 = 0;
          if ((int)uVar16 < (param_2->CurveSimIndices).ArrayNum) {
            uVar9 = uVar12;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar15 = (longlong)(int)uVar14;
          *(uint *)(FVar7.Data + uVar13 * 8) =
               *(uint *)(FVar7.Data + uVar13 * 8) ^
               (*(uint *)(FVar7.Data + uVar13 * 8) ^
               *(uint *)((param_2->CurveSimIndices).AllocatorInstance.Data +
                        (lVar15 + lVar11 * 2) * 4)) & 0xffffff;
          uVar9 = 0;
          if ((int)uVar16 < (param_2->CurveSimWeights).ArrayNum) {
            uVar9 = uVar12;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (param_2->CurveSimWeights).AllocatorInstance.Data;
          if ((1 < uVar14) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                 ,0x4b9,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar12 = local_84;
          fVar20 = *(float *)(pFVar3 + lVar15 * 4 + lVar11 * 8) * fVar6;
          if (fVar6 <= fVar20) {
            fVar20 = fVar6;
          }
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
          FVar7.Data[uVar13 * 8 + 3] = SUB81((longlong)fVar20,0);
          uVar9 = 0;
          if ((int)uVar16 < (param_2->CurveSimRootPointIndex).ArrayNum) {
            uVar9 = local_84;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = uVar14 + 1;
          *(undefined4 *)(FVar7.Data + uVar13 * 8 + 4) =
               *(undefined4 *)
                ((param_2->CurveSimRootPointIndex).AllocatorInstance.Data +
                (lVar15 + lVar11 * 2) * 4);
        } while (uVar14 < uVar18);
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar17);
    }
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_78[0] = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init
              (&local_98,local_78,
               uVar2 * (param_3->Header).Strides.PointInterpolationStride + 3 >> 2);
    FVar7.Data = local_98.AllocatorInstance.Data;
    uVar17 = 0;
    if (uVar2 != 0) {
      do {
        uVar16 = 0;
        if ((int)uVar17 < (param_2->PointSimIndices).ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (param_2->PointSimIndices).AllocatorInstance.Data;
        uVar16 = 0;
        if ((int)uVar17 < (param_2->PointSimLerps).ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_2->PointSimLerps).AllocatorInstance.Data;
        uVar16 = 0;
        do {
          lVar11 = (longlong)(int)uVar16;
          uVar13 = (ulonglong)(uVar17 * uVar18 + uVar16);
          FVar7.Data[uVar13 * 2] = pFVar3[lVar11 * 4 + (longlong)(int)uVar17 * 8];
          if ((1 < uVar16) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                 ,0x4b9,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar16 = uVar16 + 1;
          fVar20 = *(float *)(pFVar4 + lVar11 * 4 + (longlong)(int)uVar17 * 8) * fVar6;
          if (fVar6 <= fVar20) {
            fVar20 = fVar6;
          }
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
          FVar7.Data[uVar13 * 2 + 1] = SUB41((int)fVar20,0);
        } while (uVar16 < uVar18);
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar2);
    }
    uVar2 = (param_3->Header).PointCount;
    iVar1 = local_98.ArrayNum * 4;
    if ((uVar2 * (param_3->Header).Strides.PointInterpolationStride & 3) != 0) {
      if (param_2->bUseUniqueGuide == false) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                           ,0x735,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        (param_3->Header).PointCount = uVar2 + 1 & 0xfffffffe;
      }
    }
    if (((param_3->Header).PointCount * (param_3->Header).Strides.PointInterpolationStride != iVar1)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("PointSizeFromHeader == PointTotalSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                              ,0x739,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar1 = local_70[0].ArrayNum;
    FBulkData::Lock((FBulkData *)&(param_3->Data).CurveInterpolation.Data,2);
    pvVar10 = FBulkData::Realloc((FBulkData *)&(param_3->Data).CurveInterpolation.Data,
                                 (ulonglong)(uint)(iVar1 * 4),1);
    memcpy(pvVar10,local_70[0].AllocatorInstance.Data,(ulonglong)(uint)(iVar1 * 4));
    FBulkData::Unlock((FBulkData *)&(param_3->Data).CurveInterpolation.Data);
    iVar1 = local_98.ArrayNum;
    FBulkData::Lock((FBulkData *)&(param_3->Data).PointInterpolation.Data,2);
    pvVar10 = FBulkData::Realloc((FBulkData *)&(param_3->Data).PointInterpolation.Data,
                                 (ulonglong)(uint)(iVar1 * 4),1);
    memcpy(pvVar10,local_98.AllocatorInstance.Data,(ulonglong)(uint)(iVar1 * 4));
    FBulkData::Unlock((FBulkData *)&(param_3->Data).PointInterpolation.Data);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_70[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70[0].AllocatorInstance.Data);
    }
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BuildInterpolationData @ 14e002d30

void __cdecl
HairInterpolationBuilder::BuildInterpolationData
          (FHairStrandsInterpolationDatas *param_1,FHairStrandsDatas *param_2,
          FHairStrandsDatas *param_3,FHairInterpolationSettings *param_4,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_5)

{
  uint uVar1;
  longlong lVar2;
  FFeedbackContext *pFVar3;
  FText *pFVar4;
  bool bVar5;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  TVector<float>_u_0 local_1e8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> local_1b8;
  TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> local_1a8;
  TVector<float>_u_0 local_198;
  TVector<float>_u_0 local_188;
  TVector<float>_u_0 local_178;
  undefined8 local_16c;
  float local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  void *local_150;
  undefined8 local_148;
  TArray<int,TSizedDefaultAllocator<32>_> *local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  uint local_10c;
  TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> *local_108;
  FHairStrandsDatas *local_100;
  undefined4 local_f8;
  TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> *local_f0;
  FHairStrandsDatas *local_e8;
  TVector<float>_u_0 *local_e0;
  undefined4 *local_d8;
  FHairStrandsInterpolationDatas *local_d0;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *local_c8;
  undefined4 *local_c0;
  FSlowTask *local_b8;
  FSlowTask local_a8;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1556,"HairInterpolationBuilder::BuildInterpolationData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
               ,0x614);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1556);
  }
  FHairStrandsInterpolationDatas::SetNum(param_1,(uint)param_3->_padding_,(uint)param_3->_padding_);
  param_1->bUseUniqueGuide = param_4->bUseUniqueGuide;
  local_178._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_16c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  local_178._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_164 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_160 = 0x1f;
  local_15c = 0x20;
  local_158 = 0x20;
  local_154 = 0x20;
  local_150 = (void *)0x0;
  local_148 = 0;
  local_140 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_138 = 0;
  ExtractRoots(param_3,&local_1a8,(TVector<float> *)&local_198._s_0,
               (TVector<float> *)&local_188._s_0);
  ExtractRoots(param_2,&local_1b8,(TVector<float> *)&local_1e8._s_0,(TVector<float> *)local_1c8);
  if ((param_4->InterpolationQuality == Low) || (param_4->InterpolationQuality == Medium)) {
    if (local_1e8._s_0.X <= local_198._s_0.X) {
      local_198._s_0.X = local_1e8._s_0.X;
    }
    if (local_1e8._s_0.Y <= local_198._s_0.Y) {
      local_198._s_0.Y = local_1e8._s_0.Y;
    }
    local_1d8._4_4_ = local_198._s_0.Y;
    local_1d8._0_4_ = local_198._s_0.X;
    if (local_188._s_0.X <= (float)local_1c8._0_4_) {
      local_188._s_0.X = (float)local_1c8._0_4_;
    }
    if (local_188._s_0.Y <= (float)local_1c8._4_4_) {
      local_188._s_0.Y = (float)local_1c8._4_4_;
    }
    local_1e8._s_0.X = local_188._s_0.X;
    local_1e8._s_0.Y = local_188._s_0.Y;
    FRootsGrid::InsertRoots
              ((FRootsGrid *)&local_178._s_0,&local_1b8,(TVector<float> *)local_1d8,
               (TVector<float> *)&local_1e8._s_0);
  }
  pFVar3 = GWarn;
  lVar2 = param_2->_padding_;
  uVar1 = (uint)param_3->_padding_;
  local_res10[0] = 0;
  local_res18[0] = 0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_1d8,L"GroomBuilder",L"BuildInterpolationData",
                      L"Building groom simulation data");
  FSlowTask::FSlowTask(&local_a8,(float)uVar1,pFVar4,true,pFVar3);
  FSlowTask::Initialize(&local_a8);
  if ((longlong *)local_1d8._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_1d8._0_8_ + 0x10))();
  }
  FSlowTask::MakeDialog(&local_a8,false,false);
  FDateTime::UtcNow();
  local_120._0_1_ = param_4->GuideType;
  local_120._1_1_ = param_4->bOverrideGuides_DEPRECATED;
  local_120._2_2_ = *(undefined2 *)&param_4->field_0x2;
  local_120._4_4_ = param_4->HairToGuideDensity;
  uStack_118._0_4_ = param_4->RiggedGuideNumCurves;
  uStack_118._4_4_ = param_4->RiggedGuideNumPoints;
  local_128 = local_res20;
  local_110._0_1_ = param_4->InterpolationQuality;
  local_110._1_1_ = param_4->InterpolationDistance;
  local_110._2_1_ = param_4->bRandomizeGuide;
  local_110._3_1_ = param_4->bUseUniqueGuide;
  local_108 = &local_1a8;
  local_1d8._0_8_ = 0;
  local_f0 = &local_1b8;
  local_e0 = &local_178;
  local_d8 = local_res10;
  local_c8 = param_5;
  local_c0 = local_res18;
  local_b8 = &local_a8;
  local_1c8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`HairInterpolationBuilder::BuildInterpolationData'::__l2::<lambda_1>,void,int>
       ::Call;
  local_1d8._8_4_ = 0.0;
  local_1c8._8_8_ = &local_128;
  local_10c = uVar1;
  local_100 = param_3;
  local_f8 = (int)lVar2;
  local_e8 = param_2;
  local_d0 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar1,1,(TFunctionRef<void___cdecl(int)> *)local_1c8,param_5._0_1_,
             None,(TArrayView<std::nullptr_t,int> *)local_1d8);
  FSlowTask::Destroy(&local_a8);
  if (local_a8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_a8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.DefaultMessage.TextData.Reference + 0x10))();
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_140,(int)local_138);
  if (local_140 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_140);
  }
  if (local_150 != (void *)0x0) {
    FMemory::Free(local_150);
  }
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ComputeAdvandedMetric @ 14e0052d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
HairInterpolationBuilder::ComputeAdvandedMetric
          (FMetrics *param_1,FHairStrandsDatas *param_2,FHairStrandsDatas *param_3,int param_4,
          int param_5,TStaticArray<UE::Math::TVector<float>,16,4294967295> *param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auStackY_168 [32];
  TStaticArray<UE::Math::TVector<float>,16,4294967295> local_118;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  GetCurvePositions<16>(param_3,param_5,&local_118);
  fVar3 = __real_3f800000;
  fVar2 = ComputeCurvesMetric<16>
                    (param_2,param_4,param_3,param_5,param_6,&local_118,0.0,__real_3f800000,
                     __real_3f800000);
  fVar3 = fVar3 - fVar2;
  if (fVar3 < param_1->KMinMetrics[1]) {
    fVar2 = param_1->KMinMetrics[0];
    iVar1 = param_5;
    if (fVar3 < fVar2) {
      iVar1 = param_1->KClosestGuideIndices[0];
      param_1->KClosestGuideIndices[0] = param_5;
      param_1->KMinMetrics[0] = fVar3;
      fVar3 = fVar2;
    }
    param_1->KClosestGuideIndices[1] = iVar1;
    param_1->KMinMetrics[1] = fVar3;
  }
  return;
}

// ComputeCoverage @ 14e0053d0

void __cdecl
GroomBuilder_Voxelization::ComputeCoverage
          (float param_1,
          TArray<GroomBuilder_Voxelization::FHairGrid::FVoxel,TSizedDefaultAllocator<32>_> *param_2,
          TArray<GroomBuilder_Voxelization::FVoxelCoverage,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  <lambda_1> local_res10;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  float *local_50;
  float local_48 [2];
  TArray<GroomBuilder_Voxelization::FHairGrid::FVoxel,TSizedDefaultAllocator<32>_> *local_40;
  TArray<GroomBuilder_Voxelization::FVoxelCoverage,TSizedDefaultAllocator<32>_> *local_38;
  
  iVar6 = param_3->ArrayNum;
  piVar1 = &param_3->ArrayNum;
  uVar2 = param_2->ArrayNum;
  if (iVar6 < (int)uVar2) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,uVar2 - iVar6,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax);
    DefaultConstructItems<GroomBuilder_Voxelization::FVoxelCoverage,int>
              ((param_3->AllocatorInstance).Data + (longlong)iVar5 * 0xc,uVar2 - iVar6);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar6) {
      uVar7 = iVar6 - uVar2;
      if ((int)(uVar7 | uVar2) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar7 != 0) {
        _Dst = (param_3->AllocatorInstance).Data + (longlong)(int)uVar2 * 0xc;
        iVar6 = (*piVar1 - uVar2) - uVar7;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar7 * 0xc,(longlong)iVar6 * 0xc);
        }
        *piVar1 = *piVar1 - uVar7;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&param_3->AllocatorInstance,*piVar1,&param_3->ArrayMax);
      }
    }
  }
  local_68.DataPtr = (void **)0x0;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`GroomBuilder_Voxelization::ComputeCoverage'::__l2::<lambda_1>,void,int>
             ::Call;
  local_50 = local_48;
  local_68.ArrayNum = 0;
  local_48[0] = param_1;
  local_40 = param_2;
  local_38 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_58,local_res10,
             None,&local_68);
  return;
}

// ComputeHairCoverageScale @ 14e005590

void __cdecl
GroomBuilder_Voxelization::ComputeHairCoverageScale
          (FHairStrandsDatas *param_1,
          TArray<GroomBuilder_Voxelization::FCoverageScale,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  float fVar2;
  <lambda_1> <Var3;
  TArray<GroomBuilder_Voxelization::FCoverageScale,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  <lambda_1> local_res8 [8];
  TArray<GroomBuilder_Voxelization::FCoverageScale,TSizedDefaultAllocator<32>_> *local_res10;
  int local_res18;
  uint local_res20;
  TArray<GroomBuilder_Voxelization::FHairGrid::FVoxel,TSizedDefaultAllocator<32>_> local_138;
  FCoverageScale local_128;
  TArray<GroomBuilder_Voxelization::FVoxelCoverage,TSizedDefaultAllocator<32>_> local_120;
  ulonglong local_110;
  FHairGrid local_108;
  TArrayView<std::nullptr_t,int> local_d0;
  code *local_c0;
  float *local_b8;
  float local_b0 [2];
  TArray<GroomBuilder_Voxelization::FHairGrid::FVoxel,TSizedDefaultAllocator<32>_> *local_a8;
  TArray<GroomBuilder_Voxelization::FVoxelCoverage,TSizedDefaultAllocator<32>_> *local_a0;
  int local_98;
  uint local_94;
  undefined8 local_90;
  ulonglong *local_88;
  
  local_108.Voxels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Voxels.ArrayNum = 0;
  local_108.Voxels.ArrayMax = 0;
  local_res10 = param_2;
  AllocateVoxels(&param_1->BoundingBox,&local_108);
  VoxelizeCurves(param_1,0,&local_108);
  uVar8 = local_108.Voxels._8_8_ & 0xffffffff;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  if (local_108.Voxels.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar8);
  }
  if (0 < local_108.Voxels.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_108.Voxels.ArrayNum,&local_138.AllocatorInstance,0,&local_138.ArrayMax);
    uVar8 = local_108.Voxels._8_8_ & 0xffffffff;
  }
  iVar6 = (int)uVar8;
  pFVar14 = local_108.Voxels.AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  FVar10.Data = local_108.Voxels.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar6) {
      local_res8[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<GroomBuilder_Voxelization::FHairGrid::FVoxel,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
      uVar8 = local_108.Voxels._8_8_ & 0xffffffff;
    }
    if (FVar10.Data == pFVar14) break;
    if (0 < *(int *)(FVar10.Data + 8)) {
      if (((local_138.AllocatorInstance.Data <= FVar10.Data) &&
          (FVar10.Data < local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_138.ArrayNum == local_138.ArrayMax) {
        local_138.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_138.AllocatorInstance,&local_138.ArrayMax);
      }
      lVar9 = (longlong)local_138.ArrayNum;
      local_138.ArrayNum = local_138.ArrayNum + 1;
      FHairGrid::FVoxel::FVoxel
                ((FVoxel *)(local_138.AllocatorInstance.Data + lVar9 * 0x10),(FVoxel *)FVar10.Data);
      uVar8 = local_108.Voxels._8_8_ & 0xffffffff;
    }
    FVar10.Data = FVar10.Data + 0x10;
  }
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  ComputeCoverage(local_108.VoxelSize,&local_138,&local_120);
  uVar12 = (uint)param_1->_padding_;
  uVar11 = uVar12;
  if (100 < uVar12) {
    uVar11 = 100;
  }
  uVar8 = (ulonglong)((uVar12 - 1) + uVar11) / (ulonglong)uVar11;
  iVar6 = (int)uVar8;
  if ((iVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BucketSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xcca,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar11 = (uint)(((uVar12 - 1) + iVar6) / uVar8);
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BucketCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xccb,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar17 = __real_3f800000;
  local_128.ScreenSize = 1.0;
  local_128.CoverageScale = 1.0;
  TArray<GroomBuilder_Voxelization::FCoverageScale,TSizedDefaultAllocator<32>_>::Init
            (param_2,&local_128,uVar11);
  <Var3 = local_res8[0];
  fVar2 = __real_358637bd;
  if ((1 < uVar11) && (uVar13 = uVar11 - 1, -1 < (int)uVar13)) {
    local_res20 = uVar12 - 1;
    iVar15 = uVar13 * iVar6;
    lVar9 = (longlong)(int)uVar13 * 8;
    local_res18 = -iVar6;
    uVar12 = uVar11 * iVar6 - 1;
    do {
      fVar16 = local_108.VoxelSize;
      uVar11 = uVar12;
      if (local_res20 < uVar12) {
        uVar11 = local_res20;
      }
      if ((local_138.ArrayNum != local_120.ArrayNum) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InNonEmptyVoxels.Num() == InReferenceCoverage.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                             ,0xc6b,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar6 = local_138.ArrayNum;
      local_b0[0] = fVar16;
      local_a8 = &local_138;
      local_110 = 0;
      local_a0 = &local_120;
      local_d0.DataPtr = (void **)0x0;
      local_88 = &local_110;
      local_d0.ArrayNum = 0;
      local_c0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`GroomBuilder_Voxelization::RemoveCurveAndComputeCoverageScaling'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_b8 = local_b0;
      local_90 = 1000000;
      local_98 = iVar15;
      local_94 = uVar11;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",local_138.ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_c0,<Var3,None,&local_d0);
      pTVar4 = local_res10;
      uVar11 = 1;
      if (1 < (uint)iVar6) {
        uVar11 = iVar6;
      }
      uVar7 = 0;
      if ((int)uVar13 < local_res10->ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      fVar16 = ((float)local_110 * fVar2) / (float)uVar11;
      if (fVar16 <= fVar17) {
        fVar16 = fVar17;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(float *)((pTVar4->AllocatorInstance).Data + lVar9 + 4) = fVar16;
      uVar11 = 0;
      if ((int)uVar13 < pTVar4->ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar15 = iVar15 + local_res18;
      uVar12 = uVar12 + local_res18;
      *(undefined4 *)((pTVar4->AllocatorInstance).Data + lVar9) = 0x3f800000;
      lVar9 = lVar9 + -8;
      uVar13 = uVar13 - 1;
      fVar17 = fVar16;
    } while (-1 < (int)uVar13);
  }
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  DestructItems<GroomBuilder_Voxelization::FHairGrid::FVoxel,int>
            ((FVoxel *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  DestructItems<GroomBuilder_Voxelization::FHairGrid::FVoxel,int>
            ((FVoxel *)local_108.Voxels.AllocatorInstance.Data,local_108.Voxels.ArrayNum);
  if (local_108.Voxels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Voxels.AllocatorInstance.Data);
  }
  return;
}

// DecimateCurveLOD @ 14e008f90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
GroomBuilder_Cluster::DecimateCurveLOD
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,uint param_2,
          uint param_3,TArray<FHairLODSettings,TSizedDefaultAllocator<32>_> *param_4,uint *param_5,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  byte bVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  byte local_res20;
  undefined1 local_178;
  undefined1 local_177 [7];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_170;
  ForAnyElementType local_160;
  uint local_158;
  int local_154;
  uint local_150;
  uint local_14c;
  float local_148;
  uint local_144;
  uint local_140;
  float local_13c;
  uint local_138;
  float local_134;
  float fStack_130;
  float local_12c;
  undefined8 local_128;
  float local_118;
  float fStack_114;
  float local_110;
  undefined8 local_108;
  longlong local_f8;
  FScriptContainerElement *local_f0;
  
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_6,param_3,Default);
  local_158 = param_4->ArrayNum;
  lVar17 = (longlong)(int)local_158;
  pFVar12 = (param_4->AllocatorInstance).Data;
  local_160.Data = (FScriptContainerElement *)0x0;
  if (local_158 == 0) {
    local_154 = 0;
    uVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,local_158,0,&local_160,local_158,&local_154);
    memcpy(local_160.Data,pFVar12,lVar17 * 0x1c);
    uVar11 = local_158;
  }
  fVar4 = __real_42b40000;
  fVar5 = __real_3f800000;
  pFVar12 = local_160.Data + 8;
  pFVar14 = local_160.Data + (longlong)(int)uVar11 * 0x1c;
  fVar27 = 0.0;
  fVar28 = __real_3f800000;
  uVar7 = uVar11;
  while( true ) {
    if (uVar7 != uVar11) {
      local_178 = 0;
      `TCheckedPointerIterator<FHairLODSettings,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_178);
    }
    pFVar1 = pFVar12 + -8;
    if (pFVar1 == pFVar14) break;
    fVar21 = *(float *)pFVar1;
    if (fVar5 <= *(float *)pFVar1) {
      fVar21 = fVar5;
    }
    fVar22 = *(float *)(pFVar12 + -4);
    if (fVar5 <= *(float *)(pFVar12 + -4)) {
      fVar22 = fVar5;
    }
    fVar25 = 0.0;
    if (fVar21 <= 0.0) {
      fVar21 = fVar25;
    }
    if (fVar22 <= 0.0) {
      fVar22 = fVar25;
    }
    *(float *)pFVar1 = fVar21;
    fVar21 = *(float *)pFVar12;
    if (fVar4 <= *(float *)pFVar12) {
      fVar21 = fVar4;
    }
    *(float *)(pFVar12 + -4) = fVar22;
    if (fVar21 <= 0.0) {
      fVar21 = fVar25;
    }
    *(float *)pFVar12 = fVar21;
    if (fVar28 < fVar22) {
      *(float *)(pFVar12 + -4) = fVar28;
      fVar22 = fVar28;
    }
    if (fVar21 < fVar27) {
      *(float *)pFVar12 = fVar27;
      fVar21 = fVar27;
    }
    pFVar12 = pFVar12 + 0x1c;
    fVar27 = fVar21;
    fVar28 = fVar22;
    uVar7 = local_158;
  }
  if ((param_3 < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount > 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xdd7,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar18 = 0;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(&local_170,param_3,Default);
  uVar20 = uVar18;
  if (param_3 != 0) {
    do {
      uVar7 = (uint)uVar20;
      uVar11 = 0;
      if ((int)uVar7 < local_170.ArrayNum) {
        uVar11 = ~uVar7 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)(local_170.AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = uVar7;
      uVar20 = (ulonglong)(uVar7 + 1);
    } while (uVar7 + 1 < param_3);
  }
  uVar11 = local_158;
  local_138 = local_158;
  if ((8 < local_158) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODCount <= FHairClusterInfo::MaxLOD",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xde2,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar27 = __real_bf800000;
  fVar4 = __real_322bcc77;
  local_res20 = 0;
  if (uVar11 != 0) {
    fVar28 = (float)param_3;
    local_14c = 0;
    fVar21 = __real_7f7fffff;
    fVar22 = __real_bf000000;
    fVar25 = __real_3c8efa35;
    local_13c = fVar28;
    do {
      if (((int)local_158 <= (int)uVar18) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = -((int)ROUND(fVar22 - (fVar28 + fVar28) *
                                    *(float *)(local_160.Data + uVar18 * 0x1c + 4)) >> 1);
      uVar11 = param_3;
      if (uVar7 < param_3) {
        uVar11 = uVar7;
      }
      uVar7 = 2;
      if (2 < uVar11) {
        uVar7 = uVar11;
      }
      local_140 = uVar7;
      if (((int)local_158 <= (int)uVar18) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar13 = 1;
      local_148 = *(float *)(local_160.Data + uVar18 * 0x1c + 8) * fVar25;
      if ((int)uVar7 < local_170.ArrayNum) {
        fVar29 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        fVar30 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        do {
          fVar28 = local_13c;
          fVar22 = __real_bf000000;
          fVar25 = __real_3c8efa35;
          if (bVar13 == 0) break;
          local_144 = local_170.ArrayNum - 1;
          uVar20 = 0xffffffff;
          local_150 = 0xffffffff;
          fVar28 = fVar21;
          uVar11 = 1;
          if (1 < local_144) {
            do {
              uVar19 = uVar11 + 1;
              uVar7 = 0;
              if ((int)(uVar11 - 1) < local_170.ArrayNum) {
                uVar7 = -uVar11 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                fVar29 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                fVar30 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                                0x20);
                uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              }
              uVar16 = *(int *)(local_170.AllocatorInstance.Data + (longlong)(int)uVar19 * 4 + -8) +
                       param_2;
              uVar7 = 0;
              if ((int)uVar16 < param_1->ArrayNum) {
                uVar7 = ~uVar16 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                fVar29 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                fVar30 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                                0x20);
                uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              }
              local_f8 = (longlong)(int)uVar16 * 3;
              local_f0 = (param_1->AllocatorInstance).Data;
              uVar7 = 0;
              if ((int)uVar11 < local_170.ArrayNum) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                fVar29 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                fVar30 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                                0x20);
                uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              }
              uVar16 = *(int *)(local_170.AllocatorInstance.Data + (longlong)(int)uVar11 * 4) +
                       param_2;
              uVar7 = 0;
              if ((int)uVar16 < param_1->ArrayNum) {
                uVar7 = ~uVar16 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                fVar29 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                fVar30 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                                0x20);
                uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              }
              pFVar12 = (param_1->AllocatorInstance).Data;
              lVar17 = (longlong)(int)uVar16;
              uVar7 = 0;
              if ((int)uVar19 < local_170.ArrayNum) {
                uVar7 = ~uVar19 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                fVar29 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                fVar30 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                                0x20);
                uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              }
              uVar16 = *(int *)(local_170.AllocatorInstance.Data + (longlong)(int)uVar11 * 4 + 4) +
                       param_2;
              uVar7 = 0;
              if ((int)uVar16 < param_1->ArrayNum) {
                uVar7 = ~uVar16 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                fVar29 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                fVar30 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                                0x20);
                uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              }
              lVar9 = (longlong)(int)uVar16;
              pFVar14 = (param_1->AllocatorInstance).Data;
              fVar31 = *(float *)(pFVar14 + lVar9 * 0xc + 4) -
                       *(float *)(pFVar12 + lVar17 * 0xc + 4);
              local_110 = *(float *)(pFVar14 + lVar9 * 0xc + 8) -
                          *(float *)(pFVar12 + lVar17 * 0xc + 8);
              fVar26 = *(float *)(pFVar14 + lVar9 * 0xc) - *(float *)(pFVar12 + lVar17 * 0xc);
              fVar33 = *(float *)(local_f0 + local_f8 * 4 + 4) -
                       *(float *)(pFVar12 + lVar17 * 0xc + 4);
              local_12c = *(float *)(local_f0 + local_f8 * 4 + 8) -
                          *(float *)(pFVar12 + lVar17 * 0xc + 8);
              fVar32 = *(float *)(local_f0 + local_f8 * 4) - *(float *)(pFVar12 + lVar17 * 0xc);
              fVar25 = fVar33 * local_110 - local_12c * fVar31;
              fVar22 = local_12c * fVar26 - fVar32 * local_110;
              fVar21 = fVar32 * fVar31 - fVar33 * fVar26;
              fVar22 = SQRT(fVar22 * fVar22 + fVar25 * fVar25 + fVar21 * fVar21) * __real_3f000000;
              fVar21 = fVar33 * fVar33 + fVar32 * fVar32 + local_12c * local_12c;
              if (fVar21 == fVar5) {
                local_128 = CONCAT44(fVar33,fVar32);
                fVar21 = fVar33;
                fVar25 = fVar32;
                fVar23 = local_12c;
              }
              else if (fVar4 <= fVar21) {
                fVar23 = fVar5 / SQRT(fVar21);
                fVar21 = fVar33 * fVar23;
                fVar25 = fVar32 * fVar23;
                fVar23 = local_12c * fVar23;
              }
              else {
                local_128 = CONCAT44(fVar30,fVar29);
                fVar21 = fVar30;
                fVar25 = fVar29;
                fVar23 = (float)uVar10;
              }
              _local_134 = CONCAT44(fVar33,fVar32);
              fVar32 = fVar26 * fVar26 + fVar31 * fVar31 + local_110 * local_110;
              if (fVar32 == fVar5) {
                local_108 = CONCAT44(fVar31,fVar26);
                fVar32 = fVar31;
                fVar33 = fVar26;
                fVar24 = local_110;
              }
              else if (fVar4 <= fVar32) {
                fVar24 = fVar5 / SQRT(fVar32);
                fVar32 = fVar31 * fVar24;
                fVar33 = fVar26 * fVar24;
                fVar24 = local_110 * fVar24;
              }
              else {
                local_108 = CONCAT44(fVar30,fVar29);
                fVar32 = fVar30;
                fVar33 = fVar29;
                fVar24 = (float)uVar10;
              }
              _local_118 = CONCAT44(fVar31,fVar26);
              fVar25 = fVar32 * fVar21 + fVar33 * fVar25 + fVar24 * fVar23;
              fVar21 = fVar27;
              if ((fVar27 <= fVar25) && (fVar21 = fVar25, fVar5 <= fVar25)) {
                fVar21 = fVar5;
              }
              if ((fVar22 < fVar28) &&
                 (fVar21 = acosf(fVar21),
                 (__real_40490fdb - (float)((uint)fVar21 & __xmm_7fffffff7fffffff7fffffff7fffffff))
                 * __real_3f000000 < local_148)) {
                fVar28 = fVar22;
                local_150 = uVar11;
              }
              uVar20 = (ulonglong)local_150;
              fVar21 = __real_7f7fffff;
              uVar7 = local_140;
              uVar11 = uVar19;
            } while (uVar19 < local_144);
          }
          uVar11 = (uint)uVar20;
          bVar13 = (byte)(uVar20 >> 0x1f) ^ 1;
          if (bVar13 != 0) {
            uVar19 = 0;
            if ((int)uVar11 < local_170.ArrayNum) {
              uVar19 = ~uVar11 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar8 = (local_170.ArrayNum - uVar11) + -1;
            if (iVar8 != 0) {
              memmove(local_170.AllocatorInstance.Data + (longlong)(int)uVar11 * 4,
                      local_170.AllocatorInstance.Data + (longlong)(int)uVar11 * 4 + 4,
                      (longlong)iVar8 << 2);
            }
            iVar8 = local_170.ArrayNum + -1;
            local_170.ArrayNum = iVar8;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&local_170.AllocatorInstance,iVar8,&local_170.ArrayMax);
            fVar29 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            fVar30 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
            uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          }
          fVar28 = local_13c;
          fVar22 = __real_bf000000;
          fVar25 = __real_3c8efa35;
        } while ((int)uVar7 < local_170.ArrayNum);
      }
      iVar8 = local_170.ArrayNum;
      param_5[local_res20] = local_170.ArrayNum;
      pFVar12 = local_170.AllocatorInstance.Data + (longlong)local_170.ArrayNum * 4;
      FVar15.Data = local_170.AllocatorInstance.Data;
      while( true ) {
        if (local_170.ArrayNum != iVar8) {
          local_177[0] = 0;
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_177);
        }
        if (FVar15.Data == pFVar12) break;
        uVar11 = *(uint *)FVar15.Data;
        uVar7 = 0;
        if ((int)uVar11 < param_6->ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = (param_6->AllocatorInstance).Data;
        pFVar14[(int)uVar11] =
             (FScriptContainerElement)((byte)pFVar14[(int)uVar11] | (byte)(1 << (local_14c & 0x1f)))
        ;
        FVar15.Data = FVar15.Data + 4;
      }
      local_res20 = local_res20 + 1;
      uVar18 = (ulonglong)local_res20;
      local_14c = (uint)local_res20;
    } while (local_14c < local_138);
  }
  uVar11 = 0;
  if (param_3 != 0) {
    do {
      uVar7 = 0;
      if ((int)uVar11 < param_6->ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (param_6->AllocatorInstance).Data[(int)uVar11];
      if (((FVar2 != (FScriptContainerElement)0x0) &&
          (((0x3f < (byte)FVar2 ||
            ((0x800000008000808aU >> ((ulonglong)(byte)FVar2 & 0x3f) & 1) == 0)) &&
           (FVar2 != (FScriptContainerElement)0x7f)))) &&
         ((FVar2 != (FScriptContainerElement)0xff &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mask == 0 || Mask == 1 || Mask == 3 || Mask == 7 || Mask == 15 || Mask == 31 || Mask == 63 || Mask == 127 || Mask == 255"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                              ,0xe1d,L""), bVar6)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_3);
  }
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
  return;
}

// DumpLoadedGroomComponent @ 14e00af90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl DumpLoadedGroomComponent(IConsoleVariable *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  EInternalObjectFlags EVar10;
  uint uVar11;
  UClass *pUVar12;
  FGroomComponentMemoryStats *pFVar13;
  undefined8 *puVar14;
  FHairGroupInstance *pFVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  FHairGroupInstance *pFVar18;
  uint uVar19;
  longlong lVar20;
  FHairGroupInstance *pFVar21;
  undefined8 *puVar22;
  TObjectIterator<UGroomComponent> local_e8;
  uint local_d0;
  undefined8 *local_c8;
  uint local_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  FHairGroupInstance *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  FString local_90;
  FGroomComponentMemoryStats local_80 [4];
  
  bVar9 = false;
  bVar6 = false;
  bVar5 = false;
  if ((((4 < (byte)LogHairStrands._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogHairStrands),
       4 < (byte)LogHairStrands._0_1_)) &&
      (UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogHairStrands),
      4 < (byte)LogHairStrands._0_1_)) &&
     (UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogHairStrands),
     4 < (byte)LogHairStrands._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogHairStrands);
  }
  local_e8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ObjectArray.ArrayNum = 0;
  local_e8.ObjectArray.ArrayMax = 0;
  local_e8.Index = 0xffffffff;
  EVar10 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar12 = UGroomComponent::StaticClass();
  GetObjectsOfClass(pUVar12,&local_e8.ObjectArray,true,RF_ClassDefaultObject,
                    EVar10 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UGroomComponent>::Advance(&local_e8);
  puVar16 = local_a0;
  puVar17 = local_98;
  pFVar18 = local_b0;
  puVar22 = local_a8;
  do {
    lVar20 = (longlong)local_e8.Index;
    if ((local_e8.Index < 0) || (local_e8.ObjectArray.ArrayNum <= local_e8.Index)) {
      if (local_e8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.ObjectArray.AllocatorInstance.Data);
      }
      if ((4 < (byte)LogHairStrands._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogHairStrands),
         4 < (byte)LogHairStrands._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      }
      return;
    }
    uVar19 = 0;
    if (local_e8.Index < local_e8.ObjectArray.ArrayNum) {
      uVar19 = (uint)~local_e8.Index >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar19 = 0;
    local_d0 = *(uint *)(*(longlong *)(local_e8.ObjectArray.AllocatorInstance.Data + lVar20 * 8) +
                        0x790);
    if (local_d0 != 0) {
      do {
        lVar20 = (longlong)local_e8.Index;
        uVar11 = 0;
        if (local_e8.Index < local_e8.ObjectArray.ArrayNum) {
          uVar11 = (uint)~local_e8.Index >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar20 = *(longlong *)(local_e8.ObjectArray.AllocatorInstance.Data + lVar20 * 8);
        if (((int)uVar19 < 0) || (*(int *)(lVar20 + 0x790) <= (int)uVar19)) {
          bVar5 = true;
          local_c8 = (undefined8 *)0x0;
          puVar17 = (undefined8 *)0x0;
        }
        else {
          bVar6 = true;
          if (((int)uVar19 < 0) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar16 = *(undefined8 **)(*(longlong *)(lVar20 + 0x788) + (longlong)(int)uVar19 * 8);
          local_c8 = puVar16;
          if (puVar16 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
            UNLOCK();
          }
        }
        if ((bVar5) && (bVar5 = false, puVar17 != (undefined8 *)0x0)) {
          piVar1 = (int *)(puVar17 + 1);
          LOCK();
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            puVar14 = puVar17;
            if (piVar1 == (int *)0x0) {
              puVar14 = (undefined8 *)0x0;
            }
            if (puVar14 != (undefined8 *)0x0) {
              (**(code **)*puVar14)(puVar14,1);
            }
          }
        }
        if ((bVar6) && (bVar6 = false, puVar16 != (undefined8 *)0x0)) {
          piVar1 = (int *)(puVar16 + 1);
          LOCK();
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            puVar14 = puVar16;
            if (piVar1 == (int *)0x0) {
              puVar14 = (undefined8 *)0x0;
            }
            if (puVar14 != (undefined8 *)0x0) {
              (**(code **)*puVar14)(puVar14,1);
            }
          }
        }
        lVar20 = (longlong)local_e8.Index;
        uVar11 = 0;
        if (local_e8.Index < local_e8.ObjectArray.ArrayNum) {
          uVar11 = (uint)~local_e8.Index >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar20 = *(longlong *)(local_e8.ObjectArray.AllocatorInstance.Data + lVar20 * 8);
        if (((int)uVar19 < 0) || (*(int *)(lVar20 + 0x790) <= (int)uVar19)) {
          puVar22 = (undefined8 *)0x0;
          pFVar21 = (FHairGroupInstance *)0x0;
          bVar7 = false;
          bVar8 = true;
        }
        else {
          if (((int)uVar19 < 0) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar18 = *(FHairGroupInstance **)
                     (*(longlong *)(lVar20 + 0x788) + (longlong)(int)uVar19 * 8);
          if (pFVar18 != (FHairGroupInstance *)0x0) {
            LOCK();
            *(int *)&pFVar18->field_0x8 = *(int *)&pFVar18->field_0x8 + 1;
            UNLOCK();
          }
          bVar7 = true;
          bVar8 = false;
          pFVar21 = pFVar18;
        }
        if ((bVar8) && (puVar22 != (undefined8 *)0x0)) {
          piVar1 = (int *)(puVar22 + 1);
          LOCK();
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            puVar14 = puVar22;
            if (piVar1 == (int *)0x0) {
              puVar14 = (undefined8 *)0x0;
            }
            if (puVar14 != (undefined8 *)0x0) {
              (**(code **)*puVar14)(puVar14,1);
            }
          }
        }
        if ((bVar7) && (pFVar18 != (FHairGroupInstance *)0x0)) {
          puVar2 = &pFVar18->field_0x8;
          LOCK();
          iVar3 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            pFVar15 = pFVar18;
            if (puVar2 == (undefined1 *)0x0) {
              pFVar15 = (FHairGroupInstance *)0x0;
            }
            if (pFVar15 != (FHairGroupInstance *)0x0) {
              (*(code *)**(undefined8 **)pFVar15)(pFVar15,1);
            }
          }
        }
        pFVar13 = FGroomComponentMemoryStats::Get(local_80,pFVar21);
        local_b8 = pFVar13->Guides;
        uStack_b4 = pFVar13->Strands;
        local_c0 = pFVar13->Cards;
        uStack_bc = pFVar13->Meshes;
        if (4 < (byte)LogHairStrands._0_1_) {
          if (uVar19 == 0) {
            lVar20 = (longlong)local_e8.Index;
            uVar11 = 0;
            if (local_e8.Index < local_e8.ObjectArray.ArrayNum) {
              uVar11 = (uint)~local_e8.Index >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            if (*(longlong *)
                 (*(longlong *)(local_e8.ObjectArray.AllocatorInstance.Data + lVar20 * 8) + 0x5a0)
                != 0) {
              lVar20 = (longlong)local_e8.Index;
              uVar11 = 0;
              if (local_e8.Index < local_e8.ObjectArray.ArrayNum) {
                uVar11 = (uint)~local_e8.Index >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              bVar9 = true;
              UObjectBaseUtility::GetPathName
                        (*(UObjectBaseUtility **)
                          (*(longlong *)(local_e8.ObjectArray.AllocatorInstance.Data + lVar20 * 8) +
                          0x5a0),&local_90,(UObject *)0x0);
            }
          }
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogHairStrands);
          if ((bVar9) &&
             (bVar9 = false, local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < local_d0);
    }
    TObjectIterator<UGroomComponent>::Advance(&local_e8);
  } while( true );
}

// EmptyLinkFunctionForGeneratedCodeGroomBlueprintLibrary @ 14e00b820

void __cdecl EmptyLinkFunctionForGeneratedCodeGroomBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGroomCache @ 14e00b830

void __cdecl EmptyLinkFunctionForGeneratedCodeGroomCache(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGroomCacheData @ 14e00b840

void __cdecl EmptyLinkFunctionForGeneratedCodeGroomCacheData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGroomComponent @ 14e00b850

void __cdecl EmptyLinkFunctionForGeneratedCodeGroomComponent(void)

{
  return;
}

// ExtractRoots @ 14e00c090

void __cdecl
HairInterpolationBuilder::ExtractRoots
          (FHairStrandsDatas *param_1,
          TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> *param_2,
          TVector<float> *param_3,TVector<float> *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  float fStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  
  (param_3->field0_0x0)._s_0.X = 3.4028235e+38;
  (param_3->field0_0x0)._s_0.Y = 3.4028235e+38;
  (param_3->field0_0x0)._s_0.Z = 3.4028235e+38;
  (param_4->field0_0x0)._s_0.X = -3.4028235e+38;
  (param_4->field0_0x0)._s_0.Y = -3.4028235e+38;
  (param_4->field0_0x0)._s_0.Z = -3.4028235e+38;
  uVar5 = (uint)param_1->_padding_;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  piVar1 = &param_2->ArrayNum;
  if (param_2->ArrayMax < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,uVar5,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
  }
  fVar9 = __real_3f800000;
  fVar8 = __real_322bcc77;
  uVar20 = 0;
  if (uVar5 != 0) {
    do {
      uVar16 = ~uVar20 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar20 < (int)param_1->_padding_) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar18 = (longlong)(int)uVar20;
      uVar11 = *(uint *)(param_1->_padding_ + lVar18 * 4);
      lVar19 = (longlong)(int)uVar11;
      uVar12 = 0;
      if ((int)uVar20 < (int)param_1->_padding_) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar4 = *(ushort *)(param_1->_padding_ + lVar18 * 2);
      uVar12 = 0;
      if ((int)uVar20 < (int)param_1->_padding_) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar2 = *(undefined4 *)(param_1->_padding_ + lVar18 * 4);
      uVar16 = (uint)uVar4;
      if ((uVar16 < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("PointCount > 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                              ,0x5af,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar12 = 0;
      if ((int)uVar11 < (int)param_1->_padding_) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar17 = uVar11 + 1;
      lVar18 = param_1->_padding_;
      uVar12 = 0;
      if ((int)uVar17 < (int)param_1->_padding_) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar14 = (longlong)(int)uVar17;
      lVar15 = param_1->_padding_;
      local_c8 = *(float *)(lVar15 + lVar14 * 0xc) - *(float *)(lVar18 + lVar19 * 0xc);
      fVar23 = *(float *)(lVar15 + 4 + lVar14 * 0xc) - *(float *)(lVar18 + 4 + lVar19 * 0xc);
      fStack_a0 = *(float *)(lVar15 + 8 + lVar14 * 0xc) - *(float *)(lVar18 + 8 + lVar19 * 0xc);
      fVar22 = fVar23 * fVar23 + local_c8 * local_c8 + fStack_a0 * fStack_a0;
      if (fVar22 == fVar9) {
        local_a8 = CONCAT44(fVar23,local_c8);
      }
      else if (fVar8 <= fVar22) {
        fVar22 = __real_3f800000 / SQRT(fVar22);
        fVar23 = fVar23 * fVar22;
        local_c8 = local_c8 * fVar22;
        fStack_a0 = fStack_a0 * fVar22;
        local_a8 = CONCAT44(fVar23,local_c8);
      }
      else {
        fVar23 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_c8 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_a8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        fStack_a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      if (fVar23 * fVar23 + local_c8 * local_c8 + fStack_a0 * fStack_a0 == 0.0) {
        local_a8 = 0;
        fStack_a0 = fVar9;
      }
      uStack_b0 = *(undefined4 *)(lVar18 + 8 + lVar19 * 0xc);
      local_b8 = *(undefined8 *)(lVar18 + lVar19 * 0xc);
      pFVar6 = (param_2->AllocatorInstance).Data;
      uStack_ac = uVar16;
      uStack_9c = uVar11;
      local_98 = uVar2;
      if (((pFVar6 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar6 + (longlong)param_2->ArrayMax * 0x24)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar13 = *piVar1;
      if (iVar13 == param_2->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x424,&param_2->AllocatorInstance,&param_2->ArrayMax);
        *piVar1 = iVar13;
      }
      uVar20 = uVar20 + 1;
      *piVar1 = iVar13 + 1;
      pFVar6 = (param_2->AllocatorInstance).Data;
      lVar15 = (longlong)iVar13;
      *(undefined8 *)(pFVar6 + lVar15 * 0x24) = local_b8;
      *(ulonglong *)(pFVar6 + lVar15 * 0x24 + 8) = CONCAT44(uStack_ac,uStack_b0);
      *(undefined8 *)(pFVar6 + lVar15 * 0x24 + 0x10) = local_a8;
      *(ulonglong *)(pFVar6 + lVar15 * 0x24 + 0x10 + 8) = CONCAT44(uStack_9c,fStack_a0);
      *(undefined4 *)(pFVar6 + lVar15 * 0x24 + 0x20) = local_98;
      fVar23 = *(float *)(lVar18 + 4 + lVar19 * 0xc);
      fVar22 = *(float *)(lVar18 + lVar19 * 0xc);
      fVar3 = *(float *)(lVar18 + 8 + lVar19 * 0xc);
      fVar21 = (param_3->field0_0x0)._s_0.Y;
      if (fVar21 <= fVar23) {
        fVar23 = fVar21;
      }
      fVar21 = (param_3->field0_0x0)._s_0.X;
      if (fVar21 <= fVar22) {
        fVar22 = fVar21;
      }
      fVar21 = (param_3->field0_0x0)._s_0.Z;
      if (fVar21 <= fVar3) {
        fVar3 = fVar21;
      }
      (param_3->field0_0x0)._s_0.Y = fVar23;
      (param_3->field0_0x0)._s_0.X = fVar22;
      (param_3->field0_0x0)._s_0.Z = fVar3;
      fVar23 = *(float *)(lVar18 + 8 + lVar19 * 0xc);
      fVar22 = *(float *)(lVar18 + 4 + lVar19 * 0xc);
      fVar21 = *(float *)(lVar18 + lVar19 * 0xc);
      fVar3 = (param_4->field0_0x0)._s_0.Z;
      if (fVar23 <= fVar3) {
        fVar23 = fVar3;
      }
      fVar3 = (param_4->field0_0x0)._s_0.Y;
      if (fVar22 <= fVar3) {
        fVar22 = fVar3;
      }
      fVar3 = (param_4->field0_0x0)._s_0.X;
      if (fVar21 <= fVar3) {
        fVar21 = fVar3;
      }
      (param_4->field0_0x0)._s_0.Z = fVar23;
      (param_4->field0_0x0)._s_0.Y = fVar22;
      (param_4->field0_0x0)._s_0.X = fVar21;
    } while (uVar20 < uVar5);
  }
  return;
}

// FillInterpolationData @ 14e00c640

void __cdecl
HairInterpolationBuilder::FillInterpolationData
          (FHairStrandsDatas *param_1,FHairStrandsDatas *param_2,
          FHairStrandsInterpolationDatas *param_3)

{
  ushort uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  bool bVar6;
  ushort uVar7;
  FVertexInterpolationDesc *pFVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  float *pfVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  uint local_104;
  float local_f8 [2];
  ushort local_f0;
  uint local_ec;
  uint local_e8;
  longlong local_e0;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  FVertexInterpolationDesc local_a0;
  FVertexInterpolationDesc local_90 [7];
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1866,"HairInterpolationBuilder::FillInterpolationData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
               ,0x74a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1866);
  }
  if (((int)param_1->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenData.StrandsCurves.CurvesClosestGuideIDs.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0x74c,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((int)param_1->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenData.StrandsCurves.CurvesClosestGuideWeights.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0x74d,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((int)param_2->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SimData.GetNumCurves() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0x74e,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_d8 = (int)param_2->_padding_;
  FHairStrandsInterpolationDatas::SetNum(param_3,(uint)param_1->_padding_,(uint)param_1->_padding_);
  fVar4 = __real_3a83126f;
  fVar3 = __real_3f800000;
  local_104 = 0;
  if ((int)param_1->_padding_ != 0) {
    do {
      uVar14 = ~local_104 >> 0x1f;
      uVar11 = 0;
      if ((int)local_104 < (int)param_1->_padding_) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar12 = (longlong)(int)local_104;
      iVar17 = *(int *)(param_1->_padding_ + lVar12 * 4);
      uVar11 = 0;
      if ((int)local_104 < (int)param_1->_padding_) {
        uVar11 = uVar14;
      }
      local_d4 = iVar17;
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(ushort *)(param_1->_padding_ + lVar12 * 2);
      local_f0 = uVar1;
      uVar11 = 0;
      if ((int)local_104 < (int)param_1->_padding_) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_b8 = *(undefined4 *)(param_1->_padding_ + 8 + lVar12 * 0xc);
      local_c0 = *(undefined8 *)(param_1->_padding_ + lVar12 * 0xc);
      uVar11 = 0;
      if ((int)local_104 < (int)param_1->_padding_) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_f8[0] = 0.0;
      local_f8[1] = 0.0;
      uVar7 = 0;
      uVar11 = 0;
      if (uVar1 != 0) {
        do {
          uVar11 = uVar11 + iVar17;
          local_ec = uVar11;
          uVar18 = ~uVar11 >> 0x1f;
          local_e8 = uVar18;
          uVar15 = 0;
          if ((int)uVar11 < (int)param_1->_padding_) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar15 = 0;
          if ((int)local_104 < (int)param_1->_padding_) {
            uVar15 = uVar14;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar19 = param_1->_padding_;
          uVar15 = 0;
          if ((int)uVar11 < (int)param_1->_padding_) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pfVar16 = local_f8;
          bVar6 = false;
          local_e0 = (longlong)(int)uVar11;
          uVar15 = 0;
          fVar21 = *(float *)(param_1->_padding_ + (longlong)(int)uVar11 * 4) *
                   *(float *)(lVar19 + lVar12 * 4);
          do {
            lVar19 = (longlong)(int)uVar15;
            uVar11 = *(uint *)((longlong)&local_c0 + lVar19 * 4);
            if ((int)param_2->_padding_ != *(int *)((longlong)&param_2->_padding_ + 4)) {
              plVar10 = &param_2->_padding_;
              if ((longlong *)param_2->_padding_ != (longlong *)0x0) {
                plVar10 = (longlong *)param_2->_padding_;
              }
              uVar18 = *(uint *)((longlong)plVar10 +
                                (ulonglong)((int)param_2->_padding_ - 1U & uVar11) * 4);
              if (uVar18 != 0xffffffff) {
                do {
                  puVar9 = (uint *)((longlong)(int)uVar18 * 0x10 + param_2->_padding_);
                  if (*puVar9 == uVar11) {
                    puVar13 = puVar9 + 1;
                    if (puVar9 == (uint *)0x0) {
                      puVar13 = (uint *)0x0;
                    }
                    if (puVar13 != (uint *)0x0) {
                      uVar11 = *puVar13;
                      if ((-1 < (int)uVar11) && ((int)uVar11 < local_d8)) {
                        uVar18 = 0;
                        if ((int)uVar11 < (int)param_2->_padding_) {
                          uVar18 = ~uVar11 >> 0x1f;
                        }
                        if ((uVar18 == 0) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar6)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        iVar17 = *(int *)(param_2->_padding_ + (longlong)(int)uVar11 * 4);
                        pFVar8 = FindMatchingVertex(local_90,fVar21,param_2,*puVar13);
                        fVar22 = pFVar8->T;
                        local_b0._0_4_ = pFVar8->Index0;
                        local_b0._4_4_ = pFVar8->Index1;
                        uVar11 = 0;
                        if ((int)local_ec < (param_3->PointSimIndices).ArrayNum) {
                          uVar11 = local_e8;
                        }
                        if ((uVar11 == 0) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar6)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        lVar5 = local_e0;
                        *(int *)((param_3->PointSimIndices).AllocatorInstance.Data +
                                (lVar19 + local_e0 * 2) * 4) = (int)local_b0 + iVar17;
                        uVar11 = 0;
                        if ((int)local_ec < (param_3->PointSimLerps).ArrayNum) {
                          uVar11 = local_e8;
                        }
                        if ((uVar11 == 0) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar6)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        *(float *)((param_3->PointSimLerps).AllocatorInstance.Data +
                                  lVar19 * 4 + lVar5 * 8) = fVar22;
                        uVar11 = *puVar13;
                        uVar18 = 0;
                        if ((int)local_104 < (param_3->CurveSimIndices).ArrayNum) {
                          uVar18 = uVar14;
                        }
                        if ((uVar18 == 0) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar6)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        *(uint *)((param_3->CurveSimIndices).AllocatorInstance.Data +
                                 (lVar19 + lVar12 * 2) * 4) = uVar11;
                        uVar11 = 0;
                        if ((int)local_104 < (param_3->CurveSimWeights).ArrayNum) {
                          uVar11 = uVar14;
                        }
                        if ((uVar11 == 0) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar6)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        bVar6 = true;
                        *pfVar16 = *(float *)((param_3->CurveSimWeights).AllocatorInstance.Data +
                                             lVar12 * 8 + lVar19 * 4) + *pfVar16;
                      }
                    }
                    break;
                  }
                  uVar18 = puVar9[2];
                } while (uVar18 != 0xffffffff);
              }
            }
            uVar15 = uVar15 + 1;
            pfVar16 = pfVar16 + 1;
          } while (uVar15 < 2);
          if (!bVar6) {
            if (((int)param_2->_padding_ < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar17 = *(int *)param_2->_padding_;
            pFVar8 = FindMatchingVertex(&local_a0,fVar21,param_2,0);
            lVar19 = local_e0;
            uVar15 = local_e8;
            uVar11 = local_ec;
            local_d0._0_4_ = pFVar8->Index0;
            local_d0._4_4_ = pFVar8->Index1;
            fVar22 = pFVar8->T;
            uVar18 = 0;
            if ((int)local_ec < (param_3->PointSimIndices).ArrayNum) {
              uVar18 = local_e8;
            }
            if ((uVar18 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(int *)((param_3->PointSimIndices).AllocatorInstance.Data + lVar19 * 8) =
                 (int)local_d0 + iVar17;
            uVar18 = 0;
            if ((int)uVar11 < (param_3->PointSimLerps).ArrayNum) {
              uVar18 = uVar15;
            }
            if ((uVar18 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(float *)((param_3->PointSimLerps).AllocatorInstance.Data + lVar19 * 8) = fVar22;
            uVar18 = 0;
            if ((int)local_104 < (param_3->CurveSimIndices).ArrayNum) {
              uVar18 = uVar14;
            }
            if ((uVar18 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)((param_3->CurveSimIndices).AllocatorInstance.Data + lVar12 * 8) = 0;
            local_f8[0] = local_f8[0] + fVar3;
            if (((int)param_2->_padding_ < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar17 = *(int *)param_2->_padding_;
            pFVar8 = FindMatchingVertex(&local_a0,fVar21,param_2,0);
            fVar21 = pFVar8->T;
            local_d0._0_4_ = pFVar8->Index0;
            local_d0._4_4_ = pFVar8->Index1;
            uVar18 = 0;
            if ((int)uVar11 < (param_3->PointSimIndices).ArrayNum) {
              uVar18 = uVar15;
            }
            if ((uVar18 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(int *)((param_3->PointSimIndices).AllocatorInstance.Data + lVar19 * 8 + 4) =
                 (int)local_d0 + iVar17;
            uVar18 = 0;
            if ((int)uVar11 < (param_3->PointSimLerps).ArrayNum) {
              uVar18 = uVar15;
            }
            if ((uVar18 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(float *)((param_3->PointSimLerps).AllocatorInstance.Data + lVar19 * 8 + 4) = fVar21;
            uVar11 = 0;
            if ((int)local_104 < (param_3->CurveSimIndices).ArrayNum) {
              uVar11 = uVar14;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)((param_3->CurveSimIndices).AllocatorInstance.Data + lVar12 * 8 + 4) = 0;
            local_f8[1] = local_f8[1] + fVar3;
          }
          uVar7 = uVar7 + 1;
          uVar11 = (uint)uVar7;
          iVar17 = local_d4;
        } while (uVar7 < local_f0);
      }
      uVar11 = 0;
      if ((int)local_104 < (param_3->CurveSimWeights).ArrayNum) {
        uVar11 = uVar14;
      }
      fVar21 = local_f8[1] + local_f8[0];
      if (local_f8[1] + local_f8[0] <= fVar4) {
        fVar21 = fVar4;
      }
      fVar22 = local_f8[0] * (fVar3 / fVar21);
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(float *)((param_3->CurveSimWeights).AllocatorInstance.Data + lVar12 * 8) = fVar22;
      fVar21 = local_f8[1] * (fVar3 / fVar21);
      uVar11 = 0;
      if ((int)local_104 < (param_3->CurveSimWeights).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_104 = local_104 + 1;
      *(float *)((param_3->CurveSimWeights).AllocatorInstance.Data + lVar12 * 8 + 4) = fVar21;
    } while (local_104 < (uint)param_1->_padding_);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindBestRoots @ 14e00eb90

FClosestGuides __cdecl
HairInterpolationBuilder::FindBestRoots
          (uint param_1,
          TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> *param_2,
          TArray<HairInterpolationBuilder::FHairRoot,TSizedDefaultAllocator<32>_> *param_3,
          FHairStrandsDatas *param_4,FHairStrandsDatas *param_5,
          TStaticArray<UE::Math::TVector<float>,16,4294967295> *param_6,bool param_7,bool param_8,
          TIntVector3<int> *param_9)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  FClosestGuides FVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  int iStack_54;
  undefined8 local_48;
  undefined8 uStack_40;
  FMetrics local_38;
  
  uVar10 = param_3->ArrayNum;
  uVar11 = 0;
  local_38.KMinMetrics[0] = 3.4028235e+38;
  local_38.KClosestGuideIndices[0] = -1;
  uVar8 = 0;
  local_38.KMinMetrics[1] = 3.4028235e+38;
  local_38.KClosestGuideIndices[1] = -1;
  if (uVar10 != 0) {
    do {
      ComputeAdvandedMetric(&local_38,param_4,param_5,param_1,uVar8,param_6);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar10);
  }
  local_48 = CONCAT44(local_38.KMinMetrics[1],local_38.KMinMetrics[0]);
  uStack_40 = CONCAT44(local_38.KClosestGuideIndices[1],local_38.KClosestGuideIndices[0]);
  if ((local_38.KClosestGuideIndices[0] < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metric.KClosestGuideIndices[0] >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0x3f8,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    FVar7.Indices = (int  [2])(*pcVar4)();
    return (FClosestGuides)FVar7.Indices;
  }
  if (uStack_40 < 0) {
    local_48 = CONCAT44((undefined4)local_48,(undefined4)local_48);
    uStack_40 = CONCAT44((undefined4)uStack_40,(undefined4)uStack_40);
  }
  uVar10 = 1;
  if (param_7) {
    uVar11 = (param_9->field0_0x0)._s_0.X;
    uVar10 = (param_9->field0_0x0)._s_0.Y;
  }
  uVar8 = uVar11;
  if (!param_8) {
    uVar8 = uVar10;
  }
  iVar3 = *(int *)((longlong)&uStack_40 + (ulonglong)uVar11 * 4);
  iVar5 = iVar3;
  if (!param_8) {
    iVar5 = *(int *)((longlong)&uStack_40 + (ulonglong)uVar10 * 4);
  }
  fVar1 = *(float *)((longlong)&local_48 + (ulonglong)uVar8 * 4);
  fVar2 = *(float *)((longlong)&local_48 + (ulonglong)uVar11 * 4);
  fVar13 = fVar1;
  if (fVar2 <= fVar1) {
    fVar13 = fVar2;
  }
  fVar12 = fVar1;
  if (fVar1 <= fVar2) {
    fVar12 = fVar2;
  }
  iVar9 = iVar3;
  if (fVar1 < fVar2) {
    iVar9 = iVar5;
    iVar5 = iVar3;
  }
  iStack_54 = iVar9;
  if (((-1 < iVar5) && (iStack_54 = iVar5, fVar12 < fVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MinMetrics[0] <= MinMetrics[1]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0x426,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    FVar7.Indices = (int  [2])(*pcVar4)();
    return (FClosestGuides)FVar7.Indices;
  }
  if ((iVar9 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClosestGuides.Indices[0] >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0x59d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    FVar7.Indices = (int  [2])(*pcVar4)();
    return (FClosestGuides)FVar7.Indices;
  }
  if ((iStack_54 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClosestGuides.Indices[1] >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0x59e,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    FVar7.Indices = (int  [2])(*pcVar4)();
    return (FClosestGuides)FVar7.Indices;
  }
  FVar7.Indices[0] = iVar9;
  FVar7.Indices[1] = iStack_54;
  return (FClosestGuides)FVar7.Indices;
}

// FindMatchingVertex @ 14e010570

FVertexInterpolationDesc * __cdecl
HairInterpolationBuilder::FindMatchingVertex
          (FVertexInterpolationDesc *__return_storage_ptr__,TVector<float> *param_1,
          FHairStrandsDatas *param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FVertexInterpolationDesc *pFVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float local_88;
  
  uVar13 = 0;
  uVar11 = 0;
  uVar10 = uVar11;
  if ((int)param_3 < (int)param_2->_padding_) {
    uVar10 = ~param_3 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FVertexInterpolationDesc *)(*pcVar4)();
    return pFVar7;
  }
  fVar19 = __real_7f7fffff;
  uVar10 = *(uint *)(param_2->_padding_ + (longlong)(int)param_3 * 4);
  uVar6 = uVar11;
  if ((int)param_3 < (int)param_2->_padding_) {
    uVar6 = ~param_3 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FVertexInterpolationDesc *)(*pcVar4)();
    return pFVar7;
  }
  plVar1 = &param_2->_padding_;
  uVar15 = (uint)*(ushort *)(param_2->_padding_ + (longlong)(int)param_3 * 2);
  uVar6 = 0;
  if (uVar15 != 1) {
    uVar9 = uVar10;
    uVar13 = 0;
    do {
      uVar12 = uVar6;
      if ((int)uVar9 < (int)*plVar1) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FVertexInterpolationDesc *)(*pcVar4)();
        return pFVar7;
      }
      lVar8 = (longlong)(int)uVar9;
      lVar2 = param_2->_padding_;
      fVar17 = *(float *)(lVar2 + lVar8 * 0xc) - (param_1->field0_0x0)._s_0.X;
      fVar18 = *(float *)(lVar2 + 4 + lVar8 * 0xc) - (param_1->field0_0x0)._s_0.Y;
      fVar16 = *(float *)(lVar2 + 8 + lVar8 * 0xc) - (param_1->field0_0x0)._s_0.Z;
      fVar16 = SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16);
      if (fVar16 <= fVar19) {
        uVar13 = -uVar10 + uVar9;
        fVar19 = fVar16;
      }
      uVar9 = uVar9 + 1;
    } while (-uVar10 + uVar9 < uVar15 - 1);
  }
  lVar2 = *plVar1;
  uVar12 = uVar10 + uVar13;
  __return_storage_ptr__->Index0 = 0;
  __return_storage_ptr__->Index1 = 0;
  __return_storage_ptr__->T = 0.0;
  uVar15 = uVar12 + 1;
  uVar9 = uVar6;
  if ((int)uVar15 < (int)lVar2) {
    uVar9 = ~uVar15 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FVertexInterpolationDesc *)(*pcVar4)();
    return pFVar7;
  }
  lVar2 = param_2->_padding_;
  lVar8 = (longlong)(int)uVar15;
  uVar15 = uVar6;
  if ((int)uVar12 < (int)*plVar1) {
    uVar15 = ~uVar12 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FVertexInterpolationDesc *)(*pcVar4)();
    return pFVar7;
  }
  lVar3 = param_2->_padding_;
  lVar14 = (longlong)(int)uVar12;
  local_88 = *(float *)(lVar2 + lVar8 * 0xc) - *(float *)(lVar3 + lVar14 * 0xc);
  fVar19 = *(float *)(lVar2 + 4 + lVar8 * 0xc) - *(float *)(lVar3 + 4 + lVar14 * 0xc);
  uVar20 = *(float *)(lVar2 + 8 + lVar8 * 0xc) - *(float *)(lVar3 + 8 + lVar14 * 0xc);
  fVar16 = fVar19 * fVar19 + local_88 * local_88 + (float)uVar20 * (float)uVar20;
  if (fVar16 != __real_3f800000) {
    if (__real_322bcc77 <= fVar16) {
      fVar16 = __real_3f800000 / SQRT(fVar16);
      local_88 = local_88 * fVar16;
      fVar19 = fVar19 * fVar16;
      uVar20 = (float)uVar20 * fVar16;
    }
    else {
      fVar19 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_88 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar20 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  uVar15 = uVar6;
  if ((int)uVar12 < (int)*plVar1) {
    uVar15 = ~uVar12 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FVertexInterpolationDesc *)(*pcVar4)();
    return pFVar7;
  }
  lVar2 = param_2->_padding_;
  if ((0.0 < ((param_1->field0_0x0)._s_0.Y - *(float *)(lVar2 + 4 + lVar14 * 0xc)) * fVar19 +
             ((param_1->field0_0x0)._s_0.X - *(float *)(lVar2 + lVar14 * 0xc)) * local_88 +
             ((param_1->field0_0x0)._s_0.Z - *(float *)(lVar2 + 8 + lVar14 * 0xc)) * (float)uVar20)
     || (uVar13 == 0)) {
    __return_storage_ptr__->Index1 = uVar13 + 1;
  }
  else {
    __return_storage_ptr__->Index1 = uVar13;
    uVar13 = uVar13 - 1;
  }
  __return_storage_ptr__->Index0 = uVar13;
  uVar13 = uVar13 + uVar10;
  if ((int)uVar13 < (int)param_2->_padding_) {
    uVar6 = ~uVar13 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FVertexInterpolationDesc *)(*pcVar4)();
    return pFVar7;
  }
  lVar8 = (longlong)(int)uVar13;
  uVar10 = __return_storage_ptr__->Index1 + uVar10;
  lVar2 = param_2->_padding_;
  fVar17 = *(float *)(lVar2 + 4 + lVar8 * 0xc) - (param_1->field0_0x0)._s_0.Y;
  fVar16 = *(float *)(lVar2 + lVar8 * 0xc) - (param_1->field0_0x0)._s_0.X;
  fVar19 = *(float *)(lVar2 + 8 + lVar8 * 0xc) - (param_1->field0_0x0)._s_0.Z;
  if ((int)uVar10 < (int)param_2->_padding_) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  fVar19 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar19 * fVar19);
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FVertexInterpolationDesc *)(*pcVar4)();
    return pFVar7;
  }
  lVar8 = (longlong)(int)uVar10;
  lVar2 = param_2->_padding_;
  fVar16 = *(float *)(lVar2 + 4 + lVar8 * 0xc) - (param_1->field0_0x0)._s_0.Y;
  fVar18 = *(float *)(lVar2 + lVar8 * 0xc) - (param_1->field0_0x0)._s_0.X;
  fVar17 = *(float *)(lVar2 + 8 + lVar8 * 0xc) - (param_1->field0_0x0)._s_0.Z;
  __return_storage_ptr__->T =
       fVar19 / (SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar17 * fVar17) + fVar19);
  return __return_storage_ptr__;
}

// FindMatchingVertex @ 14e010b00

FVertexInterpolationDesc * __cdecl
HairInterpolationBuilder::FindMatchingVertex
          (FVertexInterpolationDesc *__return_storage_ptr__,float param_1,FHairStrandsDatas *param_2
          ,uint param_3)

{
  float fVar1;
  ushort uVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  FVertexInterpolationDesc *pFVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  lVar9 = (longlong)(int)param_3;
  uVar10 = ~param_3 >> 0x1f;
  uVar8 = 0;
  if ((int)param_3 < (int)param_2->_padding_) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FVertexInterpolationDesc *)(*pcVar3)();
    return pFVar7;
  }
  uVar8 = *(uint *)(param_2->_padding_ + lVar9 * 4);
  uVar11 = 0;
  if ((int)param_3 < (int)param_2->_padding_) {
    uVar11 = uVar10;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FVertexInterpolationDesc *)(*pcVar3)();
    return pFVar7;
  }
  fVar1 = *(float *)(param_2->_padding_ + lVar9 * 4);
  uVar11 = 0;
  if ((int)param_3 < (int)param_2->_padding_) {
    uVar11 = uVar10;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FVertexInterpolationDesc *)(*pcVar3)();
    return pFVar7;
  }
  uVar11 = 0;
  uVar2 = *(ushort *)(param_2->_padding_ + lVar9 * 2);
  uVar10 = uVar2 - 1;
  if (uVar10 != 0) {
    do {
      uVar6 = 0;
      if ((int)uVar8 < (int)param_2->_padding_) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FVertexInterpolationDesc *)(*pcVar3)();
        return pFVar7;
      }
      lVar9 = (longlong)(int)uVar8;
      uVar8 = uVar8 + 1;
      fVar13 = fVar1 * *(float *)(param_2->_padding_ + lVar9 * 4);
      uVar6 = 0;
      if ((int)uVar8 < (int)param_2->_padding_) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FVertexInterpolationDesc *)(*pcVar3)();
        return pFVar7;
      }
      fVar4 = __real_3f800000;
      if ((fVar13 <= param_1) &&
         (fVar12 = fVar1 * *(float *)(param_2->_padding_ + (longlong)(int)uVar8 * 4),
         param_1 <= fVar12)) {
        fVar12 = fVar12 - fVar13;
        __return_storage_ptr__->Index0 = uVar11;
        __return_storage_ptr__->Index1 = uVar11 + 1;
        if (fVar12 <= 0.0) {
          fVar12 = fVar4;
        }
        fVar12 = (param_1 - fVar13) / fVar12;
        if (fVar4 <= fVar12) {
          fVar12 = fVar4;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        __return_storage_ptr__->T = fVar12;
        return __return_storage_ptr__;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar10);
  }
  __return_storage_ptr__->Index1 = uVar10;
  __return_storage_ptr__->Index0 = uVar2 - 2;
  __return_storage_ptr__->T = 1.0;
  return __return_storage_ptr__;
}

// GetGroomGroupsDesc @ 14e016750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FHairGroupDesc * __cdecl
GetGroomGroupsDesc(FHairGroupDesc *__return_storage_ptr__,UGroomAsset *param_1,
                  UGroomComponent *param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FScriptContainerElement FVar7;
  FScriptContainerElement FVar8;
  FScriptContainerElement FVar9;
  FScriptContainerElement FVar10;
  FScriptContainerElement FVar11;
  FScriptContainerElement FVar12;
  FScriptContainerElement FVar13;
  FScriptContainerElement FVar14;
  undefined4 uVar15;
  float fVar16;
  FScriptContainerElement FVar17;
  FScriptContainerElement FVar18;
  FScriptContainerElement FVar19;
  FScriptContainerElement FVar20;
  FScriptContainerElement FVar21;
  FScriptContainerElement FVar22;
  FScriptContainerElement FVar23;
  FScriptContainerElement FVar24;
  FScriptContainerElement FVar25;
  FScriptContainerElement FVar26;
  FScriptContainerElement FVar27;
  FScriptContainerElement FVar28;
  FScriptContainerElement FVar29;
  bool bVar30;
  char cVar31;
  TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *pTVar32;
  FHairGroupDesc *pFVar33;
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar34;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar35;
  uint uVar36;
  longlong lVar37;
  longlong lVar38;
  uint uVar39;
  float fVar40;
  FScriptContainerElement FVar41;
  FScriptContainerElement FVar42;
  FScriptContainerElement FVar43;
  FScriptContainerElement FVar44;
  FScriptContainerElement FVar45;
  FScriptContainerElement FVar46;
  FScriptContainerElement FVar47;
  FScriptContainerElement FVar48;
  FScriptContainerElement FVar49;
  FScriptContainerElement FVar50;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float fStack_84;
  undefined4 uStack_80;
  FScriptContainerElement local_78;
  
  lVar38 = (longlong)(int)param_3;
  if ((param_1 == (UGroomAsset *)0x0) || ((uint)(param_2->GroomGroupsDesc).ArrayNum <= param_3)) {
    __return_storage_ptr__->HairLength = 0.0;
    __return_storage_ptr__->HairWidth = 0.1;
    __return_storage_ptr__->HairWidth_Override = false;
    *(undefined3 *)&__return_storage_ptr__->field_0x9 = 0;
    __return_storage_ptr__->HairRootScale = 1.0;
    __return_storage_ptr__->HairRootScale_Override = false;
    *(undefined3 *)&__return_storage_ptr__->field_0x11 = 0;
    __return_storage_ptr__->HairTipScale = 1.0;
    __return_storage_ptr__->HairTipScale_Override = false;
    *(undefined3 *)&__return_storage_ptr__->field_0x19 = 0;
    __return_storage_ptr__->HairShadowDensity = 1.0;
    __return_storage_ptr__->HairShadowDensity_Override = false;
    *(undefined3 *)&__return_storage_ptr__->field_0x21 = 0;
    __return_storage_ptr__->HairRaytracingRadiusScale = 1.0;
    __return_storage_ptr__->HairRaytracingRadiusScale_Override = false;
    __return_storage_ptr__->bUseHairRaytracingGeometry = false;
    __return_storage_ptr__->bUseHairRaytracingGeometry_Override = false;
    __return_storage_ptr__->field_0x2b = 0;
    __return_storage_ptr__->LODBias = 0.0;
    __return_storage_ptr__->bUseStableRasterization = false;
    __return_storage_ptr__->bUseStableRasterization_Override = false;
    __return_storage_ptr__->bScatterSceneLighting = false;
    __return_storage_ptr__->bScatterSceneLighting_Override = false;
    __return_storage_ptr__->bSupportVoxelization = true;
    __return_storage_ptr__->bSupportVoxelization_Override = false;
    *(undefined2 *)&__return_storage_ptr__->field_0x36 = 0;
    __return_storage_ptr__->HairLengthScale = 1.0;
    __return_storage_ptr__->HairLengthScale_Override = false;
    *(undefined3 *)&__return_storage_ptr__->field_0x3d = 0;
    return __return_storage_ptr__;
  }
  pTVar32 = UGroomAsset::GetHairGroupsRendering(param_1);
  uVar39 = ~param_3 >> 0x1f;
  uVar36 = 0;
  if ((int)param_3 < pTVar32->ArrayNum) {
    uVar36 = uVar39;
  }
  if ((uVar36 == 0) &&
     (bVar30 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar6 = (code *)swi(3);
    pFVar33 = (FHairGroupDesc *)(*pcVar6)();
    return pFVar33;
  }
  pFVar3 = (pTVar32->AllocatorInstance).Data;
  pTVar34 = UGroomAsset::GetHairGroupsPlatformData(param_1);
  uVar36 = 0;
  if ((int)param_3 < pTVar34->ArrayNum) {
    uVar36 = uVar39;
  }
  if ((uVar36 == 0) &&
     (bVar30 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar6 = (code *)swi(3);
    pFVar33 = (FHairGroupDesc *)(*pcVar6)();
    return pFVar33;
  }
  pFVar4 = (pTVar34->AllocatorInstance).Data;
  uVar36 = 0;
  if ((int)param_3 < (param_2->GroomGroupsDesc).ArrayNum) {
    uVar36 = uVar39;
  }
  if ((uVar36 == 0) &&
     (bVar30 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar6 = (code *)swi(3);
    pFVar33 = (FHairGroupDesc *)(*pcVar6)();
    return pFVar33;
  }
  lVar37 = lVar38 * 0x40;
  pFVar5 = (param_2->GroomGroupsDesc).AllocatorInstance.Data;
  uStack_a0 = *(undefined8 *)(pFVar5 + lVar37 + 8);
  pFVar1 = pFVar5 + lVar37 + 0x10;
  FVar7 = *pFVar1;
  FVar8 = pFVar1[1];
  FVar9 = pFVar1[2];
  FVar10 = pFVar1[3];
  FVar41 = pFVar1[4];
  FVar42 = pFVar1[5];
  FVar43 = pFVar1[6];
  FVar44 = pFVar1[7];
  FVar11 = pFVar1[8];
  FVar12 = pFVar1[9];
  FVar13 = pFVar1[10];
  FVar14 = pFVar1[0xb];
  FVar45 = pFVar1[0xc];
  FVar46 = pFVar1[0xd];
  FVar47 = pFVar1[0xe];
  FVar48 = pFVar1[0xf];
  pFVar1 = pFVar5 + lVar37 + 0x20;
  uVar15 = *(undefined4 *)pFVar1;
  fStack_84 = *(float *)(pFVar1 + 4);
  uStack_80 = *(undefined4 *)(pFVar1 + 8);
  fVar16 = *(float *)(pFVar1 + 0xc);
  pFVar1 = pFVar5 + lVar37 + 0x30;
  local_78 = *pFVar1;
  FVar17 = pFVar1[1];
  FVar49 = pFVar1[2];
  FVar18 = pFVar1[3];
  FVar50 = pFVar1[4];
  FVar19 = pFVar1[5];
  FVar20 = pFVar1[6];
  FVar21 = pFVar1[7];
  FVar22 = pFVar1[8];
  FVar23 = pFVar1[9];
  FVar24 = pFVar1[10];
  FVar25 = pFVar1[0xb];
  FVar26 = pFVar1[0xc];
  FVar27 = pFVar1[0xd];
  FVar28 = pFVar1[0xe];
  FVar29 = pFVar1[0xf];
  uVar2 = *(undefined4 *)(pFVar4 + lVar38 * 2000 + 0x2dc);
  local_a8._4_4_ = (float)((ulonglong)*(undefined8 *)(pFVar5 + lVar37) >> 0x20);
  pTVar35 = UGroomAsset::GetEffectiveLODBias(param_1);
  uVar36 = 0;
  if ((int)param_3 < pTVar35->ArrayNum) {
    uVar36 = uVar39;
  }
  if ((uVar36 == 0) &&
     (bVar30 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar6 = (code *)swi(3);
    pFVar33 = (FHairGroupDesc *)(*pcVar6)();
    return pFVar33;
  }
  fVar40 = fVar16;
  if (0.0 < *(float *)((pTVar35->AllocatorInstance).Data + lVar38 * 4)) {
    pTVar35 = UGroomAsset::GetEffectiveLODBias(param_1);
    uVar36 = 0;
    if ((int)param_3 < pTVar35->ArrayNum) {
      uVar36 = uVar39;
    }
    if ((uVar36 == 0) &&
       (bVar30 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar30)) {
      pcVar6 = (code *)swi(3);
      pFVar33 = (FHairGroupDesc *)(*pcVar6)();
      return pFVar33;
    }
    fVar40 = *(float *)((pTVar35->AllocatorInstance).Data + lVar38 * 4);
    if (fVar40 <= fVar16) {
      fVar40 = fVar16;
    }
  }
  if ((char)uStack_a0 == '\0') {
    if (pFVar3[lVar38 * 0x30 + 0x14] == (FScriptContainerElement)0x0) {
      local_a8._4_4_ = *(float *)(pFVar4 + lVar38 * 2000 + 0x2e0);
      local_a8._4_4_ = local_a8._4_4_ + local_a8._4_4_;
    }
    else {
      local_a8._4_4_ = *(float *)(pFVar3 + lVar38 * 0x30 + 0x10);
    }
  }
  if (FVar7 == (FScriptContainerElement)0x0) {
    uStack_a0 = CONCAT44(*(undefined4 *)(pFVar3 + lVar38 * 0x30 + 0x18),(undefined4)uStack_a0);
  }
  if (FVar11 == (FScriptContainerElement)0x0) {
    FVar41 = pFVar3[lVar38 * 0x30 + 0x1c];
    FVar42 = pFVar3[lVar38 * 0x30 + 0x1d];
    FVar43 = pFVar3[lVar38 * 0x30 + 0x1e];
    FVar44 = pFVar3[lVar38 * 0x30 + 0x1f];
  }
  if (FVar19 == (FScriptContainerElement)0x0) {
    FVar50 = pFVar3[lVar38 * 0x30 + 0x29];
  }
  if ((char)uVar15 == '\0') {
    FVar45 = pFVar3[lVar38 * 0x30 + 0x20];
    FVar46 = pFVar3[lVar38 * 0x30 + 0x21];
    FVar47 = pFVar3[lVar38 * 0x30 + 0x22];
    FVar48 = pFVar3[lVar38 * 0x30 + 0x23];
  }
  cVar31 = (char)uStack_80;
  if (cVar31 == '\0') {
    fStack_84 = *(float *)(pFVar3 + lVar38 * 0x30 + 0x24);
  }
  if ((char)((uint)uStack_80 >> 0x10) == '\0') {
    uVar36 = (uint)uStack_80 >> 0x10;
    uStack_80._2_2_ = (undefined2)uVar36;
    uStack_80._0_2_ = CONCAT11(pFVar3[lVar38 * 0x30 + 0x28],cVar31);
  }
  if (FVar17 == (FScriptContainerElement)0x0) {
    local_78 = pFVar3[lVar38 * 0x30 + 0x2c];
  }
  if (FVar18 == (FScriptContainerElement)0x0) {
    FVar49 = pFVar3[lVar38 * 0x30 + 0x2d];
  }
  __return_storage_ptr__->HairLength = (float)uVar2;
  __return_storage_ptr__->HairWidth = local_a8._4_4_;
  __return_storage_ptr__->HairWidth_Override = (bool)(char)uStack_a0;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = uStack_a0._1_3_;
  __return_storage_ptr__->HairRootScale = (float)uStack_a0._4_4_;
  __return_storage_ptr__->HairRootScale_Override = (bool)FVar7;
  __return_storage_ptr__->field_0x11 = FVar8;
  __return_storage_ptr__->field_0x12 = FVar9;
  __return_storage_ptr__->field_0x13 = FVar10;
  *(FScriptContainerElement *)&__return_storage_ptr__->HairTipScale = FVar41;
  *(FScriptContainerElement *)((longlong)&__return_storage_ptr__->HairTipScale + 1) = FVar42;
  *(FScriptContainerElement *)((longlong)&__return_storage_ptr__->HairTipScale + 2) = FVar43;
  *(FScriptContainerElement *)((longlong)&__return_storage_ptr__->HairTipScale + 3) = FVar44;
  __return_storage_ptr__->HairTipScale_Override = (bool)FVar11;
  __return_storage_ptr__->field_0x19 = FVar12;
  __return_storage_ptr__->field_0x1a = FVar13;
  __return_storage_ptr__->field_0x1b = FVar14;
  *(FScriptContainerElement *)&__return_storage_ptr__->HairShadowDensity = FVar45;
  *(FScriptContainerElement *)((longlong)&__return_storage_ptr__->HairShadowDensity + 1) = FVar46;
  *(FScriptContainerElement *)((longlong)&__return_storage_ptr__->HairShadowDensity + 2) = FVar47;
  *(FScriptContainerElement *)((longlong)&__return_storage_ptr__->HairShadowDensity + 3) = FVar48;
  *(undefined4 *)&__return_storage_ptr__->HairShadowDensity_Override = uVar15;
  __return_storage_ptr__->HairRaytracingRadiusScale = fStack_84;
  __return_storage_ptr__->HairRaytracingRadiusScale_Override = (bool)(char)uStack_80;
  __return_storage_ptr__->bUseHairRaytracingGeometry = (bool)(char)((uint)uStack_80 >> 8);
  __return_storage_ptr__->bUseHairRaytracingGeometry_Override =
       (bool)(char)((uint)uStack_80 >> 0x10);
  __return_storage_ptr__->field_0x2b = (char)((uint)uStack_80 >> 0x18);
  __return_storage_ptr__->LODBias = fVar40;
  __return_storage_ptr__->bUseStableRasterization = (bool)local_78;
  __return_storage_ptr__->bUseStableRasterization_Override = (bool)FVar17;
  __return_storage_ptr__->bScatterSceneLighting = (bool)FVar49;
  __return_storage_ptr__->bScatterSceneLighting_Override = (bool)FVar18;
  __return_storage_ptr__->bSupportVoxelization = (bool)FVar50;
  __return_storage_ptr__->bSupportVoxelization_Override = (bool)FVar19;
  __return_storage_ptr__->field_0x36 = FVar20;
  __return_storage_ptr__->field_0x37 = FVar21;
  *(FScriptContainerElement *)&__return_storage_ptr__->HairLengthScale = FVar22;
  *(FScriptContainerElement *)((longlong)&__return_storage_ptr__->HairLengthScale + 1) = FVar23;
  *(FScriptContainerElement *)((longlong)&__return_storage_ptr__->HairLengthScale + 2) = FVar24;
  *(FScriptContainerElement *)((longlong)&__return_storage_ptr__->HairLengthScale + 3) = FVar25;
  __return_storage_ptr__->HairLengthScale_Override = (bool)FVar26;
  __return_storage_ptr__->field_0x3d = FVar27;
  __return_storage_ptr__->field_0x3e = FVar28;
  __return_storage_ptr__->field_0x3f = FVar29;
  return __return_storage_ptr__;
}

// GetHairGroupDebugColor @ 14e017140

FLinearColor * __cdecl GetHairGroupDebugColor(FLinearColor *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  bool bVar5;
  FLinearColor *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  FLinearColor local_28 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    atexit(`GetHairGroupDebugColor'::__l2::_dynamic_atexit_destructor_for__IndexedColor__);
    _Init_thread_footer(&_TSS0);
  }
  fVar4 = __real_3b808081;
  if (IndexedColor.ArrayNum == 0) {
    local_d8 = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.R];
    fStack_d4 = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.G];
    fStack_d0 = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.B];
    fStack_cc = (float)FColor::Cyan.field0_0x0._3_1_ * __real_3b808081;
    if (((IndexedColor.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 <
         IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayMax * 0x10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
    if (IndexedColor.ArrayNum == IndexedColor.ArrayMax) {
      IndexedColor.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&IndexedColor.AllocatorInstance,&IndexedColor.ArrayMax);
    }
    lVar7 = (longlong)IndexedColor.ArrayNum;
    IndexedColor.ArrayNum = IndexedColor.ArrayNum + 1;
    pFVar8 = IndexedColor.AllocatorInstance.Data + lVar7 * 0x10;
    *(ulonglong *)pFVar8 = CONCAT44(fStack_d4,local_d8);
    *(ulonglong *)(pFVar8 + 8) = CONCAT44(fStack_cc,fStack_d0);
    local_c8 = FLinearColor::sRGBToLinearTable[FColor::Magenta.field0_0x0._s_0.R];
    fStack_c4 = FLinearColor::sRGBToLinearTable[FColor::Magenta.field0_0x0._s_0.G];
    fStack_c0 = FLinearColor::sRGBToLinearTable[FColor::Magenta.field0_0x0._s_0.B];
    fStack_bc = (float)FColor::Magenta.field0_0x0._3_1_ * fVar4;
    if (((IndexedColor.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c8) &&
        ((FScriptContainerElement *)&local_c8 <
         IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayMax * 0x10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
    if (IndexedColor.ArrayNum == IndexedColor.ArrayMax) {
      IndexedColor.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&IndexedColor.AllocatorInstance,&IndexedColor.ArrayMax);
    }
    pFVar8 = IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayNum * 0x10;
    IndexedColor.ArrayNum = IndexedColor.ArrayNum + 1;
    *(ulonglong *)pFVar8 = CONCAT44(fStack_c4,local_c8);
    *(ulonglong *)(pFVar8 + 8) = CONCAT44(fStack_bc,fStack_c0);
    local_b8 = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.R];
    fStack_b4 = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.G];
    fStack_b0 = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.B];
    fStack_ac = (float)FColor::Orange.field0_0x0._3_1_ * fVar4;
    if (((IndexedColor.AllocatorInstance.Data <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 <
         IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayMax * 0x10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
    if (IndexedColor.ArrayNum == IndexedColor.ArrayMax) {
      IndexedColor.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&IndexedColor.AllocatorInstance,&IndexedColor.ArrayMax);
    }
    pFVar8 = IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayNum * 0x10;
    IndexedColor.ArrayNum = IndexedColor.ArrayNum + 1;
    *(ulonglong *)pFVar8 = CONCAT44(fStack_b4,local_b8);
    *(ulonglong *)(pFVar8 + 8) = CONCAT44(fStack_ac,fStack_b0);
    local_a8 = FLinearColor::sRGBToLinearTable[FColor::Silver.field0_0x0._s_0.R];
    fStack_a4 = FLinearColor::sRGBToLinearTable[FColor::Silver.field0_0x0._s_0.G];
    fStack_a0 = FLinearColor::sRGBToLinearTable[FColor::Silver.field0_0x0._s_0.B];
    fStack_9c = (float)FColor::Silver.field0_0x0._3_1_ * fVar4;
    if (((IndexedColor.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 <
         IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayMax * 0x10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
    if (IndexedColor.ArrayNum == IndexedColor.ArrayMax) {
      IndexedColor.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&IndexedColor.AllocatorInstance,&IndexedColor.ArrayMax);
    }
    pFVar8 = IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayNum * 0x10;
    IndexedColor.ArrayNum = IndexedColor.ArrayNum + 1;
    *(ulonglong *)pFVar8 = CONCAT44(fStack_a4,local_a8);
    *(ulonglong *)(pFVar8 + 8) = CONCAT44(fStack_9c,fStack_a0);
    local_98 = FLinearColor::sRGBToLinearTable[FColor::Emerald.field0_0x0._s_0.R];
    fStack_94 = FLinearColor::sRGBToLinearTable[FColor::Emerald.field0_0x0._s_0.G];
    fStack_90 = FLinearColor::sRGBToLinearTable[FColor::Emerald.field0_0x0._s_0.B];
    fStack_8c = (float)FColor::Emerald.field0_0x0._3_1_ * fVar4;
    if (((IndexedColor.AllocatorInstance.Data <= (FScriptContainerElement *)&local_98) &&
        ((FScriptContainerElement *)&local_98 <
         IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayMax * 0x10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
    if (IndexedColor.ArrayNum == IndexedColor.ArrayMax) {
      IndexedColor.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&IndexedColor.AllocatorInstance,&IndexedColor.ArrayMax);
    }
    pFVar8 = IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayNum * 0x10;
    IndexedColor.ArrayNum = IndexedColor.ArrayNum + 1;
    *(ulonglong *)pFVar8 = CONCAT44(fStack_94,local_98);
    *(ulonglong *)(pFVar8 + 8) = CONCAT44(fStack_8c,fStack_90);
    local_88 = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.R];
    fStack_84 = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.G];
    fStack_80 = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.B];
    fStack_7c = (float)FColor::Red.field0_0x0._3_1_ * fVar4;
    if (((IndexedColor.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayMax * 0x10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
    if (IndexedColor.ArrayNum == IndexedColor.ArrayMax) {
      IndexedColor.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&IndexedColor.AllocatorInstance,&IndexedColor.ArrayMax);
    }
    pFVar8 = IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayNum * 0x10;
    IndexedColor.ArrayNum = IndexedColor.ArrayNum + 1;
    *(ulonglong *)pFVar8 = CONCAT44(fStack_84,local_88);
    *(ulonglong *)(pFVar8 + 8) = CONCAT44(fStack_7c,fStack_80);
    local_78 = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.R];
    fStack_74 = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.G];
    fStack_70 = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.B];
    fStack_6c = (float)FColor::Green.field0_0x0._3_1_ * fVar4;
    if (((IndexedColor.AllocatorInstance.Data <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 <
         IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayMax * 0x10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
    if (IndexedColor.ArrayNum == IndexedColor.ArrayMax) {
      IndexedColor.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&IndexedColor.AllocatorInstance,&IndexedColor.ArrayMax);
    }
    pFVar8 = IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayNum * 0x10;
    IndexedColor.ArrayNum = IndexedColor.ArrayNum + 1;
    *(ulonglong *)pFVar8 = CONCAT44(fStack_74,local_78);
    *(ulonglong *)(pFVar8 + 8) = CONCAT44(fStack_6c,fStack_70);
    local_68 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R];
    fStack_64 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G];
    fStack_60 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B];
    fStack_5c = (float)FColor::Blue.field0_0x0._3_1_ * fVar4;
    if (((IndexedColor.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayMax * 0x10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
    if (IndexedColor.ArrayNum == IndexedColor.ArrayMax) {
      IndexedColor.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&IndexedColor.AllocatorInstance,&IndexedColor.ArrayMax);
    }
    pFVar8 = IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayNum * 0x10;
    IndexedColor.ArrayNum = IndexedColor.ArrayNum + 1;
    *(ulonglong *)pFVar8 = CONCAT44(fStack_64,local_68);
    *(ulonglong *)(pFVar8 + 8) = CONCAT44(fStack_5c,fStack_60);
    local_58 = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
    fStack_54 = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
    fStack_50 = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
    fStack_4c = (float)FColor::Yellow.field0_0x0._3_1_ * fVar4;
    if (((IndexedColor.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayMax * 0x10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
    if (IndexedColor.ArrayNum == IndexedColor.ArrayMax) {
      IndexedColor.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&IndexedColor.AllocatorInstance,&IndexedColor.ArrayMax);
    }
    pFVar8 = IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayNum * 0x10;
    IndexedColor.ArrayNum = IndexedColor.ArrayNum + 1;
    *(ulonglong *)pFVar8 = CONCAT44(fStack_54,local_58);
    *(ulonglong *)(pFVar8 + 8) = CONCAT44(fStack_4c,fStack_50);
    local_48 = FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.R];
    fStack_44 = FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.G];
    fStack_40 = FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.B];
    fStack_3c = (float)FColor::Purple.field0_0x0._3_1_ * fVar4;
    if (((IndexedColor.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayMax * 0x10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
    if (IndexedColor.ArrayNum == IndexedColor.ArrayMax) {
      IndexedColor.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&IndexedColor.AllocatorInstance,&IndexedColor.ArrayMax);
    }
    pFVar8 = IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayNum * 0x10;
    IndexedColor.ArrayNum = IndexedColor.ArrayNum + 1;
    *(ulonglong *)pFVar8 = CONCAT44(fStack_44,local_48);
    *(ulonglong *)(pFVar8 + 8) = CONCAT44(fStack_3c,fStack_40);
    local_38 = FLinearColor::sRGBToLinearTable[FColor::Turquoise.field0_0x0._s_0.R];
    fStack_34 = FLinearColor::sRGBToLinearTable[FColor::Turquoise.field0_0x0._s_0.G];
    fStack_30 = FLinearColor::sRGBToLinearTable[FColor::Turquoise.field0_0x0._s_0.B];
    fStack_2c = (float)FColor::Turquoise.field0_0x0._3_1_ * fVar4;
    if (((IndexedColor.AllocatorInstance.Data <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayMax * 0x10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
    if (IndexedColor.ArrayNum == IndexedColor.ArrayMax) {
      IndexedColor.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&IndexedColor.AllocatorInstance,&IndexedColor.ArrayMax);
    }
    pFVar8 = IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayNum * 0x10;
    IndexedColor.ArrayNum = IndexedColor.ArrayNum + 1;
    *(ulonglong *)pFVar8 = CONCAT44(fStack_34,local_38);
    *(ulonglong *)(pFVar8 + 8) = CONCAT44(fStack_2c,fStack_30);
  }
  if (IndexedColor.ArrayNum <= param_1) {
    pFVar8 = (FScriptContainerElement *)FLinearColor::MakeRandomColor(local_28);
    if (((IndexedColor.AllocatorInstance.Data <= pFVar8) &&
        (pFVar8 < IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayMax * 0x10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
    if (IndexedColor.ArrayNum == IndexedColor.ArrayMax) {
      IndexedColor.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&IndexedColor.AllocatorInstance,&IndexedColor.ArrayMax);
    }
    uVar3 = *(undefined8 *)(pFVar8 + 8);
    pFVar1 = IndexedColor.AllocatorInstance.Data + (longlong)IndexedColor.ArrayNum * 0x10;
    IndexedColor.ArrayNum = IndexedColor.ArrayNum + 1;
    *(undefined8 *)pFVar1 = *(undefined8 *)pFVar8;
    *(undefined8 *)(pFVar1 + 8) = uVar3;
    if ((IndexedColor.ArrayNum <= param_1) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("GroupIt < IndexedColor.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                           ,0xcd,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar2)();
      return pFVar6;
    }
  }
  uVar9 = 0;
  if (param_1 < IndexedColor.ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FLinearColor *)(*pcVar2)();
    return pFVar6;
  }
  uVar3 = *(undefined8 *)(IndexedColor.AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(IndexedColor.AllocatorInstance.Data + (longlong)param_1 * 0x10);
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
  return __return_storage_ptr__;
}

// GetHairGroupInstance @ 14e017f20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FHairGroupInstance * __cdecl GetHairGroupInstance(UGroomComponent *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FHairGroupInstance *pFVar7;
  FHairGroupInstance *pFVar8;
  
  if (param_1 != (UGroomComponent *)0x0) {
    if ((*(longlong *)&param_1->field_0x530 != *(longlong *)&param_1->field_0x330) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("SceneProxy == SceneData.SceneProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\PrimitiveComponent.h"
                           ,0x801,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FHairGroupInstance *)(*pcVar4)();
      return pFVar7;
    }
    lVar3 = *(longlong *)&param_1->field_0x330;
    if (((lVar3 != 0) && (-1 < param_2)) && (param_2 < *(int *)(lVar3 + 0x290))) {
      uVar6 = 0;
      if (param_2 < *(int *)(lVar3 + 0x290)) {
        uVar6 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FHairGroupInstance *)(*pcVar4)();
        return pFVar7;
      }
      pFVar7 = *(FHairGroupInstance **)(*(longlong *)(lVar3 + 0x288) + (longlong)param_2 * 8);
      puVar1 = &pFVar7->field_0x8;
      if (pFVar7 == (FHairGroupInstance *)0x0) {
        return (FHairGroupInstance *)0x0;
      }
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + 1;
      UNLOCK();
      if (pFVar7 != (FHairGroupInstance *)0x0) {
        LOCK();
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 != 1) {
          return pFVar7;
        }
        pFVar8 = pFVar7;
        if (puVar1 == (undefined1 *)0x0) {
          pFVar8 = (FHairGroupInstance *)0x0;
        }
        if (pFVar8 == (FHairGroupInstance *)0x0) {
          return pFVar7;
        }
        (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
        return pFVar7;
      }
      return (FHairGroupInstance *)0x0;
    }
  }
  return (FHairGroupInstance *)0x0;
}

// GetRefCountedHairGroupInstance @ 14e018ed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TRefCountPtr<FHairGroupInstance> __cdecl
GetRefCountedHairGroupInstance(UGroomComponent *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FHairGroupInstance> TVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  longlong lVar5;
  uint in_R8D;
  
  lVar5 = CONCAT44(in_register_00000014,param_2);
  if (lVar5 != 0) {
    if ((*(longlong *)(lVar5 + 0x530) != *(longlong *)(lVar5 + 0x330)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("SceneProxy == SceneData.SceneProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\PrimitiveComponent.h"
                           ,0x801,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FHairGroupInstance *)(*pcVar1)();
      return (TRefCountPtr<FHairGroupInstance>)TVar3.Reference;
    }
    lVar5 = *(longlong *)(lVar5 + 0x330);
    if (((lVar5 != 0) && (-1 < (int)in_R8D)) && ((int)in_R8D < *(int *)(lVar5 + 0x290))) {
      uVar4 = 0;
      if ((int)in_R8D < *(int *)(lVar5 + 0x290)) {
        uVar4 = ~in_R8D >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar3.Reference = (FHairGroupInstance *)(*pcVar1)();
        return (TRefCountPtr<FHairGroupInstance>)TVar3.Reference;
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x288) + (longlong)(int)in_R8D * 8);
      *(longlong *)param_1 = lVar5;
      if (lVar5 == 0) {
        return (TRefCountPtr<FHairGroupInstance>)(FHairGroupInstance *)param_1;
      }
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
      return (TRefCountPtr<FHairGroupInstance>)(FHairGroupInstance *)param_1;
    }
  }
  *(undefined8 *)param_1 = 0;
  return (TRefCountPtr<FHairGroupInstance>)(FHairGroupInstance *)param_1;
}

// HasHairStrandsPositionQueries @ 14e019ff0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl HasHairStrandsPositionQueries(void)

{
  if (((GStrandsPositionQueries.Tail)->NextNode == (TNode *)0x0) &&
     ((GStrandsPositionReadbacks.Tail)->NextNode == (TNode *)0x0)) {
    return false;
  }
  return true;
}

// InternalBuildRenderCurveResourceBulkData @ 14e01de40

void __cdecl
HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData
          (FHairStrandsDatas *param_1,FRenderCurveResourceData *param_2)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  float *pfVar3;
  void *_Dst;
  ushort *puVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  ushort uVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  FHairStrandsDatas *pFVar15;
  FRenderCurveResourceData *pFVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  FGuid *pFVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  uint *puVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  ForAnyElementType FVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  ForAnyElementType FVar36;
  ulonglong uVar37;
  longlong lVar38;
  FBulkData *pFVar39;
  FScriptContainerElement *pFVar40;
  bool bVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  FScriptContainerElement local_2e7;
  FScriptContainerElement local_2e6;
  char local_2e5;
  uint local_2e4;
  uint local_2e0;
  undefined8 local_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  char local_2c0;
  undefined2 local_2bf;
  undefined1 local_2bd;
  undefined1 local_2b8 [4];
  uint local_2b4;
  FHairStrandsDatas *local_2b0;
  uint local_2a8;
  ushort local_2a4;
  ushort local_2a2;
  ushort local_2a0;
  ushort local_29e;
  ushort local_29c;
  ushort local_29a;
  ForAnyElementType local_298;
  uint local_290 [2];
  ForAnyElementType local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_274;
  longlong local_270;
  uint local_268;
  uint local_264;
  float local_260;
  uint local_25c;
  undefined8 local_258;
  FBulkData *local_248;
  longlong local_240;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_238;
  FCluster *local_228;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_220;
  ForAnyElementType local_210;
  int local_208 [3];
  uint local_1fc;
  uint local_1f8;
  longlong local_1f0;
  FScriptContainerElement *local_1e8;
  uint local_1e0;
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  FPackedCluster *local_1c8;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a0;
  FScriptContainerElement *local_190;
  int local_180 [2];
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_178;
  FClusterKMeans local_168;
  FRenderCurveResourceData *local_140;
  FScriptContainerElement *local_138;
  uint uStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TArrayView<UE::Math::TVector<float>_const_,int> local_108;
  TArrayView<UE::Math::TVector<float>_const_,int> local_f8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_e8;
  FGuid local_d8 [10];
  
  bVar41 = -1 < CpuChannel->Enabled;
  local_2b0 = param_1;
  local_140 = param_2;
  if (bVar41) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4340,
               "HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
               ,0x10f4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4340);
  }
  iVar18 = (int)param_1->_padding_;
  if ((iVar18 != 0) && ((int)param_1->_padding_ != 0)) {
    uVar37 = 0;
    uVar31 = iVar18 + 0x3f;
    uVar33 = uVar31 >> 6;
    local_210.Data = (FScriptContainerElement *)0x0;
    local_208[0] = 0;
    local_208[1] = 0;
    local_264 = uVar33;
    if (uVar31 >> 6 != 0) {
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40,8,uVar33,&local_210,local_208,local_208 + 1);
      DefaultConstructItems<_HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData_::__l2::FCluster,int>
                (local_210.Data + (longlong)iVar18 * 0x40,uVar33);
    }
    uVar31 = (uint)param_1->_padding_;
    local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220.ArrayNum = 0;
    local_220.ArrayMax = 0;
    local_288.Data = (FScriptContainerElement *)0x0;
    local_280 = 0;
    if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
    }
    if (0 < (int)uVar31) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar31,&local_288,0,(int *)((longlong)&local_280 + 4));
    }
    uVar26 = uVar37;
    if ((int)param_1->_padding_ != 0) {
      do {
        uVar30 = (uint)uVar26;
        uVar31 = 0;
        if ((int)uVar30 < (int)param_1->_padding_) {
          uVar31 = ~uVar30 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar31 = *(uint *)(param_1->_padding_ + (longlong)(int)uVar30 * 4);
        uVar34 = 0;
        if ((int)uVar31 < (int)param_1->_padding_) {
          uVar34 = ~uVar31 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_1b0 = *(undefined8 *)(param_1->_padding_ + (longlong)(int)uVar31 * 0xc);
        local_1a8 = *(undefined4 *)(param_1->_padding_ + 8 + (longlong)(int)uVar31 * 0xc);
        if (((local_288.Data <= (FScriptContainerElement *)&local_1b0) &&
            ((FScriptContainerElement *)&local_1b0 <
             local_288.Data + (longlong)local_280._4_4_ * 0xc)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((uint)local_280 == local_280._4_4_) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&local_288,(int *)((longlong)&local_280 + 4));
          local_280 = CONCAT44(local_280._4_4_,iVar18);
        }
        lVar22 = (longlong)(int)(uint)local_280;
        uVar26 = (ulonglong)(uVar30 + 1);
        local_280 = CONCAT44(local_280._4_4_,(uint)local_280 + 1);
        *(undefined8 *)(local_288.Data + lVar22 * 0xc) = local_1b0;
        *(undefined4 *)(local_288.Data + lVar22 * 0xc + 8) = local_1a8;
      } while (uVar30 + 1 < (uint)param_1->_padding_);
    }
    uVar31 = (uint)local_280;
    local_138 = local_288.Data;
    local_168.MaxIterations = 500;
    local_168.RandomSeed = 0;
    local_168.ClusterIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ClusterIDs.ArrayNum = 0;
    local_168.ClusterIDs.ArrayMax = 0;
    local_168.ClusterSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ClusterSizes.ArrayNum = 0;
    local_168.ClusterSizes.ArrayMax = 0;
    local_2b4 = (uint)local_280;
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 0;
    local_178.ArrayMax = 0;
    if (((int)(uint)local_280 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uStack_130 = uVar31;
    local_108._12_4_ = uStack_12c;
    local_108.ArrayNum = uVar31;
    local_108.DataPtr = (TVector<float> *)local_138;
    UE::Geometry::FClusterKMeans::GetUniformSpacedInitialCenters<UE::Math::TVector<float>_>
              (&local_168,&local_108,uVar33,&local_178);
    iStack_110 = local_178.ArrayNum;
    local_118 = local_178.AllocatorInstance.Data;
    if ((local_178.ArrayNum < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar18 = (uint)local_280;
    local_128 = local_288.Data;
    if (((int)(uint)local_280 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_f8._12_4_ = uStack_10c;
    local_f8.ArrayNum = iStack_110;
    iStack_120 = iVar18;
    local_e8._12_4_ = uStack_11c;
    local_e8.ArrayNum = iVar18;
    local_e8.DataPtr = (TVector<float> *)local_128;
    local_f8.DataPtr = (TVector<float> *)local_118;
    iVar18 = UE::Geometry::FClusterKMeans::ComputeClusters<UE::Math::TVector<float>,1>
                       (&local_168,&local_e8,uVar33,&local_f8,
                        (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0);
    if ((local_168.ClusterSizes.ArrayNum != iVar18) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Cluster.ClusterSizes.Num() == FoundClusters",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                            ,0x1139,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.ArrayNum = 0;
    local_238.ArrayMax = 0;
    UE::Geometry::FClusterKMeans::GetClusters(&local_168,&local_238);
    if ((local_238.ArrayNum != iVar18) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("ClusterIndices.Num() == FoundClusters",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                            ,0x113c,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 0;
    local_1a0.ArrayMax = 0;
    local_180[0] = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_1a0,local_180,uVar31);
    if (0 < local_238.ArrayNum) {
      local_258 = 0;
      uVar26 = uVar37;
      do {
        lVar22 = local_258;
        uVar30 = (uint)uVar26;
        uVar33 = ~uVar30 >> 0x1f;
        uVar31 = 0;
        if ((int)uVar30 < local_168.ClusterSizes.ArrayNum) {
          uVar31 = uVar33;
        }
        if ((uVar31 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar18 = *(int *)(local_168.ClusterSizes.AllocatorInstance.Data + lVar22 * 4);
        uVar31 = 0;
        if ((int)uVar30 < local_238.ArrayNum) {
          uVar31 = uVar33;
        }
        if ((uVar31 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((*(int *)(local_238.AllocatorInstance.Data + uVar37 + 8) != iVar18) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ClusterIndices[ClusterIdx].Num() == Cluster.ClusterSizes[ClusterIdx]"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                ,0x1143,L""), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar31 = 0;
        if ((int)uVar30 < local_238.ArrayNum) {
          uVar31 = uVar33;
        }
        if ((uVar31 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar28.Data = local_238.AllocatorInstance.Data;
        puVar25 = *(uint **)(local_238.AllocatorInstance.Data + uVar37);
        iVar18 = *(int *)(local_238.AllocatorInstance.Data + uVar37 + 8);
        puVar2 = puVar25 + iVar18;
        while( true ) {
          if (*(int *)(FVar28.Data + uVar37 + 8) != iVar18) {
            local_2b8[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_2b8);
          }
          if (puVar25 == puVar2) break;
          uVar31 = *puVar25;
          uVar33 = 0;
          if ((int)uVar31 < local_1a0.ArrayNum) {
            uVar33 = ~uVar31 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          *(int *)(local_1a0.AllocatorInstance.Data + (longlong)(int)uVar31 * 4) =
               *(int *)(local_1a0.AllocatorInstance.Data + (longlong)(int)uVar31 * 4) + 1;
          puVar25 = puVar25 + 1;
        }
        uVar26 = (ulonglong)(uVar30 + 1);
        local_258 = local_258 + 1;
        uVar37 = uVar37 + 0x10;
        param_1 = local_2b0;
        uVar31 = local_2b4;
        uVar33 = local_264;
      } while ((int)(uVar30 + 1) < local_238.ArrayNum);
    }
    uVar30 = 0;
    uVar37 = 0;
    if ((uVar33 != 0) && (uVar26 = uVar37, 0 < (int)uVar31)) {
      do {
        uVar34 = 0;
        if ((int)uVar30 < local_1a0.ArrayNum) {
          uVar34 = ~uVar30 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((*(int *)(local_1a0.AllocatorInstance.Data + uVar26 * 4) != 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("SeenCount[PointIdx] == 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                ,0x114d,L""), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar30 = uVar30 + 1;
        uVar26 = uVar26 + 1;
      } while ((longlong)uVar26 < (longlong)(int)uVar31);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_220.AllocatorInstance.Data,
               local_220.ArrayNum);
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<TArray<int,TSizedDefaultAllocator<32>_>,int>
              (&local_220,
               (TArray<int,TSizedDefaultAllocator<32>_> *)local_238.AllocatorInstance.Data,
               local_238.ArrayNum,local_220.ArrayMax);
    if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_238.AllocatorInstance.Data,
               local_238.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_238.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_238.AllocatorInstance.Data);
    }
    if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.AllocatorInstance.Data);
    }
    if (local_168.ClusterSizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.ClusterSizes.AllocatorInstance.Data);
    }
    if (local_168.ClusterIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.ClusterIDs.AllocatorInstance.Data);
    }
    if (local_288.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data);
    }
    fVar47 = __real_3d888889;
    fVar14 = __real_3f000000;
    fVar13 = __real_3f800000;
    local_268 = 0;
    if (uVar33 == 0) {
      uVar33 = 0;
      local_298.Data = (FScriptContainerElement *)0x0;
      local_290[0] = 0;
      local_290[1] = 0;
    }
    else {
      do {
        uVar30 = (uint)uVar37;
        uVar31 = ~uVar30 >> 0x1f;
        uVar33 = 0;
        if ((int)uVar30 < local_208[0]) {
          uVar33 = uVar31;
        }
        local_2e4 = uVar31;
        if ((uVar33 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar28.Data = local_210.Data;
        local_228 = (FCluster *)local_210.Data;
        lVar22 = (longlong)(int)uVar30 * 0x40;
        pFVar40 = local_210.Data + lVar22 + 0x30;
        iVar18 = *(int *)(pFVar40 + 8);
        local_1c8 = (FPackedCluster *)(pFVar40 + 8);
        local_1f0 = lVar22;
        local_1c0 = pFVar40;
        if (iVar18 < 0x40) {
          iVar19 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40,8,0x40 - iVar18,(ForAnyElementType *)pFVar40,(int *)local_1c8,
                              (int *)(pFVar40 + 0xc));
                    /* WARNING: Load size is inaccurate */
          DefaultConstructItems<_HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData_::__l2::FCurve,int>
                    (*pFVar40 + (longlong)iVar19 * 0x40,0x40 - iVar18);
          uVar31 = local_2e4;
        }
        else if (0x40 < iVar18) {
          iVar18 = iVar18 + -0x40;
          if (iVar18 < 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          else {
            uVar31 = local_2e4;
            if (iVar18 == 0) goto LAB_14e01e824;
          }
          TArray<`HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData'::__l2::FCurve,TSizedDefaultAllocator<32>_>
          ::RemoveAtImpl(pFVar40,0x40,iVar18);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,(ForAnyElementType *)pFVar40,*(int *)(pFVar40 + 8),
                     (int *)(pFVar40 + 0xc));
          uVar31 = local_2e4;
        }
LAB_14e01e824:
        *(undefined8 *)(FVar28.Data + lVar22 + 4) = 0x40;
        *(undefined4 *)&FVar28.Data[lVar22].field_0x0 = 0x10;
        *(undefined8 *)(FVar28.Data + lVar22 + 0xc) = 0;
        lVar23 = (longlong)(int)uVar30 << 4;
        local_2d8 = 0;
        fStack_2d0 = 0.0;
        fStack_2cc = 0.0;
        fStack_2c8 = 0.0;
        fStack_2c4 = 0.0;
        local_2c0 = '\0';
        local_2bf = 0;
        local_2bd = 0;
        local_2b4 = 0;
        local_240 = lVar23;
        do {
          uVar33 = local_2b4;
          uVar30 = 0;
          if ((int)uVar37 < local_220.ArrayNum) {
            uVar30 = uVar31;
          }
          if ((uVar30 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar31 = *(uint *)(local_220.AllocatorInstance.Data + lVar23 + 8);
          if (uVar33 < uVar31) {
            piVar5 = (int *)((longlong)&((FCluster *)FVar28.Data)->CurveCount + lVar22);
            *piVar5 = *piVar5 + 1;
            uVar31 = uVar31 - 1;
            if (uVar33 < uVar31) {
              uVar31 = uVar33;
            }
            uVar34 = 0;
            uVar30 = 0;
            if ((int)uVar37 < local_220.ArrayNum) {
              uVar30 = local_2e4;
            }
            if ((uVar30 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar28.Data = local_220.AllocatorInstance.Data;
            uVar30 = 0;
            if ((int)uVar31 < *(int *)(local_220.AllocatorInstance.Data + lVar23 + 8)) {
              uVar30 = ~uVar31 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            fVar44 = *(float *)(*(longlong *)(FVar28.Data + lVar23) + (longlong)(int)uVar31 * 4);
            uVar30 = ~(uint)fVar44 >> 0x1f;
            uVar31 = 0;
            if ((int)fVar44 < (int)param_1->_padding_) {
              uVar31 = uVar30;
            }
            local_260 = fVar44;
            local_25c = uVar30;
            if ((uVar31 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_2a8 = *(uint *)(param_1->_padding_ + (longlong)(int)fVar44 * 4);
            uVar31 = uVar34;
            if ((int)fVar44 < (int)param_1->_padding_) {
              uVar31 = uVar30;
            }
            if ((uVar31 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar11 = *(ushort *)(param_1->_padding_ + (longlong)(int)fVar44 * 2);
            if (((int)(local_1c8->Header).Center.field0_0x0._s_0.X <= (int)uVar33) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
                    /* WARNING: Load size is inaccurate */
            pFVar27 = *local_1c0 + (longlong)(int)uVar33 * 0x40;
            iVar18 = *(int *)(pFVar27 + 8);
            pFVar40 = pFVar27 + 8;
            local_1d0 = pFVar27;
            local_1b8 = pFVar40;
            if (iVar18 < 0x10) {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,0x10 - iVar18,(ForAnyElementType *)pFVar27,(int *)pFVar40,
                         (int *)(pFVar27 + 0xc));
            }
            else if (0x10 < iVar18) {
              iVar18 = iVar18 + -0x10;
              if (iVar18 < 0) {
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   );
                if (bVar17) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
              }
              else if (iVar18 == 0) goto LAB_14e01ef2f;
                    /* WARNING: Load size is inaccurate */
              iVar19 = (*(int *)pFVar40 - iVar18) + -0x10;
              if (iVar19 != 0) {
                memmove(*pFVar27 + 0xc0,*pFVar27 + 0xc0 + (longlong)iVar18 * 0xc,
                        (longlong)iVar19 * 0xc);
              }
              *(int *)pFVar40 = *(int *)pFVar40 - iVar18;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,(ForAnyElementType *)pFVar27,*(int *)pFVar40,(int *)(pFVar27 + 0xc));
            }
LAB_14e01ef2f:
            pFVar40 = pFVar27 + 0x10;
            iVar18 = *(int *)(pFVar27 + 0x18);
            pFVar1 = pFVar27 + 0x18;
            local_1e8 = pFVar40;
            local_1d8 = pFVar1;
            if (iVar18 < 0x10) {
              iVar19 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (4,4,0x10 - iVar18,(ForAnyElementType *)pFVar40,(int *)pFVar1,
                                  (int *)(pFVar27 + 0x1c));
                    /* WARNING: Load size is inaccurate */
              memset(*pFVar40 + (longlong)iVar19 * 4,0,(longlong)(0x10 - iVar18) << 2);
            }
            else if (0x10 < iVar18) {
              iVar18 = iVar18 + -0x10;
              if (iVar18 < 0) {
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   );
                if (bVar17) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
              }
              else if (iVar18 == 0) goto LAB_14e01f01b;
                    /* WARNING: Load size is inaccurate */
              iVar19 = (*(int *)pFVar1 - iVar18) + -0x10;
              if (iVar19 != 0) {
                memmove(*pFVar40 + 0x40,*pFVar40 + 0x40 + (longlong)iVar18 * 4,(longlong)iVar19 << 2
                       );
              }
              *(int *)pFVar1 = *(int *)pFVar1 - iVar18;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(ForAnyElementType *)pFVar40,*(int *)pFVar1,(int *)(pFVar27 + 0x1c));
            }
LAB_14e01f01b:
            pFVar39 = (FBulkData *)(pFVar27 + 0x20);
            iVar18 = *(int *)(pFVar27 + 0x28);
            pFVar40 = pFVar27 + 0x28;
            local_248 = pFVar39;
            local_190 = pFVar40;
            if (iVar18 < 0x10) {
              iVar19 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (4,4,0x10 - iVar18,(ForAnyElementType *)pFVar39,(int *)pFVar40,
                                  (int *)(pFVar27 + 0x2c));
              memset(*(FScriptContainerElement **)&pFVar39->DataAllocation + (longlong)iVar19 * 4,0,
                     (longlong)(0x10 - iVar18) << 2);
            }
            else if (0x10 < iVar18) {
              iVar18 = iVar18 + -0x10;
              if (iVar18 < 0) {
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   );
                if (bVar17) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
              }
              else if (iVar18 == 0) goto LAB_14e01f10a;
              iVar19 = (*(int *)pFVar40 - iVar18) + -0x10;
              if (iVar19 != 0) {
                memmove(*(FScriptContainerElement **)&pFVar39->DataAllocation + 0x40,
                        *(FScriptContainerElement **)&pFVar39->DataAllocation + 0x40 +
                        (longlong)iVar18 * 4,(longlong)iVar19 << 2);
              }
              *(int *)pFVar40 = *(int *)pFVar40 - iVar18;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(ForAnyElementType *)pFVar39,*(int *)pFVar40,(int *)(pFVar27 + 0x2c));
            }
LAB_14e01f10a:
            local_2e6 = (FScriptContainerElement)0x0;
            pFVar40 = pFVar27 + 0x3c;
            *(undefined4 *)(pFVar27 + 0x38) = 0;
            if (*(int *)(pFVar27 + 0x3c) != 0x10) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x10,(ForAnyElementType *)(pFVar27 + 0x30),0,(int *)pFVar40);
            }
            lVar22 = 0x10;
            do {
                    /* WARNING: Load size is inaccurate */
              if (((pFVar27[0x30] <= &local_2e6) && (&local_2e6 < pFVar27[0x30] + *(int *)pFVar40))
                 && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar18 = *(int *)(pFVar27 + 0x38);
              if (iVar18 == *(int *)pFVar40) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x101,(ForAnyElementType *)(pFVar27 + 0x30),(int *)pFVar40);
              }
              *(int *)(pFVar27 + 0x38) = iVar18 + 1;
                    /* WARNING: Load size is inaccurate */
              pFVar27[0x30][iVar18] = local_2e6;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            local_1f8 = (uint)uVar11;
            if (uVar11 < 0x11) {
              lVar23 = 0;
              lVar22 = local_1f0;
              if (uVar11 != 0) {
                uVar26 = (ulonglong)(int)local_2a8;
                local_270 = 0;
                local_258 = uVar26 * 0xc;
                uVar37 = uVar26;
                lVar38 = lVar23;
                do {
                  lVar22 = local_258;
                  uVar33 = uVar34 + (int)uVar37;
                  uVar30 = ~uVar33 >> 0x1f;
                  uVar31 = 0;
                  if ((int)uVar33 < (int)param_1->_padding_) {
                    uVar31 = uVar30;
                  }
                  if ((uVar31 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  lVar22 = param_1->_padding_ + lVar22;
                  uVar33 = ~uVar34 >> 0x1f;
                  uVar10 = *(undefined8 *)(lVar22 + lVar38);
                  uVar50 = *(undefined4 *)(lVar22 + 8 + lVar38);
                  uVar31 = 0;
                  if ((int)uVar34 < *(int *)local_1b8) {
                    uVar31 = uVar33;
                  }
                  if ((uVar31 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                    /* WARNING: Load size is inaccurate */
                  FVar28.Data = *local_1d0;
                  *(undefined8 *)(FVar28.Data + lVar38) = uVar10;
                  *(undefined4 *)(FVar28.Data + lVar38 + 8) = uVar50;
                  iVar18 = local_2a8 + uVar34;
                  uVar31 = 0;
                  if (iVar18 < (int)local_2b0->_padding_) {
                    uVar31 = uVar30;
                  }
                  if ((uVar31 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  uVar50 = *(undefined4 *)(local_270 + uVar26 * 4 + local_2b0->_padding_);
                  uVar31 = 0;
                  if ((int)uVar34 < *(int *)local_1d8) {
                    uVar31 = uVar33;
                  }
                  if ((uVar31 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                    /* WARNING: Load size is inaccurate */
                  *(undefined4 *)(*local_1e8 + lVar23 * 4) = uVar50;
                  uVar31 = 0;
                  if (iVar18 < (int)local_2b0->_padding_) {
                    uVar31 = uVar30;
                  }
                  if ((uVar31 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  param_1 = local_2b0;
                  uVar50 = *(undefined4 *)(local_2b0->_padding_ + uVar26 * 4 + lVar23 * 4);
                  uVar31 = 0;
                  if ((int)uVar34 < *(int *)local_190) {
                    uVar31 = uVar33;
                  }
                  if ((uVar31 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pFVar40 = local_1d0;
                  *(undefined4 *)
                   (*(FScriptContainerElement **)&local_248->DataAllocation + lVar23 * 4) = uVar50;
                  uVar31 = 0;
                  if ((int)uVar34 < *(int *)(local_1d0 + 0x38)) {
                    uVar31 = uVar33;
                  }
                  if ((uVar31 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                    /* WARNING: Load size is inaccurate */
                  pFVar40[0x30][lVar23] = (FScriptContainerElement)0x1;
                  fVar44 = *(float *)((longlong)&local_228->MaxRadius + local_1f0);
                  uVar31 = 0;
                  if ((int)uVar34 < *(int *)local_190) {
                    uVar31 = uVar33;
                  }
                  if ((uVar31 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                    /* WARNING: Load size is inaccurate */
                  fVar48 = *(float *)(pFVar40[0x20] + lVar23 * 4);
                  if (*(float *)(pFVar40[0x20] + lVar23 * 4) <= fVar44) {
                    fVar48 = fVar44;
                  }
                  *(float *)((longlong)&local_228->MaxRadius + local_1f0) = fVar48;
                  uVar31 = 0;
                  if ((int)uVar34 < *(int *)(pFVar40 + 8)) {
                    uVar31 = uVar33;
                  }
                  if ((uVar31 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                    /* WARNING: Load size is inaccurate */
                  FVar28.Data = *pFVar40;
                  if (local_2c0 == '\0') {
                    local_2d8 = *(undefined8 *)(FVar28.Data + lVar38);
                    fStack_2d0 = *(float *)(FVar28.Data + lVar38 + 8);
                    fStack_2cc = (float)local_2d8;
                    fStack_2c8 = (float)((ulonglong)local_2d8 >> 0x20);
                    local_2c0 = '\x01';
                    fStack_2c4 = fStack_2d0;
                  }
                  else {
                    fVar44 = (float)local_2d8;
                    if (*(float *)(FVar28.Data + lVar38) <= (float)local_2d8) {
                      fVar44 = *(float *)(FVar28.Data + lVar38);
                    }
                    if (*(float *)(FVar28.Data + lVar38 + 4) <= local_2d8._4_4_) {
                      local_2d8._4_4_ = *(float *)(FVar28.Data + lVar38 + 4);
                    }
                    if (*(float *)(FVar28.Data + lVar38 + 8) <= fStack_2d0) {
                      fStack_2d0 = *(float *)(FVar28.Data + lVar38 + 8);
                    }
                    local_2d8 = CONCAT44(local_2d8._4_4_,fVar44);
                    if (fStack_2cc <= *(float *)(FVar28.Data + lVar38)) {
                      fStack_2cc = *(float *)(FVar28.Data + lVar38);
                    }
                    if (fStack_2c8 <= *(float *)(FVar28.Data + lVar38 + 4)) {
                      fStack_2c8 = *(float *)(FVar28.Data + lVar38 + 4);
                    }
                    if (fStack_2c4 <= *(float *)(FVar28.Data + lVar38 + 8)) {
                      fStack_2c4 = *(float *)(FVar28.Data + lVar38 + 8);
                    }
                  }
                  local_270 = local_270 + 4;
                  uVar34 = uVar34 + 1;
                  lVar23 = lVar23 + 1;
                  uVar37 = (ulonglong)local_2a8;
                  lVar38 = lVar38 + 0xc;
                  lVar22 = local_1f0;
                } while ((int)uVar34 < (int)local_1f8);
              }
            }
            else {
              local_1e0 = 1;
              local_1fc = 0;
              fVar44 = 0.0;
              local_2e0 = 0;
              local_258 = 0;
              local_270 = 0;
              do {
                uVar31 = local_1f8;
                uVar33 = local_1fc;
                uVar30 = local_1e0;
                if (local_1e0 < local_1f8) {
                  uVar34 = local_1e0 + local_2a8;
                  uVar32 = local_1fc + local_2a8;
                  do {
                    uVar24 = 0;
                    if ((int)uVar32 < (int)param_1->_padding_) {
                      uVar24 = ~uVar32 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    if (*(float *)(param_1->_padding_ + (longlong)(int)uVar32 * 4) <= fVar44) {
                      uVar24 = 0;
                      if ((int)uVar34 < (int)param_1->_padding_) {
                        uVar24 = ~uVar34 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      pfVar3 = (float *)(param_1->_padding_ + (longlong)(int)uVar34 * 4);
                      if (fVar44 < *pfVar3 || fVar44 == *pfVar3) break;
                    }
                    uVar33 = uVar33 + 1;
                    uVar32 = uVar32 + 1;
                    uVar30 = uVar30 + 1;
                    uVar34 = uVar34 + 1;
                  } while (uVar30 < uVar31);
                }
                local_1e0 = uVar30;
                local_1fc = uVar33;
                uVar34 = local_1e0;
                uVar30 = local_1fc;
                uVar33 = local_2a8;
                if ((uVar31 <= local_1fc) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CurrIndex < PointCount",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                        ,0x119d,L""), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if ((uVar31 <= uVar34) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("NextIndex < PointCount",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                        ,0x119e,L""), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                uVar30 = uVar30 + uVar33;
                uVar32 = ~uVar30 >> 0x1f;
                uVar31 = 0;
                if ((int)uVar30 < (int)param_1->_padding_) {
                  uVar31 = uVar32;
                }
                local_208[2] = uVar32;
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar15 = local_2b0;
                uVar33 = uVar33 + uVar34;
                uVar34 = ~uVar33 >> 0x1f;
                fVar48 = *(float *)(param_1->_padding_ + (longlong)(int)uVar30 * 4);
                uVar31 = 0;
                if ((int)uVar33 < (int)local_2b0->_padding_) {
                  uVar31 = uVar34;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                fVar42 = *(float *)(pFVar15->_padding_ + (longlong)(int)uVar33 * 4);
                if ((fVar44 < fVar48) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InterpU >= CurrU",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                        ,0x11a3,L""), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if ((fVar42 < fVar44) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InterpU <= NextU",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                        ,0x11a4,L""), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if ((fVar42 < fVar48) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CurrU <= NextU",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                        ,0x11a5,L""), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if ((fVar44 < fVar48) || (fVar42 <= fVar48)) {
                  fVar48 = 0.0;
                }
                else {
                  fVar48 = (fVar44 - fVar48) / (fVar42 - fVar48);
                }
                if (fVar13 <= fVar48) {
                  fVar48 = fVar13;
                }
                uVar31 = 0;
                if ((int)uVar33 < (int)pFVar15->_padding_) {
                  uVar31 = uVar34;
                }
                if (fVar48 <= 0.0) {
                  fVar48 = 0.0;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar22 = pFVar15->_padding_;
                lVar23 = (longlong)(int)uVar33;
                uVar31 = 0;
                if ((int)uVar30 < (int)local_2b0->_padding_) {
                  uVar31 = uVar32;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                fVar42 = *(float *)(lVar22 + lVar23 * 0xc);
                fVar49 = *(float *)(lVar22 + 4 + lVar23 * 0xc);
                fVar46 = *(float *)(lVar22 + 8 + lVar23 * 0xc);
                lVar38 = (longlong)(int)uVar30;
                uVar32 = ~local_2e0 >> 0x1f;
                lVar22 = local_2b0->_padding_;
                fVar45 = *(float *)(lVar22 + lVar38 * 0xc);
                fVar43 = *(float *)(lVar22 + 4 + lVar38 * 0xc);
                fVar6 = *(float *)(lVar22 + 8 + lVar38 * 0xc);
                fVar7 = *(float *)(lVar22 + lVar38 * 0xc);
                fVar8 = *(float *)(lVar22 + 4 + lVar38 * 0xc);
                fVar9 = *(float *)(lVar22 + 8 + lVar38 * 0xc);
                uVar31 = 0;
                if ((int)local_2e0 < *(int *)local_1b8) {
                  uVar31 = uVar32;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                    /* WARNING: Load size is inaccurate */
                FVar28.Data = *local_1d0;
                *(float *)(FVar28.Data + local_270) = (fVar42 - fVar45) * fVar48 + fVar7;
                *(float *)(FVar28.Data + local_270 + 4) = (fVar49 - fVar43) * fVar48 + fVar8;
                *(float *)(FVar28.Data + local_270 + 8) = (fVar46 - fVar6) * fVar48 + fVar9;
                uVar31 = 0;
                if ((int)uVar33 < (int)local_2b0->_padding_) {
                  uVar31 = uVar34;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar22 = local_2b0->_padding_;
                uVar31 = 0;
                if ((int)uVar30 < (int)local_2b0->_padding_) {
                  uVar31 = local_208[2];
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                fVar42 = *(float *)(lVar22 + lVar23 * 4);
                fVar49 = *(float *)(local_2b0->_padding_ + lVar38 * 4);
                fVar46 = *(float *)(local_2b0->_padding_ + lVar38 * 4);
                uVar31 = 0;
                if ((int)local_2e0 < *(int *)local_1d8) {
                  uVar31 = uVar32;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                    /* WARNING: Load size is inaccurate */
                *(float *)(*local_1e8 + local_258 * 4) = (fVar42 - fVar49) * fVar48 + fVar46;
                uVar31 = 0;
                if ((int)uVar33 < (int)local_2b0->_padding_) {
                  uVar31 = uVar34;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                param_1 = local_2b0;
                lVar22 = local_2b0->_padding_;
                uVar31 = 0;
                if ((int)uVar30 < (int)local_2b0->_padding_) {
                  uVar31 = local_208[2];
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                uVar31 = local_2e0;
                fVar42 = *(float *)(lVar22 + lVar23 * 4);
                fVar49 = *(float *)(param_1->_padding_ + lVar38 * 4);
                fVar46 = *(float *)(param_1->_padding_ + lVar38 * 4);
                uVar33 = 0;
                if ((int)local_2e0 < *(int *)local_190) {
                  uVar33 = uVar32;
                }
                if ((uVar33 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar40 = local_1d0;
                pFVar39 = local_248;
                lVar23 = local_258;
                *(float *)(*(FScriptContainerElement **)&local_248->DataAllocation + local_258 * 4)
                     = (fVar42 - fVar49) * fVar48 + fVar46;
                uVar33 = 0;
                if ((int)uVar31 < *(int *)(local_1d0 + 0x38)) {
                  uVar33 = uVar32;
                }
                if ((uVar33 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar22 = local_1f0;
                    /* WARNING: Load size is inaccurate */
                fVar44 = fVar44 + fVar47;
                pFVar40[0x30][lVar23] = (FScriptContainerElement)0x1;
                if (fVar13 <= fVar44) {
                  fVar44 = fVar13;
                }
                fVar48 = *(float *)((longlong)&local_228->MaxRadius + local_1f0);
                if (fVar44 <= 0.0) {
                  fVar44 = 0.0;
                }
                uVar33 = 0;
                if ((int)uVar31 < *(int *)(pFVar39->BulkMeta).Data) {
                  uVar33 = uVar32;
                }
                if ((uVar33 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                fVar42 = *(float *)(*(FScriptContainerElement **)&pFVar39->DataAllocation +
                                   lVar23 * 4);
                if (fVar42 <= fVar48) {
                  fVar42 = fVar48;
                }
                *(float *)((longlong)&local_228->MaxRadius + lVar22) = fVar42;
                uVar33 = 0;
                if ((int)uVar31 < *(int *)(pFVar40 + 8)) {
                  uVar33 = uVar32;
                }
                if ((uVar33 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                    /* WARNING: Load size is inaccurate */
                FVar28.Data = *pFVar40;
                if (local_2c0 == '\0') {
                  local_2d8 = *(undefined8 *)(FVar28.Data + local_270);
                  fStack_2d0 = *(float *)(FVar28.Data + local_270 + 8);
                  fStack_2cc = (float)local_2d8;
                  fStack_2c8 = (float)((ulonglong)local_2d8 >> 0x20);
                  local_2c0 = '\x01';
                  fStack_2c4 = fStack_2d0;
                }
                else {
                  fVar48 = *(float *)(FVar28.Data + local_270);
                  fVar42 = *(float *)(FVar28.Data + local_270 + 4);
                  fVar49 = fVar48;
                  if ((float)local_2d8 <= fVar48) {
                    fVar49 = (float)local_2d8;
                  }
                  fVar46 = *(float *)(FVar28.Data + local_270 + 8);
                  fVar45 = fVar42;
                  if (local_2d8._4_4_ <= fVar42) {
                    fVar45 = local_2d8._4_4_;
                  }
                  if (fVar48 <= fStack_2cc) {
                    fVar48 = fStack_2cc;
                  }
                  if (fVar42 <= fStack_2c8) {
                    fVar42 = fStack_2c8;
                  }
                  fVar43 = fVar46;
                  if (fStack_2d0 <= fVar46) {
                    fVar43 = fStack_2d0;
                  }
                  if (fVar46 <= fStack_2c4) {
                    fVar46 = fStack_2c4;
                  }
                  local_2d8 = CONCAT44(fVar45,fVar49);
                  fStack_2d0 = fVar43;
                  fStack_2cc = fVar48;
                  fStack_2c8 = fVar42;
                  fStack_2c4 = fVar46;
                }
                local_2e0 = uVar31 + 1;
                local_258 = lVar23 + 1;
                local_270 = local_270 + 0xc;
              } while (local_2e0 < 0x10);
            }
            FVar28.Data = (FScriptContainerElement *)local_228;
            lVar23 = (longlong)(int)local_260;
            uVar31 = 0;
            if ((int)local_260 < (int)param_1->_padding_) {
              uVar31 = local_25c;
            }
            fVar44 = *(float *)((longlong)&local_228->MaxLength + lVar22);
            if ((uVar31 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            fVar48 = *(float *)(param_1->_padding_ + lVar23 * 4);
            if (fVar48 <= fVar44) {
              fVar48 = fVar44;
            }
            *(float *)((longlong)&((FCluster *)FVar28.Data)->MaxLength + lVar22) = fVar48;
            lVar23 = local_240;
          }
          else {
            if (((int)(local_1c8->Header).Center.field0_0x0._s_0.X <= (int)uVar33) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
                    /* WARNING: Load size is inaccurate */
            pFVar27 = *local_1c0 + (longlong)(int)uVar33 * 0x40;
            pFVar40 = pFVar27 + 0xc;
            *(undefined4 *)(pFVar27 + 8) = 0;
            if (*(int *)(pFVar27 + 0xc) != 0x10) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,0x10,(ForAnyElementType *)pFVar27,0,(int *)pFVar40);
            }
            lVar38 = 0x10;
            do {
                    /* WARNING: Load size is inaccurate */
              if (((*pFVar27 <
                    (FScriptContainerElement *)
                    ((longlong)&UE::Math::TVector<float>::ZeroVector.field0_0x0 + 1)) &&
                  (&UE::Math::TVector<float>::ZeroVector <
                   *pFVar27 + (longlong)*(int *)pFVar40 * 0xc)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar18 = *(int *)(pFVar27 + 8);
              if (iVar18 == *(int *)pFVar40) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,(ForAnyElementType *)pFVar27,(int *)pFVar40);
              }
              param_1 = local_2b0;
              *(int *)(pFVar27 + 8) = iVar18 + 1;
                    /* WARNING: Load size is inaccurate */
              FVar28.Data = *pFVar27;
              *(undefined8 *)(FVar28.Data + (longlong)iVar18 * 0xc) =
                   UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              *(float *)(FVar28.Data + (longlong)iVar18 * 0xc + 8) =
                   UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              lVar38 = lVar38 + -1;
            } while (lVar38 != 0);
            pFVar40 = pFVar27 + 0x1c;
            local_278 = 0;
            *(undefined4 *)(pFVar27 + 0x18) = 0;
            if (*(int *)(pFVar27 + 0x1c) != 0x10) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0x10,(ForAnyElementType *)(pFVar27 + 0x10),0,(int *)pFVar40);
            }
            lVar38 = 0x10;
            do {
                    /* WARNING: Load size is inaccurate */
              if (((pFVar27[0x10] <= (FScriptContainerElement *)&local_278) &&
                  ((FScriptContainerElement *)&local_278 <
                   pFVar27[0x10] + (longlong)*(int *)pFVar40 * 4)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar18 = *(int *)(pFVar27 + 0x18);
              if (iVar18 == *(int *)pFVar40) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)(pFVar27 + 0x10),(int *)pFVar40);
              }
              *(int *)(pFVar27 + 0x18) = iVar18 + 1;
                    /* WARNING: Load size is inaccurate */
              *(undefined4 *)(pFVar27[0x10] + (longlong)iVar18 * 4) = local_278;
              lVar38 = lVar38 + -1;
            } while (lVar38 != 0);
            local_274 = 0;
            pFVar40 = pFVar27 + 0x2c;
            *(undefined4 *)(pFVar27 + 0x28) = 0;
            if (*(int *)(pFVar27 + 0x2c) != 0x10) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0x10,(ForAnyElementType *)(pFVar27 + 0x20),0,(int *)pFVar40);
            }
            lVar38 = 0x10;
            do {
                    /* WARNING: Load size is inaccurate */
              if (((pFVar27[0x20] <= (FScriptContainerElement *)&local_274) &&
                  ((FScriptContainerElement *)&local_274 <
                   pFVar27[0x20] + (longlong)*(int *)pFVar40 * 4)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar18 = *(int *)(pFVar27 + 0x28);
              if (iVar18 == *(int *)pFVar40) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)(pFVar27 + 0x20),(int *)pFVar40);
              }
              *(int *)(pFVar27 + 0x28) = iVar18 + 1;
                    /* WARNING: Load size is inaccurate */
              *(undefined4 *)(pFVar27[0x20] + (longlong)iVar18 * 4) = local_274;
              lVar38 = lVar38 + -1;
            } while (lVar38 != 0);
            pFVar40 = pFVar27 + 0x30;
            local_2e7 = (FScriptContainerElement)0x0;
            pFVar1 = pFVar27 + 0x3c;
            *(undefined4 *)(pFVar27 + 0x38) = 0;
            if (*(int *)pFVar1 != 0x10) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x10,(ForAnyElementType *)pFVar40,0,(int *)pFVar1);
            }
            lVar38 = 0x10;
            do {
                    /* WARNING: Load size is inaccurate */
              if (((*pFVar40 <= &local_2e7) && (&local_2e7 < *pFVar40 + *(int *)pFVar1)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar18 = *(int *)(pFVar27 + 0x38);
              if (iVar18 == *(int *)pFVar1) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x101,(ForAnyElementType *)pFVar40,(int *)pFVar1);
              }
              *(int *)(pFVar27 + 0x38) = iVar18 + 1;
                    /* WARNING: Load size is inaccurate */
              (*pFVar40)[iVar18] = local_2e7;
              lVar38 = lVar38 + -1;
              FVar28.Data = (FScriptContainerElement *)local_228;
            } while (lVar38 != 0);
          }
          uVar33 = local_264;
          uVar37 = (ulonglong)(int)local_268;
          local_2b4 = local_2b4 + 1;
          uVar31 = local_2e4;
        } while (local_2b4 < 0x40);
        local_268 = local_268 + 1;
        uVar37 = (ulonglong)local_268;
        *(float *)((longlong)&(((FCluster *)FVar28.Data)->BoundCenter).field0_0x0 + lVar22) =
             (fStack_2cc + (float)local_2d8) * fVar14;
        *(float *)((longlong)&(((FCluster *)FVar28.Data)->BoundCenter).field0_0x0 + lVar22 + 4) =
             (fStack_2c8 + local_2d8._4_4_) * fVar14;
        *(float *)((longlong)&(((FCluster *)FVar28.Data)->BoundCenter).field0_0x0 + lVar22 + 8) =
             (fStack_2c4 + fStack_2d0) * fVar14;
        *(float *)((longlong)&(((FCluster *)FVar28.Data)->BoundExtent).field0_0x0 + lVar22) =
             (fStack_2cc - (float)local_2d8) * fVar14;
        *(float *)((longlong)&(((FCluster *)FVar28.Data)->BoundExtent).field0_0x0 + lVar22 + 4) =
             (fStack_2c8 - local_2d8._4_4_) * fVar14;
        *(float *)((longlong)&(((FCluster *)FVar28.Data)->BoundExtent).field0_0x0 + lVar22 + 8) =
             (fStack_2c4 - fStack_2d0) * fVar14;
      } while (local_268 < local_264);
      local_298.Data = (FScriptContainerElement *)0x0;
      local_290[0] = 0;
      local_290[1] = 0;
      local_2b4 = 0;
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x30,8,local_264,&local_298,(int *)local_290,(int *)(local_290 + 1));
      DefaultConstructItems<HairStrandsBuilder::FPackedCluster,int>
                (local_298.Data + (longlong)iVar18 * 0x30,uVar33);
      fVar14 = __real_437f0000;
      fVar13 = __real_427c0000;
      local_2e4 = 0;
      do {
        uVar31 = local_2e4;
        uVar30 = ~local_2e4;
        uVar33 = 0;
        if ((int)local_2e4 < local_208[0]) {
          uVar33 = uVar30 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar28.Data = local_210.Data;
        lVar22 = (longlong)(int)uVar31 * 0x40;
        uVar33 = 0;
        if ((int)uVar31 < (int)local_290[0]) {
          uVar33 = uVar30 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar36.Data = local_298.Data;
        pFVar40 = (FScriptContainerElement *)((longlong)(int)uVar31 * 0x30);
        local_1c8 = (FPackedCluster *)local_298.Data;
        local_1c0 = pFVar40;
        if ((*(int *)(FVar28.Data + lVar22 + 0x38) < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        puVar21 = *(undefined8 **)(FVar28.Data + lVar22 + 0x30);
        if ((*(int *)(puVar21 + 1) < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        puVar21 = (undefined8 *)*puVar21;
        *(undefined8 *)&pFVar40[FVar36.Data].field_0x0 = *puVar21;
        *(undefined4 *)(pFVar40 + 8 + FVar36.Data) = *(undefined4 *)(puVar21 + 1);
        (pFVar40 + 0xe)[FVar36.Data] = FVar28.Data[lVar22 + 8];
        (pFVar40 + 0xc)[FVar36.Data] = FVar28.Data[lVar22 + 4];
        (pFVar40 + 0xd)[FVar36.Data] = (FScriptContainerElement)FVar28.Data[lVar22].field_0x0;
        FGenericPlatformMath::StoreHalf
                  ((ushort *)(FVar36.Data + 0x10 + (longlong)pFVar40),
                   *(float *)(FVar28.Data + lVar22 + 0x10));
        FGenericPlatformMath::StoreHalf
                  ((ushort *)(FVar36.Data + 0x12 + (longlong)pFVar40),
                   *(float *)(FVar28.Data + lVar22 + 0xc));
        local_2a4 = 0;
        FGenericPlatformMath::StoreHalf
                  (&local_2a4,
                   *(float *)(FVar28.Data + lVar22 + 0x14) -
                   *(float *)&pFVar40[FVar36.Data].field_0x0);
        *(ushort *)(pFVar40 + 0x14 + FVar36.Data) = local_2a4;
        local_2a2 = 0;
        FGenericPlatformMath::StoreHalf
                  (&local_2a2,
                   *(float *)(FVar28.Data + lVar22 + 0x18) - *(float *)(pFVar40 + 4 + FVar36.Data));
        *(ushort *)(pFVar40 + 0x16 + FVar36.Data) = local_2a2;
        local_2a0 = 0;
        FGenericPlatformMath::StoreHalf
                  (&local_2a0,
                   *(float *)(FVar28.Data + lVar22 + 0x1c) - *(float *)(pFVar40 + 8 + FVar36.Data));
        *(ushort *)(pFVar40 + 0x18 + FVar36.Data) = local_2a0;
        local_29e = 0;
        FGenericPlatformMath::StoreHalf(&local_29e,*(float *)(FVar28.Data + lVar22 + 0x20));
        *(ushort *)(pFVar40 + 0x1a + FVar36.Data) = local_29e;
        local_29c = 0;
        FGenericPlatformMath::StoreHalf(&local_29c,*(float *)(FVar28.Data + lVar22 + 0x24));
        *(ushort *)(pFVar40 + 0x1c + FVar36.Data) = local_29c;
        local_29a = 0;
        FGenericPlatformMath::StoreHalf(&local_29a,*(float *)(FVar28.Data + lVar22 + 0x28));
        pFVar27 = pFVar40 + FVar36.Data;
        *(ushort *)(pFVar40 + 0x1e + FVar36.Data) = local_29a;
        uVar33 = (uint)(byte)(pFVar40 + 0xd)[FVar36.Data] * (uint)(byte)(pFVar40 + 0xc)[FVar36.Data]
        ;
        iVar18 = *(int *)(pFVar27 + 0x28);
        if (iVar18 < (int)uVar33) {
          iVar19 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,2,uVar33 - iVar18,(ForAnyElementType *)(pFVar27 + 0x20),
                              (int *)(pFVar27 + 0x28),(int *)(pFVar27 + 0x2c));
          DefaultConstructItems<FPackedHairVertex,int>
                    ((void *)(*(longlong *)(pFVar27 + 0x20) + (longlong)iVar19 * 8),uVar33 - iVar18)
          ;
        }
        else if ((int)uVar33 < iVar18) {
          iVar18 = iVar18 - uVar33;
          if (iVar18 < 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          else {
            uVar31 = local_2e4;
            if (iVar18 == 0) goto LAB_14e020323;
          }
          _Dst = (void *)(*(longlong *)(pFVar27 + 0x20) + (ulonglong)uVar33 * 8);
          iVar19 = (*(int *)(pFVar27 + 0x28) - uVar33) - iVar18;
          if (iVar19 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar18 * 8),(longlong)iVar19 << 3);
          }
          iVar19 = *(int *)(pFVar27 + 0x28);
          *(int *)(pFVar27 + 0x28) = iVar19 - iVar18;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,2,(ForAnyElementType *)(pFVar27 + 0x20),iVar19 - iVar18,
                     (int *)(pFVar27 + 0x2c));
          uVar31 = local_2e4;
        }
LAB_14e020323:
        uVar33 = 0;
        if (*(int *)&FVar28.Data[lVar22].field_0x0 != 0) {
          local_1b8 = FVar36.Data + 0x12 + (longlong)pFVar40;
          do {
            uVar31 = *(uint *)(FVar28.Data + lVar22 + 4);
            uVar30 = 0;
            if (uVar31 != 0) {
              local_2e0 = ~uVar33 >> 0x1f;
              local_1d8 = (FScriptContainerElement *)((longlong)(int)uVar33 * 3);
              do {
                uVar34 = ~uVar30 >> 0x1f;
                local_25c = uVar31 * uVar33 + uVar30;
                uVar31 = 0;
                if ((int)uVar30 < *(int *)(FVar28.Data + lVar22 + 0x38)) {
                  uVar31 = uVar34;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                local_240 = *(longlong *)(FVar28.Data + lVar22 + 0x30);
                lVar23 = (longlong)(int)uVar30;
                lVar38 = lVar23 * 0x40;
                uVar31 = 0;
                if ((int)uVar33 < *(int *)(local_240 + 8 + lVar38)) {
                  uVar31 = local_2e0;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                local_258 = *(longlong *)
                             (*(longlong *)(local_240 + lVar38) + (longlong)local_1d8 * 4);
                local_260 = *(float *)(*(longlong *)(local_240 + lVar38) + 8 +
                                      (longlong)local_1d8 * 4);
                uVar31 = 0;
                if ((int)uVar30 < *(int *)(FVar28.Data + lVar22 + 0x38)) {
                  uVar31 = uVar34;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                local_240 = *(longlong *)(FVar28.Data + lVar22 + 0x30);
                uVar31 = 0;
                if ((int)uVar33 < *(int *)(local_240 + 0x18 + lVar38)) {
                  uVar31 = local_2e0;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar35 = (longlong)(int)uVar33;
                fVar47 = *(float *)(*(longlong *)(local_240 + 0x10 + lVar38) + lVar35 * 4);
                uVar31 = 0;
                if ((int)uVar30 < *(int *)(FVar28.Data + lVar22 + 0x38)) {
                  uVar31 = uVar34;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                local_248 = (FBulkData *)(lVar23 << 6);
                local_1e8 = *(FScriptContainerElement **)(FVar28.Data + lVar22 + 0x30);
                fVar44 = FGenericPlatformMath::LoadHalf((ushort *)local_1b8);
                uVar31 = 0;
                if ((int)uVar33 < *(int *)(local_1e8 + (longlong)(&local_248[1].BulkMeta + -1) + 8))
                {
                  uVar31 = local_2e0;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                fVar48 = *(float *)(*(longlong *)
                                     ((local_248->BulkChunkId).Id + 8 + (longlong)local_1e8) +
                                   lVar35 * 4);
                uVar31 = 0;
                if ((int)uVar30 < *(int *)(FVar28.Data + lVar22 + 0x38)) {
                  uVar31 = uVar34;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar38 = *(longlong *)(FVar28.Data + lVar22 + 0x30);
                uVar31 = 0;
                if ((int)uVar33 < *(int *)(lVar23 * 0x40 + 0x38 + lVar38)) {
                  uVar31 = local_2e0;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar40 = local_1c0;
                FVar36.Data = (FScriptContainerElement *)local_1c8;
                lVar29 = (longlong)(int)local_25c;
                local_2e5 = *(char *)(*(longlong *)(lVar23 * 0x40 + 0x30 + lVar38) + lVar35);
                uVar31 = 0;
                if ((int)local_25c < *(int *)(local_1c0 + 0x28 + (longlong)local_1c8)) {
                  uVar31 = ~local_25c >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                puVar4 = (ushort *)(*(longlong *)(pFVar40 + 0x20 + FVar36.Data) + lVar29 * 8);
                if (local_2e5 == '\0') {
                  fVar49 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
                                  >> 0x20);
                  local_190 = (FScriptContainerElement *)
                              UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                  pFVar27 = local_190;
                  local_190._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                  fVar42 = local_190._0_4_;
                  uVar50 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                  local_190 = pFVar27;
                }
                else {
                  fVar49 = local_258._4_4_ - *(float *)(pFVar40 + 4 + FVar36.Data);
                  fVar42 = (float)local_258 - *(float *)(pFVar40 + FVar36.Data);
                  uVar50 = local_260 - *(float *)(pFVar40 + 8 + FVar36.Data);
                }
                FGenericPlatformMath::StoreHalf(puVar4,fVar42);
                FGenericPlatformMath::StoreHalf(puVar4 + 1,fVar49);
                FGenericPlatformMath::StoreHalf(puVar4 + 2,(float)uVar50);
                fVar44 = (fVar48 / fVar44) * fVar13;
                fVar47 = fVar47 * fVar14;
                if (fVar13 <= fVar44) {
                  fVar44 = fVar13;
                }
                if (fVar14 <= fVar47) {
                  fVar47 = fVar14;
                }
                if (fVar44 <= 0.0) {
                  fVar44 = 0.0;
                }
                if (fVar47 <= 0.0) {
                  fVar47 = 0.0;
                }
                bVar17 = local_2e5 != '\0';
                local_2e5 = -local_2e5;
                *(char *)(puVar4 + 3) = (char)(int)fVar47;
                uVar30 = uVar30 + 1;
                *(byte *)((longlong)puVar4 + 7) = (byte)(int)fVar44 & 0x3f | -bVar17 & 0x40U;
                uVar31 = *(uint *)(FVar28.Data + lVar22 + 4);
              } while (uVar30 < uVar31);
            }
            uVar33 = uVar33 + 1;
            uVar31 = local_2e4;
          } while (uVar33 < *(uint *)&FVar28.Data[lVar22].field_0x0);
        }
        uVar33 = *(int *)(pFVar40 + 0x28 + FVar36.Data) * 8 + 0x20;
        if (uVar33 < local_2b4) {
          uVar33 = local_2b4;
        }
        local_2e4 = uVar31 + 1;
        local_2b4 = uVar33;
      } while (local_2e4 < local_264);
    }
    uVar24 = uVar33 + 0xf & 0xfffffff0;
    pFVar20 = FGuid::NewGuid(local_d8);
    pFVar16 = local_140;
    uVar32 = local_290[0];
    uVar31 = pFVar20->A;
    uVar33 = pFVar20->B;
    uVar30 = pFVar20->C;
    uVar34 = pFVar20->D;
    pFVar39 = (FBulkData *)&local_140->Data;
    (local_140->Header).ClusterCount = local_290[0];
    (local_140->Header).MaxClusterStrideInBytes = uVar24;
    (local_140->Header).Id.A = uVar31;
    (local_140->Header).Id.B = uVar33;
    (local_140->Header).Id.C = uVar30;
    (local_140->Header).Id.D = uVar34;
    local_248 = pFVar39;
    FBulkData::Lock(pFVar39,2);
    puVar21 = FBulkData::Realloc(pFVar39,(ulonglong)(uVar32 * uVar24),1);
    memset(puVar21,0,(ulonglong)(uVar32 * uVar24));
    uVar31 = 0;
    if ((pFVar16->Header).ClusterCount != 0) {
      do {
        uVar30 = ~uVar31 >> 0x1f;
        uVar33 = 0;
        if ((int)uVar31 < (int)local_290[0]) {
          uVar33 = uVar30;
        }
        if ((uVar33 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar22 = (longlong)(int)uVar31;
        uVar10 = *(undefined8 *)(local_298.Data + lVar22 * 0x30 + 8);
        *puVar21 = *(undefined8 *)&local_298.Data[lVar22 * 0x30].field_0x0;
        puVar21[1] = uVar10;
        uVar10 = *(undefined8 *)(local_298.Data + lVar22 * 0x30 + 0x10 + 8);
        puVar21[2] = *(undefined8 *)(local_298.Data + lVar22 * 0x30 + 0x10);
        puVar21[3] = uVar10;
        uVar33 = 0;
        if ((int)uVar31 < (int)local_290[0]) {
          uVar33 = uVar30;
        }
        if (uVar33 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        iVar18 = *(int *)(local_298.Data + lVar22 * 0x30 + 0x28);
        uVar33 = 0;
        if ((int)uVar31 < (int)local_290[0]) {
          uVar33 = uVar30;
        }
        if ((uVar33 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        memcpy(puVar21 + 4,*(void **)(local_298.Data + lVar22 * 0x30 + 0x20),(longlong)iVar18 << 3);
        puVar21 = (undefined8 *)((longlong)puVar21 + (ulonglong)uVar24);
        uVar31 = uVar31 + 1;
        pFVar39 = local_248;
      } while (uVar31 < (local_140->Header).ClusterCount);
    }
    FBulkData::Unlock(pFVar39);
    DestructItems<HairStrandsBuilder::FPackedCluster,int>
              ((FPackedCluster *)local_298.Data,local_290[0]);
    if ((FPackedCluster *)local_298.Data != (FPackedCluster *)0x0) {
      FMemory::Free(local_298.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_220.AllocatorInstance.Data,
               local_220.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_220.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_220.AllocatorInstance.Data);
    }
    DestructItems<_HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData_::__l2::FCluster,int>
              ((FCluster *)local_210.Data,local_208[0]);
    if ((FCluster *)local_210.Data != (FCluster *)0x0) {
      FMemory::Free(local_210.Data);
    }
  }
  if (bVar41) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsGroomBindingValidationEnabled @ 14e020b90

bool __cdecl IsGroomBindingValidationEnabled(void)

{
  return 0 < GHairBindingValidationEnable;
}

// IsHairAdaptiveSubstepsEnabled @ 14e020bb0

bool __cdecl IsHairAdaptiveSubstepsEnabled(void)

{
  return GHairEnableAdaptiveSubsteps == 1;
}

// NeedsToAddEndingControlPoint @ 14e021310

bool __cdecl NeedsToAddEndingControlPoint(uint param_1)

{
  bool bVar1;
  
  bVar1 = GetHairStrandsUsesTriangleStrips();
  if ((bVar1) && (param_1 + 1 < 0x100)) {
    return true;
  }
  return false;
}

// ReadPositions @ 14e023130

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

FRDGBuffer * __cdecl
ReadPositions(FRDGBuilder *param_1,FGlobalShaderMap *param_2,FHairGroupInstance *param_3,
             bool param_4,bool *param_5)

{
  int *piVar1;
  FHairStrandsRestResource *pFVar2;
  FHairStrandsDeformedResource *pFVar3;
  FRDGBufferSRV *pFVar4;
  longlong lVar5;
  code *pcVar6;
  FRDGBuffer *pFVar7;
  bool bVar8;
  int iVar9;
  FRDGBuffer *pFVar10;
  FRDGImportedBuffer *pFVar11;
  FRDGImportedBuffer *pFVar12;
  undefined8 *puVar13;
  FRDGBufferUAV *pFVar14;
  FShaderType *pFVar15;
  FName this;
  FRDGEventName *pFVar16;
  FShaderParametersMetadata *pFVar17;
  FRDGExternalBuffer *pFVar18;
  FRDGBufferSRV *local_res8;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined8 *local_1b8;
  undefined4 local_1b0;
  uint uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  FRDGBufferUAV *local_1a0;
  FRDGBufferUAVDesc local_198;
  TIntVector3<int>_u_0 local_188;
  FRDGBufferDesc local_178;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  FString local_148;
  TShaderRefBase<FHairStrandCopyPositionCS,FShaderMapPointerTable> local_138;
  FRDGEventName local_128;
  FRDGImportedBuffer local_110;
  FRDGImportedBuffer local_f8;
  FRDGImportedBuffer local_e0;
  FRDGImportedBuffer local_c8;
  FRDGImportedBuffer local_b0;
  FRDGImportedBuffer local_98;
  FRDGImportedBuffer local_80;
  FRDGImportedBuffer local_68;
  
  if ((param_3 == (FHairGroupInstance *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Instance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xfdd,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FRDGBuffer *)(*pcVar6)();
    return pFVar10;
  }
  if (param_4) {
    pFVar2 = (param_3->Guides).RestResource;
    pFVar3 = (param_3->Guides).DeformedResource;
    local_res20 = (pFVar2->BulkData->Header).PointCount;
    if (pFVar3 == (FHairStrandsDeformedResource *)0x0) {
      pFVar12 = Register(&local_c8,param_1,&pFVar2->PositionBuffer,CreateSRV,None);
      local_1a0 = pFVar12->UAV;
      local_res8 = pFVar12->SRV;
      pFVar12 = Register(&local_b0,param_1,&pFVar2->PositionOffsetBuffer,CreateSRV,None);
      goto LAB_14e023320;
    }
    pFVar11 = Register(&local_f8,param_1,pFVar3->DeformedPositionBuffer + pFVar3->CurrentIndex,
                       CreateSRV,None);
    pFVar12 = &local_e0;
    pFVar18 = pFVar3->DeformedOffsetBuffer + pFVar3->CurrentIndex;
  }
  else {
    local_res20 = FHairGroupPublicData::GetActiveStrandsPointCount
                            (param_3->HairGroupPublicData,false);
    pFVar3 = (param_3->Strands).DeformedResource;
    pFVar2 = (param_3->Strands).RestResource;
    if (pFVar3 != (FHairStrandsDeformedResource *)0x0) {
      pFVar12 = Register(&local_98,param_1,pFVar3->DeformedPositionBuffer + pFVar3->CurrentIndex,
                         CreateSRV,None);
      local_1a0 = pFVar12->UAV;
      local_res8 = pFVar12->SRV;
      pFVar12 = Register(&local_80,param_1,pFVar3->DeformedOffsetBuffer + pFVar3->CurrentIndex,
                         CreateSRV,None);
      goto LAB_14e023320;
    }
    pFVar11 = Register(&local_68,param_1,&pFVar2->PositionBuffer,CreateSRV,None);
    pFVar18 = &pFVar2->PositionOffsetBuffer;
    pFVar12 = &local_110;
  }
  local_res8 = pFVar11->SRV;
  local_1a0 = pFVar11->UAV;
  pFVar12 = Register(pFVar12,param_1,pFVar18,CreateSRV,None);
LAB_14e023320:
  pFVar4 = pFVar12->SRV;
  uStack_1ac = local_res20;
  uStack_1a4 = local_110.SRV._4_4_;
  local_1b0 = 0x10;
  uStack_1a8 = 0x4109;
  local_178.BytesPerElement = 0x10;
  local_178.NumElements = local_res20;
  local_178._12_4_ = local_110.SRV._4_4_;
  local_178.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  local_1a0 = (FRDGBufferUAV *)0x0;
  local_178.Metadata = (FShaderParametersMetadata *)0x0;
  FRDGUserValidation::ValidateCreateBuffer
            (&param_1->UserValidation,&local_178,L"StrandsPositionForReadback",None);
  if (local_178.BytesPerElement == 0) {
    local_178.BytesPerElement = 1;
  }
  if (local_178.NumElements == 0) {
    local_178.NumElements = 1;
  }
  pFVar10 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,8);
  pFVar10 = FRDGBuffer::FRDGBuffer(pFVar10,L"StrandsPositionForReadback",&local_178,None);
  piVar1 = &(param_1->Buffers).Array.ArrayMax;
  iVar9 = (param_1->Buffers).Array.ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                      (0x808,(ForElementType<FRDGBuffer_*> *)&param_1->Buffers,piVar1);
  }
  (param_1->Buffers).Array.ArrayNum = iVar9 + 1;
  (param_1->Buffers).Array.AllocatorInstance.Data[iVar9] = pFVar10;
  (pFVar10->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
  FRDGUserValidation::ValidateCreateBuffer(&param_1->UserValidation,pFVar10);
  FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar10);
  if ((local_res8 == (FRDGBufferSRV *)0x0) || (pFVar4 == (FRDGBufferSRV *)0x0)) {
    *param_5 = false;
  }
  else {
    *param_5 = true;
    puVar13 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FRDGBuffer *)(*pcVar6)();
        return pFVar10;
      }
    }
    else {
      *puVar13 = &___7__TObject_VFParameters_FHairStrandCopyPositionCS___FRDGAllocator__6B_;
      puVar13[3] = 0;
      puVar13[4] = 0;
      puVar13[5] = 0;
    }
    local_1b8 = puVar13;
    if ((((undefined8 **)param_1->_padding_ <= &local_1b8) &&
        (&local_1b8 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRDGBuffer *)(*pcVar6)();
      return pFVar10;
    }
    iVar9 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar9 + 1;
    local_198._padding_._0_2_ = 1;
    local_198._padding_._2_1_ = 0;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar9 * 8) = local_1b8;
    ((FParameters *)(puVar13 + 2))->MaxVertexCount = local_res20;
    puVar13[3] = local_res8;
    puVar13[4] = pFVar4;
    local_198.Buffer = pFVar10;
    FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_198);
    pFVar7 = local_198.Buffer;
    pFVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
    lVar5 = pFVar7->_padding_;
    piVar1 = &(param_1->Views).Array.ArrayMax;
    *(byte *)&pFVar14->_padding_ = (byte)pFVar14->_padding_ & 0xfe;
    *(undefined8 *)((longlong)&pFVar14->_padding_ + 4) = 0xffffffffffffffff;
    pFVar14->_padding_ = lVar5;
    pFVar14->_padding_ = 0;
    *(undefined1 *)&pFVar14->_padding_ = 2;
    *(undefined1 *)&pFVar14->_padding_ = 0;
    pFVar14->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
    (pFVar14->Desc)._padding_ =
         CONCAT53(local_198._padding_._3_5_,
                  CONCAT12(local_198._padding_._2_1_,(undefined2)local_198._padding_));
    (pFVar14->Desc).Buffer = local_198.Buffer;
    iVar9 = (param_1->Views).Array.ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                        (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
    }
    (param_1->Views).Array.ArrayNum = iVar9 + 1;
    (param_1->Views).Array.AllocatorInstance.Data[iVar9] = (FRDGView *)pFVar14;
    *(int *)((longlong)&pFVar14->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
    FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar14);
    iVar9 = local_res20 + 0x7f;
    puVar13[5] = pFVar14;
    pFVar15 = (FShaderType *)FHairStrandCopyPositionCS::GetStaticType();
    FGlobalShaderMap::GetShader(param_2,&local_158,pFVar15,0);
    if (local_158.ShaderContent == (FShader *)0x0) {
      this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
      FName::ToString((FName *)this,&local_148);
      FHairStrandCopyPositionCS::GetStaticType();
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FRDGBuffer *)(*pcVar6)();
        return pFVar10;
      }
    }
    FHairStrandCopyPositionCS::GetStaticType();
    local_138.ShaderContent = (FHairStrandCopyPositionCS *)local_158.ShaderContent;
    local_138.ShaderMap = local_158.ShaderMap;
    pFVar16 = FRDGEventName::FRDGEventName(&local_128,1,L"HairStrands::CopyPositions");
    pFVar17 = FHairStrandCopyPositionCS::FParameters::FTypeInfo::GetStructMetadata();
    local_188._s_0.Y = 1;
    local_188._s_0.Z = 1;
    local_188._s_0.X = (int)((iVar9 >> 0x1f & 0x7fU) + iVar9) >> 7;
    FComputeShaderUtils::AddPass<FHairStrandCopyPositionCS>
              (param_1,pFVar16,Compute,&local_138,pFVar17,(FParameters *)(puVar13 + 2),
               (TIntVector3<int> *)&local_188._s_0);
    if (local_128.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_128.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return pFVar10;
}

// ResetSimulationOnAllGroomComponents @ 14e026310

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl ResetSimulationOnAllGroomComponents(IConsoleVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UGroomComponent> local_28;
  
  if (0 < GHairStrandsResetSimulationOnAllGroomComponents) {
    local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ObjectArray.ArrayNum = 0;
    local_28.ObjectArray.ArrayMax = 0;
    local_28.Index = 0xffffffff;
    EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar5 = UGroomComponent::StaticClass();
    GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                      EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UGroomComponent>::Advance(&local_28);
      lVar6 = (longlong)local_28.Index;
      if (local_28.Index < 0) break;
      if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
      uVar4 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar4 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(undefined2 *)
       (*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x6d0) = 0x101;
    }
    if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
    }
  }
  GHairStrandsResetSimulationOnAllGroomComponents = 0;
  return;
}

// RunHairStrandsPositionQueries @ 14e026400

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
RunHairStrandsPositionQueries
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FShaderPrintData *param_3,
          FSceneView *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  UGroomComponent *pUVar4;
  FRHIGPUBufferReadback *pFVar5;
  FStrandsPositionOutput *pFVar6;
  FStrandsPositionData *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  bool bVar13;
  FScriptContainerElement *pFVar14;
  TNode **ppTVar15;
  float fVar16;
  float fVar17;
  TNode *pTVar18;
  FStrandsPositionData *pFVar19;
  char cVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  UWorld *pUVar25;
  void *pvVar26;
  TNode *pTVar27;
  FRDGBuffer *pFVar28;
  longlong lVar29;
  ulonglong uVar30;
  FHairGroupInstance *pFVar31;
  ForAnyElementType *pFVar32;
  ForAnyElementType FVar33;
  FHairGroupInstance *pFVar34;
  FHairGroupInstance *pFVar35;
  FHairGroupInstance *pFVar36;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  FStrandsPositionData *local_108;
  bool local_100 [8];
  FStrandsPositionData *local_f8;
  undefined1 local_f0 [8];
  ForAnyElementType local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  FHairGroupInstance *local_a0;
  FHairGroupInstance *local_98;
  
  fVar17 = __real_40000000;
  fVar16 = __real_3f800000;
  local_a8 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_108 = (FStrandsPositionData *)0x0;
LAB_14e026470:
  pTVar18 = GStrandsPositionReadbacks.Tail;
  uVar30 = 0;
  pTVar27 = (GStrandsPositionReadbacks.Tail)->NextNode;
  if (pTVar27 != (TNode *)0x0) {
    local_108 = pTVar27->Item;
    GStrandsPositionReadbacks.Tail = pTVar27;
    pTVar27->Item = (FStrandsPositionData *)0x0;
    operator_delete(pTVar18,0x10);
    if ((((local_108 != (FStrandsPositionData *)0x0) &&
         (pUVar4 = local_108->Component, pUVar4 != (UGroomComponent *)0x0)) &&
        ((*(UWorld **)&pUVar4->field_0xb0 != (UWorld *)0x0 ||
         (pUVar25 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar4),
         pUVar25 != (UWorld *)0x0)))) &&
       ((param_4 != (FSceneView *)0x0 && (param_4->Family != (FSceneViewFamily *)0x0)))) {
      pUVar25 = *(UWorld **)&local_108->Component->field_0xb0;
      if (pUVar25 == (UWorld *)0x0) {
        pUVar25 = UActorComponent::GetWorld_Uncached((UActorComponent *)local_108->Component);
      }
      if (pUVar25->Scene == param_4->Family->Scene) {
        pFVar5 = (local_108->GPUPositions).Ptr;
        lVar29 = pFVar5->_padding_;
        if ((lVar29 == 0) ||
           (((*(int *)(lVar29 + 0x18) == 0 &&
             (cVar20 = (**(code **)(*(longlong *)pFVar5->_padding_ + 0x20))(), cVar20 != '\0')) ||
            (local_108->ReadbackDelay == 0)))) {
          UGroomComponent::GetGroupInstance(local_108->Component,local_108->GroupIt);
          pFVar7 = local_108;
          if (((local_108->Output).Object == (FStrandsPositionOutput *)0x0) &&
             (bVar21 = FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((uint)(((pFVar7->Output).Object)->Groups).ArrayNum <= local_108->GroupIt) &&
             (bVar21 = FDebug::CheckVerifyFailedImpl2
                                 ("Q->GroupIt < uint32(Q->Output->Groups.Num())",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                  ,0x1037,L""), bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = local_108;
          if (((local_108->Output).Object == (FStrandsPositionOutput *)0x0) &&
             (bVar21 = FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar6 = (pFVar7->Output).Object;
          uVar38 = local_108->GroupIt;
          uVar24 = 0;
          if ((int)uVar38 < (pFVar6->Groups).ArrayNum) {
            uVar24 = ~uVar38 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar37 = (pFVar6->Groups).AllocatorInstance.Data + (longlong)(int)uVar38 * 0x10;
          uVar38 = local_108->CurveCount;
          if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
          }
          pFVar14 = pFVar37 + 0xc;
          if (*(int *)(pFVar37 + 0xc) < (int)uVar38) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar38,(ForAnyElementType *)pFVar37,*(int *)&pFVar37[8].field_0x0,
                       (int *)pFVar14);
          }
          local_e8.Data = (FScriptContainerElement *)0x0;
          local_e0 = 0;
          pvVar26 = FRHIGPUBufferReadback::Lock
                              ((local_108->GPUPositions).Ptr,local_108->PointCount << 4);
          if (local_108->PointCount != 0) {
            do {
              puVar3 = (undefined4 *)((longlong)pvVar26 + uVar30 * 0x10);
              uVar9 = *puVar3;
              uVar10 = puVar3[1];
              uVar11 = puVar3[2];
              fVar12 = (float)puVar3[3];
              if (((fVar12 == fVar16) && ((int)local_e0 != 0)) &&
                 (bVar21 = FDebug::CheckVerifyFailedImpl2
                                     ("P.W != 1u || Strand.Num() == 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                      ,0x1040,L""), bVar21)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (((fVar12 == 0.0) && ((int)local_e0 < 1)) &&
                 (bVar21 = FDebug::CheckVerifyFailedImpl2
                                     ("P.W != 0u || Strand.Num() > 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                      ,0x1041,L""), bVar21)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              local_b4 = uVar9;
              uStack_b0 = uVar10;
              local_ac = uVar11;
              if (((local_e8.Data <= (FScriptContainerElement *)&local_b4) &&
                  ((FScriptContainerElement *)&local_b4 <
                   local_e8.Data + (longlong)local_e0._4_4_ * 0xc)) &&
                 (bVar21 = FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar21)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if ((int)local_e0 == local_e0._4_4_) {
                iVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,&local_e8,(int *)((longlong)&local_e0 + 4));
                local_e0 = CONCAT44(local_e0._4_4_,iVar23);
              }
              lVar29 = (longlong)(int)local_e0;
              local_e0 = CONCAT44(local_e0._4_4_,(int)local_e0 + 1);
              *(ulonglong *)(local_e8.Data + lVar29 * 0xc) = CONCAT44(uStack_b0,local_b4);
              *(undefined4 *)(local_e8.Data + lVar29 * 0xc + 8) = local_ac;
              if (fVar12 == fVar17) {
                if (((*(ForAnyElementType **)&pFVar37->field_0x0 <= &local_e8) &&
                    (&local_e8 <
                     *(ForAnyElementType **)&pFVar37->field_0x0 + (longlong)*(int *)pFVar14 * 2)) &&
                   (bVar21 = FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar23 = *(int *)&pFVar37[8].field_0x0;
                if (iVar23 == *(int *)pFVar14) {
                  iVar23 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,(ForAnyElementType *)pFVar37,(int *)pFVar14);
                }
                FVar33.Data = local_e8.Data;
                *(int *)&pFVar37[8].field_0x0 = iVar23 + 1;
                pFVar32 = (ForAnyElementType *)
                          (*(longlong *)&pFVar37->field_0x0 + (longlong)iVar23 * 0x10);
                pFVar32->Data = (FScriptContainerElement *)0x0;
                piVar1 = (int *)((longlong)&pFVar32[1].Data + 4);
                lVar29 = (longlong)(int)local_e0;
                *(int *)&pFVar32[1].Data = (int)local_e0;
                if ((int)local_e0 == 0) {
                  *piVar1 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,(int)local_e0,0,pFVar32,(int)local_e0,piVar1);
                  memcpy(pFVar32->Data,FVar33.Data,lVar29 * 0xc);
                }
                if ((int)local_e0 < 0) {
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,-(int)local_e0,&local_e8,(int *)&local_e0,
                             (int *)((longlong)&local_e0 + 4));
                }
                else if (0 < (int)local_e0) {
                  local_e0 = local_e0 & 0xffffffff00000000;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,&local_e8,0,(int *)((longlong)&local_e0 + 4));
                }
              }
              uVar38 = (int)uVar30 + 1;
              uVar30 = (ulonglong)uVar38;
            } while (uVar38 < local_108->PointCount);
          }
          if ((local_108->CurveCount != *(uint *)&pFVar37[8].field_0x0) &&
             (bVar21 = FDebug::CheckVerifyFailedImpl2
                                 ("Q->CurveCount == Group.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                  ,0x104a,L""), bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FRHIGPUBufferReadback::Unlock((local_108->GPUPositions).Ptr);
          pFVar7 = local_108;
          if (((local_108->Output).Object == (FStrandsPositionOutput *)0x0) &&
             (bVar21 = FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar19 = local_108;
          piVar1 = &((pFVar7->Output).Object)->Status;
          *piVar1 = *piVar1 + -1;
          if (((local_108->Output).Object == (FStrandsPositionOutput *)0x0) &&
             (bVar21 = FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((((pFVar19->Output).Object)->Status < 0) &&
             (bVar21 = FDebug::CheckVerifyFailedImpl2
                                 ("Q->Output->Status >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                                  ,0x104e,L""), bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (local_e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data);
          }
          goto LAB_14e026470;
        }
        local_108->ReadbackDelay = local_108->ReadbackDelay - 1;
      }
    }
    if (((local_d8.Data <= (FScriptContainerElement *)&local_108) &&
        ((FScriptContainerElement *)&local_108 < local_d8.Data + (longlong)local_d0._4_4_ * 8)) &&
       (bVar21 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar23 = (int)local_d0;
    if ((int)local_d0 == local_d0._4_4_) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
    }
    local_d0 = CONCAT44(local_d0._4_4_,iVar23 + 1);
    *(FStrandsPositionData **)(local_d8.Data + (longlong)iVar23 * 8) = local_108;
    goto LAB_14e026470;
  }
  iVar23 = (int)local_d0;
  uVar30 = (ulonglong)(int)local_d0;
  pFVar37 = local_d8.Data + uVar30 * 8;
  FVar33.Data = local_d8.Data;
  while( true ) {
    if ((int)uVar30 != iVar23) {
      local_f0[0] = 0;
      `TCheckedPointerIterator<FStrandsPositionData_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_f0);
    }
    if (FVar33.Data == pFVar37) break;
    pFVar7 = *(FStrandsPositionData **)FVar33.Data;
    pTVar27 = operator_new(0x10);
    if (pTVar27 != (TNode *)0x0) {
      pTVar27->NextNode = (TNode *)0x0;
      pTVar27->Item = pFVar7;
      ppTVar15 = &(GStrandsPositionReadbacks.Head)->NextNode;
      GStrandsPositionReadbacks.Head = pTVar27;
      *ppTVar15 = pTVar27;
    }
    uVar30 = local_d0 & 0xffffffff;
    FVar33.Data = FVar33.Data + 8;
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  bVar13 = false;
  bVar21 = false;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_f8 = (FStrandsPositionData *)0x0;
  pFVar35 = local_98;
  pFVar36 = local_a0;
LAB_14e026bc1:
  do {
    while( true ) {
      pTVar18 = GStrandsPositionQueries.Tail;
      pTVar27 = (GStrandsPositionQueries.Tail)->NextNode;
      if (pTVar27 == (TNode *)0x0) {
        iVar23 = (int)local_c0;
        uVar30 = (ulonglong)(int)local_c0;
        pFVar37 = local_c8.Data + uVar30 * 8;
        FVar33.Data = local_c8.Data;
        while( true ) {
          if ((int)uVar30 != iVar23) {
            `TCheckedPointerIterator<FStrandsPositionData_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_b8);
          }
          if (FVar33.Data == pFVar37) break;
          pFVar7 = *(FStrandsPositionData **)FVar33.Data;
          pTVar27 = operator_new(0x10);
          if (pTVar27 != (TNode *)0x0) {
            pTVar27->NextNode = (TNode *)0x0;
            pTVar27->Item = pFVar7;
            ppTVar15 = &(GStrandsPositionQueries.Head)->NextNode;
            GStrandsPositionQueries.Head = pTVar27;
            *ppTVar15 = pTVar27;
          }
          uVar30 = local_c0 & 0xffffffff;
          FVar33.Data = FVar33.Data + 8;
        }
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data);
        }
        return;
      }
      local_f8 = pTVar27->Item;
      GStrandsPositionQueries.Tail = pTVar27;
      pTVar27->Item = (FStrandsPositionData *)0x0;
      operator_delete(pTVar18,0x10);
      if ((((local_f8 != (FStrandsPositionData *)0x0) &&
           (pUVar4 = local_f8->Component, pUVar4 != (UGroomComponent *)0x0)) &&
          ((*(UWorld **)&pUVar4->field_0xb0 != (UWorld *)0x0 ||
           (pUVar25 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar4),
           pUVar25 != (UWorld *)0x0)))) &&
         ((param_4 != (FSceneView *)0x0 && (param_4->Family != (FSceneViewFamily *)0x0)))) break;
LAB_14e026fb3:
      if (((local_c8.Data <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 < local_c8.Data + (longlong)local_c0._4_4_ * 8)) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar23 = (int)local_c0;
      if ((int)local_c0 == local_c0._4_4_) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_c8,(int *)((longlong)&local_c0 + 4));
      }
      local_c0 = CONCAT44(local_c0._4_4_,iVar23 + 1);
      *(FStrandsPositionData **)(local_c8.Data + (longlong)iVar23 * 8) = local_f8;
    }
    pUVar25 = *(UWorld **)&local_f8->Component->field_0xb0;
    if (pUVar25 == (UWorld *)0x0) {
      pUVar25 = UActorComponent::GetWorld_Uncached((UActorComponent *)local_f8->Component);
    }
    if (pUVar25->Scene != param_4->Family->Scene) goto LAB_14e026fb3;
    if ((local_f8->Component == (UGroomComponent *)0x0) &&
       (bVar22 = FDebug::CheckVerifyFailedImpl2
                           ("Q->Component",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                            ,0x106a,L""), bVar22)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar38 = local_f8->GroupIt;
    pUVar4 = local_f8->Component;
    if (((int)uVar38 < 0) || ((pUVar4->HairGroupInstances).ArrayNum <= (int)uVar38)) {
      bVar21 = true;
      pFVar34 = (FHairGroupInstance *)0x0;
      pFVar35 = pFVar34;
    }
    else {
      bVar13 = true;
      if (((int)uVar38 < 0) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar34 = *(FHairGroupInstance **)
                 ((pUVar4->HairGroupInstances).AllocatorInstance.Data + (longlong)(int)uVar38 * 8);
      pFVar36 = pFVar34;
      if (pFVar34 != (FHairGroupInstance *)0x0) {
        LOCK();
        *(int *)&pFVar34->field_0x8 = *(int *)&pFVar34->field_0x8 + 1;
        UNLOCK();
      }
    }
    if ((bVar21) && (bVar21 = false, pFVar35 != (FHairGroupInstance *)0x0)) {
      puVar2 = &pFVar35->field_0x8;
      LOCK();
      iVar23 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (iVar23 == 1) {
        pFVar31 = pFVar35;
        if (puVar2 == (undefined1 *)0x0) {
          pFVar31 = (FHairGroupInstance *)0x0;
        }
        if (pFVar31 != (FHairGroupInstance *)0x0) {
          (*(code *)**(undefined8 **)pFVar31)();
        }
      }
    }
    if ((bVar13) && (bVar13 = false, pFVar36 != (FHairGroupInstance *)0x0)) {
      puVar2 = &pFVar36->field_0x8;
      LOCK();
      iVar23 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (iVar23 == 1) {
        pFVar31 = pFVar36;
        if (puVar2 == (undefined1 *)0x0) {
          pFVar31 = (FHairGroupInstance *)0x0;
        }
        if (pFVar31 != (FHairGroupInstance *)0x0) {
          (*(code *)**(undefined8 **)pFVar31)();
        }
      }
    }
    pFVar7 = local_f8;
    if (pFVar34 == (FHairGroupInstance *)0x0) {
      if (((local_f8->Output).Object == (FStrandsPositionOutput *)0x0) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar19 = local_f8;
      piVar1 = &((pFVar7->Output).Object)->Status;
      *piVar1 = *piVar1 + -1;
      if (((local_f8->Output).Object == (FStrandsPositionOutput *)0x0) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (-1 < ((pFVar19->Output).Object)->Status) goto LAB_14e026bc1;
      iVar23 = 0x1082;
    }
    else {
      if (local_f8->bReadGuides == false) {
        uVar38 = FHairGroupPublicData::GetActiveStrandsCurveCount
                           (pFVar34->HairGroupPublicData,false);
      }
      else {
        uVar38 = (((pFVar34->Guides).RestResource)->BulkData->Header).CurveCount;
      }
      local_f8->CurveCount = uVar38;
      if (local_f8->bReadGuides == false) {
        uVar38 = FHairGroupPublicData::GetActiveStrandsPointCount
                           (pFVar34->HairGroupPublicData,false);
      }
      else {
        uVar38 = (((pFVar34->Guides).RestResource)->BulkData->Header).PointCount;
      }
      local_f8->PointCount = uVar38;
      local_100[0] = true;
      pFVar28 = ReadPositions(param_1,param_2,pFVar34,local_f8->bReadGuides,local_100);
      pFVar7 = local_f8;
      if (local_100[0] != false) {
        AddEnqueueCopyPass(param_1,(local_f8->GPUPositions).Ptr,pFVar28,
                           (pFVar28->Desc).NumElements * (pFVar28->Desc).BytesPerElement);
        pTVar27 = operator_new(0x10);
        if (pTVar27 != (TNode *)0x0) {
          pTVar27->NextNode = (TNode *)0x0;
          pTVar27->Item = local_f8;
          ppTVar15 = &(GStrandsPositionReadbacks.Head)->NextNode;
          GStrandsPositionReadbacks.Head = pTVar27;
          *ppTVar15 = pTVar27;
        }
        goto LAB_14e026bc1;
      }
      if (((local_f8->Output).Object == (FStrandsPositionOutput *)0x0) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar19 = local_f8;
      piVar1 = &((pFVar7->Output).Object)->Status;
      *piVar1 = *piVar1 + -1;
      if (((local_f8->Output).Object == (FStrandsPositionOutput *)0x0) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (-1 < ((pFVar19->Output).Object)->Status) goto LAB_14e026bc1;
      iVar23 = 0x107a;
    }
    bVar22 = FDebug::CheckVerifyFailedImpl2
                       ("Q->Output->Status >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                        ,iVar23,L"");
    if (bVar22) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  } while( true );
}

// SelectFinalGuides @ 14e0272c0

void __cdecl
HairInterpolationBuilder::SelectFinalGuides
          (FClosestGuides *param_1,TIntVector3<int> *param_2,FMetrics *param_3,bool param_4,
          bool param_5)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar2 = param_3->KClosestGuideIndices[0];
  local_18 = *(undefined8 *)param_3->KMinMetrics;
  uStack_10 = *(longlong *)param_3->KClosestGuideIndices;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metric.KClosestGuideIndices[0] >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                       ,0x3f8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (uStack_10 < 0) {
    local_18 = CONCAT44((undefined4)local_18,(undefined4)local_18);
    uStack_10 = CONCAT44(iVar2,(undefined4)uStack_10);
  }
  uVar7 = 0;
  uVar6 = 1;
  if (param_4) {
    uVar7 = (param_2->field0_0x0)._s_0.X;
    uVar6 = (param_2->field0_0x0)._s_0.Y;
  }
  iVar2 = *(int *)((longlong)&uStack_10 + (ulonglong)uVar7 * 4);
  iVar8 = *(int *)((longlong)&uStack_10 + (ulonglong)uVar6 * 4);
  param_1->Indices[0] = iVar2;
  param_1->Indices[1] = iVar8;
  if (param_5) {
    param_1->Indices[1] = iVar2;
    uVar6 = uVar7;
    iVar8 = iVar2;
  }
  fVar1 = *(float *)((longlong)&local_18 + (ulonglong)uVar7 * 4);
  fVar10 = *(float *)((longlong)&local_18 + (ulonglong)uVar6 * 4);
  fVar9 = fVar1;
  iVar5 = iVar2;
  if (fVar10 < fVar1) {
    param_1->Indices[1] = iVar2;
    param_1->Indices[0] = iVar8;
    fVar9 = fVar10;
    fVar10 = fVar1;
    iVar5 = iVar8;
    iVar8 = iVar2;
  }
  if (iVar8 < 0) {
    param_1->Indices[1] = iVar5;
  }
  else if (fVar10 < fVar9) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MinMetrics[0] <= MinMetrics[1]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                       ,0x426,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ToGroupName @ 14e02a9e0

FName __cdecl
ToGroupName(FStrandID *param_1,uint param_2,TMeshAttributesRef<FStrandID,FName_const_> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  FName *pFVar5;
  int iVar6;
  undefined4 in_register_00000014;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong *in_R9;
  FName local_res20;
  FString local_28;
  
  lVar1 = *in_R9;
  if ((lVar1 != 0) &&
     (iVar6 = *(int *)CONCAT44(in_register_00000014,param_2), iVar6 < *(int *)(lVar1 + 0x10))) {
    if (*(int *)(lVar1 + 0x38) < 1) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FName)(*pcVar2)();
        return FVar4;
      }
    }
    plVar7 = *(longlong **)(lVar1 + 0x30);
    if (*(longlong **)(lVar1 + 0x30) == (longlong *)0x0) {
      plVar7 = (longlong *)(lVar1 + 0x18);
    }
    uVar9 = iVar6 * (int)plVar7[2];
    uVar8 = 0;
    if ((int)uVar9 < (int)plVar7[1]) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FName)(*pcVar2)();
        return FVar4;
      }
    }
    *(undefined8 *)param_1 = *(undefined8 *)(*plVar7 + (longlong)(int)uVar9 * 8);
    return (FName)param_1;
  }
  FString::PrintfImpl(&local_28,L"Group_%d");
  iVar6 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  pFVar5 = FName::FName(&local_res20,iVar6,(wchar_t *)local_28.Data.AllocatorInstance.Data,FNAME_Add
                       );
  *(FName *)param_1 = *pFVar5;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// ValidateBindingAsset_GeometryCache @ 14e02de60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGeometryCacheComponent * __cdecl
ValidateBindingAsset_GeometryCache
          (UGroomAsset *param_1,UGroomBindingAsset *param_2,UGeometryCacheComponent *param_3,
          bool param_4,USceneComponent *param_5)

{
  UGeometryCache *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UGeometryCacheComponent *pUVar6;
  FName local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (((param_1 == (UGroomAsset *)0x0) || (param_2 == (UGroomBindingAsset *)0x0)) ||
     (param_3 == (UGeometryCacheComponent *)0x0)) {
    return (UGeometryCacheComponent *)0x0;
  }
  iVar4 = (**(code **)(*(longlong *)param_3 + 0x810))(param_3);
  uVar5 = GetHairStrandsMaxSectionCount();
  if ((int)uVar5 <= iVar4) {
    FString::FString(&local_88,"");
    if (param_5->_padding_ != 0) {
      FString::FString(&local_58,"/");
      local_res8 = *(FName *)(param_5->_padding_ + 0x18);
      FName::ToString(&local_res8,&local_68);
      FString::ConcatFF(&local_78,&local_68,&local_58);
      iVar4 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      FString::AppendChars(&local_88,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar4);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    local_res8 = (FName)param_1->_padding_;
    FName::ToString(&local_res8,&local_38);
    FString::FString(&local_48,"/");
    local_res8 = (FName)param_5->_padding_;
    FName::ToString(&local_res8,&local_68);
    FString::ConcatFF(&local_58,&local_68,&local_48);
    FString::ConcatFF(&local_78,&local_58,&local_38);
    iVar4 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    FString::AppendChars(&local_88,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar4);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (2 < (byte)LogHairStrands._0_1_) {
      GetHairStrandsMaxSectionCount();
      (**(code **)(*(longlong *)param_3 + 0x810))(param_3);
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogHairStrands);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  pUVar1 = (param_3->GeometryCache).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UGeometryCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  bVar2 = UGroomBindingAsset::IsCompatible(pUVar1,param_2,true);
  if ((bVar2) && (bVar2 = UGroomBindingAsset::IsCompatible(param_1,param_2,true), bVar2)) {
    bVar3 = UGroomBindingAsset::IsBindingAssetValid(param_2,param_4,true);
    bVar2 = true;
    if (bVar3) goto LAB_14e02e0dc;
  }
  bVar2 = false;
LAB_14e02e0dc:
  pUVar6 = (UGeometryCacheComponent *)0x0;
  if (bVar2) {
    pUVar6 = param_3;
  }
  return pUVar6;
}

// ValidateBindingAsset_SkeletalMesh @ 14e02e120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USkeletalMeshComponent * __cdecl
ValidateBindingAsset_SkeletalMesh
          (UGroomAsset *param_1,UGroomBindingAsset *param_2,USkeletalMeshComponent *param_3,
          bool param_4,USceneComponent *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EGroomBindingType EVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  USkeletalMesh *pUVar11;
  longlong lVar12;
  longlong *plVar13;
  USkeletalMeshComponent *pUVar14;
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<UGroomBindingAsset::FHairGroupResource,TSizedDefaultAllocator<32>_> *pTVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 local_158 [4];
  uint local_154;
  uint local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  USkeletalMesh *local_130;
  FString local_128;
  FName local_118;
  FName local_110;
  FName local_108;
  longlong local_100;
  FScriptContainerElement *local_f8;
  longlong local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  if (((param_1 != (UGroomAsset *)0x0) && (param_2 != (UGroomBindingAsset *)0x0)) &&
     (param_3 != (USkeletalMeshComponent *)0x0)) {
    iVar7 = (**(code **)(param_3->_padding_ + 0x810))(param_3);
    uVar8 = GetHairStrandsMaxSectionCount();
    bVar4 = iVar7 < (int)uVar8;
    pUVar11 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_3);
    if (pUVar11 != (USkeletalMesh *)0x0) {
      pUVar11 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_3);
      lVar12 = (**(code **)(pUVar11->_padding_ + 0x398))(pUVar11);
      if (lVar12 != 0) {
        pUVar11 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_3);
        plVar13 = (longlong *)(**(code **)(pUVar11->_padding_ + 0x398))();
        uVar9 = GetHairStrandsMaxSectionCount();
        uVar8 = *(uint *)(plVar13 + 1);
        uVar18 = 0;
        if (uVar8 != 0) {
          do {
            uVar21 = 0;
            if ((int)uVar18 < (int)plVar13[1]) {
              uVar21 = ~uVar18 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar3 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              pUVar14 = (USkeletalMeshComponent *)(*pcVar2)();
              return pUVar14;
            }
            if ((int)uVar9 <= *(int *)(*(longlong *)(*plVar13 + (longlong)(int)uVar18 * 8) + 0x18))
            {
              bVar4 = false;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar8);
        }
      }
    }
    uVar8 = 0;
    if (!bVar4) {
      FString::FString(&local_128,"");
      if (param_5->_padding_ != 0) {
        FString::FString(&local_b8,"/");
        local_118 = *(FName *)(param_5->_padding_ + 0x18);
        FName::ToString(&local_118,&local_c8);
        FString::ConcatFF(&local_e8,&local_c8,&local_b8);
        iVar7 = local_e8.Data.ArrayNum + -1;
        if (local_e8.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        FString::AppendChars(&local_128,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar7);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      local_110 = (FName)param_1->_padding_;
      FName::ToString(&local_110,&local_78);
      FString::FString(&local_88,"/");
      local_108 = (FName)param_5->_padding_;
      FName::ToString(&local_108,&local_98);
      FString::ConcatFF(&local_a8,&local_98,&local_88);
      FString::ConcatFF(&local_d8,&local_a8,&local_78);
      iVar7 = local_d8.Data.ArrayNum + -1;
      if (local_d8.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      FString::AppendChars(&local_128,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar7);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (2 < (byte)LogHairStrands._0_1_) {
        GetHairStrandsMaxSectionCount();
        (**(code **)(param_3->_padding_ + 0x810))(param_3);
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
    pUVar11 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_3);
    bVar4 = UGroomBindingAsset::IsCompatible(pUVar11,param_2,true);
    if (((bVar4) && (bVar4 = UGroomBindingAsset::IsCompatible(param_1,param_2,true), bVar4)) &&
       (bVar4 = UGroomBindingAsset::IsBindingAssetValid(param_2,param_4,true), bVar4)) {
      local_130 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_3);
      pTVar15 = UGroomAsset::GetHairGroupsPlatformData(param_1);
      if (0 < pTVar15->ArrayNum) {
        local_148 = 0;
        local_140 = 0;
        local_138 = 0;
        local_f0 = (longlong)pTVar15->ArrayNum;
        do {
          lVar20 = local_138;
          lVar12 = local_140;
          pTVar15 = UGroomAsset::GetHairGroupsPlatformData(param_1);
          uVar21 = 0;
          uVar9 = ~uVar8 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar8 < pTVar15->ArrayNum) {
            uVar18 = uVar9;
          }
          local_154 = uVar9;
          if ((uVar18 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pUVar14 = (USkeletalMeshComponent *)(*pcVar2)();
            return pUVar14;
          }
          local_f8 = (pTVar15->AllocatorInstance).Data + lVar20 + 0x760;
          local_150 = *(uint *)(local_f8 + 8);
          uVar17 = (ulonglong)(int)local_150;
          lVar20 = *(longlong *)local_f8;
          lVar19 = uVar17 * 0x428 + lVar20;
          local_100 = lVar19;
          while( true ) {
            if (*(int *)(local_f8 + 8) != (int)uVar17) {
              local_158[0] = 0;
              `TCheckedPointerIterator<FHairGroupPlatformData::FCards::FLOD,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_158);
            }
            if (lVar20 == lVar19) break;
            if (0 < *(int *)(lVar20 + 0x28)) {
              if (local_130 == (USkeletalMesh *)0x0) {
                return (USkeletalMeshComponent *)0x0;
              }
              pTVar16 = UGroomBindingAsset::GetHairGroupResources(param_2);
              if (pTVar16->ArrayNum <= (int)uVar8) {
                return (USkeletalMeshComponent *)0x0;
              }
              pTVar16 = UGroomBindingAsset::GetHairGroupResources(param_2);
              uVar18 = 0;
              if ((int)uVar8 < pTVar16->ArrayNum) {
                uVar18 = uVar9;
              }
              if ((uVar18 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                pUVar14 = (USkeletalMeshComponent *)(*pcVar2)();
                return pUVar14;
              }
              if (*(uint *)((pTVar16->AllocatorInstance).Data + lVar12 + 0x18) <= uVar21) {
                return (USkeletalMeshComponent *)0x0;
              }
              pTVar16 = UGroomBindingAsset::GetHairGroupResources(param_2);
              uVar18 = 0;
              if ((int)uVar8 < pTVar16->ArrayNum) {
                uVar18 = uVar9;
              }
              if ((uVar18 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                pUVar14 = (USkeletalMeshComponent *)(*pcVar2)();
                return pUVar14;
              }
              pFVar1 = (pTVar16->AllocatorInstance).Data;
              uVar9 = 0;
              if ((int)uVar21 < *(int *)(pFVar1 + lVar12 + 0x18)) {
                uVar9 = ~uVar21 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                pUVar14 = (USkeletalMeshComponent *)(*pcVar2)();
                return pUVar14;
              }
              if (*(longlong *)(*(longlong *)(pFVar1 + lVar12 + 0x10) + (longlong)(int)uVar21 * 8)
                  == 0) {
                return (USkeletalMeshComponent *)0x0;
              }
              pTVar16 = UGroomBindingAsset::GetHairGroupResources(param_2);
              uVar9 = 0;
              if ((int)uVar8 < pTVar16->ArrayNum) {
                uVar9 = local_154;
              }
              if ((uVar9 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                pUVar14 = (USkeletalMeshComponent *)(*pcVar2)();
                return pUVar14;
              }
              lVar12 = local_140;
              pFVar1 = (pTVar16->AllocatorInstance).Data;
              uVar9 = 0;
              if ((int)uVar21 < *(int *)(pFVar1 + local_140 + 0x18)) {
                uVar9 = ~uVar21 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                pUVar14 = (USkeletalMeshComponent *)(*pcVar2)();
                return pUVar14;
              }
              iVar7 = *(int *)(*(longlong *)
                                (*(longlong *)(pFVar1 + lVar12 + 0x10) + (longlong)(int)uVar21 * 8)
                              + 8);
              iVar10 = (**(code **)(local_130->_padding_ + 0x3d0))();
              lVar19 = local_100;
              lVar12 = local_140;
              uVar9 = local_154;
              if (iVar10 != iVar7) {
                return (USkeletalMeshComponent *)0x0;
              }
            }
            uVar21 = uVar21 + 1;
            uVar17 = (ulonglong)local_150;
            lVar20 = lVar20 + 0x428;
          }
          local_140 = lVar12 + 0x20;
          local_138 = local_138 + 2000;
          local_148 = local_148 + 1;
          uVar8 = uVar8 + 1;
        } while (local_148 < local_f0);
      }
      bVar4 = USkinnedMeshComponent::HasMeshDeformer((USkinnedMeshComponent *)param_3);
      if (!bVar4) {
        uVar8 = USkinnedMeshComponent::GetNumLODs((USkinnedMeshComponent *)param_3);
        uVar9 = 0;
        if (uVar8 != 0) {
          do {
            if ((bVar4 != false) ||
               (bVar3 = USkinnedMeshComponent::IsSkinCacheAllowed
                                  ((USkinnedMeshComponent *)param_3,uVar9), bVar3)) {
              bVar4 = true;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar8);
        }
      }
      pTVar15 = UGroomAsset::GetHairGroupsPlatformData(param_1);
      iVar10 = 0;
      iVar7 = pTVar15->ArrayNum;
      if (0 < iVar7) {
        do {
          uVar9 = 0;
          uVar8 = UGroomAsset::GetLODCount(param_1);
          if (uVar8 != 0) {
            do {
              EVar5 = UGroomAsset::GetBindingType(param_1,iVar10,uVar9);
              bVar3 = UGroomAsset::IsVisible(param_1,iVar10,uVar9);
              if ((((EVar5 == Skinning) && (bVar4 == false)) &&
                  (bVar6 = IsHairManualSkinCacheEnabled(), !bVar6)) &&
                 ((bVar3 && (2 < (byte)LogHairStrands._0_1_)))) {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)local_130,&local_58,(UObject *)0x0);
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)param_1,&local_68,(UObject *)0x0);
                UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogHairStrands);
                if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_68.Data.AllocatorInstance.Data);
                }
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar8);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar7);
        return param_3;
      }
      return param_3;
    }
  }
  return (USkeletalMeshComponent *)0x0;
}

// VoxelizeCurves @ 14e02e9a0

void __cdecl
GroomBuilder_Voxelization::VoxelizeCurves
          (FHairStrandsDatas *param_1,uint param_2,FHairGrid *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint local_158;
  float local_154;
  float local_150;
  float local_14c;
  uint local_148;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  uint local_120;
  float fStack_11c;
  undefined4 local_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  
  uVar9 = FHairStrandsCommonDatas::GetAttributes((FHairStrandsCommonDatas *)param_1);
  local_158 = 0;
  uVar4 = (uint)param_1->_padding_;
  fVar22 = __real_bf000000;
  if (uVar4 != 0) {
    do {
      uVar10 = 0;
      if ((int)local_158 < (int)param_1->_padding_) {
        uVar10 = ~local_158 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = *(uint *)(param_1->_padding_ + (longlong)(int)local_158 * 4);
      uVar13 = 0;
      if ((int)local_158 < (int)param_1->_padding_) {
        uVar13 = ~local_158 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_148 = 0xffffffff;
      uVar13 = *(ushort *)(param_1->_padding_ + (longlong)(int)local_158 * 2) - 1;
      if (uVar13 != 0) {
        local_108 = (ulonglong)uVar13;
        do {
          uVar14 = ~uVar10 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar10 < (int)param_1->_padding_) {
            uVar13 = uVar14;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_110 = param_1->_padding_;
          uVar13 = uVar10 + 1;
          lVar20 = (longlong)(int)uVar10;
          uVar17 = ~uVar13 >> 0x1f;
          local_f8 = lVar20 * 3;
          uVar18 = 0;
          if ((int)uVar13 < (int)param_1->_padding_) {
            uVar18 = uVar17;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_100 = param_1->_padding_;
          lVar21 = (longlong)(int)uVar13;
          uVar18 = 0;
          if ((int)uVar10 < (int)param_1->_padding_) {
            uVar18 = uVar14;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar2 = *(float *)(param_1->_padding_ + lVar20 * 4);
          uVar18 = 0;
          if ((int)uVar13 < (int)param_1->_padding_) {
            uVar18 = uVar17;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar3 = *(float *)(param_1->_padding_ + lVar21 * 4);
          bVar8 = HasHairAttribute(uVar9,Color);
          if (bVar8) {
            uVar18 = 0;
            if ((int)uVar10 < (int)param_1->_padding_) {
              uVar18 = uVar14;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_14c = *(float *)(param_1->_padding_ + 8 + lVar20 * 0x10);
            uVar18 = 0;
            if ((int)uVar10 < (int)param_1->_padding_) {
              uVar18 = uVar14;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_150 = *(float *)(param_1->_padding_ + 4 + lVar20 * 0x10);
            uVar18 = 0;
            if ((int)uVar10 < (int)param_1->_padding_) {
              uVar18 = uVar14;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_154 = *(float *)(param_1->_padding_ + lVar20 * 0x10);
          }
          else {
            local_154 = 0.0;
            local_150 = 0.0;
            local_14c = 0.0;
          }
          bVar8 = HasHairAttribute(uVar9,Color);
          if (bVar8) {
            uVar18 = 0;
            if ((int)uVar13 < (int)param_1->_padding_) {
              uVar18 = uVar17;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar34 = *(float *)(param_1->_padding_ + 8 + lVar21 * 0x10);
            uVar18 = 0;
            if ((int)uVar13 < (int)param_1->_padding_) {
              uVar18 = uVar17;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar33 = *(float *)(param_1->_padding_ + 4 + lVar21 * 0x10);
            uVar18 = 0;
            if ((int)uVar13 < (int)param_1->_padding_) {
              uVar18 = uVar17;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar32 = *(float *)(param_1->_padding_ + lVar21 * 0x10);
          }
          else {
            fVar32 = 0.0;
            fVar33 = 0.0;
            fVar34 = 0.0;
          }
          bVar8 = HasHairAttribute(uVar9,Roughness);
          if (bVar8) {
            uVar18 = 0;
            if ((int)uVar10 < (int)param_1->_padding_) {
              uVar18 = uVar14;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar30 = *(float *)(param_1->_padding_ + lVar20 * 4);
          }
          else {
            fVar30 = 0.0;
          }
          bVar8 = HasHairAttribute(uVar9,Roughness);
          if (bVar8) {
            uVar10 = 0;
            if ((int)uVar13 < (int)param_1->_padding_) {
              uVar10 = uVar17;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar26 = *(float *)(param_1->_padding_ + lVar21 * 4);
          }
          else {
            fVar26 = 0.0;
          }
          lVar16 = lVar20 * 3;
          uVar14 = 0;
          fVar27 = *(float *)(local_100 + lVar21 * 0xc) - *(float *)(local_110 + lVar20 * 0xc);
          fVar28 = *(float *)(local_100 + 4 + lVar21 * 0xc) -
                   *(float *)(local_110 + 4 + lVar20 * 0xc);
          fVar29 = *(float *)(local_100 + 8 + lVar21 * 0xc) -
                   *(float *)(local_110 + 8 + lVar20 * 0xc);
          fVar23 = __real_3f800000 / param_3->VoxelSize;
          uVar10 = -((int)ROUND(fVar22 - SQRT(fVar28 * fVar28 + fVar27 * fVar27 + fVar29 * fVar29) *
                                         (fVar23 + fVar23)) >> 1);
          if (uVar10 != 0xffffffff) {
            fVar31 = __real_3f800000 / (float)uVar10;
            fVar24 = __real_3f000000;
            fVar23 = __real_3f800000;
            do {
              fVar22 = __real_40000000 / param_3->VoxelSize;
              iVar5 = (param_3->Resolution).field0_0x0._s_0.Y;
              iVar6 = (param_3->Resolution).field0_0x0._s_0.X;
              iVar19 = (param_3->Resolution).field0_0x0._s_0.Z + -1;
              iVar12 = iVar5 + -1;
              iVar1 = iVar6 + -1;
              fVar25 = (float)uVar14 * fVar31;
              iVar11 = (int)ROUND(((fVar25 * fVar29 + *(float *)(local_110 + 8 + lVar16 * 4)) -
                                  (param_3->MinBound).field0_0x0._s_0.Z) * fVar22 - fVar24) >> 1;
              if (iVar11 < iVar19) {
                iVar19 = iVar11;
              }
              iVar11 = (int)ROUND(((fVar25 * fVar28 + *(float *)(local_110 + 4 + lVar16 * 4)) -
                                  (param_3->MinBound).field0_0x0._s_0.Y) * fVar22 - fVar24) >> 1;
              if (iVar11 < iVar12) {
                iVar12 = iVar11;
              }
              iVar11 = (int)ROUND(((fVar25 * fVar27 + *(float *)(local_110 + lVar16 * 4)) -
                                  (param_3->MinBound).field0_0x0._s_0.X) * fVar22 - fVar24) >> 1;
              if (iVar11 < iVar1) {
                iVar1 = iVar11;
              }
              iVar11 = 0;
              if (0 < iVar19) {
                iVar11 = iVar19;
              }
              iVar19 = 0;
              if (0 < iVar12) {
                iVar19 = iVar12;
              }
              iVar12 = 0;
              if (0 < iVar1) {
                iVar12 = iVar1;
              }
              uVar18 = (iVar19 + iVar11 * iVar5) * iVar6 + iVar12;
              if (uVar18 != local_148) {
                fVar23 = fVar23 - fVar25;
                local_120 = local_158;
                local_118 = CONCAT31(local_118._1_3_,(char)param_2);
                uVar17 = 0;
                if ((int)uVar18 < (param_3->Voxels).ArrayNum) {
                  uVar17 = ~uVar18 >> 0x1f;
                }
                fStack_11c = fVar25 * fVar3 + fVar23 * fVar2;
                local_130 = fVar32 * fVar25 + fVar23 * local_154;
                fStack_12c = fVar33 * fVar25 + fVar23 * local_150;
                fStack_124 = fVar25 * fVar26 + fVar23 * fVar30;
                fStack_128 = fVar34 * fVar25 + fVar23 * local_14c;
                if ((uVar17 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar15 = (param_3->Voxels).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10;
                if (((*(FScriptContainerElement **)&pFVar15->field_0x0 <=
                      (FScriptContainerElement *)&local_130) &&
                    ((FScriptContainerElement *)&local_130 <
                     *(FScriptContainerElement **)&pFVar15->field_0x0 +
                     (longlong)*(int *)(pFVar15 + 0xc) * 0x1c)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar12 = *(int *)&pFVar15[8].field_0x0;
                if (iVar12 == *(int *)(pFVar15 + 0xc)) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x41c,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
                }
                fVar24 = __real_3f000000;
                fVar23 = __real_3f800000;
                *(int *)&pFVar15[8].field_0x0 = iVar12 + 1;
                pFVar15 = *(FScriptContainerElement **)&pFVar15->field_0x0;
                lVar20 = (longlong)iVar12 * 0x1c;
                *(ulonglong *)(pFVar15 + lVar20) = CONCAT44(fStack_12c,local_130);
                *(ulonglong *)(pFVar15 + lVar20 + 8) = CONCAT44(fStack_124,fStack_128);
                *(ulonglong *)(pFVar15 + lVar20 + 0x10) = CONCAT44(fStack_11c,local_120);
                *(undefined4 *)(pFVar15 + lVar20 + 0x18) = local_118;
                lVar16 = local_f8;
                local_148 = uVar18;
              }
              uVar14 = uVar14 + 1;
              fVar22 = __real_bf000000;
            } while (uVar14 < uVar10 + 1);
          }
          local_108 = local_108 - 1;
          uVar10 = uVar13;
        } while (local_108 != 0);
        local_108 = 0;
      }
      local_158 = local_158 + 1;
    } while (local_158 < uVar4);
  }
  return;
}

// Z_Construct_UClass_UGroomBlueprintLibrary_NoRegister @ 14e02fec0

UClass * __cdecl Z_Construct_UClass_UGroomBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomBlueprintLibrary",
               &Z_Registration_Info_UClass_UGroomBlueprintLibrary.InnerSingleton,
               UGroomBlueprintLibrary::StaticRegisterNativesUGroomBlueprintLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UGroomBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UGroomBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UGroomComponent_NoRegister @ 14e02ff80

UClass * __cdecl Z_Construct_UClass_UGroomComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomComponent",
               &Z_Registration_Info_UClass_UGroomComponent.InnerSingleton,
               UGroomComponent::StaticRegisterNativesUGroomComponent,0x7f0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroomComponent>,InternalVTableHelperCtorCaller<UGroomComponent>,
               local_res8,UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomComponent.InnerSingleton;
}

// Z_Construct_UEnum_HairStrandsCore_EGroomBasisType @ 14e030040

UEnum * __cdecl Z_Construct_UEnum_HairStrandsCore_EGroomBasisType(void)

{
  if (Z_Registration_Info_UEnum_EGroomBasisType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGroomBasisType.InnerSingleton,
               &Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGroomBasisType.InnerSingleton;
}

// Z_Construct_UEnum_HairStrandsCore_EGroomCurveType @ 14e030080

UEnum * __cdecl Z_Construct_UEnum_HairStrandsCore_EGroomCurveType(void)

{
  if (Z_Registration_Info_UEnum_EGroomCurveType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGroomCurveType.InnerSingleton,
               &Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGroomCurveType.InnerSingleton;
}

// EmptyFrame'' @ 150460ae0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl `dynamic_atexit_destructor_for_'FGroomCacheBuffers::EmptyFrame__(void)

{
  DestructItems<FGroomCacheGroupData,int>
            ((FGroomCacheGroupData *)
             FGroomCacheBuffers::EmptyFrame.GroupsData.AllocatorInstance.Data,
             FGroomCacheBuffers::EmptyFrame.GroupsData.ArrayNum);
  if (FGroomCacheBuffers::EmptyFrame.GroupsData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FGroomCacheBuffers::EmptyFrame.GroupsData.AllocatorInstance.Data);
    return;
  }
  return;
}

// ShaderTypeRegistration'' @ 150460b20

void __cdecl
`dynamic_atexit_destructor_for_'FHairStrandCopyPositionCS::ShaderTypeRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarGroomCacheStreamingEnable'' @ 150460b30

void __cdecl _dynamic_atexit_destructor_for__CVarGroomCacheStreamingEnable__(void)

{
  CVarGroomCacheStreamingEnable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGroomCacheStreamingEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairBindingValidationEnable'' @ 150460b50

void __cdecl _dynamic_atexit_destructor_for__CVarHairBindingValidationEnable__(void)

{
  CVarHairBindingValidationEnable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHairBindingValidationEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairClusterBuilder_MaxVoxelResolution'' @ 150460b70

void __cdecl _dynamic_atexit_destructor_for__CVarHairClusterBuilder_MaxVoxelResolution__(void)

{
  CVarHairClusterBuilder_MaxVoxelResolution._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarHairClusterBuilder_MaxVoxelResolution);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairEnableAdaptiveSubsteps'' @ 150460b90

void __cdecl _dynamic_atexit_destructor_for__CVarHairEnableAdaptiveSubsteps__(void)

{
  CVarHairEnableAdaptiveSubsteps._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHairEnableAdaptiveSubsteps);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairGroupIndexBuilder_MaxVoxelResolution'' @ 150460bb0

void __cdecl _dynamic_atexit_destructor_for__CVarHairGroupIndexBuilder_MaxVoxelResolution__(void)

{
  CVarHairGroupIndexBuilder_MaxVoxelResolution._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarHairGroupIndexBuilder_MaxVoxelResolution);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairInterpolationMetric_Angle'' @ 150460bd0

void __cdecl _dynamic_atexit_destructor_for__CVarHairInterpolationMetric_Angle__(void)

{
  CVarHairInterpolationMetric_Angle._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHairInterpolationMetric_Angle);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairInterpolationMetric_AngleAttenuation'' @ 150460bf0

void __cdecl _dynamic_atexit_destructor_for__CVarHairInterpolationMetric_AngleAttenuation__(void)

{
  CVarHairInterpolationMetric_AngleAttenuation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarHairInterpolationMetric_AngleAttenuation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairInterpolationMetric_Distance'' @ 150460c10

void __cdecl _dynamic_atexit_destructor_for__CVarHairInterpolationMetric_Distance__(void)

{
  CVarHairInterpolationMetric_Distance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarHairInterpolationMetric_Distance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairInterpolationMetric_Length'' @ 150460c30

void __cdecl _dynamic_atexit_destructor_for__CVarHairInterpolationMetric_Length__(void)

{
  CVarHairInterpolationMetric_Length._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHairInterpolationMetric_Length)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairStrandsDump_GroomComponent'' @ 150460c50

void __cdecl _dynamic_atexit_destructor_for__CVarHairStrandsDump_GroomComponent__(void)

{
  CVarHairStrandsDump_GroomComponent._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHairStrandsDump_GroomComponent)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairStrandsResetSimulationOnAllGroomComponents'' @ 150460c70

void __cdecl
_dynamic_atexit_destructor_for__CVarHairStrandsResetSimulationOnAllGroomComponents__(void)

{
  CVarHairStrandsResetSimulationOnAllGroomComponents._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarHairStrandsResetSimulationOnAllGroomComponents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairStrands_BoundsMode'' @ 150460c90

void __cdecl _dynamic_atexit_destructor_for__CVarHairStrands_BoundsMode__(void)

{
  CVarHairStrands_BoundsMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHairStrands_BoundsMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairStrands_ForceVelocityOutput'' @ 150460cb0

void __cdecl _dynamic_atexit_destructor_for__CVarHairStrands_ForceVelocityOutput__(void)

{
  CVarHairStrands_ForceVelocityOutput._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarHairStrands_ForceVelocityOutput);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairStrands_Streaming_Prediction'' @ 150460cd0

void __cdecl _dynamic_atexit_destructor_for__CVarHairStrands_Streaming_Prediction__(void)

{
  CVarHairStrands_Streaming_Prediction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarHairStrands_Streaming_Prediction);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairStrands_UseAttachedSimulationComponents'' @ 150460cf0

void __cdecl _dynamic_atexit_destructor_for__CVarHairStrands_UseAttachedSimulationComponents__(void)

{
  CVarHairStrands_UseAttachedSimulationComponents._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarHairStrands_UseAttachedSimulationComponents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairStrands_ViewModeClumpIndex'' @ 150460d10

void __cdecl _dynamic_atexit_destructor_for__CVarHairStrands_ViewModeClumpIndex__(void)

{
  CVarHairStrands_ViewModeClumpIndex._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHairStrands_ViewModeClumpIndex)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseProxyLocalToWorld'' @ 150460d30

void __cdecl _dynamic_atexit_destructor_for__CVarUseProxyLocalToWorld__(void)

{
  CVarUseProxyLocalToWorld._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseProxyLocalToWorld);
  return;
}

// `dynamic_atexit_destructor_for_'Cards_DefaultMaterialRef'' @ 150460d50

void __cdecl
`UGroomComponent::UGroomComponent'::__l2::_dynamic_atexit_destructor_for__Cards_DefaultMaterialRef__
          (void)

{
  Cards_DefaultMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&Cards_DefaultMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'GStrandsPositionQueries'' @ 150460d70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__GStrandsPositionQueries__(void)

{
  TNode *pTVar1;
  
  pTVar1 = GStrandsPositionQueries.Tail;
  while (pTVar1 != (TNode *)0x0) {
    GStrandsPositionQueries.Tail = pTVar1->NextNode;
    operator_delete(pTVar1,0x10);
    pTVar1 = GStrandsPositionQueries.Tail;
  }
  GStrandsPositionQueries.Tail = pTVar1;
  return;
}

// `dynamic_atexit_destructor_for_'GStrandsPositionReadbacks'' @ 150460db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__GStrandsPositionReadbacks__(void)

{
  TNode *pTVar1;
  
  pTVar1 = GStrandsPositionReadbacks.Tail;
  while (pTVar1 != (TNode *)0x0) {
    GStrandsPositionReadbacks.Tail = pTVar1->NextNode;
    operator_delete(pTVar1,0x10);
    pTVar1 = GStrandsPositionReadbacks.Tail;
  }
  GStrandsPositionReadbacks.Tail = pTVar1;
  return;
}

// `dynamic_atexit_destructor_for_'IndexedColor'' @ 150460df0

void __cdecl `GetHairGroupDebugColor'::__l2::_dynamic_atexit_destructor_for__IndexedColor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IndexedColor.AllocatorInstance.Data;
  if (IndexedColor.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IndexedColor.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Instance'' @ 150460e10

void __cdecl
`IGroomCacheStreamingManager::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  FGroomCacheStreamingManager::~FGroomCacheStreamingManager(&::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'LogGroomBuilder'' @ 150460e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGroomBuilder__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGroomBuilder);
  return;
}

// `dynamic_atexit_destructor_for_'LogGroomCacheStreaming'' @ 150460e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGroomCacheStreaming__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGroomCacheStreaming);
  return;
}

// `dynamic_atexit_destructor_for_'Meshes_DefaultMaterialRef'' @ 150460e70

void __cdecl
`UGroomComponent::UGroomComponent'::__l2::
_dynamic_atexit_destructor_for__Meshes_DefaultMaterialRef__(void)

{
  Meshes_DefaultMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&Meshes_DefaultMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150460e90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
`FGroomBindingCompilingManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  FGroomBindingCompilingManager::~FGroomBindingCompilingManager(&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150460eb0

void __cdecl
`FHairStrandCopyPositionCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHairStrandCopyPositionCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150460ed0

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
`FHairStrandCopyPositionCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'Strands_DebugMaterialRef'' @ 150460ef0

void __cdecl
`UGroomComponent::UGroomComponent'::__l2::_dynamic_atexit_destructor_for__Strands_DebugMaterialRef__
          (void)

{
  Strands_DebugMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&Strands_DebugMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'Strands_DefaultMaterialRef'' @ 150460f10

void __cdecl
`UGroomComponent::UGroomComponent'::__l2::
_dynamic_atexit_destructor_for__Strands_DefaultMaterialRef__(void)

{
  Strands_DefaultMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&Strands_DefaultMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterQueuedGroomBindingAssetCompilation'' @ 150460f30

void __cdecl
_dynamic_atexit_destructor_for____GTraceCounterQueuedGroomBindingAssetCompilation__(void)

{
  if ((__GTraceCounterQueuedGroomBindingAssetCompilation.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterQueuedGroomBindingAssetCompilation.CounterName);
    return;
  }
  return;
}

