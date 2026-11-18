// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 694

// CurveGroupName'' @ 140f87850

void __cdecl `dynamic_initializer_for_'FDataflowCurveSelection::CurveGroupName__(void)

{
  ::FName::FName(&FDataflowCurveSelection::CurveGroupName,"Curves");
  return;
}

// DataflowInput'' @ 140f87870

void __cdecl `dynamic_initializer_for_'FDataflowNode::DataflowInput__(void)

{
  ::FName::FName(&FDataflowNode::DataflowInput,L"DataflowInput");
  return;
}

// DataflowIntrinsic'' @ 140f87890

void __cdecl `dynamic_initializer_for_'FDataflowNode::DataflowIntrinsic__(void)

{
  ::FName::FName(&FDataflowNode::DataflowIntrinsic,L"DataflowIntrinsic");
  return;
}

// DataflowOutput'' @ 140f878b0

void __cdecl `dynamic_initializer_for_'FDataflowNode::DataflowOutput__(void)

{
  ::FName::FName(&FDataflowNode::DataflowOutput,L"DataflowOutput");
  return;
}

// DataflowPassthrough'' @ 140f878d0

void __cdecl `dynamic_initializer_for_'FDataflowNode::DataflowPassthrough__(void)

{
  ::FName::FName(&FDataflowNode::DataflowPassthrough,L"DataflowPassthrough");
  return;
}

// DataflowSkipConnection'' @ 140f878f0

void __cdecl `dynamic_initializer_for_'FDataflowNode::DataflowSkipConnection__(void)

{
  ::FName::FName(&FDataflowNode::DataflowSkipConnection,L"DataflowSkipConnection");
  return;
}

// FacesGroupName'' @ 140f87910

void __cdecl `dynamic_initializer_for_'FDataflowFaceSelection::FacesGroupName__(void)

{
  ::FName::FName(&FDataflowFaceSelection::FacesGroupName,"Faces");
  return;
}

// GeometryGroupName'' @ 140f87930

void __cdecl `dynamic_initializer_for_'FDataflowGeometrySelection::GeometryGroupName__(void)

{
  ::FName::FName(&FDataflowGeometrySelection::GeometryGroupName,"Geometry");
  return;
}

// MainTypeGroup'' @ 140f87950

void __cdecl `dynamic_initializer_for_'FDataflowSelectNode::MainTypeGroup__(void)

{
  ::FName::FName(&FDataflowSelectNode::MainTypeGroup,"Main");
  return;
}

// MaterialGroupName'' @ 140f87970

void __cdecl `dynamic_initializer_for_'FDataflowMaterialSelection::MaterialGroupName__(void)

{
  ::FName::FName(&FDataflowMaterialSelection::MaterialGroupName,"Material");
  return;
}

// NoOpInput'' @ 140f87990

void __cdecl `dynamic_initializer_for_'FDataflowInput::NoOpInput__(void)

{
  FGuid *pFVar1;
  FGuid local_58;
  FConnectionParameters local_48;
  
  pFVar1 = FGuid::NewGuid(&local_58);
  local_48.Guid.A = pFVar1->A;
  local_48.Guid.B = pFVar1->B;
  local_48.Guid.C = pFVar1->C;
  local_48.Guid.D = pFVar1->D;
  local_48.Type.ComparisonIndex.Value = 0;
  local_48.Type.Number = 0;
  local_48.Name.ComparisonIndex.Value = 0;
  local_48.Name.Number = 0;
  local_48.Offset = 0xffffffff;
  local_48.Owner = (FDataflowNode *)0x0;
  local_48.Property = (FProperty *)0x0;
  FDataflowConnection::FDataflowConnection
            ((FDataflowConnection *)&FDataflowInput::NoOpInput,INPUT,&local_48);
  FDataflowInput::NoOpInput.Connection = (FDataflowOutput *)0x0;
  FDataflowInput::NoOpInput._padding_ = (longlong)&___7FDataflowInput__6B_;
  FDataflowInput::NoOpInput.bIsRequired = false;
  atexit(`dynamic_atexit_destructor_for_'FDataflowInput::NoOpInput__);
  return;
}

// NoOpOutput'' @ 140f87a20

void __cdecl `dynamic_initializer_for_'FDataflowOutput::NoOpOutput__(void)

{
  FWindowsRecursiveMutex *pFVar1;
  FGuid *pFVar2;
  TSharedRef<UE::FWindowsRecursiveMutex,1> *pTVar3;
  FSharedReferencer<1> local_70;
  TSharedRef<UE::FWindowsRecursiveMutex,1> local_68;
  FGuid local_58;
  FConnectionParameters local_48;
  
  pFVar2 = FGuid::NewGuid(&local_58);
  local_48.Guid.A = pFVar2->A;
  local_48.Guid.B = pFVar2->B;
  local_48.Guid.C = pFVar2->C;
  local_48.Guid.D = pFVar2->D;
  local_48.Type.ComparisonIndex.Value = 0;
  local_48.Type.Number = 0;
  local_48.Name.ComparisonIndex.Value = 0;
  local_48.Name.Number = 0;
  local_48.Offset = 0xffffffff;
  local_48.Owner = (FDataflowNode *)0x0;
  local_48.Property = (FProperty *)0x0;
  FDataflowConnection::FDataflowConnection
            ((FDataflowConnection *)&FDataflowOutput::NoOpOutput,OUTPUT,&local_48);
  FDataflowOutput::NoOpOutput.Connections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FDataflowOutput::NoOpOutput._padding_ = (longlong)&___7FDataflowOutput__6B_;
  FDataflowOutput::NoOpOutput.OutputLock = (TSharedPtr<UE::FWindowsRecursiveMutex,1>)ZEXT816(0);
  FDataflowOutput::NoOpOutput.Connections.ArrayNum = 0;
  FDataflowOutput::NoOpOutput.Connections.ArrayMax = 0;
  FDataflowOutput::NoOpOutput.PassthroughOffset = 0xffffffff;
  FDataflowOutput::NoOpOutput.PassthroughKey.Offset = 0xffffffff;
  FDataflowOutput::NoOpOutput.PassthroughKey.ContainerIndex = -1;
  FDataflowOutput::NoOpOutput.PassthroughKey.ContainerElementOffset = 0xffffffff;
  pTVar3 = MakeShared<UE::FWindowsRecursiveMutex,1>(&local_68);
  pFVar1 = pTVar3->Object;
  local_70.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FDataflowOutput::NoOpOutput.OutputLock.Object = pFVar1;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&FDataflowOutput::NoOpOutput.OutputLock.SharedReferenceCount,&local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  atexit(`dynamic_atexit_destructor_for_'FDataflowOutput::NoOpOutput__);
  return;
}

// RegisteredFilters'' @ 140f87b30

void __cdecl `dynamic_initializer_for_'UE::Dataflow::FGraph::RegisteredFilters__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Dataflow::FGraph::RegisteredFilters__);
  return;
}

// TransformGroupName'' @ 140f87b50

void __cdecl `dynamic_initializer_for_'FDataflowTransformSelection::TransformGroupName__(void)

{
  ::FName::FName(&FDataflowTransformSelection::TransformGroupName,"Transform");
  return;
}

// TypeName'' @ 140f87b70

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<signed_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<signed_char>::TypeName,L"int8");
  return;
}

// TypeName'' @ 140f87b90

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_char>::TypeName,L"uint8");
  return;
}

// TypeName'' @ 140f87bb0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<short>::TypeName,L"int16");
  return;
}

// TypeName'' @ 140f87bd0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_short>::TypeName,L"uint16");
  return;
}

// TypeName'' @ 140f87bf0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<int>::TypeName,L"int32");
  return;
}

// TypeName'' @ 140f87c10

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_int>::TypeName,L"uint32");
  return;
}

// TypeName'' @ 140f87c30

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<float>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<float>::TypeName,L"float");
  return;
}

// TypeName'' @ 140f87c50

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<double>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<double>::TypeName,L"double");
  return;
}

// TypeName'' @ 140f87c70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName,L"FIntPoint");
  return;
}

// TypeName'' @ 140f87c90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName,L"FIntVector3");
  return;
}

// TypeName'' @ 140f87cb0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName,L"FIntVector4");
  return;
}

// TypeName'' @ 140f87cd0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName,L"TObjectPtr<UObject>");
  return;
}

// TypeName'' @ 140f87cf0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName,L"FQuat4f");
  return;
}

// TypeName'' @ 140f87d10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName,L"FQuat");
  return;
}

// TypeName'' @ 140f87d30

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName,L"FRotator");
  return;
}

// TypeName'' @ 140f87d50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName,L"FTransform");
  return;
}

// TypeName'' @ 140f87d70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName,L"FVector2f");
  return;
}

// TypeName'' @ 140f87d90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName,L"FVector2D");
  return;
}

// TypeName'' @ 140f87db0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName,L"FVector4f");
  return;
}

// TypeName'' @ 140f87dd0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName,L"FVector4");
  return;
}

// TypeName'' @ 140f87df0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName,L"FVector3f");
  return;
}

// TypeName'' @ 140f87e10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName,L"FVector");
  return;
}

// TypeName'' @ 140f87e30

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName,
                 L"FDataflowCurveSelection");
  return;
}

// TypeName'' @ 140f87e50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName,
                 L"FDataflowFaceSelection");
  return;
}

// TypeName'' @ 140f87e70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName,
                 L"FDataflowGeometrySelection");
  return;
}

// TypeName'' @ 140f87e90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName,
                 L"FDataflowMaterialSelection");
  return;
}

// TypeName'' @ 140f87eb0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName,
                 L"FDataflowTransformSelection");
  return;
}

// TypeName'' @ 140f87ed0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName,
                 L"FDataflowVertexSelection");
  return;
}

// TypeName'' @ 140f87ef0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FLinearColor>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FLinearColor>::TypeName,L"FLinearColor");
  return;
}

// TypeName'' @ 140f87f10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<int8>");
  return;
}

// TypeName'' @ 140f87f30

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint8>");
  return;
}

// TypeName'' @ 140f87f50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int16>");
  return;
}

// TypeName'' @ 140f87f70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint16>");
  return;
}

// TypeName'' @ 140f87f90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int32>");
  return;
}

// TypeName'' @ 140f87fb0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint32>");
  return;
}

// TypeName'' @ 140f87fd0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<float>");
  return;
}

// TypeName'' @ 140f87ff0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<double>");
  return;
}

// TypeName'' @ 140f88010

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntPoint>");
  return;
}

// TypeName'' @ 140f88030

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector3>");
  return;
}

// TypeName'' @ 140f88050

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector4>");
  return;
}

// TypeName'' @ 140f88070

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat4f>");
  return;
}

// TypeName'' @ 140f88090

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat>");
  return;
}

// TypeName'' @ 140f880b0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FRotator>");
  return;
}

// TypeName'' @ 140f880d0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FTransform>");
  return;
}

// TypeName'' @ 140f880f0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2f>");
  return;
}

// TypeName'' @ 140f88110

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2D>");
  return;
}

// TypeName'' @ 140f88130

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4f>");
  return;
}

// TypeName'' @ 140f88150

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4>");
  return;
}

// TypeName'' @ 140f88170

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector3f>");
  return;
}

// TypeName'' @ 140f88190

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector>");
  return;
}

// TypeName'' @ 140f881b0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<FLinearColor>");
  return;
}

// TypeName'' @ 140f881d0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FName>");
  return;
}

// TypeName'' @ 140f881f0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FString>");
  return;
}

// TypeName'' @ 140f88210

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int64>");
  return;
}

// TypeName'' @ 140f88230

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint64>");
  return;
}

// TypeName'' @ 140f88250

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<bool>");
  return;
}

// TypeName'' @ 140f88270

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FName>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FName>::TypeName,L"FName");
  return;
}

// TypeName'' @ 140f88290

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FString>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FString>::TypeName,L"FString");
  return;
}

// TypeName'' @ 140f882b0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FText>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FText>::TypeName,L"FText");
  return;
}

// TypeName'' @ 140f882d0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<__int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<__int64>::TypeName,L"int64");
  return;
}

// TypeName'' @ 140f882f0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned___int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned___int64>::TypeName,L"uint64");
  return;
}

// TypeName'' @ 140f88310

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<bool>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<bool>::TypeName,L"bool");
  return;
}

// TypeName'' @ 140f88330

void __cdecl `dynamic_initializer_for_'FDataflowAnyType::TypeName__(void)

{
  ::FName::FName(&FDataflowAnyType::TypeName,L"FDataflowAnyType");
  return;
}

// VerticesGroupName'' @ 140f88350

void __cdecl `dynamic_initializer_for_'FDataflowVertexSelection::VerticesGroupName__(void)

{
  ::FName::FName(&FDataflowVertexSelection::VerticesGroupName,"Vertices");
  return;
}

// `dynamic_initializer_for_'CVARDataflowEnableGraphEval'' @ 140f88370

void __cdecl _dynamic_initializer_for__CVARDataflowEnableGraphEval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVARDataflowEnableGraphEval,L"p.Dataflow.EnableGraphEval",&bDataflowEnableGraphEval,
             L"Enable automatic graph evaluation in the Dataflow Editor. [def:true]",0);
  atexit(_dynamic_atexit_destructor_for__CVARDataflowEnableGraphEval__);
  return;
}

// `dynamic_initializer_for_'CVar'' @ 140f883c0

void __cdecl UE::Dataflow::Private::_dynamic_initializer_for__CVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar,L"p.Dataflow.DisableFreezingState",&bDisableFreezingState,
             L"Disable the freezing state of Dataflow nodes. Useful for recovering from crashes caused by frozen nodes."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar__);
  return;
}

// `dynamic_initializer_for_'DATAFLOW_LOG'' @ 140f88410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DATAFLOW_LOG__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&DATAFLOW_LOG,L"DATAFLOW_LOG",Error,All);
  atexit(_dynamic_atexit_destructor_for__DATAFLOW_LOG__);
  return;
}

// `dynamic_initializer_for_'LogDataflowContextCachingFactory'' @ 140f88450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDataflowContextCachingFactory__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDataflowContextCachingFactory,
             L"LogDataflowContextCachingFactory",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogDataflowContextCachingFactory__);
  return;
}

// `dynamic_initializer_for_'LogDataflowFactory'' @ 140f88490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDataflowFactory__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDataflowFactory,L"LogDataflowFactory",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogDataflowFactory__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 140f884d0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantDataflowCore'' @ 140f884f0

void __cdecl _dynamic_initializer_for__ModuleRegistrantDataflowCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DataflowCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DataflowCore",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<IDataflowCoreModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 140f88540

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 140f885d0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 140f88660

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 140f886f0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 140f88780

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 140f88810

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 140f888a0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 140f88930

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 140f889c0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 140f88a50

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowAnyType_h__Script_DataflowCore_100002975'' @ 140f88ae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowAnyType_h__Script_DataflowCore_100002975__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowAnyType_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,0x11,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConnection_h__Script_DataflowCore_4157790861'' @ 140f88b20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConnection_h__Script_DataflowCore_4157790861__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConnection_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConvertNodes_h__Script_DataflowCore_2561523788'' @ 140f88b60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConvertNodes_h__Script_DataflowCore_2561523788__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConvertNodes_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,0x11,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowCoreNodes_h__Script_DataflowCore_1748673957'' @ 140f88ba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowCoreNodes_h__Script_DataflowCore_1748673957__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowCoreNodes_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowElement_h__Script_DataflowCore_2000497810'' @ 140f88be0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowElement_h__Script_DataflowCore_2000497810__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowElement_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowGraph_h__Script_DataflowCore_3863827098'' @ 140f88c20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowGraph_h__Script_DataflowCore_3863827098__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowGraph_h__Script_DataflowCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImageNodes_h__Script_DataflowCore_1887467237'' @ 140f88c60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImageNodes_h__Script_DataflowCore_1887467237__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImageNodes_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImageNodes_h__Script_DataflowCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImage_h__Script_DataflowCore_3845389909'' @ 140f88cb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImage_h__Script_DataflowCore_3845389909__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImage_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowImage_h__Script_DataflowCore_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowInputOutput_h__Script_DataflowCore_4254792770'' @ 140f88d00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowInputOutput_h__Script_DataflowCore_4254792770__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowInputOutput_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowMathNodes_h__Script_DataflowCore_4250571609'' @ 140f88d40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowMathNodes_h__Script_DataflowCore_4250571609__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowMathNodes_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,0x27,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowMathNodes_h__Script_DataflowCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowNode_h__Script_DataflowCore_1053046593'' @ 140f88d90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowNode_h__Script_DataflowCore_1053046593__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowNode_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowOverrideNode_h__Script_DataflowCore_841834520'' @ 140f88dd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowOverrideNode_h__Script_DataflowCore_841834520__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowOverrideNode_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowPath_h__Script_DataflowCore_3367824303'' @ 140f88e10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowPath_h__Script_DataflowCore_3367824303__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowPath_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h__Script_DataflowCore_1643442175'' @ 140f88e50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h__Script_DataflowCore_1643442175__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,7,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h__Script_DataflowCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h__Script_DataflowCore_4125727179'' @ 140f88ea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h__Script_DataflowCore_4125727179__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h__Script_DataflowCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowTerminalNode_h__Script_DataflowCore_638866284'' @ 140f88ef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowTerminalNode_h__Script_DataflowCore_638866284__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowTerminalNode_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowVectorNodes_h__Script_DataflowCore_387822352'' @ 140f88f30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowVectorNodes_h__Script_DataflowCore_387822352__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DataflowCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowVectorNodes_h__Script_DataflowCore_Statics
             ::ScriptStructInfo,0xf,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_DataflowCore'' @ 140f88f70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_DataflowCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x9bb06387;
  local_res8[0].DeclarationsHash = 0xcd55d8b4;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_DataflowCore,L"/Script/DataflowCore",
             &Z_Registration_Info_UPackage__Script_DataflowCore,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 1443dc820

void * __thiscall
FDataflowMathRadToDegNode::_scalar_deleting_destructor_
          (FDataflowMathRadToDegNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum @ 1443dca50

UEnum * __cdecl Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum(void)

{
  if (Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.InnerSingleton,
               &Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode @ 1443dcc20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathOneInputOperatorNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathOneInputOperatorNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathOneInputOperatorNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathOneInputOperatorNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode @ 1443dcca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathTwoInputsOperatorNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathTwoInputsOperatorNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathTwoInputsOperatorNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathTwoInputsOperatorNode.InnerSingleton;
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

// NewStructOps @ 1443dce10

void * __cdecl
Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathOneInputOperatorNode,&UE::CoreUObject::Private::Construct<FDataflowMathOneInputOperatorNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathOneInputOperatorNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathOneInputOperatorNode>,&UE::CoreUObject::Private::Copy<FDataflowMathOneInputOperatorNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443dd170

void * __cdecl
Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathTwoInputsOperatorNode,&UE::CoreUObject::Private::Construct<FDataflowMathTwoInputsOperatorNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathTwoInputsOperatorNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathTwoInputsOperatorNode>,&UE::CoreUObject::Private::Copy<FDataflowMathTwoInputsOperatorNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443dd370

void * __cdecl Z_Construct_UScriptStruct_FDataflowPath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowPath,&UE::CoreUObject::Private::Construct<FDataflowPath>,&UE::CoreUObject::Private::ConstructForTests<FDataflowPath>,&UE::CoreUObject::Private::Destruct<FDataflowPath>,&UE::CoreUObject::Private::Copy<FDataflowPath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443dd480

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathAddNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathAddNode,&UE::CoreUObject::Private::Construct<FDataflowMathAddNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathAddNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathAddNode>,&UE::CoreUObject::Private::Copy<FDataflowMathAddNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443dda20

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathSubtractNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathSubtractNode,&UE::CoreUObject::Private::Construct<FDataflowMathSubtractNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathSubtractNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathSubtractNode>,&UE::CoreUObject::Private::Copy<FDataflowMathSubtractNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443ddcc0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathMultiplyNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathMultiplyNode,&UE::CoreUObject::Private::Construct<FDataflowMathMultiplyNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathMultiplyNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathMultiplyNode>,&UE::CoreUObject::Private::Copy<FDataflowMathMultiplyNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443dddc0

void * __cdecl Z_Construct_UScriptStruct_FDataflowSelection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowSelection,&UE::CoreUObject::Private::Construct<FDataflowSelection>,&UE::CoreUObject::Private::ConstructForTests<FDataflowSelection>,&UE::CoreUObject::Private::Destruct<FDataflowSelection>,&UE::CoreUObject::Private::Copy<FDataflowSelection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FDataflowInput @ 1443dde00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowInput.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowInput.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowInput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowInput.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowInput.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowOutput @ 1443dde80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowOutput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowOutput.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowOutput.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowOutput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowOutput.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowOutput.InnerSingleton;
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

// NewStructOps @ 1443ddf00

void * __cdecl Z_Construct_UScriptStruct_FDataflowInput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowInput,&UE::CoreUObject::Private::Construct<FDataflowInput>,&UE::CoreUObject::Private::ConstructForTests<FDataflowInput>,&UE::CoreUObject::Private::Destruct<FDataflowInput>,&UE::CoreUObject::Private::Copy<FDataflowInput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443ddf40

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x268;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathDivideNode,&UE::CoreUObject::Private::Construct<FDataflowMathDivideNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathDivideNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathDivideNode>,&UE::CoreUObject::Private::Copy<FDataflowMathDivideNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FDataflowNode @ 1443ddf80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowNode.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowNode.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowNode.InnerSingleton;
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

// NewStructOps @ 1443de080

void * __cdecl Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowTransformSelection,&UE::CoreUObject::Private::Construct<FDataflowTransformSelection>,&UE::CoreUObject::Private::ConstructForTests<FDataflowTransformSelection>,&UE::CoreUObject::Private::Destruct<FDataflowTransformSelection>,&UE::CoreUObject::Private::Copy<FDataflowTransformSelection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443de0d0

void * __cdecl
Z_Construct_UScriptStruct_FConvertNumericTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertNumericTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertNumericTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertNumericTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertNumericTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertNumericTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443de440

void * __cdecl Z_Construct_UScriptStruct_FDataflowArrayInput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowArrayInput,&UE::CoreUObject::Private::Construct<FDataflowArrayInput>,&UE::CoreUObject::Private::ConstructForTests<FDataflowArrayInput>,&UE::CoreUObject::Private::Destruct<FDataflowArrayInput>,&UE::CoreUObject::Private::Copy<FDataflowArrayInput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443de550

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathMinimumNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathMinimumNode,&UE::CoreUObject::Private::Construct<FDataflowMathMinimumNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathMinimumNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathMinimumNode>,&UE::CoreUObject::Private::Copy<FDataflowMathMinimumNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443de750

void * __cdecl Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVertexSelection,&UE::CoreUObject::Private::Construct<FDataflowVertexSelection>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVertexSelection>,&UE::CoreUObject::Private::Destruct<FDataflowVertexSelection>,&UE::CoreUObject::Private::Copy<FDataflowVertexSelection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443de960

void * __cdecl Z_Construct_UScriptStruct_FConvertVectorTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x290;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertVectorTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertVectorTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertVectorTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertVectorTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertVectorTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443deae0

void * __cdecl Z_Construct_UScriptStruct_FDataflowOutput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowOutput,&UE::CoreUObject::Private::Construct<FDataflowOutput>,&UE::CoreUObject::Private::ConstructForTests<FDataflowOutput>,&UE::CoreUObject::Private::Destruct<FDataflowOutput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443deb20

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathMinimumNode_v2_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathMinimumNode_v2,&UE::CoreUObject::Private::Construct<FDataflowMathMinimumNode_v2>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathMinimumNode_v2>,&UE::CoreUObject::Private::Destruct<FDataflowMathMinimumNode_v2>,&UE::CoreUObject::Private::Copy<FDataflowMathMinimumNode_v2>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443deb60

void * __cdecl Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowFaceSelection,&UE::CoreUObject::Private::Construct<FDataflowFaceSelection>,&UE::CoreUObject::Private::ConstructForTests<FDataflowFaceSelection>,&UE::CoreUObject::Private::Destruct<FDataflowFaceSelection>,&UE::CoreUObject::Private::Copy<FDataflowFaceSelection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443deba0

void * __cdecl Z_Construct_UScriptStruct_FDataflowArrayOutput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowArrayOutput,&UE::CoreUObject::Private::Construct<FDataflowArrayOutput>,&UE::CoreUObject::Private::ConstructForTests<FDataflowArrayOutput>,&UE::CoreUObject::Private::Destruct<FDataflowArrayOutput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443debe0

void * __cdecl Z_Construct_UScriptStruct_FConvertStringTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x268;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertStringTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertStringTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertStringTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertStringTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertStringTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_DataflowCore @ 1443dec50

UPackage * __cdecl Z_Construct_UPackage__Script_DataflowCore(void)

{
  if (Z_Registration_Info_UPackage__Script_DataflowCore.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_DataflowCore.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_DataflowCore.OuterSingleton;
}

// NewStructOps @ 1443ded40

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathMaximumNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathMaximumNode,&UE::CoreUObject::Private::Construct<FDataflowMathMaximumNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathMaximumNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathMaximumNode>,&UE::CoreUObject::Private::Copy<FDataflowMathMaximumNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443def00

void * __thiscall
FDataflowBaseElement::_scalar_deleting_destructor_(FDataflowBaseElement *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDataflowBaseElement__6B_;
  pFVar1 = (this->ElementName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// NewStructOps @ 1443def50

void * __cdecl Z_Construct_UScriptStruct_FDataflowGeometrySelection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowGeometrySelection,&UE::CoreUObject::Private::Construct<FDataflowGeometrySelection>,&UE::CoreUObject::Private::ConstructForTests<FDataflowGeometrySelection>,&UE::CoreUObject::Private::Destruct<FDataflowGeometrySelection>,&UE::CoreUObject::Private::Copy<FDataflowGeometrySelection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443def90

void * __cdecl Z_Construct_UScriptStruct_FDataflowBaseElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowBaseElement,&UE::CoreUObject::Private::Construct<FDataflowBaseElement>,&UE::CoreUObject::Private::ConstructForTests<FDataflowBaseElement>,&UE::CoreUObject::Private::Destruct<FDataflowBaseElement>,&UE::CoreUObject::Private::Copy<FDataflowBaseElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443df050

void * __cdecl Z_Construct_UScriptStruct_FConvertBoolTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x250;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertBoolTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertBoolTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertBoolTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertBoolTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertBoolTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443df1c0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathMaximumNode_v2_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathMaximumNode_v2,&UE::CoreUObject::Private::Construct<FDataflowMathMaximumNode_v2>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathMaximumNode_v2>,&UE::CoreUObject::Private::Destruct<FDataflowMathMaximumNode_v2>,&UE::CoreUObject::Private::Copy<FDataflowMathMaximumNode_v2>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443df200

void * __cdecl Z_Construct_UScriptStruct_FDataflowMaterialSelection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMaterialSelection,&UE::CoreUObject::Private::Construct<FDataflowMaterialSelection>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMaterialSelection>,&UE::CoreUObject::Private::Destruct<FDataflowMaterialSelection>,&UE::CoreUObject::Private::Copy<FDataflowMaterialSelection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443df490

void * __cdecl
Z_Construct_UScriptStruct_FConvertTransformTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x310;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertTransformTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertTransformTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertTransformTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertTransformTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertTransformTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443df8c0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathReciprocalNode,&UE::CoreUObject::Private::Construct<FDataflowMathReciprocalNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathReciprocalNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathReciprocalNode>,&UE::CoreUObject::Private::Copy<FDataflowMathReciprocalNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443df900

void * __cdecl Z_Construct_UScriptStruct_FDataflowCurveSelection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowCurveSelection,&UE::CoreUObject::Private::Construct<FDataflowCurveSelection>,&UE::CoreUObject::Private::ConstructForTests<FDataflowCurveSelection>,&UE::CoreUObject::Private::Destruct<FDataflowCurveSelection>,&UE::CoreUObject::Private::Copy<FDataflowCurveSelection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443df940

void * __cdecl
Z_Construct_UScriptStruct_FConvertStringConvertibleTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x268;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertStringConvertibleTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertStringConvertibleTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertStringConvertibleTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertStringConvertibleTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertStringConvertibleTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443dfa40

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathSquareNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathSquareNode,&UE::CoreUObject::Private::Construct<FDataflowMathSquareNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathSquareNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathSquareNode>,&UE::CoreUObject::Private::Copy<FDataflowMathSquareNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EDataflowSelectionType_StaticEnum @ 1443dfa80

UEnum * __cdecl EDataflowSelectionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataflowSelectionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UEnum_EDataflowSelectionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DataflowCore_EDataflowSelectionType,(UObject *)pUVar1,
                       L"EDataflowSelectionType");
  }
  return Z_Registration_Info_UEnum_EDataflowSelectionType.OuterSingleton;
}

// NewStructOps @ 1443dfb80

void * __cdecl
Z_Construct_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertUObjectConvertibleTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertUObjectConvertibleTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertUObjectConvertibleTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertUObjectConvertibleTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertUObjectConvertibleTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443dfc50

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathCubeNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathCubeNode,&UE::CoreUObject::Private::Construct<FDataflowMathCubeNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathCubeNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathCubeNode>,&UE::CoreUObject::Private::Copy<FDataflowMathCubeNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAllElementsMustBeSelected_SetBit @ 1443dff00

void __cdecl
Z_Construct_UScriptStruct_FConvertSelectionTypesDataflowNode_Statics::
NewProp_bAllElementsMustBeSelected_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 800) = 1;
  return;
}

// NewStructOps @ 1443dff10

void * __cdecl
Z_Construct_UScriptStruct_FConvertSelectionTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x350;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertSelectionTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertSelectionTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertSelectionTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertSelectionTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertSelectionTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e01b0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathSquareRootNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathSquareRootNode,&UE::CoreUObject::Private::Construct<FDataflowMathSquareRootNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathSquareRootNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathSquareRootNode>,&UE::CoreUObject::Private::Copy<FDataflowMathSquareRootNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e0330

void * __cdecl
Z_Construct_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x280;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertSelectionTypesToIndexArrayDataflowNode,&UE::CoreUObject::Private::Construct<FConvertSelectionTypesToIndexArrayDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertSelectionTypesToIndexArrayDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertSelectionTypesToIndexArrayDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertSelectionTypesToIndexArrayDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e0370

void * __cdecl
Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathInverseSquareRootNode,&UE::CoreUObject::Private::Construct<FDataflowMathInverseSquareRootNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathInverseSquareRootNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathInverseSquareRootNode>,&UE::CoreUObject::Private::Copy<FDataflowMathInverseSquareRootNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDataflowSettings @ 1443e03b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataflowSettings(void)

{
  if (Z_Registration_Info_UClass_UDataflowSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataflowSettings.OuterSingleton,
               &Z_Construct_UClass_UDataflowSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataflowSettings.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNodeColors @ 1443e03f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNodeColors(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNodeColors.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNodeColors.InnerSingleton,
               &Z_Construct_UScriptStruct_FNodeColors_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNodeColors.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNodeColors.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPinSettings @ 1443e0470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPinSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPinSettings.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPinSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FPinSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPinSettings.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPinSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTransformLevelColors @ 1443e04f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransformLevelColors(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransformLevelColors.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransformLevelColors.InnerSingleton,
               &Z_Construct_UScriptStruct_FTransformLevelColors_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransformLevelColors.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FTransformLevelColors.InnerSingleton;
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

// NewStructOps @ 1443e0570

void * __cdecl Z_Construct_UScriptStruct_FNodeColors_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNodeColors,&UE::CoreUObject::Private::Construct<FNodeColors>,&UE::CoreUObject::Private::ConstructForTests<FNodeColors>,&UE::CoreUObject::Private::Destruct<FNodeColors>,&UE::CoreUObject::Private::Copy<FNodeColors>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e05b0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathNegateNode,&UE::CoreUObject::Private::Construct<FDataflowMathNegateNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathNegateNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathNegateNode>,&UE::CoreUObject::Private::Copy<FDataflowMathNegateNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e05f0

void * __cdecl
Z_Construct_UScriptStruct_FConvertIndexToSelectionTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x328;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertIndexToSelectionTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertIndexToSelectionTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertIndexToSelectionTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertIndexToSelectionTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertIndexToSelectionTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e0630

void * __cdecl Z_Construct_UScriptStruct_FPinSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPinSettings,&UE::CoreUObject::Private::Construct<FPinSettings>,&UE::CoreUObject::Private::ConstructForTests<FPinSettings>,&UE::CoreUObject::Private::Destruct<FPinSettings>,&UE::CoreUObject::Private::Copy<FPinSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e0920

void * __cdecl Z_Construct_UScriptStruct_FTransformLevelColors_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransformLevelColors,&UE::CoreUObject::Private::Construct<FTransformLevelColors>,&UE::CoreUObject::Private::ConstructForTests<FTransformLevelColors>,&UE::CoreUObject::Private::Destruct<FTransformLevelColors>,&UE::CoreUObject::Private::Copy<FTransformLevelColors>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e0980

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathAbsNode,&UE::CoreUObject::Private::Construct<FDataflowMathAbsNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathAbsNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathAbsNode>,&UE::CoreUObject::Private::Copy<FDataflowMathAbsNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e0a40

void * __cdecl
Z_Construct_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x330;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertIndexArrayToSelectionTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertIndexArrayToSelectionTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertIndexArrayToSelectionTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertIndexArrayToSelectionTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertIndexArrayToSelectionTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e11d0

void * __thiscall
FConvertNumericTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertNumericTypesDataflowNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// NewStructOps @ 1443e1210

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathFloorNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathFloorNode,&UE::CoreUObject::Private::Construct<FDataflowMathFloorNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathFloorNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathFloorNode>,&UE::CoreUObject::Private::Copy<FDataflowMathFloorNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e1290

void * __cdecl
Z_Construct_UScriptStruct_FConvertVectorArrayTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x268;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertVectorArrayTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertVectorArrayTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertVectorArrayTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertVectorArrayTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertVectorArrayTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e1780

void * __thiscall
FConvertVectorTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertVectorTypesDataflowNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// NewStructOps @ 1443e17c0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathCeilNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathCeilNode,&UE::CoreUObject::Private::Construct<FDataflowMathCeilNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathCeilNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathCeilNode>,&UE::CoreUObject::Private::Copy<FDataflowMathCeilNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e1d20

void * __cdecl
Z_Construct_UScriptStruct_FConvertNumericArrayTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x268;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertNumericArrayTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertNumericArrayTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertNumericArrayTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertNumericArrayTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertNumericArrayTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e1d60

void * __thiscall
FConvertStringTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertStringTypesDataflowNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Out).Value.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->In).Value.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// NewStructOps @ 1443e24f0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathRoundNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathRoundNode,&UE::CoreUObject::Private::Construct<FDataflowMathRoundNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathRoundNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathRoundNode>,&UE::CoreUObject::Private::Copy<FDataflowMathRoundNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e2540

void * __thiscall
FConvertBoolTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertBoolTypesDataflowNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x250);
  }
  return this;
}

// NewStructOps @ 1443e27c0

void * __cdecl
Z_Construct_UScriptStruct_FConvertStringArrayTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x268;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertStringArrayTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertStringArrayTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertStringArrayTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertStringArrayTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertStringArrayTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e2e90

void * __thiscall
FConvertTransformTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertTransformTypesDataflowNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443e30e0

void * __thiscall
FDataflowConnection::_scalar_deleting_destructor_(FDataflowConnection *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDataflowConnection__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// NewStructOps @ 1443e31c0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathTruncNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathTruncNode,&UE::CoreUObject::Private::Construct<FDataflowMathTruncNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathTruncNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathTruncNode>,&UE::CoreUObject::Private::Copy<FDataflowMathTruncNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e3620

void * __thiscall
FConvertStringConvertibleTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertStringConvertibleTypesDataflowNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Out).Value.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->In).Value.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// NewStructOps @ 1443e3680

void * __cdecl Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x248;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowTerminalNode,&UE::CoreUObject::Private::Construct<FDataflowTerminalNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowTerminalNode>,&UE::CoreUObject::Private::Destruct<FDataflowTerminalNode>,&UE::CoreUObject::Private::Copy<FDataflowTerminalNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e36c0

void * __cdecl
Z_Construct_UScriptStruct_FConvertBoolArrayTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x268;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertBoolArrayTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertBoolArrayTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertBoolArrayTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertBoolArrayTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertBoolArrayTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e3bd0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathFracNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathFracNode,&UE::CoreUObject::Private::Construct<FDataflowMathFracNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathFracNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathFracNode>,&UE::CoreUObject::Private::Copy<FDataflowMathFracNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e3c10

void * __thiscall
FConvertUObjectConvertibleTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertUObjectConvertibleTypesDataflowNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// NewStructOps @ 1443e4a40

void * __cdecl
Z_Construct_UScriptStruct_FConvertTransformArrayTypesDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x268;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertTransformArrayTypesDataflowNode,&UE::CoreUObject::Private::Construct<FConvertTransformArrayTypesDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertTransformArrayTypesDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertTransformArrayTypesDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertTransformArrayTypesDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e4a80

void * __thiscall
FConvertSelectionTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertSelectionTypesDataflowNode *this,uint param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (this->Out).Value.SelectionArray.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->In).Value.SelectionArray.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x350);
  }
  return this;
}

// NewStructOps @ 1443e4af0

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x280;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorMakeVec2Node,&UE::CoreUObject::Private::Construct<FDataflowVectorMakeVec2Node>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorMakeVec2Node>,&UE::CoreUObject::Private::Destruct<FDataflowVectorMakeVec2Node>,&UE::CoreUObject::Private::Copy<FDataflowVectorMakeVec2Node>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e4bc0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathPowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathPowNode,&UE::CoreUObject::Private::Construct<FDataflowMathPowNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathPowNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathPowNode>,&UE::CoreUObject::Private::Copy<FDataflowMathPowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e5240

void * __thiscall
FConvertSelectionTypesToIndexArrayDataflowNode::_scalar_deleting_destructor_
          (FConvertSelectionTypesToIndexArrayDataflowNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  
  pFVar1 = (this->Out).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->In).Value.SelectionArray.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// NewStructOps @ 1443e52a0

void * __cdecl Z_Construct_UScriptStruct_FConvertRotationDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x278;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConvertRotationDataflowNode,&UE::CoreUObject::Private::Construct<FConvertRotationDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FConvertRotationDataflowNode>,&UE::CoreUObject::Private::Destruct<FConvertRotationDataflowNode>,&UE::CoreUObject::Private::Copy<FConvertRotationDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e56f0

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x280;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorMakeVec3Node,&UE::CoreUObject::Private::Construct<FDataflowVectorMakeVec3Node>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorMakeVec3Node>,&UE::CoreUObject::Private::Destruct<FDataflowVectorMakeVec3Node>,&UE::CoreUObject::Private::Copy<FDataflowVectorMakeVec3Node>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e5770

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathLogXNode,&UE::CoreUObject::Private::Construct<FDataflowMathLogXNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathLogXNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathLogXNode>,&UE::CoreUObject::Private::Copy<FDataflowMathLogXNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e5e60

void * __thiscall
FConvertIndexToSelectionTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertIndexToSelectionTypesDataflowNode *this,uint param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (this->Out).Value.SelectionArray.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443e6830

void * __thiscall
FConvertIndexArrayToSelectionTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertIndexArrayToSelectionTypesDataflowNode *this,uint param_1)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  FVar1 = (this->Out).Value.SelectionArray.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->In).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x330);
  }
  return this;
}

// NewStructOps @ 1443e68a0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathLogNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathLogNode,&UE::CoreUObject::Private::Construct<FDataflowMathLogNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathLogNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathLogNode>,&UE::CoreUObject::Private::Copy<FDataflowMathLogNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443e6960

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x290;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorMakeVec4Node,&UE::CoreUObject::Private::Construct<FDataflowVectorMakeVec4Node>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorMakeVec4Node>,&UE::CoreUObject::Private::Destruct<FDataflowVectorMakeVec4Node>,&UE::CoreUObject::Private::Copy<FDataflowVectorMakeVec4Node>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e7200

void * __thiscall
FConvertVectorArrayTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertVectorArrayTypesDataflowNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Out).Value.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->In).Value.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443e7260

void * __thiscall
FDataflowVectorMakeVec2Node::_scalar_deleting_destructor_
          (FDataflowVectorMakeVec2Node *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// NewStructOps @ 1443e72a0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathExpNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathExpNode,&UE::CoreUObject::Private::Construct<FDataflowMathExpNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathExpNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathExpNode>,&UE::CoreUObject::Private::Copy<FDataflowMathExpNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e7b30

void * __thiscall
FConvertNumericArrayTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertNumericArrayTypesDataflowNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Out).Value.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->In).Value.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// NewStructOps @ 1443e7ba0

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x290;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorBreakNode,&UE::CoreUObject::Private::Construct<FDataflowVectorBreakNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorBreakNode>,&UE::CoreUObject::Private::Destruct<FDataflowVectorBreakNode>,&UE::CoreUObject::Private::Copy<FDataflowVectorBreakNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e7be0

void * __thiscall
FDataflowVectorMakeVec3Node::_scalar_deleting_destructor_
          (FDataflowVectorMakeVec3Node *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443e8710

void * __thiscall
FConvertStringArrayTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertStringArrayTypesDataflowNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->Out).Value.AllocatorInstance.Data,(this->Out).Value.ArrayNum);
  pFVar1 = (this->Out).Value.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->In).Value.AllocatorInstance.Data,(this->In).Value.ArrayNum);
  pFVar1 = (this->In).Value.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// NewStructOps @ 1443e87a0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathSignNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathSignNode,&UE::CoreUObject::Private::Construct<FDataflowMathSignNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathSignNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathSignNode>,&UE::CoreUObject::Private::Copy<FDataflowMathSignNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e88b0

void * __thiscall
FDataflowVectorMakeVec4Node::_scalar_deleting_destructor_
          (FDataflowVectorMakeVec4Node *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// NewStructOps @ 1443e8fd0

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2b0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorAddNode,&UE::CoreUObject::Private::Construct<FDataflowVectorAddNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorAddNode>,&UE::CoreUObject::Private::Destruct<FDataflowVectorAddNode>,&UE::CoreUObject::Private::Copy<FDataflowVectorAddNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443e9570

void * __thiscall
FConvertBoolArrayTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertBoolArrayTypesDataflowNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Out).Value.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->In).Value.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443e96c0

void * __thiscall
FDataflowVectorBreakNode::_scalar_deleting_destructor_(FDataflowVectorBreakNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// NewStructOps @ 1443e97f0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathOneMinusNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathOneMinusNode,&UE::CoreUObject::Private::Construct<FDataflowMathOneMinusNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathOneMinusNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathOneMinusNode>,&UE::CoreUObject::Private::Copy<FDataflowMathOneMinusNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443ea060

void * __thiscall
FConvertTransformArrayTypesDataflowNode::_scalar_deleting_destructor_
          (FConvertTransformArrayTypesDataflowNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Out).Value.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->In).Value.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443ea0c0

void * __thiscall
FDataflowVectorAddNode::_scalar_deleting_destructor_(FDataflowVectorAddNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// NewStructOps @ 1443ea2b0

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2b0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorSubtractNode,&UE::CoreUObject::Private::Construct<FDataflowVectorSubtractNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorSubtractNode>,&UE::CoreUObject::Private::Destruct<FDataflowVectorSubtractNode>,&UE::CoreUObject::Private::Copy<FDataflowVectorSubtractNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443ea2f0

void * __thiscall
FDataflowMathOneInputOperatorNode::_scalar_deleting_destructor_
          (FDataflowMathOneInputOperatorNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443ead70

void * __thiscall
FDataflowMathTwoInputsOperatorNode::_scalar_deleting_destructor_
          (FDataflowMathTwoInputsOperatorNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// EDataflowMathConstantsEnum_StaticEnum @ 1443eadb0

UEnum * __cdecl EDataflowMathConstantsEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum,(UObject *)pUVar1,
                       L"EDataflowMathConstantsEnum");
  }
  return Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1443eadf0

void * __thiscall
FConvertRotationDataflowNode::_scalar_deleting_destructor_
          (FConvertRotationDataflowNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x278);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443eae80

void * __thiscall
FDataflowVectorSubtractNode::_scalar_deleting_destructor_
          (FDataflowVectorSubtractNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443eb290

void * __thiscall
FDataflowMathAddNode::_scalar_deleting_destructor_(FDataflowMathAddNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// Z_Construct_UScriptStruct_FDataflowAnyType @ 1443eb3d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowAnyType(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowAnyType.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowAnyType.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowAnyType_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowAnyType.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowAnyType.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowBoolArrayTypes @ 1443eb450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowBoolArrayTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowBoolArrayTypes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowBoolArrayTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowBoolArrayTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowBoolArrayTypes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowBoolArrayTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowBoolTypes @ 1443eb4d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowBoolTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowBoolTypes.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowBoolTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowBoolTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowBoolTypes.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowBoolTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowNumericArrayTypes @ 1443eb580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowNumericArrayTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowNumericArrayTypes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowNumericArrayTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowNumericArrayTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowNumericArrayTypes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowNumericArrayTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowNumericTypes @ 1443eb600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowNumericTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowNumericTypes.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowNumericTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowNumericTypes.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FDataflowNumericTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowRotationTypes @ 1443eb740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowRotationTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowRotationTypes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowRotationTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowRotationTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowRotationTypes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowRotationTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowSelection @ 1443eb7c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowSelection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSelection.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowSelection.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowSelection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowSelection.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowSelection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowSelectionTypes @ 1443eb8c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowSelectionTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSelectionTypes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowSelectionTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowSelectionTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowSelectionTypes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowSelectionTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowStringArrayTypes @ 1443eb9d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowStringArrayTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowStringArrayTypes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowStringArrayTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowStringArrayTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowStringArrayTypes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowStringArrayTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes @ 1443eba80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowStringConvertibleTypes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowStringConvertibleTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowStringConvertibleTypes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowStringConvertibleTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowStringTypes @ 1443ebb30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowStringTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowStringTypes.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowStringTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowStringTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowStringTypes.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowStringTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowTransformArrayTypes @ 1443ebbe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowTransformArrayTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowTransformArrayTypes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowTransformArrayTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowTransformArrayTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowTransformArrayTypes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowTransformArrayTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowTransformTypes @ 1443ebca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowTransformTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowTransformTypes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowTransformTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowTransformTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowTransformTypes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowTransformTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes @ 1443ebd20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowUObjectConvertibleTypes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowUObjectConvertibleTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowUObjectConvertibleTypes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowUObjectConvertibleTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorArrayTypes @ 1443ebda0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorArrayTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorArrayTypes.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorArrayTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorArrayTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorArrayTypes.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorArrayTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorTypes @ 1443ebe20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorTypes.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorTypes.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorTypes.InnerSingleton;
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

// NewStructOps @ 1443ebea0

void * __cdecl Z_Construct_UScriptStruct_FDataflowAnyType_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowAnyType,&UE::CoreUObject::Private::Construct<FDataflowAnyType>,&UE::CoreUObject::Private::ConstructForTests<FDataflowAnyType>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443ebee0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathConstantNode,&UE::CoreUObject::Private::Construct<FDataflowMathConstantNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathConstantNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathConstantNode>,&UE::CoreUObject::Private::Copy<FDataflowMathConstantNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443ec0b0

void * __thiscall
FDataflowVectorMultiplyNode::_scalar_deleting_destructor_
          (FDataflowVectorMultiplyNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// NewStructOps @ 1443ec130

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorMultiplyNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2b0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorMultiplyNode,&UE::CoreUObject::Private::Construct<FDataflowVectorMultiplyNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorMultiplyNode>,&UE::CoreUObject::Private::Destruct<FDataflowVectorMultiplyNode>,&UE::CoreUObject::Private::Copy<FDataflowVectorMultiplyNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443ec460

void * __thiscall
FDataflowMathSubtractNode::_scalar_deleting_destructor_
          (FDataflowMathSubtractNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443ecbe0

void * __thiscall
FDataflowVectorDivideNode::_scalar_deleting_destructor_
          (FDataflowVectorDivideNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d0);
  }
  return this;
}

// NewStructOps @ 1443ecc20

void * __cdecl Z_Construct_UScriptStruct_FDataflowAllTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowAllTypes,&UE::CoreUObject::Private::Construct<FDataflowAllTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowAllTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443ed2a0

void * __thiscall
FDataflowMathMultiplyNode::_scalar_deleting_destructor_
          (FDataflowMathMultiplyNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443ed2f0

void * __thiscall
FDataflowTerminalNode::_scalar_deleting_destructor_(FDataflowTerminalNode *this,uint param_1)

{
  *(undefined ***)this = &___7FDataflowTerminalNode__6B_;
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x248);
  }
  return this;
}

// NewStructOps @ 1443ed340

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathClampNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x268;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathClampNode,&UE::CoreUObject::Private::Construct<FDataflowMathClampNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathClampNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathClampNode>,&UE::CoreUObject::Private::Copy<FDataflowMathClampNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443ed710

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorDivideNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2d0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorDivideNode,&UE::CoreUObject::Private::Construct<FDataflowVectorDivideNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorDivideNode>,&UE::CoreUObject::Private::Destruct<FDataflowVectorDivideNode>,&UE::CoreUObject::Private::Copy<FDataflowVectorDivideNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443eda70

void * __thiscall
FDataflowVectorDotProductNode::_scalar_deleting_destructor_
          (FDataflowVectorDotProductNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443edf20

void * __thiscall
FDataflowMathDivideNode::_scalar_deleting_destructor_(FDataflowMathDivideNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// NewStructOps @ 1443ee1d0

void * __cdecl Z_Construct_UScriptStruct_FDataflowArrayTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowArrayTypes,&UE::CoreUObject::Private::Construct<FDataflowArrayTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowArrayTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443ee3d0

void * __thiscall
FDataflowVectorLengthNode::_scalar_deleting_destructor_
          (FDataflowVectorLengthNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// NewStructOps @ 1443ee640

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathSinNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathSinNode,&UE::CoreUObject::Private::Construct<FDataflowMathSinNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathSinNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathSinNode>,&UE::CoreUObject::Private::Copy<FDataflowMathSinNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443ee7b0

void * __thiscall
FDataflowMathMinimumNode::_scalar_deleting_destructor_(FDataflowMathMinimumNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// NewStructOps @ 1443ee800

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2a0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorDotProductNode,&UE::CoreUObject::Private::Construct<FDataflowVectorDotProductNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorDotProductNode>,&UE::CoreUObject::Private::Destruct<FDataflowVectorDotProductNode>,&UE::CoreUObject::Private::Copy<FDataflowVectorDotProductNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443eed20

void * __thiscall
FDataflowVectorSquaredLengthNode::_scalar_deleting_destructor_
          (FDataflowVectorSquaredLengthNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// NewStructOps @ 1443ef030

void * __cdecl Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowNumericTypes,&UE::CoreUObject::Private::Construct<FDataflowNumericTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowNumericTypes>,&UE::CoreUObject::Private::Destruct<FDataflowNumericTypes>,&UE::CoreUObject::Private::Copy<FDataflowNumericTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443ef0e0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathCosNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathCosNode,&UE::CoreUObject::Private::Construct<FDataflowMathCosNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathCosNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathCosNode>,&UE::CoreUObject::Private::Copy<FDataflowMathCosNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443ef510

void * __thiscall
FDataflowVectorDistanceNode::_scalar_deleting_destructor_
          (FDataflowVectorDistanceNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a0);
  }
  return this;
}

// NewStructOps @ 1443ef5b0

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x280;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorLengthNode,&UE::CoreUObject::Private::Construct<FDataflowVectorLengthNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorLengthNode>,&UE::CoreUObject::Private::Destruct<FDataflowVectorLengthNode>,&UE::CoreUObject::Private::Copy<FDataflowVectorLengthNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443ef670

void * __thiscall
IDataflowCoreModule::_scalar_deleting_destructor_(IDataflowCoreModule *this,uint param_1)

{
  *this = (IDataflowCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 1443efd70

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorTypes,&UE::CoreUObject::Private::Construct<FDataflowVectorTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorTypes>,&UE::CoreUObject::Private::Destruct<FDataflowVectorTypes>,&UE::CoreUObject::Private::Copy<FDataflowVectorTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443efdf0

void * __thiscall
FDataflowVectorCrossProductNode::_scalar_deleting_destructor_
          (FDataflowVectorCrossProductNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// NewStructOps @ 1443efe80

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathTanNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathTanNode,&UE::CoreUObject::Private::Construct<FDataflowMathTanNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathTanNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathTanNode>,&UE::CoreUObject::Private::Copy<FDataflowMathTanNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443f03e0

void * __cdecl
Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x280;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorSquaredLengthNode,&UE::CoreUObject::Private::Construct<FDataflowVectorSquaredLengthNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorSquaredLengthNode>,&UE::CoreUObject::Private::Destruct<FDataflowVectorSquaredLengthNode>,&UE::CoreUObject::Private::Copy<FDataflowVectorSquaredLengthNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f0460

void * __thiscall
FDataflowVectorScaleNode::_scalar_deleting_destructor_(FDataflowVectorScaleNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a0);
  }
  return this;
}

// NewStructOps @ 1443f05f0

void * __cdecl Z_Construct_UScriptStruct_FDataflowStringTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowStringTypes,&UE::CoreUObject::Private::Construct<FDataflowStringTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowStringTypes>,&UE::CoreUObject::Private::Destruct<FDataflowStringTypes>,&UE::CoreUObject::Private::Copy<FDataflowStringTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443f0870

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathArcSinNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathArcSinNode,&UE::CoreUObject::Private::Construct<FDataflowMathArcSinNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathArcSinNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathArcSinNode>,&UE::CoreUObject::Private::Copy<FDataflowMathArcSinNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f0ac0

void * __thiscall
FDataflowVectorNormalize::_scalar_deleting_destructor_(FDataflowVectorNormalize *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// NewStructOps @ 1443f0e50

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2a0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorDistanceNode,&UE::CoreUObject::Private::Construct<FDataflowVectorDistanceNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorDistanceNode>,&UE::CoreUObject::Private::Destruct<FDataflowVectorDistanceNode>,&UE::CoreUObject::Private::Copy<FDataflowVectorDistanceNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f0f70

void * __thiscall
FDataflowReRouteNode::_scalar_deleting_destructor_(FDataflowReRouteNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x250);
  }
  return this;
}

// NewProp_Value_SetBit @ 1443f1060

void __cdecl
Z_Construct_UScriptStruct_FDataflowBoolTypes_Statics::NewProp_Value_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 1443f1070

void * __cdecl Z_Construct_UScriptStruct_FDataflowBoolTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowBoolTypes,&UE::CoreUObject::Private::Construct<FDataflowBoolTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowBoolTypes>,&UE::CoreUObject::Private::Destruct<FDataflowBoolTypes>,&UE::CoreUObject::Private::Copy<FDataflowBoolTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443f10b0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathArcCosNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathArcCosNode,&UE::CoreUObject::Private::Construct<FDataflowMathArcCosNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathArcCosNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathArcCosNode>,&UE::CoreUObject::Private::Copy<FDataflowMathArcCosNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f1660

void * __thiscall
FDataflowBranchNode::_scalar_deleting_destructor_(FDataflowBranchNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x250);
  }
  return this;
}

// NewStructOps @ 1443f20a0

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2b0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorCrossProductNode,&UE::CoreUObject::Private::Construct<FDataflowVectorCrossProductNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorCrossProductNode>,&UE::CoreUObject::Private::Destruct<FDataflowVectorCrossProductNode>,&UE::CoreUObject::Private::Copy<FDataflowVectorCrossProductNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f2100

void * __thiscall
FDataflowMathMinimumNode_v2::_scalar_deleting_destructor_
          (FDataflowMathMinimumNode_v2 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// NewStructOps @ 1443f2770

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathArcTanNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathArcTanNode,&UE::CoreUObject::Private::Construct<FDataflowMathArcTanNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathArcTanNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathArcTanNode>,&UE::CoreUObject::Private::Copy<FDataflowMathArcTanNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443f27b0

void * __cdecl Z_Construct_UScriptStruct_FDataflowTransformTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowTransformTypes,&UE::CoreUObject::Private::Construct<FDataflowTransformTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowTransformTypes>,&UE::CoreUObject::Private::Destruct<FDataflowTransformTypes>,&UE::CoreUObject::Private::Copy<FDataflowTransformTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f2bc0

void * __thiscall
FDataflowMathMaximumNode::_scalar_deleting_destructor_(FDataflowMathMaximumNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// NewStructOps @ 1443f2d00

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2a0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorScaleNode,&UE::CoreUObject::Private::Construct<FDataflowVectorScaleNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorScaleNode>,&UE::CoreUObject::Private::Destruct<FDataflowVectorScaleNode>,&UE::CoreUObject::Private::Copy<FDataflowVectorScaleNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443f38d0

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathArcTan2Node_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathArcTan2Node,&UE::CoreUObject::Private::Construct<FDataflowMathArcTan2Node>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathArcTan2Node>,&UE::CoreUObject::Private::Destruct<FDataflowMathArcTan2Node>,&UE::CoreUObject::Private::Copy<FDataflowMathArcTan2Node>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443f3910

void * __cdecl Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowStringConvertibleTypes,&UE::CoreUObject::Private::Construct<FDataflowStringConvertibleTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowStringConvertibleTypes>,&UE::CoreUObject::Private::Destruct<FDataflowStringConvertibleTypes>,&UE::CoreUObject::Private::Copy<FDataflowStringConvertibleTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f3950

void * __thiscall
FDataflowMathMaximumNode_v2::_scalar_deleting_destructor_
          (FDataflowMathMaximumNode_v2 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443f3d40

void * __thiscall
FDataflowMathReciprocalNode::_scalar_deleting_destructor_
          (FDataflowMathReciprocalNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// NewStructOps @ 1443f3d80

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x290;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorNormalize,&UE::CoreUObject::Private::Construct<FDataflowVectorNormalize>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorNormalize>,&UE::CoreUObject::Private::Destruct<FDataflowVectorNormalize>,&UE::CoreUObject::Private::Copy<FDataflowVectorNormalize>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443f3e40

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathDegToRadNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathDegToRadNode,&UE::CoreUObject::Private::Construct<FDataflowMathDegToRadNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathDegToRadNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathDegToRadNode>,&UE::CoreUObject::Private::Copy<FDataflowMathDegToRadNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443f3ed0

void * __cdecl
Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowUObjectConvertibleTypes,&UE::CoreUObject::Private::Construct<FDataflowUObjectConvertibleTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowUObjectConvertibleTypes>,&UE::CoreUObject::Private::Destruct<FDataflowUObjectConvertibleTypes>,&UE::CoreUObject::Private::Copy<FDataflowUObjectConvertibleTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f42a0

void * __thiscall
FDataflowMathSquareNode::_scalar_deleting_destructor_(FDataflowMathSquareNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// NewStructOps @ 1443f4a20

void * __cdecl Z_Construct_UScriptStruct_FDataflowMathRadToDegNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowMathRadToDegNode,&UE::CoreUObject::Private::Construct<FDataflowMathRadToDegNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowMathRadToDegNode>,&UE::CoreUObject::Private::Destruct<FDataflowMathRadToDegNode>,&UE::CoreUObject::Private::Copy<FDataflowMathRadToDegNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f4a60

void * __thiscall
FDataflowMathCubeNode::_scalar_deleting_destructor_(FDataflowMathCubeNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// NewStructOps @ 1443f4b50

void * __cdecl Z_Construct_UScriptStruct_FDataflowSelectionTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowSelectionTypes,&UE::CoreUObject::Private::Construct<FDataflowSelectionTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowSelectionTypes>,&UE::CoreUObject::Private::Destruct<FDataflowSelectionTypes>,&UE::CoreUObject::Private::Copy<FDataflowSelectionTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f5060

void * __thiscall
FDataflowMathSquareRootNode::_scalar_deleting_destructor_
          (FDataflowMathSquareRootNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443f58d0

void * __thiscall
FDataflowSelectNode::_scalar_deleting_destructor_(FDataflowSelectNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// NewStructOps @ 1443f5cd0

void * __cdecl Z_Construct_UScriptStruct_FDataflowVectorArrayTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowVectorArrayTypes,&UE::CoreUObject::Private::Construct<FDataflowVectorArrayTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowVectorArrayTypes>,&UE::CoreUObject::Private::Destruct<FDataflowVectorArrayTypes>,&UE::CoreUObject::Private::Copy<FDataflowVectorArrayTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f5d10

void * __thiscall
FDataflowMathInverseSquareRootNode::_scalar_deleting_destructor_
          (FDataflowMathInverseSquareRootNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443f6170

void * __thiscall
FDataflowPrintNode::_scalar_deleting_destructor_(FDataflowPrintNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).Value.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443f64f0

void * __thiscall
FDataflowMathNegateNode::_scalar_deleting_destructor_(FDataflowMathNegateNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443f6920

void * __thiscall
FDataflowForceDependencyNode::_scalar_deleting_destructor_
          (FDataflowForceDependencyNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x250);
  }
  return this;
}

// NewStructOps @ 1443f69a0

void * __cdecl Z_Construct_UScriptStruct_FDataflowNumericArrayTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowNumericArrayTypes,&UE::CoreUObject::Private::Construct<FDataflowNumericArrayTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowNumericArrayTypes>,&UE::CoreUObject::Private::Destruct<FDataflowNumericArrayTypes>,&UE::CoreUObject::Private::Copy<FDataflowNumericArrayTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f6da0

void * __thiscall
FDataflowMathAbsNode::_scalar_deleting_destructor_(FDataflowMathAbsNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// NewStructOps @ 1443f6e90

void * __cdecl Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x250;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowReRouteNode,&UE::CoreUObject::Private::Construct<FDataflowReRouteNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowReRouteNode>,&UE::CoreUObject::Private::Destruct<FDataflowReRouteNode>,&UE::CoreUObject::Private::Copy<FDataflowReRouteNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f7360

void * __thiscall
FDataflowMathFloorNode::_scalar_deleting_destructor_(FDataflowMathFloorNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// Z_Construct_UEnum_DataflowCore_EDataflowImageResolution @ 1443f7460

UEnum * __cdecl Z_Construct_UEnum_DataflowCore_EDataflowImageResolution(void)

{
  if (Z_Registration_Info_UEnum_EDataflowImageResolution.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDataflowImageResolution.InnerSingleton,
               &Z_Construct_UEnum_DataflowCore_EDataflowImageResolution_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDataflowImageResolution.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDataflowImage @ 1443f7510

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowImage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImage.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowImage.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowImage_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowImage.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowImage.InnerSingleton;
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

// NewStructOps @ 1443f7590

void * __cdecl Z_Construct_UScriptStruct_FDataflowStringArrayTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowStringArrayTypes,&UE::CoreUObject::Private::Construct<FDataflowStringArrayTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowStringArrayTypes>,&UE::CoreUObject::Private::Destruct<FDataflowStringArrayTypes>,&UE::CoreUObject::Private::Copy<FDataflowStringArrayTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EDataflowImageResolution_StaticEnum @ 1443f76e0

UEnum * __cdecl EDataflowImageResolution_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataflowImageResolution.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UEnum_EDataflowImageResolution.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DataflowCore_EDataflowImageResolution,(UObject *)pUVar1,
                       L"EDataflowImageResolution");
  }
  return Z_Registration_Info_UEnum_EDataflowImageResolution.OuterSingleton;
}

// NewProp_bCondition_SetBit @ 1443f7aa0

void __cdecl
Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::NewProp_bCondition_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24a) = 1;
  return;
}

// NewStructOps @ 1443f7b70

void * __cdecl Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x250;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowBranchNode,&UE::CoreUObject::Private::Construct<FDataflowBranchNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowBranchNode>,&UE::CoreUObject::Private::Destruct<FDataflowBranchNode>,&UE::CoreUObject::Private::Copy<FDataflowBranchNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f7bb0

void * __thiscall
FDataflowMathCeilNode::_scalar_deleting_destructor_(FDataflowMathCeilNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// EDataflowImageChannel_StaticEnum @ 1443f7cb0

UEnum * __cdecl EDataflowImageChannel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataflowImageChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UEnum_EDataflowImageChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DataflowCore_EDataflowImageChannel,(UObject *)pUVar1,
                       L"EDataflowImageChannel");
  }
  return Z_Registration_Info_UEnum_EDataflowImageChannel.OuterSingleton;
}

// NewStructOps @ 1443f8020

void * __cdecl Z_Construct_UScriptStruct_FDataflowImage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowImage,&UE::CoreUObject::Private::Construct<FDataflowImage>,&UE::CoreUObject::Private::ConstructForTests<FDataflowImage>,&UE::CoreUObject::Private::Destruct<FDataflowImage>,&UE::CoreUObject::Private::SerializeArchive<FDataflowImage>,&UE::CoreUObject::Private::Copy<FDataflowImage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f80d0

void * __thiscall
FDataflowMathRoundNode::_scalar_deleting_destructor_(FDataflowMathRoundNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// NewStructOps @ 1443f8180

void * __cdecl Z_Construct_UScriptStruct_FDataflowBoolArrayTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowBoolArrayTypes,&UE::CoreUObject::Private::Construct<FDataflowBoolArrayTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowBoolArrayTypes>,&UE::CoreUObject::Private::Destruct<FDataflowBoolArrayTypes>,&UE::CoreUObject::Private::Copy<FDataflowBoolArrayTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1443f8530

void * __cdecl Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x260;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowSelectNode,&UE::CoreUObject::Private::Construct<FDataflowSelectNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowSelectNode>,&UE::CoreUObject::Private::Destruct<FDataflowSelectNode>,&UE::CoreUObject::Private::Copy<FDataflowSelectNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f8570

void * __thiscall
FDataflowMathTruncNode::_scalar_deleting_destructor_(FDataflowMathTruncNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// NewStructOps @ 1443f87f0

void * __cdecl Z_Construct_UScriptStruct_FDataflowTransformArrayTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowTransformArrayTypes,&UE::CoreUObject::Private::Construct<FDataflowTransformArrayTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowTransformArrayTypes>,&UE::CoreUObject::Private::Destruct<FDataflowTransformArrayTypes>,&UE::CoreUObject::Private::Copy<FDataflowTransformArrayTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f8950

void * __thiscall
FDataflowMathFracNode::_scalar_deleting_destructor_(FDataflowMathFracNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// NewStructOps @ 1443f8b10

void * __cdecl Z_Construct_UScriptStruct_FDataflowPrintNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 600;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowPrintNode,&UE::CoreUObject::Private::Construct<FDataflowPrintNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowPrintNode>,&UE::CoreUObject::Private::Destruct<FDataflowPrintNode>,&UE::CoreUObject::Private::Copy<FDataflowPrintNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f8f50

void * __thiscall
FDataflowMathPowNode::_scalar_deleting_destructor_(FDataflowMathPowNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// NewStructOps @ 1443f90f0

void * __cdecl Z_Construct_UScriptStruct_FDataflowRotationTypes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowRotationTypes,&UE::CoreUObject::Private::Construct<FDataflowRotationTypes>,&UE::CoreUObject::Private::ConstructForTests<FDataflowRotationTypes>,&UE::CoreUObject::Private::Destruct<FDataflowRotationTypes>,&UE::CoreUObject::Private::Copy<FDataflowRotationTypes>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f9670

void * __thiscall
FDataflowMathLogXNode::_scalar_deleting_destructor_(FDataflowMathLogXNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// NewStructOps @ 1443f9770

void * __cdecl Z_Construct_UScriptStruct_FDataflowForceDependencyNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x250;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowForceDependencyNode,&UE::CoreUObject::Private::Construct<FDataflowForceDependencyNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowForceDependencyNode>,&UE::CoreUObject::Private::Destruct<FDataflowForceDependencyNode>,&UE::CoreUObject::Private::Copy<FDataflowForceDependencyNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443f9d00

void * __thiscall
FDataflowMathLogNode::_scalar_deleting_destructor_(FDataflowMathLogNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443fa0f0

void * __thiscall
FDataflowMathExpNode::_scalar_deleting_destructor_(FDataflowMathExpNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443fa470

void * __thiscall
FDataflowMathSignNode::_scalar_deleting_destructor_(FDataflowMathSignNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443fa980

void * __thiscall
FDataflowMathOneMinusNode::_scalar_deleting_destructor_
          (FDataflowMathOneMinusNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443fb480

void * __thiscall
FDataflowMathConstantNode::_scalar_deleting_destructor_
          (FDataflowMathConstantNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443fb790

void * __thiscall
FDataflowImageFromColorNode::_scalar_deleting_destructor_
          (FDataflowImageFromColorNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Image).Image.RawData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x288);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443fc040

void * __thiscall
FDataflowMathClampNode::_scalar_deleting_destructor_(FDataflowMathClampNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443fc290

void * __thiscall
FDataflowImageSplitChannelsNode::_scalar_deleting_destructor_
          (FDataflowImageSplitChannelsNode *this,uint param_1)

{
  ~FDataflowImageSplitChannelsNode(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// Z_Construct_UScriptStruct_FDataflowConnection @ 1443fc720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowConnection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowConnection.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowConnection.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowConnection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowConnection.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowConnection.InnerSingleton;
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

// NewStructOps @ 1443fc7e0

void * __cdecl Z_Construct_UScriptStruct_FDataflowConnection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowConnection,&UE::CoreUObject::Private::Construct<FDataflowConnection>,&UE::CoreUObject::Private::ConstructForTests<FDataflowConnection>,&UE::CoreUObject::Private::Destruct<FDataflowConnection>,&UE::CoreUObject::Private::Copy<FDataflowConnection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443fcac0

void * __thiscall
FDataflowMathSinNode::_scalar_deleting_destructor_(FDataflowMathSinNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// NewStructOps @ 1443fcf50

void * __cdecl Z_Construct_UScriptStruct_FDataflowFreezeActions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowFreezeActions,&UE::CoreUObject::Private::Construct<FDataflowFreezeActions>,&UE::CoreUObject::Private::ConstructForTests<FDataflowFreezeActions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443fcf90

void * __thiscall
FDataflowImageCombineChannelsNode::_scalar_deleting_destructor_
          (FDataflowImageCombineChannelsNode *this,uint param_1)

{
  ~FDataflowImageCombineChannelsNode(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x318);
  }
  return this;
}

// Z_Construct_UEnum_DataflowCore_EDataflowImageCombineResolutionOption @ 1443fd2f0

UEnum * __cdecl Z_Construct_UEnum_DataflowCore_EDataflowImageCombineResolutionOption(void)

{
  if (Z_Registration_Info_UEnum_EDataflowImageCombineResolutionOption.InnerSingleton == (UEnum *)0x0
     ) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDataflowImageCombineResolutionOption.InnerSingleton,
               &Z_Construct_UEnum_DataflowCore_EDataflowImageCombineResolutionOption_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EDataflowImageCombineResolutionOption.InnerSingleton;
}

// `scalar_deleting_destructor' @ 1443fd330

void * __thiscall
FDataflowMathCosNode::_scalar_deleting_destructor_(FDataflowMathCosNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// NewStructOps @ 1443fd370

void * __cdecl Z_Construct_UScriptStruct_FDataflowImageFromColorNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x288;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowImageFromColorNode,&UE::CoreUObject::Private::Construct<FDataflowImageFromColorNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowImageFromColorNode>,&UE::CoreUObject::Private::Destruct<FDataflowImageFromColorNode>,&UE::CoreUObject::Private::Copy<FDataflowImageFromColorNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOverrideColor_SetBit @ 1443fd6b0

void __cdecl
Z_Construct_UScriptStruct_FDataflowNode_Statics::NewProp_bOverrideColor_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_bActive_SetBit @ 1443fd700

void __cdecl Z_Construct_UScriptStruct_FDataflowNode_Statics::NewProp_bActive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e8) = 1;
  return;
}

// NewProp_bIsFrozen_SetBit @ 1443fd940

void __cdecl
Z_Construct_UScriptStruct_FDataflowNode_Statics::NewProp_bIsFrozen_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x200) = 1;
  return;
}

// NewStructOps @ 1443fda60

void * __cdecl Z_Construct_UScriptStruct_FDataflowNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x248;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowNode,&UE::CoreUObject::Private::Construct<FDataflowNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowNode>,&UE::CoreUObject::Private::Destruct<FDataflowNode>,&UE::CoreUObject::Private::Copy<FDataflowNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1443fde80

void * __thiscall
FDataflowMathTanNode::_scalar_deleting_destructor_(FDataflowMathTanNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443fe9b0

void * __thiscall
FDataflowMathArcSinNode::_scalar_deleting_destructor_(FDataflowMathArcSinNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// NewStructOps @ 1443fea00

void * __cdecl Z_Construct_UScriptStruct_FDataflowImageSplitChannelsNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x310;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowImageSplitChannelsNode,&UE::CoreUObject::Private::Construct<FDataflowImageSplitChannelsNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowImageSplitChannelsNode>,&UE::CoreUObject::Private::Destruct<FDataflowImageSplitChannelsNode>,&UE::CoreUObject::Private::Copy<FDataflowImageSplitChannelsNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDataflowGraphInterface @ 1443fea40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataflowGraphInterface(void)

{
  if (Z_Registration_Info_UClass_UDataflowGraphInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataflowGraphInterface.OuterSingleton,
               &Z_Construct_UClass_UDataflowGraphInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataflowGraphInterface.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1443ff0f0

void * __thiscall
FDataflowMathArcCosNode::_scalar_deleting_destructor_(FDataflowMathArcCosNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// EDataflowImageCombineResolutionOption_StaticEnum @ 1443ff8a0

UEnum * __cdecl EDataflowImageCombineResolutionOption_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataflowImageCombineResolutionOption.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UEnum_EDataflowImageCombineResolutionOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DataflowCore_EDataflowImageCombineResolutionOption,
                       (UObject *)pUVar1,L"EDataflowImageCombineResolutionOption");
  }
  return Z_Registration_Info_UEnum_EDataflowImageCombineResolutionOption.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1443ff8f0

void * __thiscall
FDataflowMathArcTanNode::_scalar_deleting_destructor_(FDataflowMathArcTanNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// NewStructOps @ 1443ffac0

void * __cdecl
Z_Construct_UScriptStruct_FDataflowImageCombineChannelsNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x318;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowImageCombineChannelsNode,&UE::CoreUObject::Private::Construct<FDataflowImageCombineChannelsNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowImageCombineChannelsNode>,&UE::CoreUObject::Private::Destruct<FDataflowImageCombineChannelsNode>,&UE::CoreUObject::Private::Copy<FDataflowImageCombineChannelsNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 144400120

void * __thiscall
FDataflowMathArcTan2Node::_scalar_deleting_destructor_(FDataflowMathArcTan2Node *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444001a0

void * __thiscall
FDataflowOverrideNode::_scalar_deleting_destructor_(FDataflowOverrideNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDataflowOverrideNode__6B_;
  pFVar1 = (this->Default).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444005b0

void * __thiscall
FDataflowMathDegToRadNode::_scalar_deleting_destructor_
          (FDataflowMathDegToRadNode *this,uint param_1)

{
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// NewProp_IsOverriden_SetBit @ 144400600

void __cdecl
Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::NewProp_IsOverriden_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x260) = 1;
  return;
}

// NewStructOps @ 1444006c0

void * __cdecl Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x268;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDataflowOverrideNode,&UE::CoreUObject::Private::Construct<FDataflowOverrideNode>,&UE::CoreUObject::Private::ConstructForTests<FDataflowOverrideNode>,&UE::CoreUObject::Private::Destruct<FDataflowOverrideNode>,&UE::CoreUObject::Private::Copy<FDataflowOverrideNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// FLink,TSizedDefaultAllocator<32>_> @ 144405730

FArchive * __cdecl
operator<<<UE::Dataflow::FLink_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<UE::Dataflow::FLink,TSizedDefaultAllocator<32>_> *param_2)

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
  FGuid *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
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
                (0x40,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x40001)) {
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
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pFVar10 = (FGuid *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x40);
              pFVar7 = ::operator<<(param_1,pFVar10);
              pFVar7 = ::operator<<(pFVar7,pFVar10 + 2);
              pFVar7 = ::operator<<(pFVar7,pFVar10 + 1);
              ::operator<<(pFVar7,pFVar10 + 3);
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::Dataflow::FLink,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x440,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FGuid *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x40);
              DefaultConstructItems<UE::Dataflow::FLink,int>(pFVar10,1);
              pFVar7 = ::operator<<(param_1,pFVar10);
              pFVar7 = ::operator<<(pFVar7,pFVar10 + 2);
              pFVar7 = ::operator<<(pFVar7,pFVar10 + 1);
              ::operator<<(pFVar7,pFVar10 + 3);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
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

// Async<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>_> @ 14440d200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<bool> * __cdecl
Async<_FDataflowOutput::EvaluateParallel_::__l2::<lambda_1>_>
          (TFuture<bool> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<FRunnableThread_*> *pTVar6;
  bool bVar7;
  atomic<unsigned_char> aVar8;
  int iVar9;
  FTaskBase *pFVar10;
  TFuture<bool> *pTVar11;
  FTaskBase *pFVar12;
  FTSTicker *this;
  undefined8 uVar13;
  FTaskBase *pFVar14;
  FRunnableThread *pFVar15;
  undefined8 *puVar16;
  code **ppcVar17;
  FPipe *pFVar18;
  FSharedReferencer<1> FVar19;
  longlong *plVar20;
  ForAnyElementType FVar21;
  FTaskBase *pFVar22;
  FTaskBase *pFVar23;
  Type TVar24;
  FTaskBase *pFVar25;
  FTaskBase *this_00;
  undefined1 auStackY_1d8 [32];
  EExtendedTaskPriority local_198;
  ETaskPriority local_197 [7];
  FTaskBase *local_190;
  FTaskBase *local_188;
  TFuture<bool> *local_180;
  FTaskBase *local_178;
  FRunnableThread *local_170;
  FRunnableThread *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  FContext *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  FTaskBase *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_e8.TaskCount = (atomic<unsigned___int64>)param_2->__this;
  local_e8.EmptyEventRef.Object = (TEventCount<unsigned_int> *)param_2->Context;
  pFVar23 = (FTaskBase *)0x0;
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FDataflowOutput::EvaluateParallel'::`2'::<lambda_1>,1,0>::_vftable_;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>,bool>::Call;
  local_190 = (FTaskBase *)((ulonglong)local_190 & 0xffffffff00000000);
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_180 = __return_storage_ptr__;
  local_178 = (FTaskBase *)param_3;
  pFVar10 = operator_new(0x90);
  if (pFVar10 == (FTaskBase *)0x0) {
    local_188 = (FTaskBase *)0x0;
    local_190 = (FTaskBase *)0x0;
    this_00 = (FTaskBase *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar10 = pFVar23;
  }
  else {
    *(atomic<int> *)&pFVar10->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar10->_padding_)[1] = (atomic<int>)0x1;
    pFVar10->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TFutureState__N___00_SharedPointerInternals__6B_;
    FFutureState::FFutureState((FFutureState *)&pFVar10->_padding_,param_3);
    this_00 = (FTaskBase *)&pFVar10->_padding_;
    local_188 = pFVar10;
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<bool> *)(*pcVar5)();
      return pTVar11;
    }
    LOCK();
    *(atomic<int> *)&pFVar10->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
    UNLOCK();
    local_190 = pFVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<bool> *)(*pcVar5)();
      return pTVar11;
    }
    LOCK();
    *(atomic<int> *)&pFVar10->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
    UNLOCK();
  }
  pFVar22 = this_00;
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar24 = GameThread;
    if (param_1 == TaskGraph) {
      TVar24 = AnyNormalThreadNormalTask;
    }
    pFVar12 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar22 = pFVar23;
    if (pFVar12 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar12,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar12->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask__N____6B_;
      pFVar22 = pFVar12;
    }
    pFVar22[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar22[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar22[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar22[1]._padding_ = (longlong)local_e8.TaskCount;
    local_190 = (FTaskBase *)0x0;
    pFVar22[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar22[1]._padding_ != 0) {
      local_f8 = pFVar23;
    }
    *(FTaskBase **)&pFVar22[1].StateChangeEvent = local_188;
    pFVar22[1].Pipe = (FPipe *)this_00;
    *(undefined1 *)&pFVar22[1].ExecutingThreadId = 1;
    *(Type *)&pFVar22[1].TraceId = TVar24;
    UE::Tasks::Private::TranslatePriority(TVar24,local_197,&local_198);
    UE::Tasks::Private::FTaskBase::Init(pFVar22,L"GraphTask",local_197[0],local_198,None);
    if (pFVar22 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar22->RefCount = (atomic<unsigned_int>)((int)pFVar22->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar22,0x130);
      LOCK();
      paVar1 = &pFVar22->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar22->_padding_)(pFVar22,1);
      }
    }
    goto LAB_14440d48c;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = (FContext *)local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_190 = (FTaskBase *)0x0;
    local_88 = 1;
    local_78[0] = (code *)0x0;
    local_98 = this_00;
    local_90 = pFVar10;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FDataflowOutput::EvaluateParallel'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar17 = local_50 + 2;
    *ppcVar17 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar17 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (FTaskBase *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar17 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
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
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<bool> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar18 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar18 = local_a0;
      }
      (**(code **)((longlong)pFVar18->LastTask + 0x10))();
    }
LAB_14440d48c:
    pTVar11 = local_180;
    *(FTaskBase **)local_180 = this_00;
    *(FTaskBase **)&local_180->field_0x8 = pFVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    goto LAB_14440dc9f;
  case Thread:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar7) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pFVar14 = operator_new(0x70);
      pFVar12 = local_178;
      pFVar25 = pFVar23;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<bool> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar6 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<bool> *)(*pcVar5)();
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
        local_190 = (FTaskBase *)0x0;
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable__N__6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar14->_padding_ = (longlong)local_e8.LastTask;
        pFVar14->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&(pFVar14->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar23;
        }
        *(TReferenceControllerBase<1> **)
         &(pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_160.State.SharedReferenceCount.ReferenceController;
        *(FTaskBase **)&(pFVar14->StateChangeEvent).Count = this_00;
        *(FTaskBase **)&pFVar14->ExecutingThreadId = pFVar10;
        (pFVar14->TraceId).field_0x0 = 1;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar6;
        pFVar12 = pFVar23;
        pFVar22 = pFVar23;
        pFVar23 = (FTaskBase *)&DAT_00000001;
        pFVar25 = pFVar14;
      }
      if (pFVar23 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar12);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar21.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar15 = FRunnableThread::Create
                          ((FRunnable *)pFVar25,(wchar_t *)FVar21.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_170 = pFVar15;
      if ((pFVar15 == (FRunnableThread *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<bool> *)(*pcVar5)();
        return pTVar11;
      }
      iVar9 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar9 != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<bool> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_170);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<bool> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
    }
    else {
LAB_14440d865:
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar23 = local_f8;
      FVar19.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar19.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar13 = (**(code **)((longlong)((FPipe *)FVar19.ReferenceController)->LastTask + 8))();
      aVar8 = (atomic<unsigned_char>)(*(code *)pFVar23)(uVar13);
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<bool> *)(*pcVar5)();
          return pTVar11;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<bool> *)(*pcVar5)();
          return pTVar11;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<bool> *)(*pcVar5)();
        return pTVar11;
      }
      (this_00->Prerequisites).Mutex.State = aVar8;
      FFutureState::MarkComplete((FFutureState *)this_00);
    }
    break;
  case ThreadIfForkSafe:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if ((!bVar7) && (bVar7 = FForkProcessHelper::IsForkedMultithreadInstance(), !bVar7))
    goto LAB_14440d865;
    TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
    pFVar14 = operator_new(0x70);
    pFVar12 = local_178;
    pFVar25 = pFVar23;
    if (pFVar14 != (FTaskBase *)0x0) {
      if ((local_148.bFutureRetrieved != false) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!bFutureRetrieved",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x24d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<bool> *)(*pcVar5)();
        return pTVar11;
      }
      pTVar6 = local_148.State.Object;
      local_148.bFutureRetrieved = true;
      if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x283,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<bool> *)(*pcVar5)();
        return pTVar11;
      }
      if (local_148.State.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_190 = (FTaskBase *)0x0;
      pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable__N__6B_;
      pFVar14->_padding_ = (longlong)local_f8;
      pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
      pFVar14->_padding_ = (longlong)local_e8.LastTask;
      pFVar14->_padding_ = (longlong)local_e8.TaskCount;
      *(TEventCount<unsigned_int> **)&(pFVar14->RefCount).field_0x0 = local_e8.EmptyEventRef.Object;
      if (pFVar14->_padding_ != 0) {
        local_f8 = pFVar23;
      }
      *(TReferenceControllerBase<1> **)
       &(pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
           local_148.State.SharedReferenceCount.ReferenceController;
      *(FTaskBase **)&(pFVar14->StateChangeEvent).Count = this_00;
      *(FTaskBase **)&pFVar14->ExecutingThreadId = pFVar10;
      (pFVar14->TraceId).field_0x0 = 1;
      *(TFutureState<FRunnableThread_*> **)
       (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar6;
      pFVar12 = pFVar23;
      pFVar22 = pFVar23;
      pFVar23 = (FTaskBase *)&DAT_00000002;
      pFVar25 = pFVar14;
    }
    if (pFVar23 != (FTaskBase *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar12);
    }
    FAsyncThreadIndex::GetNext();
    FString::PrintfImpl(&local_118,L"TAsync %d");
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar21.Data = local_118.Data.AllocatorInstance.Data;
    }
    pFVar15 = FForkProcessHelper::CreateForkableThread
                        ((FRunnable *)pFVar25,(wchar_t *)FVar21.Data,0,TPri_Normal,
                         0xffffffffffffffff,None,false);
    local_168 = pFVar15;
    if ((pFVar15 == (FRunnableThread *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("RunnableThread != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x161,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<bool> *)(*pcVar5)();
      return pTVar11;
    }
    iVar9 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
    if ((iVar9 != 0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x162,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<bool> *)(*pcVar5)();
      return pTVar11;
    }
    TPromise<FRunnableThread_*>::SetValue(&local_148,&local_168);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
        ((local_148.State.Object)->field_0x68 == '\0')) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<bool> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.State.SharedReferenceCount.ReferenceController);
    break;
  case ThreadPool:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (!bVar7) goto LAB_14440d865;
    if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("GThreadPool != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x16f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<bool> *)(*pcVar5)();
      return pTVar11;
    }
    pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
    puVar16 = operator_new(0x60);
    if (puVar16 == (undefined8 *)0x0) {
      (*pcVar5)(GThreadPool,0,3);
    }
    else {
      puVar16[1] = 0;
      local_190 = (FTaskBase *)0x0;
      *puVar16 = &___7__TAsyncQueuedWork__N__6B_;
      puVar16[2] = local_f8;
      puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
      *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
      *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
      *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
      *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
      puVar16[6] = local_e8.EmptyEventRef.Object;
      if (puVar16[2] != 0) {
        local_f8 = pFVar23;
      }
      puVar16[8] = this_00;
      puVar16[9] = pFVar10;
      *(undefined1 *)(puVar16 + 10) = 1;
      (*pcVar5)(GThreadPool,puVar16,3);
      pFVar22 = pFVar23;
    }
    break;
  default:
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<bool> *)(*pcVar5)();
      return pTVar11;
    }
  }
  pTVar11 = local_180;
  *(FTaskBase **)local_180 = this_00;
  *(FTaskBase **)&local_180->field_0x8 = pFVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((pFVar22 != (FTaskBase *)0x0) &&
      ((char)(pFVar22->Prerequisites).Prerequisites.ArrayNum == '\0')) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<bool> *)(*pcVar5)();
    return pTVar11;
  }
LAB_14440dc9f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_190);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar19.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar19.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar19.ReferenceController)->LastTask + 0x10))();
  }
  if (local_178->_padding_ != 0) {
    plVar20 = &local_178->_padding_;
    if ((longlong *)local_178->_padding_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_178->_padding_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  return pTVar11;
}

// ConstructItems<FDataflowConnection_*,FDataflowInput_*,int> @ 14440ded0

void __cdecl
ConstructItems<FDataflowConnection_*,FDataflowInput_*,int>
          (void *param_1,FDataflowInput **param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FDataflowInput **)(lVar1 + (longlong)param_2) = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Math::TIntPoint<int>,int> @ 14440df00

void __cdecl DefaultConstructItems<UE::Math::TIntPoint<int>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::Math::TQuat<double>,int> @ 14440df10

void __cdecl DefaultConstructItems<UE::Math::TQuat<double>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::Math::TRotator<double>,int> @ 14440df20

void __cdecl DefaultConstructItems<UE::Math::TRotator<double>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::Math::TVector4<double>,int> @ 14440df30

void __cdecl DefaultConstructItems<UE::Math::TVector4<double>,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0x3ff0000000000000;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FDataflowAnyType,int> @ 14440df70

void __cdecl DefaultConstructItems<FDataflowAnyType,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FDataflowNumericTypes,int> @ 14440df80

void __cdecl DefaultConstructItems<FDataflowNumericTypes,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::Dataflow::FLink,int> @ 14440dfa0

void __cdecl DefaultConstructItems<UE::Dataflow::FLink,int>(void *param_1,int param_2)

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
      puVar1[6] = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Dataflow::FContextAssetStore::FAssetData,int> @ 14440e020

void __cdecl
DestructItems<UE::Dataflow::FContextAssetStore::FAssetData,int>(FAssetData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->TransientPath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->PersistentPath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Dataflow::FAnyTypesRegistry::FAutoConvertNodeInfo,int> @ 14440e070

void __cdecl
DestructItems<UE::Dataflow::FAnyTypesRegistry::FAutoConvertNodeInfo,int>
          (FAutoConvertNodeInfo *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->TypeFilterFunction).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Dataflow::FFactoryParameters,int> @ 14440e0c0

void __cdecl
DestructItems<UE::Dataflow::FFactoryParameters,int>(FFactoryParameters *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ToolTip;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((((TSharedPtr<FDataflowNode,1> *)(pFVar2 + 2))->SharedReferenceCount).
                 ReferenceController);
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FDataflowNode,1>,int> @ 14440e120

void __cdecl
DestructItems<TSharedPtr<FDataflowNode,1>,int>(TSharedPtr<FDataflowNode,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`UE::Dataflow::FContextAssetStore::FindByTransientPath'::__l2::<lambda_1>_> @ 144410be0

FAssetData * __thiscall
TArray<UE::Dataflow::FContextAssetStore::FAssetData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Dataflow::FContextAssetStore::FindByTransientPath_::__l2::<lambda_1>_>
          (TArray<UE::Dataflow::FContextAssetStore::FAssetData,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1)

{
  FAssetData *pFVar1;
  int iVar2;
  int iVar3;
  FAssetData *pFVar4;
  bool bVar5;
  
  pFVar4 = (FAssetData *)(this->AllocatorInstance).Data;
  pFVar1 = pFVar4 + this->ArrayNum;
  while( true ) {
    if (pFVar4 == pFVar1) {
      return (FAssetData *)0x0;
    }
    iVar3 = (pFVar4->TransientPath).Data.ArrayNum;
    iVar2 = ((param_1.TransientAssetPath)->Data).ArrayNum;
    if (iVar3 == iVar2) {
      if (iVar3 < 2) {
        return pFVar4;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar4->TransientPath).Data.AllocatorInstance.Data,
                         (wchar_t *)((param_1.TransientAssetPath)->Data).AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
    }
    else {
      bVar5 = iVar3 + iVar2 == 1;
    }
    if (bVar5) break;
    pFVar4 = pFVar4 + 1;
  }
  return pFVar4;
}

// FindFProperty<FMapProperty> @ 144410c70

FMapProperty * __cdecl
FindFProperty<FMapProperty>(UStruct *param_1,FName param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  FMapProperty *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  FName FVar5;
  FName FVar6;
  TFieldIterator<FMapProperty> local_28;
  
  if (param_2 == (FName)0x0) {
    return (FMapProperty *)0x0;
  }
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = param_1->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar4->_padding_)) goto LAB_144410d00;
  }
  local_28.bIncludeInterface = false;
LAB_144410d00:
  TFieldIterator<FMapProperty>::IterateToNext(&local_28);
  pFVar2 = (FMapProperty *)local_28.Field;
  while( true ) {
    if (pFVar2 == (FMapProperty *)0x0) {
      return (FMapProperty *)0x0;
    }
    local_28.Field = (FField *)pFVar2;
    bVar3 = IsThisNotNull(pFVar2,"FField::GetFName");
    FVar5 = FVar6;
    if (bVar3) {
      FVar5 = (FName)pFVar2->_padding_;
    }
    if (FVar5 == param_2) break;
    local_28.Field = (FField *)pFVar2->_padding_;
    TFieldIterator<FMapProperty>::IterateToNext(&local_28);
    pFVar2 = (FMapProperty *)local_28.Field;
  }
  return pFVar2;
}

// FindOverrideMapProperty<FString> @ 144411390

FString * __cdecl
FindOverrideMapProperty<FString>
          (FString *__return_storage_ptr__,UObject *param_1,FName param_2,FName param_3,
          FString *param_4)

{
  longlong lVar1;
  FField *this;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *this_00;
  UStruct *pUVar6;
  FName FVar7;
  FName local_res20;
  TFieldIterator<FMapProperty> local_38;
  
  local_res20 = param_3;
  if (((param_1 != (UObject *)0x0) &&
      (pUVar6 = *(UStruct **)&param_1->field_0x10, pUVar6 != (UStruct *)0x0)) &&
     (param_2 != (FName)0x0)) {
    local_38.Field = pUVar6->ChildProperties;
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.bIncludeInterface = false;
    local_38.Struct = pUVar6;
    TFieldIterator<FMapProperty>::IterateToNext(&local_38);
    if ((FProperty *)local_38.Field != (FProperty *)0x0) {
      FVar7.ComparisonIndex.Value = 0;
      FVar7.Number = 0;
      do {
        this = local_38.Field;
        bVar2 = IsThisNotNull(local_38.Field,"FField::GetFName");
        FVar5 = FVar7;
        if (bVar2) {
          FVar5 = this->NamePrivate;
        }
        if (FVar5 == param_2) {
          if (((FProperty *)this != (FProperty *)0x0) &&
             (this_00 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  ((FProperty *)this,param_1,0),
             this_00 !=
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)0x0)) {
            FName::ToString(&local_res20,(FString *)&local_38);
            pUVar6 = (UStruct *)L"";
            if ((int)local_38.Field != 0) {
              pUVar6 = local_38.Struct;
            }
            iVar4 = 0;
            if ((int)local_38.Field != 0) {
              iVar4 = (int)local_38.Field + -1;
            }
            uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)pUVar6);
            iVar4 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FString>(this_00,uVar3,(FString *)&local_38);
            if (iVar4 != -1) {
              iVar4 = (int)local_38.Field + -1;
              pUVar6 = local_38.Struct;
              if ((int)local_38.Field == 0) {
                iVar4 = 0;
                pUVar6 = (UStruct *)L"";
              }
              uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)pUVar6);
              iVar4 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      ::FindIndexByHash<FString>(this_00,uVar3,(FString *)&local_38);
              if ((iVar4 != -1) &&
                 (lVar1 = *(longlong *)&this_00->Elements + (longlong)iVar4 * 0x28, lVar1 != 0)) {
                FVar7 = (FName)(lVar1 + 0x10);
              }
              FString::FString(__return_storage_ptr__,(FString *)FVar7);
              if (local_38.Struct == (UStruct *)0x0) {
                return __return_storage_ptr__;
              }
              FMemory::Free(local_38.Struct);
              return __return_storage_ptr__;
            }
            if (local_38.Struct != (UStruct *)0x0) {
              FMemory::Free(local_38.Struct);
            }
          }
          break;
        }
        local_38.Field = this->Next;
        TFieldIterator<FMapProperty>::IterateToNext(&local_38);
      } while ((FProperty *)local_38.Field != (FProperty *)0x0);
    }
  }
  FString::FString(__return_storage_ptr__,param_4);
  return __return_storage_ptr__;
}

// ForEachConnection<`FDataflowNode::IsAnytypeDependencyConnected'::__l2::<lambda_1>_> @ 144411570

void __thiscall
FDataflowNode::ForEachConnection<_FDataflowNode::IsAnytypeDependencyConnected_::__l2::<lambda_1>_>
          (FDataflowNode *this,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  FDataflowConnection *pFVar5;
  code *pcVar6;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_140;
  undefined4 uStack_10c;
  undefined4 uStack_c4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar18 = 0;
  puVar1 = &(this->ExpandedInputs).field_0x10;
  iVar4 = *(int *)&(this->ExpandedInputs).field_0x28;
  local_140 = 1;
  iVar14 = 0;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->ExpandedInputs).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    iVar16 = 0;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_144411643;
      uVar13 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = iVar16 + -1 + (int)lVar12;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_144411643:
  uVar13 = *(uint *)&(this->ExpandedInputs).field_0x28;
  uVar19 = uVar13 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uVar10,iVar14);
  TStack_b8.CurrentBitIndex = iVar11;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_b8._28_4_ = local_44;
  TStack_b8.BaseBitIndex = iVar16;
  uStack_98 = CONCAT44(uStack_10c,
                       *(int *)&(this->ExpandedInputs).field_0x8 -
                       *(int *)&(this->ExpandedInputs).field_0x34);
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = *(uint *)&(this->ExpandedInputs).field_0x28;
  if (uVar13 != uVar10) {
    puVar15 = *(undefined1 **)&(this->ExpandedInputs).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_144411770;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar19;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_144411770:
  do {
    if (*(int *)&(this->ExpandedInputs).field_0x8 - *(int *)&(this->ExpandedInputs).field_0x34 !=
        (int)uStack_98) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_b8.CurrentBitIndex == uVar13) &&
       (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      iVar14 = 0;
      puVar1 = &(this->ExpandedOutputs).field_0x10;
      iVar4 = *(int *)&(this->ExpandedOutputs).field_0x28;
      pTVar2 = &this->ExpandedOutputs;
      iVar16 = 0;
      if (iVar4 == 0) goto LAB_144411893;
      puVar17 = *(uint **)&(this->ExpandedOutputs).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar10 = *puVar17;
      iVar14 = 0;
      break;
    }
    pFVar5 = *(FDataflowConnection **)
              ((longlong)TStack_b8.CurrentBitIndex * 0x20 + 0x10 +
              *(longlong *)&this->ExpandedInputs);
    if (((pFVar5 != (FDataflowConnection *)0x0) &&
        (pFVar5->TypeDependencyGroup == *param_1->DependencyGroup)) &&
       (((*param_1->IgnoreConnection == (FDataflowConnection *)0x0 ||
         (pFVar5 != *param_1->IgnoreConnection)) &&
        (cVar9 = (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5), cVar9 != '\0'))))
    goto LAB_144411a24;
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
joined_r0x00014441184a:
  if (uVar10 != 0) goto LAB_144411868;
  lVar12 = (longlong)iVar18;
  iVar14 = iVar14 + 0x20;
  iVar18 = iVar18 + 1;
  iVar16 = iVar4;
  if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_144411893;
  uVar10 = puVar17[lVar12 + 1];
  goto joined_r0x00014441184a;
LAB_144411868:
  local_140 = -uVar10 & uVar10;
  uVar3 = (ulonglong)local_140 * 2 + 1;
  lVar12 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  iVar16 = iVar14 + -1 + (int)lVar12;
  if (iVar4 < iVar16) {
    iVar16 = iVar4;
  }
LAB_144411893:
  uVar10 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  TStack_88._padding_ = CONCAT44(local_140,iVar18);
  uVar13 = uVar10 & 0xffffffe0;
  TStack_88.CurrentBitIndex = iVar16;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar10 >> 5;
  TStack_88._28_4_ = iVar11;
  TStack_88.BaseBitIndex = iVar14;
  uStack_68 = CONCAT44(uStack_c4,
                       *(int *)&(this->ExpandedOutputs).field_0x8 -
                       *(int *)&(this->ExpandedOutputs).field_0x34);
  local_90 = pTVar2;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar4 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar19 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  if (uVar10 != uVar19) {
    puVar15 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar18 * 4);
    while (uVar10 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar10 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_1444119a0;
      uVar10 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar10 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar19 < (int)uVar10) {
      uVar10 = uVar19;
    }
  }
LAB_1444119a0:
  while( true ) {
    pTVar7 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_88.CurrentBitIndex == uVar10) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    {
      return;
    }
    pFVar5 = *(FDataflowConnection **)
              ((longlong)TStack_88.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar7);
    if (((pFVar5 != (FDataflowConnection *)0x0) &&
        (pFVar5->TypeDependencyGroup == *param_1->DependencyGroup)) &&
       (((*param_1->IgnoreConnection == (FDataflowConnection *)0x0 ||
         (pFVar5 != *param_1->IgnoreConnection)) &&
        (cVar9 = (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5), cVar9 != '\0')))) break;
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
LAB_144411a24:
  *param_1->bIsAnyDependencyConnected = true;
  return;
}

// ForEachConnection<`FDataflowNode::OnConnectionTypeChanged'::__l2::<lambda_1>_> @ 144411a50

void __thiscall
FDataflowNode::ForEachConnection<_FDataflowNode::OnConnectionTypeChanged_::__l2::<lambda_1>_>
          (FDataflowNode *this,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *pTVar2;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar3;
  ulonglong uVar4;
  int iVar5;
  FDataflowConnection *pFVar6;
  FDataflowNode *pFVar7;
  code *pcVar8;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *pTVar9;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *pTVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_150;
  undefined4 uStack_114;
  FName local_f8;
  FName local_f0;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TMap<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TMap<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  puVar1 = &(this->ExpandedInputs).field_0x10;
  iVar5 = *(int *)&(this->ExpandedInputs).field_0x28;
  pTVar2 = &this->ExpandedInputs;
  iVar16 = 0;
  local_150 = 1;
  iVar18 = 0;
  uVar12 = 1;
  iVar13 = 0;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(this->ExpandedInputs).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar12 = *puVar19;
    while (uVar12 == 0) {
      lVar14 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar12 = 1;
      iVar13 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_144411b0e;
      uVar12 = puVar19[lVar14 + 1];
    }
    uVar12 = -uVar12 & uVar12;
    uVar4 = (ulonglong)uVar12 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar13 = (int)lVar14 + -1 + iVar18;
    if (iVar5 < iVar13) {
      iVar13 = iVar5;
    }
  }
LAB_144411b0e:
  uVar15 = *(uint *)&(this->ExpandedInputs).field_0x28;
  uVar20 = uVar15 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar12,iVar16);
  TStack_b0.CurrentBitIndex = iVar13;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_b0._28_4_ = local_3c;
  TStack_b0.BaseBitIndex = iVar18;
  uStack_90 = CONCAT44(uStack_114,
                       *(int *)&(this->ExpandedInputs).field_0x8 -
                       *(int *)&(this->ExpandedInputs).field_0x34);
  local_b8 = pTVar2;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar12 = *(uint *)&(this->ExpandedInputs).field_0x28;
  if (uVar15 != uVar12) {
    puVar17 = *(undefined1 **)&(this->ExpandedInputs).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar16;
      uVar20 = uVar20 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_144411c30;
      uVar15 = *(uint *)(puVar17 + lVar14 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar15 = (int)lVar14 + -1 + uVar20;
    if ((int)uVar12 < (int)uVar15) {
      uVar15 = uVar12;
    }
  }
LAB_144411c30:
  while( true ) {
    pTVar9 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_b0.CurrentBitIndex == uVar15) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    pFVar6 = *(FDataflowConnection **)
              ((longlong)TStack_b0.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar9);
    if ((pFVar6 != (FDataflowConnection *)0x0) &&
       (pFVar6->TypeDependencyGroup == *param_1->DependencyGroup)) {
      pFVar7 = param_1->__this;
      (**(code **)(pFVar7->_padding_ + 0x130))(pFVar7,&local_f8,param_1->Connection,pFVar6);
      SetConnectionConcreteType(pFVar7,pFVar6,local_f8,(FName)0x0);
      *param_1->bTypeChanged = true;
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  iStack_e0 = 0;
  local_c8 = 0;
  puVar1 = &(this->ExpandedOutputs).field_0x10;
  iVar5 = *(int *)&(this->ExpandedOutputs).field_0x28;
  pTVar3 = &this->ExpandedOutputs;
  iStack_cc = 0;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(this->ExpandedOutputs).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar12 = *puVar19;
    while (uVar12 == 0) {
      lVar14 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_144411d61;
      uVar12 = puVar19[lVar14 + 1];
    }
    local_150 = -uVar12 & uVar12;
    uVar4 = (ulonglong)local_150 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iStack_cc = local_c8 + -1 + (int)lVar14;
    if (iVar5 < iStack_cc) {
      iStack_cc = iVar5;
    }
  }
LAB_144411d61:
  uStack_dc = local_150;
  iStack_c0 = *(int *)&(this->ExpandedOutputs).field_0x8 -
              *(int *)&(this->ExpandedOutputs).field_0x34;
  uVar12 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  uStack_d0 = 0xffffffff;
  uVar15 = uVar12 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(local_150,iStack_e0);
  TStack_80.CurrentBitIndex = iStack_cc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar12 >> 5;
  TStack_80._28_4_ = iVar13;
  TStack_80.BaseBitIndex = local_c8;
  uStack_60 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = pTVar3;
  local_d8 = puVar1;
  iStack_c4 = iVar13;
  local_88 = pTVar3;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar20 = *(uint *)&(this->ExpandedOutputs).field_0x28;
  if (uVar12 != uVar20) {
    puVar17 = *(undefined1 **)&(this->ExpandedOutputs).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar18 * 4);
    while (uVar12 == 0) {
      lVar14 = (longlong)iVar18;
      uVar15 = uVar15 + 0x20;
      iVar18 = iVar18 + 1;
      uVar12 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_144411e70;
      uVar12 = *(uint *)(puVar17 + lVar14 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar12 = (int)lVar14 + -1 + uVar15;
    if ((int)uVar20 < (int)uVar12) {
      uVar12 = uVar20;
    }
  }
LAB_144411e70:
  while( true ) {
    pTVar10 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_80.CurrentBitIndex == uVar12) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar3))
    break;
    pFVar6 = *(FDataflowConnection **)
              ((longlong)TStack_80.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar10);
    if ((pFVar6 != (FDataflowConnection *)0x0) &&
       (pFVar6->TypeDependencyGroup == *param_1->DependencyGroup)) {
      pFVar7 = param_1->__this;
      (**(code **)(pFVar7->_padding_ + 0x130))(pFVar7,&local_f0,param_1->Connection,pFVar6);
      SetConnectionConcreteType(pFVar7,pFVar6,local_f0,(FName)0x0);
      *param_1->bTypeChanged = true;
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return;
}

// InternalConstructor<UDataflowGraphInterface> @ 14441bcc0

void __cdecl InternalConstructor<UDataflowGraphInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UDataflowGraphInterface__6B_;
  }
  return;
}

// InternalConstructor<UDataflowSettings> @ 14441bcf0

void __cdecl InternalConstructor<UDataflowSettings>(FObjectInitializer *param_1)

{
  if ((UDataflowSettings *)param_1->Obj != (UDataflowSettings *)0x0) {
    UDataflowSettings::UDataflowSettings((UDataflowSettings *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDataflowGraphInterface> @ 14441bd10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataflowGraphInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataflowGraphInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDataflowGraphInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataflowSettings> @ 14441bdc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataflowSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataflowSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UDataflowSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex.Value = 0;
    this[1].CategoryName.Number = 0x80;
    this[1].SectionName.ComparisonIndex.Value = 0xffffffff;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    this[3].CategoryName.ComparisonIndex.Value = 0;
    this[3].SectionName.ComparisonIndex = 0;
    this[3].SectionName.Number = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0x437f0000;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x437f0000;
    *(undefined4 *)&this[4]._padding_ = 0x437f0000;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x437f0000;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4].CategoryName.ComparisonIndex = 0;
    this[4].CategoryName.Number = 0;
    this[4].SectionName.ComparisonIndex = 2;
    this[4].SectionName.Number = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// MakeShared<UE::FWindowsRecursiveMutex,1> @ 14441c090

TSharedRef<UE::FWindowsRecursiveMutex,1> * __cdecl
MakeShared<UE::FWindowsRecursiveMutex,1>
          (TSharedRef<UE::FWindowsRecursiveMutex,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::FWindowsRecursiveMutex,1> *pTVar4;
  
  pTVar3 = operator_new(0x38);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FWindowsRecursiveMutex *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWindowsRecursiveMutex_UE___00_SharedPointerInternals__6B_
    ;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FWindowsRecursiveMutex *)(pTVar3 + 1);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::FWindowsRecursiveMutex,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// RelocateConstructItems<FDataflowConnection_*,FDataflowInput_*,int> @ 14441c140

void __cdecl
RelocateConstructItems<FDataflowConnection_*,FDataflowInput_*,int>
          (void *param_1,FDataflowInput **param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FDataflowInput **)(lVar1 + (longlong)param_2) = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// RelocateConstructItems<FDataflowConnection_*,FDataflowOutput_*,int> @ 14441c170

void __cdecl
RelocateConstructItems<FDataflowConnection_*,FDataflowOutput_*,int>
          (void *param_1,FDataflowOutput **param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FDataflowOutput **)(lVar1 + (longlong)param_2) = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// StaticEnum<enum_EDataflowImageChannel> @ 14441f310

UEnum * __cdecl StaticEnum<enum_EDataflowImageChannel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataflowImageChannel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UEnum_EDataflowImageChannel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DataflowCore_EDataflowImageChannel,(UObject *)pUVar1,
                       L"EDataflowImageChannel");
  }
  return Z_Registration_Info_UEnum_EDataflowImageChannel.OuterSingleton;
}

// StaticEnum<enum_EDataflowImageCombineResolutionOption> @ 14441f350

UEnum * __cdecl StaticEnum<enum_EDataflowImageCombineResolutionOption>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataflowImageCombineResolutionOption.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UEnum_EDataflowImageCombineResolutionOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DataflowCore_EDataflowImageCombineResolutionOption,
                       (UObject *)pUVar1,L"EDataflowImageCombineResolutionOption");
  }
  return Z_Registration_Info_UEnum_EDataflowImageCombineResolutionOption.OuterSingleton;
}

// StaticEnum<enum_EDataflowImageResolution> @ 14441f390

UEnum * __cdecl StaticEnum<enum_EDataflowImageResolution>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataflowImageResolution.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UEnum_EDataflowImageResolution.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DataflowCore_EDataflowImageResolution,(UObject *)pUVar1,
                       L"EDataflowImageResolution");
  }
  return Z_Registration_Info_UEnum_EDataflowImageResolution.OuterSingleton;
}

// StaticEnum<enum_EDataflowMathConstantsEnum> @ 14441f3d0

UEnum * __cdecl StaticEnum<enum_EDataflowMathConstantsEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DataflowCore_EDataflowMathConstantsEnum,(UObject *)pUVar1,
                       L"EDataflowMathConstantsEnum");
  }
  return Z_Registration_Info_UEnum_EDataflowMathConstantsEnum.OuterSingleton;
}

// StaticEnum<enum_EDataflowSelectionType> @ 14441f410

UEnum * __cdecl StaticEnum<enum_EDataflowSelectionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataflowSelectionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UEnum_EDataflowSelectionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DataflowCore_EDataflowSelectionType,(UObject *)pUVar1,
                       L"EDataflowSelectionType");
  }
  return Z_Registration_Info_UEnum_EDataflowSelectionType.OuterSingleton;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowNumericTypes>'::__l2::<lambda_1>_> @ 144420500

bool __cdecl
TDataflowMultiTypePolicy<unsigned_short,signed_char,unsigned_char>::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowNumericTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  ushort local_res8 [4];
  FTimestamp local_res10;
  FGuid local_48;
  double *local_38;
  
  local_38 = param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<unsigned_short>::TypeName) {
    local_res8[0] = (ushort)(int)*local_38;
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48.A = 0;
      local_48.B = 0;
      local_48.C = 0;
      local_48.D = 0;
    }
    else {
      local_48.A = *(uint *)(lVar2 + 0x7c);
      local_48.B = *(uint *)(lVar2 + 0x80);
      local_48.C = *(uint *)(lVar2 + 0x84);
      local_48.D = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<unsigned_short>
              (this,(uint)uVar7,pFVar3,local_res8,&local_48,uVar6,&local_res10);
    bVar5 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<signed_char>::TypeName) {
    local_res8[0] = CONCAT11(local_res8[0]._1_1_,(char)(int)*local_38);
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48.A = 0;
      local_48.B = 0;
      local_48.C = 0;
      local_48.D = 0;
    }
    else {
      local_48.A = *(uint *)(lVar2 + 0x7c);
      local_48.B = *(uint *)(lVar2 + 0x80);
      local_48.C = *(uint *)(lVar2 + 0x84);
      local_48.D = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<signed_char>
              (this,(uint)uVar7,pFVar3,(schar *)local_res8,&local_48,uVar6,&local_res10);
    bVar5 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<unsigned_char>::TypeName) {
    local_res8[0] = CONCAT11(local_res8[0]._1_1_,(char)(int)*local_38);
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48.A = 0;
      local_48.B = 0;
      local_48.C = 0;
      local_48.D = 0;
    }
    else {
      local_48.A = *(uint *)(lVar2 + 0x7c);
      local_48.B = *(uint *)(lVar2 + 0x80);
      local_48.C = *(uint *)(lVar2 + 0x84);
      local_48.D = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<unsigned_char>
              (this,(uint)uVar7,pFVar3,(uchar *)local_res8,&local_48,uVar6,&local_res10);
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowNumericTypes>'::__l2::<lambda_1>_> @ 144420760

bool __cdecl
TDataflowMultiTypePolicy<unsigned_int,short,unsigned_short,signed_char,unsigned_char>::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowNumericTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  uint local_res8 [2];
  FTimestamp local_res10;
  <lambda_1> local_38 [2];
  
  local_38[0].InVal = param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<unsigned_int>::TypeName) {
    local_res8[0] = (uint)(longlong)*local_38[0].InVal;
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_38[0].__this._0_4_ = 0;
      local_38[0].__this._4_4_ = 0;
      local_38[0].Context._0_4_ = 0;
      local_38[0].Context._4_4_ = 0;
    }
    else {
      local_38[0].__this._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_38[0].__this._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_38[0].Context._0_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_38[0].Context._4_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<unsigned_int>
              (this,(uint)uVar7,pFVar3,local_res8,(FGuid *)local_38,uVar6,&local_res10);
    bVar5 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<short>::TypeName) {
    local_res8[0] = CONCAT22(local_res8[0]._2_2_,(short)(int)*local_38[0].InVal);
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_38[0].__this._0_4_ = 0;
      local_38[0].__this._4_4_ = 0;
      local_38[0].Context._0_4_ = 0;
      local_38[0].Context._4_4_ = 0;
    }
    else {
      local_38[0].__this._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_38[0].__this._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_38[0].Context._0_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_38[0].Context._4_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<short>
              (this,(uint)uVar7,pFVar3,(short *)local_res8,(FGuid *)local_38,uVar6,&local_res10);
    bVar5 = true;
  }
  else {
    local_38[0].__this = pFVar4;
    local_38[0].Context = this;
    bVar5 = TDataflowMultiTypePolicy<unsigned_short,signed_char,unsigned_char>::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowNumericTypes>_::__l2::<lambda_1>_>
                      (param_1,local_38);
  }
  return bVar5;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowNumericTypes>'::__l2::<lambda_1>_> @ 144420950

bool __cdecl
TDataflowMultiTypePolicy<float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowNumericTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  FTimestamp local_res8;
  FTimestamp local_res10;
  <lambda_1> local_38 [2];
  
  local_38[0].InVal = param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<float>::TypeName) {
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_res8.Value._0_4_ = (float)*local_38[0].InVal;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_38[0].__this._0_4_ = 0;
      local_38[0].__this._4_4_ = 0;
      local_38[0].Context._0_4_ = 0;
      local_38[0].Context._4_4_ = 0;
    }
    else {
      local_38[0].__this._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_38[0].__this._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_38[0].Context._0_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_38[0].Context._4_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<float>
              (this,(uint)uVar7,pFVar3,(float *)&local_res8,(FGuid *)local_38,uVar6,&local_res10);
    bVar5 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<__int64>::TypeName) {
    local_res10.Value = (ulong64)*local_38[0].InVal;
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_38[0].__this._0_4_ = 0;
      local_38[0].__this._4_4_ = 0;
      local_38[0].Context._0_4_ = 0;
      local_38[0].Context._4_4_ = 0;
    }
    else {
      local_38[0].__this._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_38[0].__this._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_38[0].Context._0_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_38[0].Context._4_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<__int64>
              (this,(uint)uVar7,pFVar3,(long64 *)&local_res10,(FGuid *)local_38,uVar6,&local_res8);
    bVar5 = true;
  }
  else {
    local_38[0].__this = pFVar4;
    local_38[0].Context = this;
    bVar5 = TDataflowMultiTypePolicy<unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
            ::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowNumericTypes>_::__l2::<lambda_1>_>
                      (param_1,local_38);
  }
  return bVar5;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowNumericTypes>'::__l2::<lambda_1>_> @ 144420b40

bool __cdecl
TDataflowMultiTypePolicy<unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowNumericTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  double dVar1;
  FDataflowNode *pFVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  longlong lVar8;
  FTimestamp local_res8;
  FTimestamp local_res10;
  <lambda_1> local_38 [2];
  
  local_38[0].InVal = param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<unsigned___int64>::TypeName) {
    lVar8 = 0;
    dVar1 = *local_38[0].InVal;
    if ((__real_43e0000000000000 <= dVar1) &&
       (dVar1 = dVar1 - __real_43e0000000000000, dVar1 < __real_43e0000000000000)) {
      lVar8 = -0x8000000000000000;
    }
    local_res10.Value = (longlong)dVar1 + lVar8;
    pFVar2 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar2->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar8 = pFVar4->_padding_;
    if (lVar8 == 0) {
      local_38[0].__this._0_4_ = 0;
      local_38[0].__this._4_4_ = 0;
      local_38[0].Context._0_4_ = 0;
      local_38[0].Context._4_4_ = 0;
    }
    else {
      local_38[0].__this._0_4_ = *(undefined4 *)(lVar8 + 0x7c);
      local_38[0].__this._4_4_ = *(undefined4 *)(lVar8 + 0x80);
      local_38[0].Context._0_4_ = *(undefined4 *)(lVar8 + 0x84);
      local_38[0].Context._4_4_ = *(undefined4 *)(lVar8 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<unsigned___int64>
              (this,(uint)uVar7,pFVar3,&local_res10.Value,(FGuid *)local_38,uVar6,&local_res8);
    bVar5 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<int>::TypeName) {
    local_res8.Value._0_4_ = (int)*local_38[0].InVal;
    pFVar2 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar2->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar8 = pFVar4->_padding_;
    if (lVar8 == 0) {
      local_38[0].__this._0_4_ = 0;
      local_38[0].__this._4_4_ = 0;
      local_38[0].Context._0_4_ = 0;
      local_38[0].Context._4_4_ = 0;
    }
    else {
      local_38[0].__this._0_4_ = *(undefined4 *)(lVar8 + 0x7c);
      local_38[0].__this._4_4_ = *(undefined4 *)(lVar8 + 0x80);
      local_38[0].Context._0_4_ = *(undefined4 *)(lVar8 + 0x84);
      local_38[0].Context._4_4_ = *(undefined4 *)(lVar8 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<int>
              (this,(uint)uVar7,pFVar3,(int *)&local_res8,(FGuid *)local_38,uVar6,&local_res10);
    bVar5 = true;
  }
  else {
    local_38[0].__this = pFVar4;
    local_38[0].Context = this;
    bVar5 = TDataflowMultiTypePolicy<unsigned_int,short,unsigned_short,signed_char,unsigned_char>::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowNumericTypes>_::__l2::<lambda_1>_>
                      (param_1,local_38);
  }
  return bVar5;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowRotationTypes>'::__l2::<lambda_1>_> @ 144420d60

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector<double>,UE::Math::TQuat<double>,UE::Math::TRotator<double>_>
::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowRotationTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  bool bVar5;
  uint uVar6;
  TQuat<double> *pTVar7;
  TVector<double> *pTVar8;
  ulong64 uVar9;
  FTimestamp local_res8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TQuat<double> local_58;
  TQuat<double> local_38;
  
  local_78._s_0.Z = (double)param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName) {
    pTVar7 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)local_78._s_0.Z,&local_38);
    local_58.X = pTVar7->X;
    local_58.Y = pTVar7->Y;
    local_58.Z = pTVar7->Z;
    local_58.W = pTVar7->W;
    pTVar8 = UE::Math::TQuat<double>::Euler(&local_58,(TVector<double> *)&local_98._s_0);
    local_78._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    local_78._s_0.Y = (pTVar8->field0_0x0)._s_0.Y;
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_78._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_98._0_4_ = 0;
      local_98._4_4_ = 0;
      local_98._8_4_ = 0;
      local_98._12_4_ = 0;
    }
    else {
      local_98._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_98._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_98._8_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_98._12_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar9 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TVector<double>_>
              (this,(uint)uVar9,pFVar3,(TVector<double> *)&local_78._s_0,(FGuid *)&local_98._s_0,
               uVar6,&local_res8);
    bVar5 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName) {
    pTVar7 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)local_78._s_0.Z,&local_38);
    local_58.X = pTVar7->X;
    local_58.Y = pTVar7->Y;
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_58.Z = pTVar7->Z;
    local_58.W = pTVar7->W;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_98._0_4_ = 0;
      local_98._4_4_ = 0;
      local_98._8_4_ = 0;
      local_98._12_4_ = 0;
    }
    else {
      local_98._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_98._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_98._8_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_98._12_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar9 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TQuat<double>_>
              (this,(uint)uVar9,pFVar3,&local_58,(FGuid *)&local_98._s_0,uVar6,&local_res8);
    bVar5 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName) {
    local_78._s_0.X = ((TRotator<double> *)local_78._s_0.Z)->Pitch;
    local_78._s_0.Y = ((TRotator<double> *)local_78._s_0.Z)->Yaw;
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_78._s_0.Z = ((TRotator<double> *)local_78._s_0.Z)->Roll;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_98._0_4_ = 0;
      local_98._4_4_ = 0;
      local_98._8_4_ = 0;
      local_98._12_4_ = 0;
    }
    else {
      local_98._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_98._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_98._8_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_98._12_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar9 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TRotator<double>_>
              (this,(uint)uVar9,pFVar3,(TRotator<double> *)&local_78._s_0,(FGuid *)&local_98._s_0,
               uVar6,&local_res8);
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l2::<lambda_1>_> @ 144421020

bool __cdecl
TDataflowMultiTypePolicy<signed_char,unsigned_char>::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  double local_res8;
  FTimestamp local_res10;
  FGuid local_48;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *local_38;
  
  local_38 = param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<signed_char>::TypeName) {
    local_res8 = 0.0;
    if (local_38->ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(local_38->AllocatorInstance).Data;
    }
    LexTryParseString<double>(&local_res8,pwVar8);
    local_res8 = (double)CONCAT71(local_res8._1_7_,(char)(int)local_res8);
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48.A = 0;
      local_48.B = 0;
      local_48.C = 0;
      local_48.D = 0;
    }
    else {
      local_48.A = *(uint *)(lVar2 + 0x7c);
      local_48.B = *(uint *)(lVar2 + 0x80);
      local_48.C = *(uint *)(lVar2 + 0x84);
      local_48.D = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<signed_char>
              (this,(uint)uVar7,pFVar3,(schar *)&local_res8,&local_48,uVar6,&local_res10);
    bVar5 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<unsigned_char>::TypeName) {
    local_res8 = 0.0;
    if (local_38->ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(local_38->AllocatorInstance).Data;
    }
    LexTryParseString<double>(&local_res8,pwVar8);
    local_res8 = (double)CONCAT71(local_res8._1_7_,(char)(int)local_res8);
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48.A = 0;
      local_48.B = 0;
      local_48.C = 0;
      local_48.D = 0;
    }
    else {
      local_48.A = *(uint *)(lVar2 + 0x7c);
      local_48.B = *(uint *)(lVar2 + 0x80);
      local_48.C = *(uint *)(lVar2 + 0x84);
      local_48.D = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<unsigned_char>
              (this,(uint)uVar7,pFVar3,(uchar *)&local_res8,&local_48,uVar6,&local_res10);
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l2::<lambda_1>_> @ 144421210

bool __cdecl
TDataflowMultiTypePolicy<short,unsigned_short,signed_char,unsigned_char>::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  double local_res8;
  FTimestamp local_res10;
  <lambda_1> local_48 [2];
  
  local_48[0].InVal = param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<short>::TypeName) {
    local_res8 = 0.0;
    if ((local_48[0].InVal)->ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)((local_48[0].InVal)->AllocatorInstance).Data;
    }
    LexTryParseString<double>(&local_res8,pwVar8);
    local_res8 = (double)CONCAT62(local_res8._2_6_,(short)(int)local_res8);
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48[0].__this._0_4_ = 0;
      local_48[0].__this._4_4_ = 0;
      local_48[0].Context._0_4_ = 0;
      local_48[0].Context._4_4_ = 0;
    }
    else {
      local_48[0].__this._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_48[0].__this._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_48[0].Context._0_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_48[0].Context._4_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<short>
              (this,(uint)uVar7,pFVar3,(short *)&local_res8,(FGuid *)local_48,uVar6,&local_res10);
    bVar5 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<unsigned_short>::TypeName) {
    local_res8 = 0.0;
    if ((local_48[0].InVal)->ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)((local_48[0].InVal)->AllocatorInstance).Data;
    }
    LexTryParseString<double>(&local_res8,pwVar8);
    local_res8 = (double)CONCAT62(local_res8._2_6_,(short)(int)local_res8);
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48[0].__this._0_4_ = 0;
      local_48[0].__this._4_4_ = 0;
      local_48[0].Context._0_4_ = 0;
      local_48[0].Context._4_4_ = 0;
    }
    else {
      local_48[0].__this._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_48[0].__this._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_48[0].Context._0_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_48[0].Context._4_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<unsigned_short>
              (this,(uint)uVar7,pFVar3,(ushort *)&local_res8,(FGuid *)local_48,uVar6,&local_res10);
    bVar5 = true;
  }
  else {
    local_48[0].__this = pFVar4;
    local_48[0].Context = this;
    bVar5 = TDataflowMultiTypePolicy<signed_char,unsigned_char>::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
                      (param_1,local_48);
  }
  return bVar5;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l2::<lambda_1>_> @ 144421410

bool __cdecl
TDataflowMultiTypePolicy<int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  double local_res8;
  FTimestamp local_res10;
  <lambda_1> local_48 [2];
  
  local_48[0].InVal = param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<int>::TypeName) {
    local_res8 = 0.0;
    if ((local_48[0].InVal)->ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)((local_48[0].InVal)->AllocatorInstance).Data;
    }
    LexTryParseString<double>(&local_res8,pwVar8);
    local_res8 = (double)CONCAT44(local_res8._4_4_,(int)local_res8);
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48[0].__this._0_4_ = 0;
      local_48[0].__this._4_4_ = 0;
      local_48[0].Context._0_4_ = 0;
      local_48[0].Context._4_4_ = 0;
    }
    else {
      local_48[0].__this._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_48[0].__this._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_48[0].Context._0_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_48[0].Context._4_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<int>
              (this,(uint)uVar7,pFVar3,(int *)&local_res8,(FGuid *)local_48,uVar6,&local_res10);
    bVar5 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<unsigned_int>::TypeName) {
    local_res8 = 0.0;
    if ((local_48[0].InVal)->ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)((local_48[0].InVal)->AllocatorInstance).Data;
    }
    LexTryParseString<double>(&local_res8,pwVar8);
    local_res8 = (double)CONCAT44(local_res8._4_4_,(int)(longlong)local_res8);
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48[0].__this._0_4_ = 0;
      local_48[0].__this._4_4_ = 0;
      local_48[0].Context._0_4_ = 0;
      local_48[0].Context._4_4_ = 0;
    }
    else {
      local_48[0].__this._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_48[0].__this._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_48[0].Context._0_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_48[0].Context._4_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<unsigned_int>
              (this,(uint)uVar7,pFVar3,(uint *)&local_res8,(FGuid *)local_48,uVar6,&local_res10);
    bVar5 = true;
  }
  else {
    local_48[0].__this = pFVar4;
    local_48[0].Context = this;
    bVar5 = TDataflowMultiTypePolicy<short,unsigned_short,signed_char,unsigned_char>::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
                      (param_1,local_48);
  }
  return bVar5;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l2::<lambda_1>_> @ 144421610

bool __cdecl
TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  FTimestamp local_res8;
  FTimestamp local_res10;
  <lambda_1> local_48 [2];
  
  local_48[0].InVal = param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<double>::TypeName) {
    local_res8.Value = 0;
    if ((local_48[0].InVal)->ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)((local_48[0].InVal)->AllocatorInstance).Data;
    }
    LexTryParseString<double>((double *)&local_res8,pwVar8);
    local_res10.Value = local_res8.Value;
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48[0].__this._0_4_ = 0;
      local_48[0].__this._4_4_ = 0;
      local_48[0].Context._0_4_ = 0;
      local_48[0].Context._4_4_ = 0;
    }
    else {
      local_48[0].__this._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_48[0].__this._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_48[0].Context._0_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_48[0].Context._4_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<double>
              (this,(uint)uVar7,pFVar3,(double *)&local_res10,(FGuid *)local_48,uVar6,&local_res8);
    bVar5 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<float>::TypeName) {
    local_res8.Value = 0;
    if ((local_48[0].InVal)->ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)((local_48[0].InVal)->AllocatorInstance).Data;
    }
    LexTryParseString<double>((double *)&local_res8,pwVar8);
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_res8.Value._0_4_ = (float)(double)local_res8.Value;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48[0].__this._0_4_ = 0;
      local_48[0].__this._4_4_ = 0;
      local_48[0].Context._0_4_ = 0;
      local_48[0].Context._4_4_ = 0;
    }
    else {
      local_48[0].__this._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_48[0].__this._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_48[0].Context._0_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_48[0].Context._4_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<float>
              (this,(uint)uVar7,pFVar3,(float *)&local_res8,(FGuid *)local_48,uVar6,&local_res10);
    bVar5 = true;
  }
  else {
    local_48[0].__this = pFVar4;
    local_48[0].Context = this;
    bVar5 = TDataflowMultiTypePolicy<__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
            ::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
                      (param_1,local_48);
  }
  return bVar5;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l2::<lambda_1>_> @ 144421820

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowNode *pFVar2;
  longlong lVar3;
  FProperty *pFVar4;
  FDataflowOutput *pFVar5;
  FContext *this;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  TIntPoint<int>_u_0 local_res8;
  TIntPoint<int>_u_0 local_res10;
  TIntVector3<int>_u_0 local_58;
  undefined4 uStack_4c;
  <lambda_1> local_48 [2];
  
  pTVar1 = param_2->InVal;
  pFVar5 = param_2->__this;
  this = param_2->Context;
  local_48[0].InVal = pTVar1;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName) {
    local_res8 = (TIntPoint<int>_u_0)0x0;
    if (pTVar1->ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
    }
    LexTryParseString<double>((double *)&local_res8,pwVar10);
    local_res8._s_0.Y = (int)(double)local_res8;
    local_res8._s_0.X = local_res8._s_0.Y;
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    local_res10 = local_res8;
    if (pFVar2 == (FDataflowNode *)0x0) {
      uVar7 = 0;
      local_res8 = (TIntPoint<int>_u_0)UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8 = (TIntPoint<int>_u_0)(pFVar2->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_58._s_0.X = 0;
      local_58._s_0.Y = 0;
      local_58._s_0.Z = 0;
      uStack_4c = 0;
      uVar11 = local_58._s_0.X;
      uVar12 = local_58._s_0.Y;
      uVar13 = local_58._s_0.Z;
      uVar14 = uStack_4c;
    }
    else {
      uVar11 = *(int *)(lVar3 + 0x7c);
      uVar12 = *(int *)(lVar3 + 0x80);
      uVar13 = *(int *)(lVar3 + 0x84);
      uVar14 = *(undefined4 *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    local_48[0].__this = (FDataflowOutput *)CONCAT44(uVar12,uVar11);
    local_48[0].Context = (FContext *)CONCAT44(uVar14,uVar13);
    uVar8 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TIntPoint<int>_>
              (this,(uint)uVar8,pFVar4,(TIntPoint<int> *)&local_res10._s_0,(FGuid *)local_48,uVar7,
               (FTimestamp *)&local_res8._s_0);
    bVar6 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName) {
    pwVar10 = L"";
    local_58._s_0.Y = 0;
    local_58._s_0.Z = 0;
    uVar7 = 0;
    local_58._s_0.X = 0;
    if (pTVar1->ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
    }
    bVar6 = FParse::Value(pwVar9,L"X=",local_58.XYZ);
    if (bVar6) {
      if (pTVar1->ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
      }
      bVar6 = FParse::Value(pwVar9,L"Y=",&local_58._s_0.Y);
      if (bVar6) {
        if (pTVar1->ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
        }
        FParse::Value(pwVar10,L"Z=",&local_58._s_0.Z);
      }
    }
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      local_res8 = (TIntPoint<int>_u_0)UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8 = (TIntPoint<int>_u_0)(pFVar2->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_48[0].__this._0_4_ = 0;
      local_48[0].__this._4_4_ = 0;
      local_48[0].Context._0_4_ = 0;
      local_48[0].Context._4_4_ = 0;
    }
    else {
      local_48[0].__this._0_4_ = *(undefined4 *)(lVar3 + 0x7c);
      local_48[0].__this._4_4_ = *(undefined4 *)(lVar3 + 0x80);
      local_48[0].Context._0_4_ = *(undefined4 *)(lVar3 + 0x84);
      local_48[0].Context._4_4_ = *(undefined4 *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    uVar8 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TIntVector3<int>_>
              (this,(uint)uVar8,pFVar4,(TIntVector3<int> *)&local_58._s_0,(FGuid *)local_48,uVar7,
               (FTimestamp *)&local_res8._s_0);
    bVar6 = true;
  }
  else {
    local_48[0].__this = pFVar5;
    local_48[0].Context = this;
    bVar6 = TDataflowMultiTypePolicy<UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
                      (param_1,local_48);
  }
  return bVar6;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l2::<lambda_1>_> @ 144421a70

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowNode *pFVar2;
  longlong lVar3;
  FProperty *pFVar4;
  FDataflowOutput *pFVar5;
  FContext *this;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FTimestamp local_res8;
  undefined1 local_58 [12];
  int iStack_4c;
  double adStack_48 [2];
  FGuid local_38;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *local_28;
  
  pTVar1 = param_2->InVal;
  pFVar5 = param_2->__this;
  this = param_2->Context;
  local_28 = pTVar1;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName) {
    pwVar10 = L"";
    stack0xffffffffffffffb0 = 0;
    local_58._0_8_ = 0;
    uVar7 = 0;
    if (pTVar1->ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
    }
    bVar6 = FParse::Value(pwVar9,L"X=",(int *)local_58);
    if (bVar6) {
      if (pTVar1->ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
      }
      bVar6 = FParse::Value(pwVar9,L"Y=",(int *)(local_58 + 4));
      if (bVar6) {
        if (pTVar1->ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
        }
        bVar6 = FParse::Value(pwVar9,L"Z=",(int *)(local_58 + 8));
        if (bVar6) {
          if (pTVar1->ArrayNum != 0) {
            pwVar10 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
          }
          FParse::Value(pwVar10,L"W=",&iStack_4c);
        }
      }
    }
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar2->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_38.A = 0;
      local_38.B = 0;
      local_38.C = 0;
      local_38.D = 0;
    }
    else {
      local_38.A = *(uint *)(lVar3 + 0x7c);
      local_38.B = *(uint *)(lVar3 + 0x80);
      local_38.C = *(uint *)(lVar3 + 0x84);
      local_38.D = *(uint *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    uVar8 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TIntVector4<int>_>
              (this,(uint)uVar8,pFVar4,(TIntVector4<int> *)local_58,&local_38,uVar7,&local_res8);
    bVar6 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName) {
    pwVar10 = L"";
    local_58._0_8_ = 0;
    stack0xffffffffffffffb0 = 0;
    adStack_48[0] = 0.0;
    if (pTVar1->ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
    }
    bVar6 = FParse::Value(pwVar9,L"P=",(double *)local_58);
    if (bVar6) {
      if (pTVar1->ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
      }
      bVar6 = FParse::Value(pwVar9,L"Y=",(double *)(local_58 + 8));
      if (bVar6) {
        if (pTVar1->ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
        }
        FParse::Value(pwVar10,L"R=",adStack_48);
      }
    }
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      uVar7 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar2->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_38.A = 0;
      local_38.B = 0;
      local_38.C = 0;
      local_38.D = 0;
    }
    else {
      local_38.A = *(uint *)(lVar3 + 0x7c);
      local_38.B = *(uint *)(lVar3 + 0x80);
      local_38.C = *(uint *)(lVar3 + 0x84);
      local_38.D = *(uint *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    uVar8 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TRotator<double>_>
              (this,(uint)uVar8,pFVar4,(TRotator<double> *)local_58,&local_38,uVar7,&local_res8);
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l2::<lambda_1>_> @ 144421d20

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowNode *pFVar2;
  longlong lVar3;
  FProperty *pFVar4;
  FDataflowOutput *pFVar5;
  FContext *this;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FTimestamp local_res8;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  <lambda_1> local_38 [2];
  
  pTVar1 = param_2->InVal;
  pFVar5 = param_2->__this;
  this = param_2->Context;
  local_38[0].InVal = pTVar1;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName) {
    pwVar10 = L"";
    local_48._4_4_ = 0.0;
    fStack_40 = 0.0;
    local_48._0_4_ = 0.0;
    fStack_3c = 1.0;
    if (pTVar1->ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)
               (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar1->AllocatorInstance)->
               AllocatorInstance).Data;
    }
    bVar6 = FParse::Value(pwVar9,L"X=",(float *)local_48);
    if (bVar6) {
      if (pTVar1->ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)
                 (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar1->AllocatorInstance)->
                 AllocatorInstance).Data;
      }
      bVar6 = FParse::Value(pwVar9,L"Y=",(float *)(local_48 + 4));
      if (bVar6) {
        if (pTVar1->ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)
                   (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar1->AllocatorInstance)->
                   AllocatorInstance).Data;
        }
        bVar6 = FParse::Value(pwVar9,L"Z=",&fStack_40);
        if (bVar6) {
          if (pTVar1->ArrayNum != 0) {
            pwVar10 = (wchar_t *)
                      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar1->AllocatorInstance)->
                      AllocatorInstance).Data;
          }
          FParse::Value(pwVar10,L"W=",&fStack_3c);
        }
      }
    }
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      uVar7 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar2->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_38[0].__this._0_4_ = 0;
      local_38[0].__this._4_4_ = 0;
      local_38[0].Context._0_4_ = 0;
      local_38[0].Context._4_4_ = 0;
    }
    else {
      local_38[0].__this._0_4_ = *(undefined4 *)(lVar3 + 0x7c);
      local_38[0].__this._4_4_ = *(undefined4 *)(lVar3 + 0x80);
      local_38[0].Context._0_4_ = *(undefined4 *)(lVar3 + 0x84);
      local_38[0].Context._4_4_ = *(undefined4 *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    uVar8 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TQuat<float>_>
              (this,(uint)uVar8,pFVar4,(TQuat<float> *)local_48,(FGuid *)local_38,uVar7,&local_res8)
    ;
    bVar6 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<FLinearColor>::TypeName) {
    local_48._0_4_ = 0.0;
    local_48._4_4_ = 0.0;
    fStack_40 = 0.0;
    fStack_3c = 0.0;
    FLinearColor::InitFromString((FLinearColor *)local_48,(FString *)pTVar1);
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      uVar7 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar2->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_38[0].__this._0_4_ = 0;
      local_38[0].__this._4_4_ = 0;
      local_38[0].Context._0_4_ = 0;
      local_38[0].Context._4_4_ = 0;
    }
    else {
      local_38[0].__this._0_4_ = *(undefined4 *)(lVar3 + 0x7c);
      local_38[0].__this._4_4_ = *(undefined4 *)(lVar3 + 0x80);
      local_38[0].Context._0_4_ = *(undefined4 *)(lVar3 + 0x84);
      local_38[0].Context._4_4_ = *(undefined4 *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    uVar8 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FLinearColor>
              (this,(uint)uVar8,pFVar4,(FLinearColor *)local_48,(FGuid *)local_38,uVar7,&local_res8)
    ;
    bVar6 = true;
  }
  else {
    local_38[0].__this = pFVar5;
    local_38[0].Context = this;
    bVar6 = TDataflowMultiTypePolicy<UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
            ::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
                      (param_1,local_38);
  }
  return bVar6;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l2::<lambda_1>_> @ 144421f90

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowNode *pFVar2;
  longlong lVar3;
  FProperty *pFVar4;
  FDataflowOutput *pFVar5;
  FContext *this;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_res8;
  FTimestamp local_res10;
  undefined1 local_58 [8];
  float afStack_50 [2];
  undefined1 local_48 [4];
  uint uStack_44;
  undefined8 uStack_40;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *local_38;
  
  pTVar1 = param_2->InVal;
  pFVar5 = param_2->__this;
  this = param_2->Context;
  local_38 = pTVar1;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName) {
    pwVar10 = L"";
    local_res8 = (TVector2<float>_u_0)0x0;
    if (pTVar1->ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
    }
    bVar6 = FParse::Value(pwVar9,L"X=",(float *)&local_res8);
    if (bVar6) {
      if (pTVar1->ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
      }
      FParse::Value(pwVar10,L"Y=",(float *)((longlong)&local_res8 + 4));
    }
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      uVar7 = 0;
      local_res10.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res10.Value = (pFVar2->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_58._0_4_ = 0.0;
      local_58._4_4_ = 0.0;
      afStack_50[0] = 0.0;
      afStack_50[1] = 0.0;
      fVar11 = (float)local_58._0_4_;
      fVar12 = (float)local_58._4_4_;
      fVar13 = afStack_50[0];
      fVar14 = afStack_50[1];
    }
    else {
      fVar11 = *(float *)(lVar3 + 0x7c);
      fVar12 = *(float *)(lVar3 + 0x80);
      fVar13 = *(float *)(lVar3 + 0x84);
      fVar14 = (float)*(uint *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    _local_48 = (FDataflowOutput *)CONCAT44(fVar12,fVar11);
    uStack_40 = (FContext *)CONCAT44(fVar14,fVar13);
    uVar8 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TVector2<float>_>
              (this,(uint)uVar8,pFVar4,(TVector2<float> *)&local_res8,(FGuid *)local_48,uVar7,
               &local_res10);
    bVar6 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName) {
    pwVar10 = L"";
    local_58._4_4_ = 0.0;
    afStack_50[0] = 0.0;
    local_58._0_4_ = 0.0;
    if (pTVar1->ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
    }
    bVar6 = FParse::Value(pwVar9,L"X=",(float *)local_58);
    if (bVar6) {
      if (pTVar1->ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
      }
      bVar6 = FParse::Value(pwVar9,L"Y=",(float *)(local_58 + 4));
      if (bVar6) {
        if (pTVar1->ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
        }
        FParse::Value(pwVar10,L"Z=",afStack_50);
      }
    }
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      uVar7 = 0;
      local_res8 = (TVector2<float>_u_0)UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8 = (TVector2<float>_u_0)(pFVar2->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_48 = (undefined1  [4])0x0;
      uStack_44 = 0;
      uStack_40._0_4_ = 0;
      uStack_40._4_4_ = 0;
    }
    else {
      local_48 = *(undefined1 (*) [4])(lVar3 + 0x7c);
      uStack_44 = *(uint *)(lVar3 + 0x80);
      uStack_40._0_4_ = *(uint *)(lVar3 + 0x84);
      uStack_40._4_4_ = *(uint *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    uVar8 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TVector<float>_>
              (this,(uint)uVar8,pFVar4,(TVector<float> *)local_58,(FGuid *)local_48,uVar7,
               (FTimestamp *)&local_res8);
    bVar6 = true;
  }
  else {
    _local_48 = pFVar5;
    uStack_40 = this;
    bVar6 = TDataflowMultiTypePolicy<UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
            ::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
                      (param_1,(<lambda_1> *)local_48);
  }
  return bVar6;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l2::<lambda_1>_> @ 144422200

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowNode *pFVar2;
  longlong lVar3;
  FProperty *pFVar4;
  FDataflowOutput *pFVar5;
  FContext *this;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FTimestamp local_res8;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  double dStack_48;
  double local_40;
  <lambda_1> local_38 [2];
  
  pTVar1 = param_2->InVal;
  pFVar5 = param_2->__this;
  this = param_2->Context;
  local_38[0].InVal = pTVar1;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName) {
    pwVar10 = L"";
    local_58._4_4_ = 0.0;
    uStack_50._0_4_ = 0.0;
    local_58._0_4_ = 0.0;
    uStack_50._4_4_ = 1.0;
    if (pTVar1->ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
    }
    bVar6 = FParse::Value(pwVar9,L"X=",(float *)local_58);
    if (bVar6) {
      if (pTVar1->ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
      }
      bVar6 = FParse::Value(pwVar9,L"Y=",(float *)(local_58 + 4));
      if (bVar6) {
        if (pTVar1->ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
        }
        FParse::Value(pwVar9,L"Z=",(float *)&uStack_50);
      }
    }
    if (pTVar1->ArrayNum != 0) {
      pwVar10 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
    }
    FParse::Value(pwVar10,L"W=",(float *)((longlong)&uStack_50 + 4));
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      uVar7 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar2->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_38[0].__this._0_4_ = 0;
      local_38[0].__this._4_4_ = 0;
      local_38[0].Context._0_4_ = 0;
      local_38[0].Context._4_4_ = 0;
    }
    else {
      local_38[0].__this._0_4_ = *(undefined4 *)(lVar3 + 0x7c);
      local_38[0].__this._4_4_ = *(undefined4 *)(lVar3 + 0x80);
      local_38[0].Context._0_4_ = *(undefined4 *)(lVar3 + 0x84);
      local_38[0].Context._4_4_ = *(undefined4 *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    uVar8 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TVector4<float>_>
              (this,(uint)uVar8,pFVar4,(TVector4<float> *)local_58,(FGuid *)local_38,uVar7,
               &local_res8);
    bVar6 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName) {
    pwVar10 = L"";
    local_58._0_4_ = 0.0;
    local_58._4_4_ = 0.0;
    uStack_50._0_4_ = 0.0;
    uStack_50._4_4_ = 0.0;
    dStack_48 = 0.0;
    local_40 = __real_3ff0000000000000;
    if (pTVar1->ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
    }
    bVar6 = FParse::Value(pwVar9,L"X=",(double *)local_58);
    if (bVar6) {
      if (pTVar1->ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
      }
      bVar6 = FParse::Value(pwVar9,L"Y=",(double *)&uStack_50);
      if (bVar6) {
        if (pTVar1->ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
        }
        bVar6 = FParse::Value(pwVar9,L"Z=",&dStack_48);
        if (bVar6) {
          if (pTVar1->ArrayNum != 0) {
            pwVar10 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
          }
          FParse::Value(pwVar10,L"W=",&local_40);
        }
      }
    }
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      uVar7 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar2->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_38[0].__this._0_4_ = 0;
      local_38[0].__this._4_4_ = 0;
      local_38[0].Context._0_4_ = 0;
      local_38[0].Context._4_4_ = 0;
    }
    else {
      local_38[0].__this._0_4_ = *(undefined4 *)(lVar3 + 0x7c);
      local_38[0].__this._4_4_ = *(undefined4 *)(lVar3 + 0x80);
      local_38[0].Context._0_4_ = *(undefined4 *)(lVar3 + 0x84);
      local_38[0].Context._4_4_ = *(undefined4 *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    uVar8 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TQuat<double>_>
              (this,(uint)uVar8,pFVar4,(TQuat<double> *)local_58,(FGuid *)local_38,uVar7,&local_res8
              );
    bVar6 = true;
  }
  else {
    local_38[0].__this = pFVar5;
    local_38[0].Context = this;
    bVar6 = TDataflowMultiTypePolicy<UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
            ::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
                      (param_1,local_38);
  }
  return bVar6;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l2::<lambda_1>_> @ 144422500

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowNode *pFVar2;
  longlong lVar3;
  FProperty *pFVar4;
  FDataflowOutput *pFVar5;
  FContext *this;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FTimestamp local_res8;
  FGuid local_78;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *local_68;
  undefined1 local_58 [16];
  double adStack_48 [2];
  undefined1 local_38 [16];
  double dStack_28;
  double local_20 [3];
  
  pTVar1 = param_2->InVal;
  pFVar5 = param_2->__this;
  this = param_2->Context;
  local_68 = pTVar1;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName) {
    pwVar10 = L"";
    local_58._0_8_ = 0.0;
    local_58._8_8_ = 0.0;
    adStack_48[0] = 0.0;
    if (pTVar1->ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
    }
    bVar6 = FParse::Value(pwVar9,L"X=",(double *)local_58);
    if (bVar6) {
      if (pTVar1->ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
      }
      bVar6 = FParse::Value(pwVar9,L"Y=",(double *)(local_58 + 8));
      if (bVar6) {
        if (pTVar1->ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
        }
        FParse::Value(pwVar10,L"Z=",adStack_48);
      }
    }
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      uVar7 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar2->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_78.A = 0;
      local_78.B = 0;
      local_78.C = 0;
      local_78.D = 0;
    }
    else {
      local_78.A = *(uint *)(lVar3 + 0x7c);
      local_78.B = *(uint *)(lVar3 + 0x80);
      local_78.C = *(uint *)(lVar3 + 0x84);
      local_78.D = *(uint *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    uVar8 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TVector<double>_>
              (this,(uint)uVar8,pFVar4,(TVector<double> *)local_58,&local_78,uVar7,&local_res8);
    bVar6 = true;
  }
  else {
    adStack_48[0] = (double)pTVar1;
    if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName) {
      pwVar10 = L"";
      local_38._0_8_ = 0.0;
      local_38._8_8_ = 0.0;
      dStack_28 = 0.0;
      local_20[0] = __real_3ff0000000000000;
      if (pTVar1->ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
      }
      bVar6 = FParse::Value(pwVar9,L"X=",(double *)local_38);
      if (bVar6) {
        if (pTVar1->ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
        }
        bVar6 = FParse::Value(pwVar9,L"Y=",(double *)(local_38 + 8));
        if (bVar6) {
          if (pTVar1->ArrayNum == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
          }
          FParse::Value(pwVar9,L"Z=",&dStack_28);
        }
      }
      if (pTVar1->ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
      }
      FParse::Value(pwVar10,L"W=",local_20);
      pFVar2 = (FDataflowNode *)pFVar5->_padding_;
      if (pFVar2 == (FDataflowNode *)0x0) {
        uVar7 = 0;
        local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
      }
      else {
        local_res8.Value = (pFVar2->LastModifiedTimestamp).Value;
        uVar7 = FDataflowNode::GetValueHash(pFVar2);
      }
      lVar3 = pFVar5->_padding_;
      if (lVar3 == 0) {
        local_78.A = 0;
        local_78.B = 0;
        local_78.C = 0;
        local_78.D = 0;
      }
      else {
        local_78.A = *(uint *)(lVar3 + 0x7c);
        local_78.B = *(uint *)(lVar3 + 0x80);
        local_78.C = *(uint *)(lVar3 + 0x84);
        local_78.D = *(uint *)(lVar3 + 0x88);
      }
      pFVar4 = (FProperty *)pFVar5->_padding_;
      uVar8 = CityHash64((char *)&pFVar5->_padding_,0x10);
      UE::Dataflow::FContext::SetData<UE::Math::TVector4<double>_>
                (this,(uint)uVar8,pFVar4,(TVector4<double> *)local_38,&local_78,uVar7,&local_res8);
      bVar6 = true;
    }
    else {
      local_58._0_8_ = pFVar5;
      local_58._8_8_ = this;
      bVar6 = TDataflowMultiTypePolicy<UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
              ::
              VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
                        (param_1,(<lambda_1> *)local_58);
    }
  }
  return bVar6;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l2::<lambda_1>_> @ 1444227d0

bool __cdecl
TDataflowMultiTypePolicy<FName,FText>::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FName *pFVar9;
  ulong64 uVar10;
  FText *pFVar11;
  FName local_res8;
  FName local_res10;
  TRefCountPtr<ITextData> local_68;
  undefined8 uStack_60;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *local_58;
  FGuid local_48;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *local_38;
  
  local_58 = param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  local_38 = local_58;
  if (param_1 == TDataflowSingleTypePolicy<FName>::TypeName) {
    uVar7 = 0;
    uVar8 = local_58->ArrayNum - 1;
    if (local_58->ArrayNum == 0) {
      uVar8 = uVar7;
    }
    pFVar9 = ::FName::FName(&local_res8,uVar8,(wchar_t *)(local_58->AllocatorInstance).Data,
                            FNAME_Add);
    local_res10 = *pFVar9;
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      local_res8.ComparisonIndex.Value = (undefined4)UE::Dataflow::FTimestamp::Invalid;
      local_res8.Number = UE::Dataflow::FTimestamp::Invalid._4_4_;
    }
    else {
      local_res8 = (FName)(pFVar1->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_68.Reference = (ITextData *)0x0;
      uStack_60._0_4_ = 0;
      uStack_60._4_4_ = 0;
      uVar5 = uStack_60;
      local_68.Reference._0_4_ = 0;
      local_68.Reference._4_4_ = 0;
      uStack_60._0_4_ = 0;
      uStack_60._4_4_ = 0;
      local_48.A = (uint)local_68.Reference;
      local_48.B = local_68.Reference._4_4_;
      local_48.C = (uint)uStack_60;
      local_48.D = uStack_60._4_4_;
      uStack_60 = uVar5;
    }
    else {
      local_48.A = *(uint *)(lVar2 + 0x7c);
      local_48.B = *(uint *)(lVar2 + 0x80);
      local_48.C = *(uint *)(lVar2 + 0x84);
      local_48.D = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar10 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FName>
              (this,(uint)uVar10,pFVar3,&local_res10,&local_48,uVar7,(FTimestamp *)&local_res8);
    bVar6 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<FText>::TypeName) {
    FText::FText((FText *)&local_48);
    pFVar11 = FText::FromString((FText *)&local_68,(FString *)local_58);
    FText::operator=((FText *)&local_48,pFVar11);
    if (local_68.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.Reference + 0x10))();
    }
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar8 = 0;
      local_res8.ComparisonIndex.Value = (undefined4)UE::Dataflow::FTimestamp::Invalid;
      local_res8.Number = UE::Dataflow::FTimestamp::Invalid._4_4_;
    }
    else {
      local_res8 = (FName)(pFVar1->LastModifiedTimestamp).Value;
      uVar8 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_68.Reference._0_4_ = 0;
      local_68.Reference._4_4_ = 0;
      uStack_60._0_4_ = 0;
      uStack_60._4_4_ = 0;
    }
    else {
      local_68.Reference._0_4_ = *(uint *)(lVar2 + 0x7c);
      local_68.Reference._4_4_ = *(uint *)(lVar2 + 0x80);
      uStack_60._0_4_ = *(uint *)(lVar2 + 0x84);
      uStack_60._4_4_ = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar10 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FText>
              (this,(uint)uVar10,pFVar3,(FText *)&local_48,(FGuid *)&local_68,uVar8,
               (FTimestamp *)&local_res8);
    if ((longlong *)CONCAT44(local_48.B,local_48.A) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(local_48.B,local_48.A) + 0x10))();
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l2::<lambda_1>_> @ 1444229e0

bool __cdecl
TDataflowMultiTypePolicy<__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  FProperty *pFVar2;
  FDataflowOutput *pFVar3;
  FContext *this;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  FTimestamp local_res8;
  ulong64 local_res10;
  <lambda_1> local_48 [2];
  
  local_48[0].InVal = param_2->InVal;
  pFVar3 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<__int64>::TypeName) {
    local_res8.Value = 0;
    if ((local_48[0].InVal)->ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)((local_48[0].InVal)->AllocatorInstance).Data;
    }
    LexTryParseString<double>((double *)&local_res8,pwVar8);
    local_res10 = (ulong64)local_res8.Value;
    pFVar1 = (FDataflowNode *)pFVar3->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar5 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar5 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar7 = pFVar3->_padding_;
    if (lVar7 == 0) {
      local_48[0].__this._0_4_ = 0;
      local_48[0].__this._4_4_ = 0;
      local_48[0].Context._0_4_ = 0;
      local_48[0].Context._4_4_ = 0;
    }
    else {
      local_48[0].__this._0_4_ = *(undefined4 *)(lVar7 + 0x7c);
      local_48[0].__this._4_4_ = *(undefined4 *)(lVar7 + 0x80);
      local_48[0].Context._0_4_ = *(undefined4 *)(lVar7 + 0x84);
      local_48[0].Context._4_4_ = *(undefined4 *)(lVar7 + 0x88);
    }
    pFVar2 = (FProperty *)pFVar3->_padding_;
    uVar6 = CityHash64((char *)&pFVar3->_padding_,0x10);
    UE::Dataflow::FContext::SetData<__int64>
              (this,(uint)uVar6,pFVar2,(long64 *)&local_res10,(FGuid *)local_48,uVar5,&local_res8);
    bVar4 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<unsigned___int64>::TypeName) {
    local_res8.Value = 0;
    if ((local_48[0].InVal)->ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)((local_48[0].InVal)->AllocatorInstance).Data;
    }
    LexTryParseString<double>((double *)&local_res8,pwVar8);
    lVar7 = 0;
    if ((__real_43e0000000000000 <= (double)local_res8.Value) &&
       (local_res8.Value = (ulong64)(local_res8.Value - __real_43e0000000000000),
       (double)local_res8.Value < __real_43e0000000000000)) {
      lVar7 = -0x8000000000000000;
    }
    local_res10 = (longlong)(double)local_res8.Value + lVar7;
    pFVar1 = (FDataflowNode *)pFVar3->_padding_;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar5 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar5 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar7 = pFVar3->_padding_;
    if (lVar7 == 0) {
      local_48[0].__this._0_4_ = 0;
      local_48[0].__this._4_4_ = 0;
      local_48[0].Context._0_4_ = 0;
      local_48[0].Context._4_4_ = 0;
    }
    else {
      local_48[0].__this._0_4_ = *(undefined4 *)(lVar7 + 0x7c);
      local_48[0].__this._4_4_ = *(undefined4 *)(lVar7 + 0x80);
      local_48[0].Context._0_4_ = *(undefined4 *)(lVar7 + 0x84);
      local_48[0].Context._4_4_ = *(undefined4 *)(lVar7 + 0x88);
    }
    pFVar2 = (FProperty *)pFVar3->_padding_;
    uVar6 = CityHash64((char *)&pFVar3->_padding_,0x10);
    UE::Dataflow::FContext::SetData<unsigned___int64>
              (this,(uint)uVar6,pFVar2,&local_res10,(FGuid *)local_48,uVar5,&local_res8);
    bVar4 = true;
  }
  else {
    local_48[0].__this = pFVar3;
    local_48[0].Context = this;
    bVar4 = TDataflowMultiTypePolicy<int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
            ::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
                      (param_1,local_48);
  }
  return bVar4;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l2::<lambda_1>_> @ 144422c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FDataflowStringConvertibleTypePolicy::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *_Src;
  FDataflowNode *pFVar2;
  longlong lVar3;
  FProperty *pFVar4;
  FDataflowOutput *pFVar5;
  FContext *this;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  ulong64 uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 auStackY_128 [32];
  bool local_e8 [8];
  FTimestamp local_e0;
  undefined1 local_d8 [12];
  uint uStack_cc;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *local_c8;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_b8;
  FGuid local_a8;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *local_98;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_c8 = param_2->InVal;
  pFVar5 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<FString>::TypeName) {
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    if (&local_b8 != local_c8) {
      uVar9 = local_c8->ArrayNum;
      _Src = (local_c8->AllocatorInstance).Data;
      local_b8.ArrayMax = 0;
      local_b8.ArrayNum = uVar9;
      if (uVar9 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar9,0,&local_b8.AllocatorInstance,uVar9,&local_b8.ArrayMax);
        memcpy(local_b8.AllocatorInstance.Data,_Src,(longlong)(int)uVar9 * 2);
      }
    }
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      uVar9 = 0;
      local_e0.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_e0.Value = (pFVar2->LastModifiedTimestamp).Value;
      uVar9 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_a8.A = 0;
      local_a8.B = 0;
      uVar6 = local_a8._0_8_;
      local_a8.C = 0;
      local_a8.D = 0;
      uVar7 = local_a8._8_8_;
      local_a8.A = 0;
      local_a8.B = 0;
      local_a8.C = 0;
      local_a8.D = 0;
      local_d8._0_4_ = local_a8.A;
      local_d8._4_4_ = local_a8.B;
      local_d8._8_4_ = local_a8.C;
      uStack_cc = local_a8.D;
      local_a8._0_8_ = uVar6;
      local_a8._8_8_ = uVar7;
    }
    else {
      local_d8._0_4_ = *(uint *)(lVar3 + 0x7c);
      local_d8._4_4_ = *(uint *)(lVar3 + 0x80);
      local_d8._8_4_ = *(uint *)(lVar3 + 0x84);
      uStack_cc = *(uint *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    uVar10 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FString>
              (this,(uint)uVar10,pFVar4,(FString *)&local_b8,(FGuid *)local_d8,uVar9,&local_e0);
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  else {
    local_d8._0_8_ = pFVar5;
    unique0x10000a79 = this;
    bVar8 = TDataflowMultiTypePolicy<FName,FText>::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
                      (param_1,(<lambda_1> *)local_d8);
    if (!bVar8) {
      local_c8 = param_2->InVal;
      local_d8._0_8_ = pFVar5;
      unique0x10000a81 = this;
      bVar8 = TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
              ::
              VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
                        (param_1,(<lambda_1> *)local_d8);
      if (!bVar8) {
        pTVar1 = param_2->InVal;
        local_98 = pTVar1;
        if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName) {
          pwVar12 = L"";
          local_d8._0_8_ = (FDataflowOutput *)0x0;
          stack0xffffffffffffff30 = (FContext *)0x0;
          if (pTVar1->ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
          }
          bVar8 = FParse::Value(pwVar11,L"X=",(double *)local_d8);
          if (bVar8) {
            if (pTVar1->ArrayNum != 0) {
              pwVar12 = (wchar_t *)(pTVar1->AllocatorInstance).Data;
            }
            FParse::Value(pwVar12,L"Y=",(double *)(local_d8 + 8));
          }
          pFVar2 = (FDataflowNode *)pFVar5->_padding_;
          if (pFVar2 == (FDataflowNode *)0x0) {
            uVar9 = 0;
            local_e0.Value = UE::Dataflow::FTimestamp::Invalid;
          }
          else {
            local_e0.Value = (pFVar2->LastModifiedTimestamp).Value;
            uVar9 = FDataflowNode::GetValueHash(pFVar2);
          }
          lVar3 = pFVar5->_padding_;
          if (lVar3 == 0) {
            local_a8.A = 0;
            local_a8.B = 0;
            local_a8.C = 0;
            local_a8.D = 0;
          }
          else {
            local_a8.A = *(uint *)(lVar3 + 0x7c);
            local_a8.B = *(uint *)(lVar3 + 0x80);
            local_a8.C = *(uint *)(lVar3 + 0x84);
            local_a8.D = *(uint *)(lVar3 + 0x88);
          }
          pFVar4 = (FProperty *)pFVar5->_padding_;
          uVar10 = CityHash64((char *)&pFVar5->_padding_,0x10);
          UE::Dataflow::FContext::SetData<UE::Math::TVector2<double>_>
                    (this,(uint)uVar10,pFVar4,(TVector2<double> *)local_d8,&local_a8,uVar9,&local_e0
                    );
        }
        else {
          local_d8._0_8_ = pFVar5;
          unique0x10000a89 = this;
          local_c8 = pTVar1;
          bVar8 = TDataflowMultiTypePolicy<UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
                  ::
                  VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
                            (param_1,(<lambda_1> *)local_d8);
          if (!bVar8) {
            local_c8 = param_2->InVal;
            if (param_1 == TDataflowSingleTypePolicy<bool>::TypeName) {
              local_e8[0] = ::FString::ToBool((FString *)local_c8);
              pFVar2 = (FDataflowNode *)pFVar5->_padding_;
              if (pFVar2 == (FDataflowNode *)0x0) {
                uVar9 = 0;
                local_e0.Value = UE::Dataflow::FTimestamp::Invalid;
              }
              else {
                local_e0.Value = (pFVar2->LastModifiedTimestamp).Value;
                uVar9 = FDataflowNode::GetValueHash(pFVar2);
              }
              lVar3 = pFVar5->_padding_;
              if (lVar3 == 0) {
                local_d8._0_4_ = 0;
                local_d8._4_4_ = 0;
                local_d8._8_4_ = 0;
                uStack_cc = 0;
              }
              else {
                local_d8._0_4_ = *(uint *)(lVar3 + 0x7c);
                local_d8._4_4_ = *(uint *)(lVar3 + 0x80);
                local_d8._8_4_ = *(uint *)(lVar3 + 0x84);
                uStack_cc = *(uint *)(lVar3 + 0x88);
              }
              pFVar4 = (FProperty *)pFVar5->_padding_;
              uVar10 = CityHash64((char *)&pFVar5->_padding_,0x10);
              UE::Dataflow::FContext::SetData<bool>
                        (this,(uint)uVar10,pFVar4,local_e8,(FGuid *)local_d8,uVar9,&local_e0);
            }
            else {
              if (param_1 != TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName) {
                return false;
              }
              local_88.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_88.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_88.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_88.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_88.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_88.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_88.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_88.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_88.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_88.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_88.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_88.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              UE::Math::TTransform<double>::InitFromString(&local_88,(FString *)local_c8);
              pFVar2 = (FDataflowNode *)pFVar5->_padding_;
              if (pFVar2 == (FDataflowNode *)0x0) {
                uVar9 = 0;
                local_e0.Value = UE::Dataflow::FTimestamp::Invalid;
              }
              else {
                local_e0.Value = (pFVar2->LastModifiedTimestamp).Value;
                uVar9 = FDataflowNode::GetValueHash(pFVar2);
              }
              lVar3 = pFVar5->_padding_;
              if (lVar3 == 0) {
                local_d8._0_4_ = 0;
                local_d8._4_4_ = 0;
                local_d8._8_4_ = 0;
                uStack_cc = 0;
              }
              else {
                local_d8._0_4_ = *(uint *)(lVar3 + 0x7c);
                local_d8._4_4_ = *(uint *)(lVar3 + 0x80);
                local_d8._8_4_ = *(uint *)(lVar3 + 0x84);
                uStack_cc = *(uint *)(lVar3 + 0x88);
              }
              pFVar4 = (FProperty *)pFVar5->_padding_;
              uVar10 = CityHash64((char *)&pFVar5->_padding_,0x10);
              UE::Dataflow::FContext::SetData<UE::Math::TTransform<double>_>
                        (this,(uint)uVar10,pFVar4,&local_88,(FGuid *)local_d8,uVar9,&local_e0);
            }
          }
        }
      }
    }
  }
  return true;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowStringTypes>'::__l2::<lambda_1>_> @ 1444230d0

bool __cdecl
TDataflowMultiTypePolicy<FName,FText>::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  int iVar1;
  FDataflowNode *pFVar2;
  longlong lVar3;
  FProperty *pFVar4;
  FDataflowOutput *pFVar5;
  FContext *this;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FName *pFVar10;
  ulong64 uVar11;
  FText *pFVar12;
  FName local_res8;
  FName local_res10;
  TRefCountPtr<ITextData> local_68;
  undefined8 uStack_60;
  TVector4<double> *local_58;
  FGuid local_48;
  TVector4<double> *local_38;
  
  local_58 = param_2->InVal;
  pFVar5 = param_2->__this;
  this = param_2->Context;
  local_38 = local_58;
  if (param_1 == TDataflowSingleTypePolicy<FName>::TypeName) {
    iVar1 = *(int *)((longlong)&local_58->field0_0x0 + 8);
    uVar8 = 0;
    uVar9 = iVar1 - 1;
    if (iVar1 == 0) {
      uVar9 = uVar8;
    }
    pFVar10 = ::FName::FName(&local_res8,uVar9,(wchar_t *)(local_58->field0_0x0)._s_0.X,FNAME_Add);
    local_res10 = *pFVar10;
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      local_res8.ComparisonIndex.Value = (undefined4)UE::Dataflow::FTimestamp::Invalid;
      local_res8.Number = UE::Dataflow::FTimestamp::Invalid._4_4_;
    }
    else {
      local_res8 = (FName)(pFVar2->LastModifiedTimestamp).Value;
      uVar8 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_68.Reference = (ITextData *)0x0;
      uStack_60._0_4_ = 0;
      uStack_60._4_4_ = 0;
      uVar6 = uStack_60;
      local_68.Reference._0_4_ = 0;
      local_68.Reference._4_4_ = 0;
      uStack_60._0_4_ = 0;
      uStack_60._4_4_ = 0;
      local_48.A = (uint)local_68.Reference;
      local_48.B = local_68.Reference._4_4_;
      local_48.C = (uint)uStack_60;
      local_48.D = uStack_60._4_4_;
      uStack_60 = uVar6;
    }
    else {
      local_48.A = *(uint *)(lVar3 + 0x7c);
      local_48.B = *(uint *)(lVar3 + 0x80);
      local_48.C = *(uint *)(lVar3 + 0x84);
      local_48.D = *(uint *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    uVar11 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FName>
              (this,(uint)uVar11,pFVar4,&local_res10,&local_48,uVar8,(FTimestamp *)&local_res8);
    bVar7 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<FText>::TypeName) {
    FText::FText((FText *)&local_48);
    pFVar12 = FText::FromString((FText *)&local_68,(FString *)local_58);
    FText::operator=((FText *)&local_48,pFVar12);
    if (local_68.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.Reference + 0x10))();
    }
    pFVar2 = (FDataflowNode *)pFVar5->_padding_;
    if (pFVar2 == (FDataflowNode *)0x0) {
      uVar9 = 0;
      local_res8.ComparisonIndex.Value = (undefined4)UE::Dataflow::FTimestamp::Invalid;
      local_res8.Number = UE::Dataflow::FTimestamp::Invalid._4_4_;
    }
    else {
      local_res8 = (FName)(pFVar2->LastModifiedTimestamp).Value;
      uVar9 = FDataflowNode::GetValueHash(pFVar2);
    }
    lVar3 = pFVar5->_padding_;
    if (lVar3 == 0) {
      local_68.Reference._0_4_ = 0;
      local_68.Reference._4_4_ = 0;
      uStack_60._0_4_ = 0;
      uStack_60._4_4_ = 0;
    }
    else {
      local_68.Reference._0_4_ = *(uint *)(lVar3 + 0x7c);
      local_68.Reference._4_4_ = *(uint *)(lVar3 + 0x80);
      uStack_60._0_4_ = *(uint *)(lVar3 + 0x84);
      uStack_60._4_4_ = *(uint *)(lVar3 + 0x88);
    }
    pFVar4 = (FProperty *)pFVar5->_padding_;
    uVar11 = CityHash64((char *)&pFVar5->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FText>
              (this,(uint)uVar11,pFVar4,(FText *)&local_48,(FGuid *)&local_68,uVar9,
               (FTimestamp *)&local_res8);
    if ((longlong *)CONCAT44(local_48.B,local_48.A) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(local_48.B,local_48.A) + 0x10))();
    }
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>_> @ 1444232e0

bool __cdecl
TDataflowMultiTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  undefined1 local_res8 [32];
  FDataflowOutput *local_28;
  FContext *pFStack_20;
  FString *local_18;
  
  local_28 = param_2->__this;
  pFStack_20 = param_2->Context;
  local_18 = param_2->InVal;
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    `FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                )local_res8);
    return true;
  }
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    `FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                )local_res8);
    return true;
  }
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    `FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                )local_res8);
    return true;
  }
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    `FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                )local_res8);
    return true;
  }
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    `FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                )local_res8);
    return true;
  }
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    `FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                )local_res8);
    return true;
  }
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    `FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                )local_res8);
    return true;
  }
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::TypeName) {
    `FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,
               (TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>)
               local_res8);
    return true;
  }
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    `FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                )local_res8);
    return true;
  }
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    `FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                )local_res8);
    return true;
  }
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    `FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                )local_res8);
    return true;
  }
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    `FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                )local_res8);
    return true;
  }
  return false;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>'::__l2::<lambda_1>_> @ 1444234e0

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  TIntPoint<int>_u_0 local_res8;
  TIntPoint<int>_u_0 local_res10;
  undefined1 local_58 [12];
  undefined4 uStack_4c;
  <lambda_1> local_48 [2];
  
  local_48[0].InVal = param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName) {
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_res8._s_0.Y =
         (int)*(double *)((local_48[0].InVal)->SelectionArray).AllocatorInstance.InlineData;
    local_res8._s_0.X = (int)(double)(local_48[0].InVal)->GroupName;
    local_res10 = local_res8;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res8 = (TIntPoint<int>_u_0)UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8 = (TIntPoint<int>_u_0)(pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_58._0_8_ = 0;
      stack0xffffffffffffffb0 = 0;
      local_58._0_4_ = 0;
      local_58._4_4_ = 0;
      local_58._8_4_ = 0;
      uStack_4c = 0;
      iVar8 = local_58._0_4_;
      iVar9 = local_58._4_4_;
      iVar10 = local_58._8_4_;
      uVar11 = uStack_4c;
    }
    else {
      iVar8 = *(int *)(lVar2 + 0x7c);
      iVar9 = *(int *)(lVar2 + 0x80);
      iVar10 = *(int *)(lVar2 + 0x84);
      uVar11 = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    local_48[0].__this = (FDataflowOutput *)CONCAT44(iVar9,iVar8);
    local_48[0].Context = (FContext *)CONCAT44(uVar11,iVar10);
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TIntPoint<int>_>
              (this,(uint)uVar7,pFVar3,(TIntPoint<int> *)&local_res10._s_0,(FGuid *)local_48,uVar6,
               (FTimestamp *)&local_res8._s_0);
    bVar5 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName) {
    local_58._4_4_ =
         (int)*(double *)((local_48[0].InVal)->SelectionArray).AllocatorInstance.InlineData;
    local_58._0_4_ = (int)(double)(local_48[0].InVal)->GroupName;
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    stack0xffffffffffffffb0 =
         CONCAT44(uStack_4c,
                  (int)*(double *)
                        (((local_48[0].InVal)->SelectionArray).AllocatorInstance.InlineData + 8));
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res8 = (TIntPoint<int>_u_0)UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8 = (TIntPoint<int>_u_0)(pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48[0].__this._0_4_ = 0;
      local_48[0].__this._4_4_ = 0;
      local_48[0].Context._0_4_ = 0;
      local_48[0].Context._4_4_ = 0;
    }
    else {
      local_48[0].__this._0_4_ = *(undefined4 *)(lVar2 + 0x7c);
      local_48[0].__this._4_4_ = *(undefined4 *)(lVar2 + 0x80);
      local_48[0].Context._0_4_ = *(undefined4 *)(lVar2 + 0x84);
      local_48[0].Context._4_4_ = *(undefined4 *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TIntVector3<int>_>
              (this,(uint)uVar7,pFVar3,(TIntVector3<int> *)local_58,(FGuid *)local_48,uVar6,
               (FTimestamp *)&local_res8._s_0);
    bVar5 = true;
  }
  else {
    local_48[0].__this = pFVar4;
    local_48[0].Context = this;
    bVar5 = TDataflowMultiTypePolicy<UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>_::__l2::<lambda_1>_>
                      (param_1,local_48);
  }
  return bVar5;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>'::__l2::<lambda_1>_> @ 1444236c0

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::
VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  ulong64 uVar9;
  FTimestamp local_res8;
  FGuid local_58;
  TIntVector4<int>_u_0 local_48;
  TRotator<double> local_38 [2];
  
  local_38[0].Roll = (double)param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName) {
    local_58.B = (uint)*(double *)
                        (((FDataflowSelection *)local_38[0].Roll)->SelectionArray).AllocatorInstance
                        .InlineData;
    local_58.A = (int)(double)((FDataflowSelection *)local_38[0].Roll)->GroupName;
    local_58.C = (uint)*(double *)
                        ((((FDataflowSelection *)local_38[0].Roll)->SelectionArray).
                         AllocatorInstance.InlineData + 8);
    local_58.D = (uint)(double)(((FDataflowSelection *)local_38[0].Roll)->SelectionArray).
                               AllocatorInstance.SecondaryData;
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_48._s_0.X = (int)(double)((FDataflowSelection *)local_38[0].Roll)->GroupName;
    local_48._s_0.Y = local_58.B;
    local_48._s_0.Z = local_58.C;
    local_48._s_0.W = local_58.D;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar8 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar8 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_58.A = 0;
      local_58.B = 0;
      local_58.C = 0;
      local_58.D = 0;
    }
    else {
      local_58.A = *(uint *)(lVar2 + 0x7c);
      local_58.B = *(uint *)(lVar2 + 0x80);
      local_58.C = *(uint *)(lVar2 + 0x84);
      local_58.D = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar9 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TIntVector4<int>_>
              (this,(uint)uVar9,pFVar3,(TIntVector4<int> *)&local_48._s_0,&local_58,uVar8,
               &local_res8);
    bVar7 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName) {
    local_38[0].Pitch = *(double *)&((FDataflowSelection *)local_38[0].Roll)->GroupName;
    local_38[0].Yaw =
         *(double *)
          (((FDataflowSelection *)local_38[0].Roll)->SelectionArray).AllocatorInstance.InlineData;
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_38[0].Roll =
         *(double *)
          ((((FDataflowSelection *)local_38[0].Roll)->SelectionArray).AllocatorInstance.InlineData +
          8);
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar8 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar8 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_58.A = 0;
      local_58.B = 0;
      uVar5 = local_58._0_8_;
      local_58.C = 0;
      local_58.D = 0;
      uVar6 = local_58._8_8_;
      local_58.A = 0;
      local_58.B = 0;
      local_58.C = 0;
      local_58.D = 0;
      local_48._s_0.X = local_58.A;
      local_48._s_0.Y = local_58.B;
      local_48._s_0.Z = local_58.C;
      local_48._s_0.W = local_58.D;
      local_58._0_8_ = uVar5;
      local_58._8_8_ = uVar6;
    }
    else {
      local_48._s_0.X = *(uint *)(lVar2 + 0x7c);
      local_48._s_0.Y = *(uint *)(lVar2 + 0x80);
      local_48._s_0.Z = *(uint *)(lVar2 + 0x84);
      local_48._s_0.W = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar9 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TRotator<double>_>
              (this,(uint)uVar9,pFVar3,local_38,(FGuid *)&local_48._s_0,uVar8,&local_res8);
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>'::__l2::<lambda_1>_> @ 1444238d0

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  ulong64 uVar9;
  FTimestamp local_res8;
  FGuid local_58;
  FGuid local_48;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  FDataflowSelection *local_28;
  
  local_28 = param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName) {
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_48.A = (uint)(float)(double)local_28->GroupName;
    local_48.B = (uint)(float)*(double *)(local_28->SelectionArray).AllocatorInstance.InlineData;
    local_48.C = (uint)(float)*(double *)
                               ((local_28->SelectionArray).AllocatorInstance.InlineData + 8);
    local_48.D = (uint)(float)(double)(local_28->SelectionArray).AllocatorInstance.SecondaryData;
    local_58.B = local_48.B;
    local_58.A = local_48.A;
    local_58.D = local_48.D;
    local_58.C = local_48.C;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar8 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar8 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_58.A = 0;
      local_58.B = 0;
      local_58.C = 0;
      local_58.D = 0;
    }
    else {
      local_58.A = *(uint *)(lVar2 + 0x7c);
      local_58.B = *(uint *)(lVar2 + 0x80);
      local_58.C = *(uint *)(lVar2 + 0x84);
      local_58.D = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar9 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TQuat<float>_>
              (this,(uint)uVar9,pFVar3,(TQuat<float> *)&local_48,&local_58,uVar8,&local_res8);
    bVar7 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<FLinearColor>::TypeName) {
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_58.B = (uint)(float)*(double *)(local_28->SelectionArray).AllocatorInstance.InlineData;
    local_58.C = (uint)(float)*(double *)
                               ((local_28->SelectionArray).AllocatorInstance.InlineData + 8);
    local_58.D = (uint)(float)(double)(local_28->SelectionArray).AllocatorInstance.SecondaryData;
    local_58.A = (uint)(float)(double)local_28->GroupName;
    local_38._4_4_ = local_58.B;
    local_38._0_4_ = (float)(double)local_28->GroupName;
    fStack_2c = (float)local_58.D;
    fStack_30 = (float)local_58.C;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar8 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar8 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_58.A = 0;
      local_58.B = 0;
      uVar5 = local_58._0_8_;
      local_58.C = 0;
      local_58.D = 0;
      uVar6 = local_58._8_8_;
      local_58.A = 0;
      local_58.B = 0;
      local_58.C = 0;
      local_58.D = 0;
      local_48.A = local_58.A;
      local_48.B = local_58.B;
      local_48.C = local_58.C;
      local_48.D = local_58.D;
      local_58._0_8_ = uVar5;
      local_58._8_8_ = uVar6;
    }
    else {
      local_48.A = *(uint *)(lVar2 + 0x7c);
      local_48.B = *(uint *)(lVar2 + 0x80);
      local_48.C = *(uint *)(lVar2 + 0x84);
      local_48.D = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar9 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<FLinearColor>
              (this,(uint)uVar9,pFVar3,(FLinearColor *)local_38,&local_48,uVar8,&local_res8);
    bVar7 = true;
  }
  else {
    local_38 = (undefined1  [8])pFVar4;
    _fStack_30 = this;
    bVar7 = TDataflowMultiTypePolicy<UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
            ::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>_::__l2::<lambda_1>_>
                      (param_1,(<lambda_1> *)local_38);
  }
  return bVar7;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>'::__l2::<lambda_1>_> @ 144423b20

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 local_res8;
  TVector2<float>_u_0 local_res10;
  float local_58;
  float fStack_54;
  undefined8 uStack_50;
  undefined1 local_48 [4];
  uint uStack_44;
  undefined8 uStack_40;
  FDataflowSelection *local_38;
  
  local_38 = param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName) {
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_res8._4_4_ = (float)*(double *)(local_38->SelectionArray).AllocatorInstance.InlineData;
    local_res8._0_4_ = (float)(double)local_38->GroupName;
    local_res10 = local_res8;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res8 = (TVector2<float>_u_0)UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8 = (TVector2<float>_u_0)(pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      _local_58 = 0;
      uStack_50 = 0;
      local_58 = 0.0;
      fStack_54 = 0.0;
      uStack_50._0_4_ = 0.0;
      uStack_50._4_4_ = 0;
      fVar8 = local_58;
      fVar9 = fStack_54;
      uVar10 = (undefined4)uStack_50;
      uVar11 = uStack_50._4_4_;
    }
    else {
      fVar8 = *(float *)(lVar2 + 0x7c);
      fVar9 = *(float *)(lVar2 + 0x80);
      uVar10 = *(float *)(lVar2 + 0x84);
      uVar11 = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    _local_48 = (FDataflowOutput *)CONCAT44(fVar9,fVar8);
    uStack_40 = (FContext *)CONCAT44(uVar11,uVar10);
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TVector2<float>_>
              (this,(uint)uVar7,pFVar3,(TVector2<float> *)&local_res10._s_0,(FGuid *)local_48,uVar6,
               (FTimestamp *)&local_res8);
    bVar5 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName) {
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    fStack_54 = (float)*(double *)(local_38->SelectionArray).AllocatorInstance.InlineData;
    local_58 = (float)(double)local_38->GroupName;
    uStack_50 = CONCAT44(uStack_50._4_4_,
                         (float)*(double *)
                                 ((local_38->SelectionArray).AllocatorInstance.InlineData + 8));
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar6 = 0;
      local_res8 = (TVector2<float>_u_0)UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8 = (TVector2<float>_u_0)(pFVar1->LastModifiedTimestamp).Value;
      uVar6 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48 = (undefined1  [4])0x0;
      uStack_44 = 0;
      uStack_40._0_4_ = 0;
      uStack_40._4_4_ = 0;
    }
    else {
      local_48 = *(undefined1 (*) [4])(lVar2 + 0x7c);
      uStack_44 = *(uint *)(lVar2 + 0x80);
      uStack_40._0_4_ = *(uint *)(lVar2 + 0x84);
      uStack_40._4_4_ = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar7 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TVector<float>_>
              (this,(uint)uVar7,pFVar3,(TVector<float> *)&local_58,(FGuid *)local_48,uVar6,
               (FTimestamp *)&local_res8);
    bVar5 = true;
  }
  else {
    _local_48 = pFVar4;
    uStack_40 = this;
    bVar5 = TDataflowMultiTypePolicy<UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
            ::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>_::__l2::<lambda_1>_>
                      (param_1,(<lambda_1> *)local_48);
  }
  return bVar5;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>'::__l2::<lambda_1>_> @ 144423d20

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  ulong64 uVar9;
  FTimestamp local_res8;
  FGuid local_68;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  FDataflowSelection *local_48;
  TQuat<double> local_38;
  
  local_48 = param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName) {
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_68.B = (uint)(float)*(double *)(local_48->SelectionArray).AllocatorInstance.InlineData;
    local_68.C = (uint)(float)*(double *)
                               ((local_48->SelectionArray).AllocatorInstance.InlineData + 8);
    local_68.D = (uint)(float)(double)(local_48->SelectionArray).AllocatorInstance.SecondaryData;
    local_68.A = (uint)(float)(double)local_48->GroupName;
    local_58._4_4_ = local_68.B;
    local_58._0_4_ = (float)(double)local_48->GroupName;
    fStack_4c = (float)local_68.D;
    fStack_50 = (float)local_68.C;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar8 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar8 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_68.A = 0;
      local_68.B = 0;
      local_68.C = 0;
      local_68.D = 0;
    }
    else {
      local_68.A = *(uint *)(lVar2 + 0x7c);
      local_68.B = *(uint *)(lVar2 + 0x80);
      local_68.C = *(uint *)(lVar2 + 0x84);
      local_68.D = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar9 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TVector4<float>_>
              (this,(uint)uVar9,pFVar3,(TVector4<float> *)local_58,&local_68,uVar8,&local_res8);
    bVar7 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName) {
    local_38.X = *(double *)&local_48->GroupName;
    local_38.Y = *(double *)(local_48->SelectionArray).AllocatorInstance.InlineData;
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_38.Z = *(double *)((local_48->SelectionArray).AllocatorInstance.InlineData + 8);
    local_38.W = *(double *)&(local_48->SelectionArray).AllocatorInstance.SecondaryData;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar8 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar8 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_68.A = 0;
      local_68.B = 0;
      uVar5 = local_68._0_8_;
      local_68.C = 0;
      local_68.D = 0;
      uVar6 = local_68._8_8_;
      local_68.A = 0;
      local_68.B = 0;
      local_68.C = 0;
      local_68.D = 0;
      local_58._0_4_ = local_68.A;
      local_58._4_4_ = local_68.B;
      fStack_50 = (float)local_68.C;
      fStack_4c = (float)local_68.D;
      local_68._0_8_ = uVar5;
      local_68._8_8_ = uVar6;
    }
    else {
      local_58._0_4_ = *(uint *)(lVar2 + 0x7c);
      local_58._4_4_ = *(uint *)(lVar2 + 0x80);
      fStack_50 = (float)*(uint *)(lVar2 + 0x84);
      fStack_4c = (float)*(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar9 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TQuat<double>_>
              (this,(uint)uVar9,pFVar3,&local_38,(FGuid *)local_58,uVar8,&local_res8);
    bVar7 = true;
  }
  else {
    local_58 = (undefined1  [8])pFVar4;
    _fStack_50 = this;
    bVar7 = TDataflowMultiTypePolicy<UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
            ::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>_::__l2::<lambda_1>_>
                      (param_1,(<lambda_1> *)local_58);
  }
  return bVar7;
}

// VisitPolicyByType<`FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>'::__l2::<lambda_1>_> @ 144423f30

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>_::__l2::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowNode *pFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  FDataflowOutput *pFVar4;
  FContext *this;
  double dVar5;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  FTimestamp local_res8;
  FGuid local_48;
  TVector4<double>_u_0 local_38;
  
  local_38._s_0.Z = (double)param_2->InVal;
  pFVar4 = param_2->__this;
  this = param_2->Context;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName) {
    local_38._s_0.X = (double)((FDataflowSelection *)local_38._s_0.Z)->GroupName;
    local_38._s_0.Y =
         (double)*(undefined8 *)
                  (((FDataflowSelection *)local_38._s_0.Z)->SelectionArray).AllocatorInstance.
                  InlineData;
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_38._s_0.Z =
         (double)*(undefined8 *)
                  ((((FDataflowSelection *)local_38._s_0.Z)->SelectionArray).AllocatorInstance.
                   InlineData + 8);
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar7 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48.A = 0;
      local_48.B = 0;
      local_48.C = 0;
      local_48.D = 0;
    }
    else {
      local_48.A = *(uint *)(lVar2 + 0x7c);
      local_48.B = *(uint *)(lVar2 + 0x80);
      local_48.C = *(uint *)(lVar2 + 0x84);
      local_48.D = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar8 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TVector<double>_>
              (this,(uint)uVar8,pFVar3,(TVector<double> *)&local_38._s_0,&local_48,uVar7,&local_res8
              );
    bVar6 = true;
  }
  else if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName) {
    pFVar1 = (FDataflowNode *)pFVar4->_padding_;
    local_38._s_0.X = (double)((FDataflowSelection *)local_38._s_0.Z)->GroupName;
    local_38._s_0.Y =
         (double)*(undefined8 *)
                  (((FDataflowSelection *)local_38._s_0.Z)->SelectionArray).AllocatorInstance.
                  InlineData;
    dVar5 = *(double *)
             ((((FDataflowSelection *)local_38._s_0.Z)->SelectionArray).AllocatorInstance.InlineData
             + 8);
    local_38._s_0.W =
         (double)(((FDataflowSelection *)local_38._s_0.Z)->SelectionArray).AllocatorInstance.
                 SecondaryData;
    local_38._s_0.Z = dVar5;
    if (pFVar1 == (FDataflowNode *)0x0) {
      uVar7 = 0;
      local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      local_res8.Value = (pFVar1->LastModifiedTimestamp).Value;
      uVar7 = FDataflowNode::GetValueHash(pFVar1);
    }
    lVar2 = pFVar4->_padding_;
    if (lVar2 == 0) {
      local_48.A = 0;
      local_48.B = 0;
      local_48.C = 0;
      local_48.D = 0;
    }
    else {
      local_48.A = *(uint *)(lVar2 + 0x7c);
      local_48.B = *(uint *)(lVar2 + 0x80);
      local_48.C = *(uint *)(lVar2 + 0x84);
      local_48.D = *(uint *)(lVar2 + 0x88);
    }
    pFVar3 = (FProperty *)pFVar4->_padding_;
    uVar8 = CityHash64((char *)&pFVar4->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TVector4<double>_>
              (this,(uint)uVar8,pFVar3,(TVector4<double> *)&local_38._s_0,&local_48,uVar7,
               &local_res8);
    bVar6 = true;
  }
  else {
    local_38._0_8_ = pFVar4;
    local_38._s_0.Y = (double)this;
    bVar6 = TDataflowMultiTypePolicy<UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
            ::
            VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowVectorTypes>_::__l2::<lambda_1>_>
                      (param_1,(<lambda_1> *)&local_38._s_0);
  }
  return bVar6;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>'::__l17::<lambda_1>_> @ 144424110

bool __cdecl
TDataflowMultiTypePolicy<signed_char,unsigned_char>::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FContextCacheElementBase *pFVar2;
  code *pcVar3;
  FContext *pFVar4;
  TRotator<double> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  schar *psVar10;
  byte *pbVar11;
  schar local_res8 [8];
  byte local_res10 [24];
  
  pFVar4 = param_2->Context;
  pTVar5 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<signed_char>::TypeName) {
    local_res8[0] = '\0';
    pFVar2 = (*param_2->CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      uVar8 = (uint)(char)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar9 = (undefined8 *)(**(code **)pFVar4->_padding_)(pFVar4,(int)pFVar2[1]._padding_);
      if (puVar9 == (undefined8 *)0x0) {
        uVar8 = (uint)local_res8[0];
      }
      else {
        psVar10 = UE::Dataflow::FContextCacheElementBase::GetTypedData<signed_char>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)pFVar4,
                             (FProperty *)0x0,local_res8);
        uVar8 = (uint)*psVar10;
      }
    }
    else if (EVar1 == CacheElementNull) {
      uVar8 = 0;
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      uVar8 = (uint)local_res8[0];
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<unsigned_char>::TypeName) {
      return false;
    }
    local_res10[0] = 0;
    pFVar2 = (*param_2->CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      local_res10[0] = (byte)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar9 = (undefined8 *)(**(code **)pFVar4->_padding_)(pFVar4,(int)pFVar2[1]._padding_);
      if (puVar9 != (undefined8 *)0x0) {
        pbVar11 = UE::Dataflow::FContextCacheElementBase::GetTypedData<unsigned_char>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)pFVar4,
                             (FProperty *)0x0,local_res10);
        local_res10[0] = *pbVar11;
      }
    }
    else if (EVar1 == CacheElementNull) {
      local_res10[0] = 0;
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    uVar8 = (uint)local_res10[0];
  }
  pTVar5->Pitch = (double)(int)uVar8;
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>'::__l17::<lambda_1>_> @ 1444242c0

bool __cdecl
TDataflowMultiTypePolicy<short,unsigned_short,signed_char,unsigned_char>::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FContextCacheElementBase *pFVar2;
  code *pcVar3;
  FContext *pFVar4;
  TRotator<double> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  short *psVar10;
  ushort *puVar11;
  short sVar12;
  ushort uVar13;
  short local_res8 [4];
  ushort local_res10 [12];
  <lambda_1> local_38;
  
  local_38.__this = param_2->__this;
  pFVar4 = param_2->Context;
  local_38.CacheEntry = param_2->CacheEntry;
  pTVar5 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<short>::TypeName) {
    local_res8[0] = 0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      uVar8 = (uint)(short)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar9 = (undefined8 *)(**(code **)pFVar4->_padding_)(pFVar4,(int)pFVar2[1]._padding_);
      if (puVar9 == (undefined8 *)0x0) {
        uVar8 = (uint)local_res8[0];
      }
      else {
        psVar10 = UE::Dataflow::FContextCacheElementBase::GetTypedData<short>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)pFVar4,
                             (FProperty *)0x0,local_res8);
        uVar8 = (uint)*psVar10;
      }
    }
    else {
      sVar12 = 0;
      if ((EVar1 != CacheElementNull) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                             ,0x24a,L""), sVar12 = local_res8[0], bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      uVar8 = (uint)sVar12;
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<unsigned_short>::TypeName) {
      local_38.Context = pFVar4;
      local_38.ReturnValue = pTVar5;
      bVar6 = TDataflowMultiTypePolicy<signed_char,unsigned_char>::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_38);
      return bVar6;
    }
    local_res10[0] = 0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      uVar13 = (ushort)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar9 = (undefined8 *)(**(code **)pFVar4->_padding_)(pFVar4,(int)pFVar2[1]._padding_);
      uVar13 = local_res10[0];
      if (puVar9 != (undefined8 *)0x0) {
        puVar11 = UE::Dataflow::FContextCacheElementBase::GetTypedData<unsigned_short>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)pFVar4,
                             (FProperty *)0x0,local_res10);
        uVar13 = *puVar11;
      }
    }
    else {
      uVar13 = 0;
      if ((EVar1 != CacheElementNull) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                             ,0x24a,L""), uVar13 = local_res10[0], bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    uVar8 = (uint)uVar13;
  }
  pTVar5->Pitch = (double)(int)uVar8;
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>'::__l17::<lambda_1>_> @ 144424480

bool __cdecl
TDataflowMultiTypePolicy<int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FContextCacheElementBase *pFVar2;
  code *pcVar3;
  FContext *pFVar4;
  TRotator<double> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  double dVar13;
  int local_res8 [2];
  uint local_res10 [6];
  <lambda_1> local_38;
  
  local_38.__this = param_2->__this;
  pFVar4 = param_2->Context;
  local_38.CacheEntry = param_2->CacheEntry;
  pTVar5 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<int>::TypeName) {
    local_res8[0] = 0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      dVar13 = (double)(int)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar8 = (undefined8 *)(**(code **)pFVar4->_padding_)(pFVar4,(int)pFVar2[1]._padding_);
      if (puVar8 == (undefined8 *)0x0) {
        dVar13 = (double)local_res8[0];
      }
      else {
        piVar9 = UE::Dataflow::FContextCacheElementBase::GetTypedData<int>
                           ((FContextCacheElementBase *)*puVar8,(IContextCacheStore *)pFVar4,
                            (FProperty *)0x0,local_res8);
        dVar13 = (double)*piVar9;
      }
    }
    else {
      iVar11 = 0;
      if ((EVar1 != CacheElementNull) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                             ,0x24a,L""), iVar11 = local_res8[0], bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      dVar13 = (double)iVar11;
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<unsigned_int>::TypeName) {
      local_38.Context = pFVar4;
      local_38.ReturnValue = pTVar5;
      bVar6 = TDataflowMultiTypePolicy<short,unsigned_short,signed_char,unsigned_char>::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_38);
      return bVar6;
    }
    local_res10[0] = 0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      uVar12 = (uint)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar8 = (undefined8 *)(**(code **)pFVar4->_padding_)(pFVar4,(int)pFVar2[1]._padding_);
      uVar12 = local_res10[0];
      if (puVar8 != (undefined8 *)0x0) {
        puVar10 = UE::Dataflow::FContextCacheElementBase::GetTypedData<unsigned_int>
                            ((FContextCacheElementBase *)*puVar8,(IContextCacheStore *)pFVar4,
                             (FProperty *)0x0,local_res10);
        uVar12 = *puVar10;
      }
    }
    else {
      uVar12 = 0;
      if ((EVar1 != CacheElementNull) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                             ,0x24a,L""), uVar12 = local_res10[0], bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    dVar13 = (double)uVar12;
  }
  pTVar5->Pitch = dVar13;
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>'::__l17::<lambda_1>_> @ 144424640

bool __cdecl
TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FContextCacheElementBase *pFVar2;
  code *pcVar3;
  FContext *pFVar4;
  TRotator<double> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  double *pdVar9;
  float *pfVar10;
  float fVar11;
  double dVar12;
  float local_res8 [2];
  double local_res10 [3];
  <lambda_1> local_38;
  
  local_38.__this = param_2->__this;
  pFVar4 = param_2->Context;
  local_38.CacheEntry = param_2->CacheEntry;
  pTVar5 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<double>::TypeName) {
    local_res10[0] = 0.0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      dVar12 = (double)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar8 = (undefined8 *)(**(code **)pFVar4->_padding_)(pFVar4,(int)pFVar2[1]._padding_);
      dVar12 = local_res10[0];
      if (puVar8 != (undefined8 *)0x0) {
        pdVar9 = UE::Dataflow::FContextCacheElementBase::GetTypedData<double>
                           ((FContextCacheElementBase *)*puVar8,(IContextCacheStore *)pFVar4,
                            (FProperty *)0x0,local_res10);
        dVar12 = *pdVar9;
      }
    }
    else {
      dVar12 = 0.0;
      if ((EVar1 != CacheElementNull) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                             ,0x24a,L""), dVar12 = local_res10[0], bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<float>::TypeName) {
      local_38.Context = pFVar4;
      local_38.ReturnValue = pTVar5;
      bVar6 = TDataflowMultiTypePolicy<__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
              ::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_38);
      return bVar6;
    }
    local_res8[0] = 0.0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      fVar11 = *(float *)&pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar8 = (undefined8 *)(**(code **)pFVar4->_padding_)(pFVar4,(int)pFVar2[1]._padding_);
      fVar11 = local_res8[0];
      if (puVar8 != (undefined8 *)0x0) {
        pfVar10 = UE::Dataflow::FContextCacheElementBase::GetTypedData<float>
                            ((FContextCacheElementBase *)*puVar8,(IContextCacheStore *)pFVar4,
                             (FProperty *)0x0,local_res8);
        fVar11 = *pfVar10;
      }
    }
    else {
      fVar11 = 0.0;
      if ((EVar1 != CacheElementNull) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                             ,0x24a,L""), fVar11 = local_res8[0], bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    dVar12 = (double)fVar11;
  }
  pTVar5->Pitch = dVar12;
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>'::__l17::<lambda_1>_> @ 1444247f0

bool __cdecl
TDataflowMultiTypePolicy<__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FContextCacheElementBase *pFVar2;
  code *pcVar3;
  FContext *pFVar4;
  TRotator<double> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  long64 *plVar9;
  ulong64 *puVar10;
  ulonglong uVar11;
  double dVar12;
  ulonglong local_res8 [4];
  ulong64 local_48 [2];
  <lambda_1> local_38;
  
  local_38.__this = param_2->__this;
  pFVar4 = param_2->Context;
  local_38.CacheEntry = param_2->CacheEntry;
  pTVar5 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<__int64>::TypeName) {
    local_res8[0] = 0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      dVar12 = (double)pFVar2[1]._padding_;
      goto LAB_14442498f;
    }
    if (EVar1 == CacheElementReference) {
      puVar8 = (undefined8 *)(**(code **)pFVar4->_padding_)(pFVar4,(int)pFVar2[1]._padding_);
      if (puVar8 == (undefined8 *)0x0) {
        dVar12 = (double)(longlong)local_res8[0];
      }
      else {
        plVar9 = UE::Dataflow::FContextCacheElementBase::GetTypedData<__int64>
                           ((FContextCacheElementBase *)*puVar8,(IContextCacheStore *)pFVar4,
                            (FProperty *)0x0,(long64 *)local_res8);
        dVar12 = (double)*plVar9;
      }
      goto LAB_14442498f;
    }
    uVar11 = 0;
    if ((EVar1 != CacheElementNull) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                           ,0x24a,L""), uVar11 = local_res8[0], bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<unsigned___int64>::TypeName) {
      local_38.Context = pFVar4;
      local_38.ReturnValue = pTVar5;
      bVar6 = TDataflowMultiTypePolicy<int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
              ::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_38);
      return bVar6;
    }
    local_48[0] = 0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      uVar11 = pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar8 = (undefined8 *)(**(code **)pFVar4->_padding_)(pFVar4,(int)pFVar2[1]._padding_);
      uVar11 = local_48[0];
      if (puVar8 != (undefined8 *)0x0) {
        puVar10 = UE::Dataflow::FContextCacheElementBase::GetTypedData<unsigned___int64>
                            ((FContextCacheElementBase *)*puVar8,(IContextCacheStore *)pFVar4,
                             (FProperty *)0x0,local_48);
        uVar11 = *puVar10;
      }
    }
    else {
      uVar11 = 0;
      if ((EVar1 != CacheElementNull) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                             ,0x24a,L""), uVar11 = local_48[0], bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    if ((longlong)uVar11 < 0) {
      dVar12 = (double)uVar11;
      goto LAB_14442498f;
    }
  }
  dVar12 = (double)(longlong)uVar11;
LAB_14442498f:
  pTVar5->Pitch = dVar12;
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowSelectionTypes>'::__l17::<lambda_1>_> @ 1444249d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
TDataflowMultiTypePolicy<FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowSelectionTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FContext *pFVar1;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **ppTVar2;
  FDataflowFaceSelection *pFVar3;
  int *this;
  undefined1 auStack_58 [32];
  FName local_38;
  void *local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = param_2->Context;
  ppTVar2 = param_2->CacheEntry;
  if (param_1 == TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName) {
    local_38 = FDataflowFaceSelection::FacesGroupName;
    local_20 = (void *)0x0;
    local_18 = 0;
    local_14 = 0x80;
    pFVar3 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowFaceSelection>
                       ((*ppTVar2)->Ptr,(IContextCacheStore *)pFVar1,(FProperty *)0x0,
                        (FDataflowFaceSelection *)&local_38);
  }
  else if (param_1 == TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName) {
    local_38 = FDataflowGeometrySelection::GeometryGroupName;
    local_20 = (void *)0x0;
    local_18 = 0;
    local_14 = 0x80;
    pFVar3 = (FDataflowFaceSelection *)
             UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowGeometrySelection>
                       ((*ppTVar2)->Ptr,(IContextCacheStore *)pFVar1,(FProperty *)0x0,
                        (FDataflowGeometrySelection *)&local_38);
  }
  else if (param_1 == TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName) {
    local_38 = FDataflowMaterialSelection::MaterialGroupName;
    local_20 = (void *)0x0;
    local_18 = 0;
    local_14 = 0x80;
    pFVar3 = (FDataflowFaceSelection *)
             UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowMaterialSelection>
                       ((*ppTVar2)->Ptr,(IContextCacheStore *)pFVar1,(FProperty *)0x0,
                        (FDataflowMaterialSelection *)&local_38);
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName) {
      return false;
    }
    local_38 = FDataflowCurveSelection::CurveGroupName;
    local_20 = (void *)0x0;
    local_18 = 0;
    local_14 = 0x80;
    pFVar3 = (FDataflowFaceSelection *)
             UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowCurveSelection>
                       ((*ppTVar2)->Ptr,(IContextCacheStore *)pFVar1,(FProperty *)0x0,
                        (FDataflowCurveSelection *)&local_38);
  }
  this = &(param_2->ReturnValue->Data).ArrayNum;
  if (this != (int *)&pFVar3->field_0x8) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this,
               (TBitArray<FDefaultBitArrayAllocator> *)&pFVar3->field_0x8);
  }
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l17::<lambda_1>_> @ 144424b60

bool __cdecl
TDataflowMultiTypePolicy<signed_char,unsigned_char>::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FContextCacheElementBase *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FContext *pFVar5;
  FDataflowSelection *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  byte bVar10;
  undefined8 *puVar11;
  schar *psVar12;
  FDataflowSelection *pFVar13;
  byte *pbVar14;
  schar local_res8 [8];
  byte local_res10 [8];
  FString local_38;
  FString local_28 [2];
  
  pFVar5 = param_2->Context;
  pFVar6 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<signed_char>::TypeName) {
    local_res8[0] = '\0';
    pFVar2 = (*param_2->CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      cVar9 = (char)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar11 = (undefined8 *)(**(code **)pFVar5->_padding_)(pFVar5,(int)pFVar2[1]._padding_);
      cVar9 = local_res8[0];
      if (puVar11 != (undefined8 *)0x0) {
        psVar12 = UE::Dataflow::FContextCacheElementBase::GetTypedData<signed_char>
                            ((FContextCacheElementBase *)*puVar11,(IContextCacheStore *)pFVar5,
                             (FProperty *)0x0,local_res8);
        cVar9 = *psVar12;
      }
    }
    else if (EVar1 == CacheElementNull) {
      cVar9 = '\0';
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L"");
      cVar9 = local_res8[0];
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    pFVar13 = (FDataflowSelection *)::FString::SanitizeFloat(&local_38,(double)(int)cVar9,0);
    local_28[0].Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    if (pFVar6 != pFVar13) {
      pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->
               AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->GroupName)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6->SelectionArray).AllocatorInstance.InlineData =
           *(int *)(pFVar13->SelectionArray).AllocatorInstance.InlineData;
      *(int *)((longlong)(pFVar6->SelectionArray).AllocatorInstance.InlineData + 4) =
           *(int *)((longlong)(pFVar13->SelectionArray).AllocatorInstance.InlineData + 4);
      *(undefined8 *)(pFVar13->SelectionArray).AllocatorInstance.InlineData = 0;
      local_28[0].Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<unsigned_char>::TypeName) {
      return false;
    }
    local_res10[0] = 0;
    pFVar2 = (*param_2->CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      bVar10 = (byte)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar11 = (undefined8 *)(**(code **)pFVar5->_padding_)(pFVar5,(int)pFVar2[1]._padding_);
      bVar10 = local_res10[0];
      if (puVar11 != (undefined8 *)0x0) {
        pbVar14 = UE::Dataflow::FContextCacheElementBase::GetTypedData<unsigned_char>
                            ((FContextCacheElementBase *)*puVar11,(IContextCacheStore *)pFVar5,
                             (FProperty *)0x0,local_res10);
        bVar10 = *pbVar14;
      }
    }
    else if (EVar1 == CacheElementNull) {
      bVar10 = 0;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L"");
      bVar10 = local_res10[0];
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    pFVar13 = (FDataflowSelection *)::FString::SanitizeFloat(local_28,(double)bVar10,0);
    if (pFVar6 != pFVar13) {
      pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->
               AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->GroupName)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6->SelectionArray).AllocatorInstance.InlineData =
           *(int *)(pFVar13->SelectionArray).AllocatorInstance.InlineData;
      *(int *)((longlong)(pFVar6->SelectionArray).AllocatorInstance.InlineData + 4) =
           *(int *)((longlong)(pFVar13->SelectionArray).AllocatorInstance.InlineData + 4);
      *(undefined8 *)(pFVar13->SelectionArray).AllocatorInstance.InlineData = 0;
    }
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l17::<lambda_1>_> @ 144424da0

bool __cdecl
TDataflowMultiTypePolicy<short,unsigned_short,signed_char,unsigned_char>::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FContextCacheElementBase *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FContext *pFVar5;
  FDataflowSelection *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  short sVar9;
  ushort uVar10;
  undefined8 *puVar11;
  short *psVar12;
  FDataflowSelection *pFVar13;
  ushort *puVar14;
  short local_res8 [4];
  ushort local_res10 [4];
  FString local_58;
  FString local_48;
  <lambda_1> local_38;
  
  local_38.__this = param_2->__this;
  pFVar5 = param_2->Context;
  local_38.CacheEntry = param_2->CacheEntry;
  pFVar6 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<short>::TypeName) {
    local_res8[0] = 0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      sVar9 = (short)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar11 = (undefined8 *)(**(code **)pFVar5->_padding_)(pFVar5,(int)pFVar2[1]._padding_);
      sVar9 = local_res8[0];
      if (puVar11 != (undefined8 *)0x0) {
        psVar12 = UE::Dataflow::FContextCacheElementBase::GetTypedData<short>
                            ((FContextCacheElementBase *)*puVar11,(IContextCacheStore *)pFVar5,
                             (FProperty *)0x0,local_res8);
        sVar9 = *psVar12;
      }
    }
    else {
      sVar9 = 0;
      if ((EVar1 != CacheElementNull) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                             ,0x24a,L""), sVar9 = local_res8[0], bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    pFVar13 = (FDataflowSelection *)::FString::SanitizeFloat(&local_58,(double)(int)sVar9,0);
    local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    if (pFVar6 != pFVar13) {
      pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->
               AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->GroupName)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6->SelectionArray).AllocatorInstance.InlineData =
           *(int *)(pFVar13->SelectionArray).AllocatorInstance.InlineData;
      *(int *)((longlong)(pFVar6->SelectionArray).AllocatorInstance.InlineData + 4) =
           *(int *)((longlong)(pFVar13->SelectionArray).AllocatorInstance.InlineData + 4);
      *(undefined8 *)(pFVar13->SelectionArray).AllocatorInstance.InlineData = 0;
      local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<unsigned_short>::TypeName) {
      local_38.Context = pFVar5;
      local_38.ReturnValue = pFVar6;
      bVar7 = TDataflowMultiTypePolicy<signed_char,unsigned_char>::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_38);
      return bVar7;
    }
    local_res10[0] = 0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      uVar10 = (ushort)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar11 = (undefined8 *)(**(code **)pFVar5->_padding_)(pFVar5,(int)pFVar2[1]._padding_);
      uVar10 = local_res10[0];
      if (puVar11 != (undefined8 *)0x0) {
        puVar14 = UE::Dataflow::FContextCacheElementBase::GetTypedData<unsigned_short>
                            ((FContextCacheElementBase *)*puVar11,(IContextCacheStore *)pFVar5,
                             (FProperty *)0x0,local_res10);
        uVar10 = *puVar14;
      }
    }
    else {
      uVar10 = 0;
      if ((EVar1 != CacheElementNull) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                             ,0x24a,L""), uVar10 = local_res10[0], bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    pFVar13 = (FDataflowSelection *)::FString::SanitizeFloat(&local_48,(double)uVar10,0);
    if (pFVar6 != pFVar13) {
      pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->
               AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->GroupName)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6->SelectionArray).AllocatorInstance.InlineData =
           *(int *)(pFVar13->SelectionArray).AllocatorInstance.InlineData;
      *(int *)((longlong)(pFVar6->SelectionArray).AllocatorInstance.InlineData + 4) =
           *(int *)((longlong)(pFVar13->SelectionArray).AllocatorInstance.InlineData + 4);
      *(undefined8 *)(pFVar13->SelectionArray).AllocatorInstance.InlineData = 0;
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l17::<lambda_1>_> @ 144425000

bool __cdecl
TDataflowMultiTypePolicy<int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FContextCacheElementBase *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FContext *pFVar5;
  FDataflowSelection *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  int *piVar12;
  FDataflowSelection *pFVar13;
  uint *puVar14;
  int local_res8 [2];
  uint local_res10 [2];
  FString local_58;
  FString local_48;
  <lambda_1> local_38;
  
  local_38.__this = param_2->__this;
  pFVar5 = param_2->Context;
  local_38.CacheEntry = param_2->CacheEntry;
  pFVar6 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<int>::TypeName) {
    local_res8[0] = 0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      iVar9 = (int)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar11 = (undefined8 *)(**(code **)pFVar5->_padding_)(pFVar5,(int)pFVar2[1]._padding_);
      iVar9 = local_res8[0];
      if (puVar11 != (undefined8 *)0x0) {
        piVar12 = UE::Dataflow::FContextCacheElementBase::GetTypedData<int>
                            ((FContextCacheElementBase *)*puVar11,(IContextCacheStore *)pFVar5,
                             (FProperty *)0x0,local_res8);
        iVar9 = *piVar12;
      }
    }
    else if (EVar1 == CacheElementNull) {
      iVar9 = 0;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L"");
      iVar9 = local_res8[0];
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    pFVar13 = (FDataflowSelection *)::FString::SanitizeFloat(&local_58,(double)iVar9,0);
    local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    if (pFVar6 != pFVar13) {
      pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->
               AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->GroupName)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6->SelectionArray).AllocatorInstance.InlineData =
           *(int *)(pFVar13->SelectionArray).AllocatorInstance.InlineData;
      *(int *)((longlong)(pFVar6->SelectionArray).AllocatorInstance.InlineData + 4) =
           *(int *)((longlong)(pFVar13->SelectionArray).AllocatorInstance.InlineData + 4);
      *(undefined8 *)(pFVar13->SelectionArray).AllocatorInstance.InlineData = 0;
      local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<unsigned_int>::TypeName) {
      local_38.Context = pFVar5;
      local_38.ReturnValue = pFVar6;
      bVar7 = TDataflowMultiTypePolicy<short,unsigned_short,signed_char,unsigned_char>::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_38);
      return bVar7;
    }
    local_res10[0] = 0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      uVar10 = (uint)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar11 = (undefined8 *)(**(code **)pFVar5->_padding_)(pFVar5,(int)pFVar2[1]._padding_);
      uVar10 = local_res10[0];
      if (puVar11 != (undefined8 *)0x0) {
        puVar14 = UE::Dataflow::FContextCacheElementBase::GetTypedData<unsigned_int>
                            ((FContextCacheElementBase *)*puVar11,(IContextCacheStore *)pFVar5,
                             (FProperty *)0x0,local_res10);
        uVar10 = *puVar14;
      }
    }
    else if (EVar1 == CacheElementNull) {
      uVar10 = 0;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L"");
      uVar10 = local_res10[0];
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    pFVar13 = (FDataflowSelection *)::FString::SanitizeFloat(&local_48,(double)uVar10,0);
    if (pFVar6 != pFVar13) {
      pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->
               AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->GroupName)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6->SelectionArray).AllocatorInstance.InlineData =
           *(int *)(pFVar13->SelectionArray).AllocatorInstance.InlineData;
      *(int *)((longlong)(pFVar6->SelectionArray).AllocatorInstance.InlineData + 4) =
           *(int *)((longlong)(pFVar13->SelectionArray).AllocatorInstance.InlineData + 4);
      *(undefined8 *)(pFVar13->SelectionArray).AllocatorInstance.InlineData = 0;
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l17::<lambda_1>_> @ 144425250

bool __cdecl
TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FContextCacheElementBase *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FContext *pFVar5;
  FDataflowSelection *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  double *pdVar10;
  FDataflowSelection *pFVar11;
  float *pfVar12;
  float fVar13;
  double dVar14;
  float local_res8 [2];
  double local_res10;
  FString local_58;
  FString local_48;
  <lambda_1> local_38;
  
  local_38.__this = param_2->__this;
  pFVar5 = param_2->Context;
  local_38.CacheEntry = param_2->CacheEntry;
  pFVar6 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<double>::TypeName) {
    local_res10 = 0.0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      dVar14 = (double)pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar9 = (undefined8 *)(**(code **)pFVar5->_padding_)(pFVar5,(int)pFVar2[1]._padding_);
      dVar14 = local_res10;
      if (puVar9 != (undefined8 *)0x0) {
        pdVar10 = UE::Dataflow::FContextCacheElementBase::GetTypedData<double>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)pFVar5,
                             (FProperty *)0x0,&local_res10);
        dVar14 = *pdVar10;
      }
    }
    else {
      dVar14 = 0.0;
      if ((EVar1 != CacheElementNull) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                             ,0x24a,L""), dVar14 = local_res10, bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    pFVar11 = (FDataflowSelection *)::FString::SanitizeFloat(&local_58,dVar14,0);
    local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    if (pFVar6 != pFVar11) {
      pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->
               AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar11->GroupName)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar11->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6->SelectionArray).AllocatorInstance.InlineData =
           *(int *)(pFVar11->SelectionArray).AllocatorInstance.InlineData;
      *(int *)((longlong)(pFVar6->SelectionArray).AllocatorInstance.InlineData + 4) =
           *(int *)((longlong)(pFVar11->SelectionArray).AllocatorInstance.InlineData + 4);
      *(undefined8 *)(pFVar11->SelectionArray).AllocatorInstance.InlineData = 0;
      local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<float>::TypeName) {
      local_38.Context = pFVar5;
      local_38.ReturnValue = pFVar6;
      bVar7 = TDataflowMultiTypePolicy<__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
              ::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_38);
      return bVar7;
    }
    local_res8[0] = 0.0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      fVar13 = *(float *)&pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar9 = (undefined8 *)(**(code **)pFVar5->_padding_)(pFVar5,(int)pFVar2[1]._padding_);
      fVar13 = local_res8[0];
      if (puVar9 != (undefined8 *)0x0) {
        pfVar12 = UE::Dataflow::FContextCacheElementBase::GetTypedData<float>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)pFVar5,
                             (FProperty *)0x0,local_res8);
        fVar13 = *pfVar12;
      }
    }
    else {
      fVar13 = 0.0;
      if ((EVar1 != CacheElementNull) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                             ,0x24a,L""), fVar13 = local_res8[0], bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    pFVar11 = (FDataflowSelection *)::FString::SanitizeFloat(&local_48,(double)fVar13,0);
    if (pFVar6 != pFVar11) {
      pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->
               AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar11->GroupName)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar11->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6->SelectionArray).AllocatorInstance.InlineData =
           *(int *)(pFVar11->SelectionArray).AllocatorInstance.InlineData;
      *(int *)((longlong)(pFVar6->SelectionArray).AllocatorInstance.InlineData + 4) =
           *(int *)((longlong)(pFVar11->SelectionArray).AllocatorInstance.InlineData + 4);
      *(undefined8 *)(pFVar11->SelectionArray).AllocatorInstance.InlineData = 0;
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l17::<lambda_1>_> @ 1444254c0

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FScriptContainerElement *pFVar1;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **ppTVar2;
  FDataflowSelection *pFVar3;
  bool bVar4;
  TIntVector4<int> *pTVar5;
  FName FVar6;
  FName FVar7;
  TIntPoint<int>_u_0 local_res8;
  undefined1 local_58 [16];
  undefined1 local_48 [12];
  int iStack_3c;
  TIntVector4<int>_u_0 local_38;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **local_28;
  FDataflowSelection *pFStack_20;
  
  ppTVar2 = param_2->CacheEntry;
  pFVar3 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName) {
    FVar6.ComparisonIndex.Value = 0;
    FVar6.Number = 0;
    local_res8 = (TIntPoint<int>_u_0)0x0;
    UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TIntPoint<int>_>
              ((*ppTVar2)->Ptr,(IContextCacheStore *)param_2->Context,(FProperty *)0x0,
               (TIntPoint<int> *)&local_res8._s_0);
    ::FString::PrintfImpl((FString *)local_58,L"X=%d Y=%d");
    FVar7 = (FName)local_58._0_8_;
    if (pFVar3 != (FDataflowSelection *)local_58) {
      pFVar1 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar3->GroupName)->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar3->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)local_58._0_8_;
      *(undefined4 *)(pFVar3->SelectionArray).AllocatorInstance.InlineData = local_58._8_4_;
      *(undefined4 *)((longlong)(pFVar3->SelectionArray).AllocatorInstance.InlineData + 4) =
           local_58._12_4_;
      local_58[8] = '\0';
      local_58[9] = '\0';
      local_58[10] = '\0';
      local_58[0xb] = '\0';
      local_58[0xc] = '\0';
      local_58[0xd] = '\0';
      local_58[0xe] = '\0';
      local_58[0xf] = '\0';
      local_58._0_4_ = 0;
      local_58._4_4_ = 0;
      FVar7 = FVar6;
    }
  }
  else {
    local_38._0_8_ = param_2->__this;
    local_38._8_8_ = param_2->Context;
    local_28 = ppTVar2;
    pFStack_20 = pFVar3;
    bVar4 = TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::
            VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                      (param_1,(<lambda_1> *)&local_38._s_0);
    if (bVar4) {
      return true;
    }
    if (param_1 == TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName) {
      local_38._s_0.X = 0;
      local_38._s_0.Y = 0;
      local_38._8_8_ = 0;
      pTVar5 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TIntVector4<int>_>
                         ((*ppTVar2)->Ptr,(IContextCacheStore *)param_2->Context,(FProperty *)0x0,
                          (TIntVector4<int> *)&local_38._s_0);
      FDataflowConverter<FString>::From<UE::Math::TIntVector4<int>_>(pTVar5,(FString *)pFVar3);
      return true;
    }
    if (param_1 != TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName) {
      return false;
    }
    local_28 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                **)0x0;
    local_38._s_0.X = 0;
    local_38._s_0.Y = 0;
    local_38._8_8_ = 0;
    UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TRotator<double>_>
              ((*ppTVar2)->Ptr,(IContextCacheStore *)param_2->Context,(FProperty *)0x0,
               (TRotator<double> *)&local_38._s_0);
    ::FString::PrintfImpl((FString *)local_48,L"P=%f Y=%f R=%f");
    FVar7 = (FName)local_48._0_8_;
    if (pFVar3 != (FDataflowSelection *)local_48) {
      pFVar1 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar3->GroupName)->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FVar7.ComparisonIndex.Value = 0;
      FVar7.Number = 0;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar3->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)local_48._0_8_;
      *(undefined4 *)(pFVar3->SelectionArray).AllocatorInstance.InlineData = local_48._8_4_;
      *(int *)((longlong)(pFVar3->SelectionArray).AllocatorInstance.InlineData + 4) = iStack_3c;
      stack0xffffffffffffffc0 = (ForElementType<unsigned_int>)0x0;
      local_48._0_4_ = 0;
      local_48._4_4_ = 0;
    }
  }
  if (FVar7 != (FName)0x0) {
    FMemory::Free((void *)FVar7);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l17::<lambda_1>_> @ 1444256c0

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FContext *pFVar4;
  FDataflowSelection *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  FLinearColor *this;
  FDataflowSelection *pFVar9;
  undefined1 local_78 [40];
  undefined8 uStack_50;
  FString local_48;
  <lambda_1> local_38;
  
  local_38.__this = param_2->__this;
  pFVar4 = param_2->Context;
  local_38.CacheEntry = param_2->CacheEntry;
  pFVar5 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName) {
    local_78[0x10] = '\0';
    local_78[0x11] = '\0';
    local_78[0x12] = '\0';
    local_78[0x13] = '\0';
    local_78[0x14] = '\0';
    local_78[0x15] = '\0';
    local_78[0x16] = '\0';
    local_78[0x17] = '\0';
    local_78._24_8_ = (ForElementType<unsigned_int>)0x0;
    EVar1 = (*local_38.CacheEntry)->Ptr->Type;
    if (EVar1 != CacheElementTyped) {
      if (EVar1 == CacheElementReference) {
        puVar8 = (undefined8 *)
                 (**(code **)pFVar4->_padding_)
                           (pFVar4,(int)(*local_38.CacheEntry)->Ptr[1]._padding_);
        if (puVar8 != (undefined8 *)0x0) {
          UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TQuat<float>_>
                    ((FContextCacheElementBase *)*puVar8,(IContextCacheStore *)pFVar4,
                     (FProperty *)0x0,(TQuat<float> *)(local_78 + 0x10));
        }
      }
      else if ((EVar1 != CacheElementNull) &&
              (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                  ,0x24a,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    ::FString::PrintfImpl((FString *)local_78,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_78._0_8_;
    if (pFVar5 != (FDataflowSelection *)local_78) {
      pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->GroupName)->
               AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      local_48.Data.AllocatorInstance.Data._0_4_ = 0;
      local_48.Data.AllocatorInstance.Data._4_4_ = 0;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)local_78._0_8_;
      *(undefined4 *)(pFVar5->SelectionArray).AllocatorInstance.InlineData = local_78._8_4_;
      *(undefined4 *)((longlong)(pFVar5->SelectionArray).AllocatorInstance.InlineData + 4) =
           local_78._12_4_;
      local_78[8] = '\0';
      local_78[9] = '\0';
      local_78[10] = '\0';
      local_78[0xb] = '\0';
      local_78[0xc] = '\0';
      local_78[0xd] = '\0';
      local_78[0xe] = '\0';
      local_78[0xf] = '\0';
      local_78._0_4_ = 0;
      local_78._4_4_ = 0;
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<FLinearColor>::TypeName) {
      local_38.Context = pFVar4;
      local_38.ReturnValue = pFVar5;
      bVar6 = TDataflowMultiTypePolicy<UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
              ::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_38);
      return bVar6;
    }
    local_78._32_4_ = 0;
    local_78._36_4_ = 0;
    uStack_50 = 0;
    this = UE::Dataflow::FContextCacheElementBase::GetTypedData<FLinearColor>
                     ((*local_38.CacheEntry)->Ptr,(IContextCacheStore *)pFVar4,(FProperty *)0x0,
                      (FLinearColor *)(local_78 + 0x20));
    pFVar9 = (FDataflowSelection *)FLinearColor::ToString(this,&local_48);
    if (pFVar5 != pFVar9) {
      pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->GroupName)->
               AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->GroupName)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar9->GroupName)->AllocatorInstance
             ).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar9->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar5->SelectionArray).AllocatorInstance.InlineData =
           *(int *)(pFVar9->SelectionArray).AllocatorInstance.InlineData;
      *(int *)((longlong)(pFVar5->SelectionArray).AllocatorInstance.InlineData + 4) =
           *(int *)((longlong)(pFVar9->SelectionArray).AllocatorInstance.InlineData + 4);
      *(undefined8 *)(pFVar9->SelectionArray).AllocatorInstance.InlineData = 0;
    }
  }
  if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l17::<lambda_1>_> @ 144425900

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  code *pcVar2;
  ForElementType<unsigned_int> FVar3;
  FDataflowSelection *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  FName FVar8;
  FName FVar9;
  TVector2<float>_u_0 local_res8;
  TVector<float>_u_0 local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [12];
  int iStack_3c;
  <lambda_1> local_38;
  
  local_38.__this = param_2->__this;
  FVar3 = (ForElementType<unsigned_int>)param_2->Context;
  local_38.CacheEntry = param_2->CacheEntry;
  pFVar4 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName) {
    FVar8.ComparisonIndex.Value = 0;
    FVar8.Number = 0;
    local_res8 = (TVector2<float>_u_0)0x0;
    EVar1 = (*local_38.CacheEntry)->Ptr->Type;
    if (EVar1 != CacheElementTyped) {
      if (EVar1 == CacheElementReference) {
        puVar7 = (undefined8 *)
                 (**(code **)*(IContextCacheStore *)FVar3)
                           (FVar3,(int)(*local_38.CacheEntry)->Ptr[1]._padding_);
        if (puVar7 != (undefined8 *)0x0) {
          UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector2<float>_>
                    ((FContextCacheElementBase *)*puVar7,(IContextCacheStore *)FVar3,
                     (FProperty *)0x0,(TVector2<float> *)&local_res8._s_0);
        }
      }
      else if ((EVar1 != CacheElementNull) &&
              (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                  ,0x24a,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    ::FString::PrintfImpl((FString *)local_58,L"X=%3.3f Y=%3.3f");
    FVar9 = (FName)local_58._0_8_;
    if (pFVar4 != (FDataflowSelection *)local_58) {
      if (pFVar4->GroupName != (FName)0x0) {
        FMemory::Free((void *)pFVar4->GroupName);
      }
      (pFVar4->GroupName).ComparisonIndex = (FNameEntryId)local_58._0_4_;
      (pFVar4->GroupName).Number = local_58._4_4_;
      *(undefined4 *)(pFVar4->SelectionArray).AllocatorInstance.InlineData = local_58._8_4_;
      *(undefined4 *)((pFVar4->SelectionArray).AllocatorInstance.InlineData + 4) = local_58._12_4_;
      local_58[8] = '\0';
      local_58[9] = '\0';
      local_58[10] = '\0';
      local_58[0xb] = '\0';
      local_58[0xc] = '\0';
      local_58[0xd] = '\0';
      local_58[0xe] = '\0';
      local_58[0xf] = '\0';
      local_58._0_4_ = 0;
      local_58._4_4_ = 0;
      FVar9 = FVar8;
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName) {
      local_38.Context = (FContext *)FVar3;
      local_38.ReturnValue = pFVar4;
      bVar5 = TDataflowMultiTypePolicy<UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
              ::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_38);
      return bVar5;
    }
    local_68._0_8_ = 0;
    local_68._s_0.Z = 0.0;
    EVar1 = (*local_38.CacheEntry)->Ptr->Type;
    if (EVar1 != CacheElementTyped) {
      if (EVar1 == CacheElementReference) {
        puVar7 = (undefined8 *)
                 (**(code **)*(IContextCacheStore *)FVar3)
                           (FVar3,(int)(*local_38.CacheEntry)->Ptr[1]._padding_);
        if (puVar7 != (undefined8 *)0x0) {
          UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector<float>_>
                    ((FContextCacheElementBase *)*puVar7,(IContextCacheStore *)FVar3,
                     (FProperty *)0x0,(TVector<float> *)&local_68._s_0);
        }
      }
      else if ((EVar1 != CacheElementNull) &&
              (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                  ,0x24a,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    ::FString::PrintfImpl((FString *)local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
    FVar9 = (FName)local_48._0_8_;
    if (pFVar4 != (FDataflowSelection *)local_48) {
      if (pFVar4->GroupName != (FName)0x0) {
        FMemory::Free((void *)pFVar4->GroupName);
      }
      FVar9.ComparisonIndex.Value = 0;
      FVar9.Number = 0;
      (pFVar4->GroupName).ComparisonIndex = (FNameEntryId)local_48._0_4_;
      (pFVar4->GroupName).Number = local_48._4_4_;
      *(undefined4 *)(pFVar4->SelectionArray).AllocatorInstance.InlineData = local_48._8_4_;
      *(int *)((pFVar4->SelectionArray).AllocatorInstance.InlineData + 4) = iStack_3c;
      stack0xffffffffffffffc0 = (ForElementType<unsigned_int>)0x0;
      local_48._0_4_ = 0;
      local_48._4_4_ = 0;
    }
  }
  if (FVar9 != (FName)0x0) {
    FMemory::Free((void *)FVar9);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l17::<lambda_1>_> @ 144425b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FContext *pFVar1;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **ppTVar2;
  FDataflowSelection *pFVar3;
  bool bVar4;
  FName FVar5;
  undefined1 local_68 [16];
  undefined1 local_58 [12];
  int iStack_4c;
  undefined1 local_48 [12];
  int iStack_3c;
  TVector4<double>_u_0 local_38;
  
  local_38._s_0.X = (double)param_2->__this;
  pFVar1 = param_2->Context;
  ppTVar2 = param_2->CacheEntry;
  pFVar3 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName) {
    local_38._s_0.X = 0.0;
    local_38._s_0.Y = 0.0;
    UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector2<double>_>
              ((*ppTVar2)->Ptr,(IContextCacheStore *)pFVar1,(FProperty *)0x0,
               (TVector2<double> *)&local_38._s_0);
    ::FString::PrintfImpl((FString *)local_68,L"X=%3.3f Y=%3.3f");
    FVar5 = (FName)local_68._0_8_;
    if (pFVar3 != (FDataflowSelection *)local_68) {
      if (pFVar3->GroupName != (FName)0x0) {
        FMemory::Free((void *)pFVar3->GroupName);
      }
      FVar5.ComparisonIndex.Value = 0;
      FVar5.Number = 0;
      (pFVar3->GroupName).ComparisonIndex = (FNameEntryId)local_68._0_4_;
      (pFVar3->GroupName).Number = local_68._4_4_;
      *(undefined4 *)(pFVar3->SelectionArray).AllocatorInstance.InlineData = local_68._8_4_;
      *(undefined4 *)((pFVar3->SelectionArray).AllocatorInstance.InlineData + 4) = local_68._12_4_;
      local_68[8] = '\0';
      local_68[9] = '\0';
      local_68[10] = '\0';
      local_68[0xb] = '\0';
      local_68[0xc] = '\0';
      local_68[0xd] = '\0';
      local_68[0xe] = '\0';
      local_68[0xf] = '\0';
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
    }
  }
  else if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName) {
    local_38._s_0.Z = 0.0;
    local_38._s_0.X = 0.0;
    local_38._s_0.Y = 0.0;
    UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector<double>_>
              ((*ppTVar2)->Ptr,(IContextCacheStore *)pFVar1,(FProperty *)0x0,
               (TVector<double> *)&local_38._s_0);
    ::FString::PrintfImpl((FString *)local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
    FVar5 = (FName)local_58._0_8_;
    if (pFVar3 != (FDataflowSelection *)local_58) {
      if (pFVar3->GroupName != (FName)0x0) {
        FMemory::Free((void *)pFVar3->GroupName);
      }
      FVar5.ComparisonIndex.Value = 0;
      FVar5.Number = 0;
      (pFVar3->GroupName).ComparisonIndex = (FNameEntryId)local_58._0_4_;
      (pFVar3->GroupName).Number = local_58._4_4_;
      *(undefined4 *)(pFVar3->SelectionArray).AllocatorInstance.InlineData = local_58._8_4_;
      *(int *)((pFVar3->SelectionArray).AllocatorInstance.InlineData + 4) = iStack_4c;
      stack0xffffffffffffffb0 = (ForElementType<unsigned_int>)0x0;
      local_58._0_4_ = 0;
      local_58._4_4_ = 0;
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName) {
      local_38._s_0.Y = (double)pFVar1;
      local_38._16_8_ = ppTVar2;
      local_38._24_8_ = pFVar3;
      bVar4 = TDataflowMultiTypePolicy<UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
              ::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                        (param_1,(<lambda_1> *)&local_38._s_0);
      return bVar4;
    }
    local_38._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_38._s_0.W = _UNK_15061cbc8;
    local_38._s_0.X = 0.0;
    local_38._s_0.Y = 0.0;
    UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector4<double>_>
              ((*ppTVar2)->Ptr,(IContextCacheStore *)pFVar1,(FProperty *)0x0,
               (TVector4<double> *)&local_38._s_0);
    ::FString::PrintfImpl((FString *)local_48,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FVar5 = (FName)local_48._0_8_;
    if (pFVar3 != (FDataflowSelection *)local_48) {
      if (pFVar3->GroupName != (FName)0x0) {
        FMemory::Free((void *)pFVar3->GroupName);
      }
      FVar5.ComparisonIndex.Value = 0;
      FVar5.Number = 0;
      (pFVar3->GroupName).ComparisonIndex = (FNameEntryId)local_48._0_4_;
      (pFVar3->GroupName).Number = local_48._4_4_;
      *(undefined4 *)(pFVar3->SelectionArray).AllocatorInstance.InlineData = local_48._8_4_;
      *(int *)((pFVar3->SelectionArray).AllocatorInstance.InlineData + 4) = iStack_3c;
      stack0xffffffffffffffc0 = (ForElementType<unsigned_int>)0x0;
      local_48._0_4_ = 0;
      local_48._4_4_ = 0;
    }
  }
  if (FVar5 != (FName)0x0) {
    FMemory::Free((void *)FVar5);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l17::<lambda_1>_> @ 144425e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  code *pcVar2;
  FContext *pFVar3;
  FDataflowSelection *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  FName FVar8;
  undefined1 local_88 [16];
  undefined1 local_78 [12];
  int iStack_6c;
  TVector4<float>_u_0 local_68;
  TQuat<double> local_58;
  <lambda_1> local_38;
  
  local_38.__this = param_2->__this;
  pFVar3 = param_2->Context;
  local_38.CacheEntry = param_2->CacheEntry;
  pFVar4 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName) {
    local_68._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_68._8_8_ = _UNK_150689648;
    EVar1 = (*local_38.CacheEntry)->Ptr->Type;
    if (EVar1 != CacheElementTyped) {
      if (EVar1 == CacheElementReference) {
        puVar7 = (undefined8 *)
                 (**(code **)pFVar3->_padding_)
                           (pFVar3,(int)(*local_38.CacheEntry)->Ptr[1]._padding_);
        if (puVar7 != (undefined8 *)0x0) {
          UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector4<float>_>
                    ((FContextCacheElementBase *)*puVar7,(IContextCacheStore *)pFVar3,
                     (FProperty *)0x0,(TVector4<float> *)&local_68._s_0);
        }
      }
      else if ((EVar1 != CacheElementNull) &&
              (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                  ,0x24a,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    ::FString::PrintfImpl((FString *)local_88,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FVar8 = (FName)local_88._0_8_;
    if (pFVar4 != (FDataflowSelection *)local_88) {
      if (pFVar4->GroupName != (FName)0x0) {
        FMemory::Free((void *)pFVar4->GroupName);
      }
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      (pFVar4->GroupName).ComparisonIndex = (FNameEntryId)local_88._0_4_;
      (pFVar4->GroupName).Number = local_88._4_4_;
      *(undefined4 *)(pFVar4->SelectionArray).AllocatorInstance.InlineData = local_88._8_4_;
      *(undefined4 *)((pFVar4->SelectionArray).AllocatorInstance.InlineData + 4) = local_88._12_4_;
      local_88[8] = '\0';
      local_88[9] = '\0';
      local_88[10] = '\0';
      local_88[0xb] = '\0';
      local_88[0xc] = '\0';
      local_88[0xd] = '\0';
      local_88[0xe] = '\0';
      local_88[0xf] = '\0';
      local_88._0_4_ = 0;
      local_88._4_4_ = 0;
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName) {
      local_38.Context = pFVar3;
      local_38.ReturnValue = pFVar4;
      bVar5 = TDataflowMultiTypePolicy<UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
              ::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_38);
      return bVar5;
    }
    local_58.X = 0.0;
    local_58.Y = 0.0;
    local_58.Z = 0.0;
    local_58.W = 0.0;
    UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TQuat<double>_>
              ((*local_38.CacheEntry)->Ptr,(IContextCacheStore *)pFVar3,(FProperty *)0x0,&local_58);
    ::FString::PrintfImpl((FString *)local_78,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    FVar8 = (FName)local_78._0_8_;
    if (pFVar4 != (FDataflowSelection *)local_78) {
      if (pFVar4->GroupName != (FName)0x0) {
        FMemory::Free((void *)pFVar4->GroupName);
      }
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      (pFVar4->GroupName).ComparisonIndex = (FNameEntryId)local_78._0_4_;
      (pFVar4->GroupName).Number = local_78._4_4_;
      *(undefined4 *)(pFVar4->SelectionArray).AllocatorInstance.InlineData = local_78._8_4_;
      *(int *)((pFVar4->SelectionArray).AllocatorInstance.InlineData + 4) = iStack_6c;
      stack0xffffffffffffff90 = (ForElementType<unsigned_int>)0x0;
      local_78._0_4_ = 0;
      local_78._4_4_ = 0;
    }
  }
  if (FVar8 != (FName)0x0) {
    FMemory::Free((void *)FVar8);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l17::<lambda_1>_> @ 144426050

bool __cdecl
TDataflowMultiTypePolicy<FName,FText>::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FScriptContainerElement *pFVar2;
  FContext *pFVar3;
  code *pcVar4;
  FDataflowSelection *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  FContextCacheElementBase *pFVar9;
  FDataflowSelection *pFVar10;
  FString *pFVar11;
  FName local_res8;
  FText local_38;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **local_28;
  FDataflowSelection *pFStack_20;
  FString local_18;
  
  local_28 = param_2->CacheEntry;
  pFStack_20 = param_2->ReturnValue;
  pFVar3 = param_2->Context;
  if (param_1 != TDataflowSingleTypePolicy<FName>::TypeName) {
    if (param_1 != TDataflowSingleTypePolicy<FText>::TypeName) {
      return false;
    }
    FText::FText(&local_38);
    pFVar9 = (*local_28)->Ptr;
    EVar1 = pFVar9->Type;
    if (EVar1 == CacheElementTyped) {
      pFVar9 = pFVar9 + 1;
    }
    else {
      if (EVar1 == CacheElementReference) {
        pFVar3 = param_2->Context;
        puVar8 = (undefined8 *)(**(code **)pFVar3->_padding_)(pFVar3,(int)pFVar9[1]._padding_);
        if (puVar8 != (undefined8 *)0x0) {
          pFVar9 = (FContextCacheElementBase *)
                   UE::Dataflow::FContextCacheElementBase::GetTypedData<FText>
                             ((FContextCacheElementBase *)*puVar8,(IContextCacheStore *)pFVar3,
                              (FProperty *)0x0,&local_38);
          goto LAB_144426200;
        }
      }
      else if ((EVar1 != CacheElementNull) &&
              (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                  ,0x24a,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar9 = (FContextCacheElementBase *)&local_38;
    }
LAB_144426200:
    pFVar11 = FText::ToString((FText *)pFVar9);
    ::FString::operator=((FString *)pFStack_20,pFVar11);
    if (local_38.TextData.Reference == (ITextData *)0x0) {
      return true;
    }
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    return true;
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar9 = (*local_28)->Ptr;
  EVar1 = pFVar9->Type;
  if (EVar1 == CacheElementTyped) {
    pFVar9 = pFVar9 + 1;
  }
  else {
    if (EVar1 == CacheElementReference) {
      puVar8 = (undefined8 *)(**(code **)pFVar3->_padding_)(pFVar3,(int)pFVar9[1]._padding_);
      if (puVar8 != (undefined8 *)0x0) {
        pFVar9 = (FContextCacheElementBase *)
                 UE::Dataflow::FContextCacheElementBase::GetTypedData<FName>
                           ((FContextCacheElementBase *)*puVar8,(IContextCacheStore *)pFVar3,
                            (FProperty *)0x0,&local_res8);
        goto LAB_1444260ff;
      }
    }
    else if ((EVar1 != CacheElementNull) &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pFVar9 = (FContextCacheElementBase *)&local_res8;
  }
LAB_1444260ff:
  pFVar10 = (FDataflowSelection *)::FName::ToString((FName *)pFVar9,&local_18);
  pFVar5 = pFStack_20;
  if (pFStack_20 != pFVar10) {
    pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFStack_20->GroupName)->
             AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->GroupName)->AllocatorInstance).Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar10->GroupName)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar10->GroupName)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar5->SelectionArray).AllocatorInstance.InlineData =
         *(int *)(pFVar10->SelectionArray).AllocatorInstance.InlineData;
    *(int *)((longlong)(pFVar5->SelectionArray).AllocatorInstance.InlineData + 4) =
         *(int *)((longlong)(pFVar10->SelectionArray).AllocatorInstance.InlineData + 4);
    *(undefined8 *)(pFVar10->SelectionArray).AllocatorInstance.InlineData = 0;
  }
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return true;
  }
  FMemory::Free(local_18.Data.AllocatorInstance.Data);
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l17::<lambda_1>_> @ 144426250

bool __cdecl
TDataflowMultiTypePolicy<__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FContextCacheElementBase *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FContext *pFVar5;
  FDataflowSelection *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  long64 *plVar10;
  longlong lVar11;
  FDataflowSelection *pFVar12;
  ulong64 *puVar13;
  ulonglong uVar14;
  long64 local_res8;
  ulong64 local_68;
  FString local_60;
  FString local_50;
  <lambda_1> local_38;
  
  local_38.__this = param_2->__this;
  pFVar5 = param_2->Context;
  local_38.CacheEntry = param_2->CacheEntry;
  pFVar6 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<__int64>::TypeName) {
    local_res8 = 0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      lVar11 = pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar9 = (undefined8 *)(**(code **)pFVar5->_padding_)(pFVar5,(int)pFVar2[1]._padding_);
      lVar11 = local_res8;
      if (puVar9 != (undefined8 *)0x0) {
        plVar10 = UE::Dataflow::FContextCacheElementBase::GetTypedData<__int64>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)pFVar5,
                             (FProperty *)0x0,&local_res8);
        lVar11 = *plVar10;
      }
    }
    else if (EVar1 == CacheElementNull) {
      lVar11 = 0;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L"");
      lVar11 = local_res8;
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    pFVar12 = (FDataflowSelection *)::FString::SanitizeFloat(&local_60,(double)lVar11,0);
    local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
    if (pFVar6 != pFVar12) {
      pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->
               AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->GroupName)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6->SelectionArray).AllocatorInstance.InlineData =
           *(int *)(pFVar12->SelectionArray).AllocatorInstance.InlineData;
      *(int *)((longlong)(pFVar6->SelectionArray).AllocatorInstance.InlineData + 4) =
           *(int *)((longlong)(pFVar12->SelectionArray).AllocatorInstance.InlineData + 4);
      *(undefined8 *)(pFVar12->SelectionArray).AllocatorInstance.InlineData = 0;
      local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
    }
  }
  else {
    if (param_1 != TDataflowSingleTypePolicy<unsigned___int64>::TypeName) {
      local_38.Context = pFVar5;
      local_38.ReturnValue = pFVar6;
      bVar7 = TDataflowMultiTypePolicy<int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
              ::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_38);
      return bVar7;
    }
    local_68 = 0;
    pFVar2 = (*local_38.CacheEntry)->Ptr;
    EVar1 = pFVar2->Type;
    if (EVar1 == CacheElementTyped) {
      uVar14 = pFVar2[1]._padding_;
    }
    else if (EVar1 == CacheElementReference) {
      puVar9 = (undefined8 *)(**(code **)pFVar5->_padding_)(pFVar5,(int)pFVar2[1]._padding_);
      uVar14 = local_68;
      if (puVar9 != (undefined8 *)0x0) {
        puVar13 = UE::Dataflow::FContextCacheElementBase::GetTypedData<unsigned___int64>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)pFVar5,
                             (FProperty *)0x0,&local_68);
        uVar14 = *puVar13;
      }
    }
    else if (EVar1 == CacheElementNull) {
      uVar14 = 0;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L"");
      uVar14 = local_68;
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    pFVar12 = (FDataflowSelection *)::FString::SanitizeFloat(&local_50,(double)uVar14,0);
    if (pFVar6 != pFVar12) {
      pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->
               AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->GroupName)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->GroupName)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->GroupName)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6->SelectionArray).AllocatorInstance.InlineData =
           *(int *)(pFVar12->SelectionArray).AllocatorInstance.InlineData;
      *(int *)((longlong)(pFVar6->SelectionArray).AllocatorInstance.InlineData + 4) =
           *(int *)((longlong)(pFVar12->SelectionArray).AllocatorInstance.InlineData + 4);
      *(undefined8 *)(pFVar12->SelectionArray).AllocatorInstance.InlineData = 0;
    }
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l17::<lambda_1>_> @ 1444264d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FDataflowSelection *pFVar1;
  bool bVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  wchar_t *pwVar4;
  undefined1 auStack_188 [32];
  undefined1 local_168 [24];
  ForElementType<unsigned_int> local_150;
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  if (param_1 == TypeName) {
    local_168[0x10] = '\0';
    local_168[0x11] = '\0';
    local_168[0x12] = '\0';
    local_168[0x13] = '\0';
    local_168[0x14] = '\0';
    local_168[0x15] = '\0';
    local_168[0x16] = '\0';
    local_168[0x17] = '\0';
    local_150._0_4_ = 0;
    UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TIntVector3<int>_>
              ((*param_2->CacheEntry)->Ptr,(IContextCacheStore *)param_2->Context,(FProperty *)0x0,
               (TIntVector3<int> *)(local_168 + 0x10));
    pFVar1 = param_2->ReturnValue;
    local_148.Base = local_128;
    local_148.CurPos = local_128;
    local_168._0_4_ = 0;
    local_168._4_4_ = 0;
    local_148.End = (wchar_t *)local_28;
    local_168[8] = '\0';
    local_168[9] = '\0';
    local_168[10] = '\0';
    local_168[0xb] = '\0';
    local_168[0xc] = '\0';
    local_168[0xd] = '\0';
    local_168[0xe] = '\0';
    local_168[0xf] = '\0';
    local_148.bIsDynamic = false;
    local_148.bIsExternal = false;
    local_148.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_128,2,"X=",2);
    pTVar3 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_148,L"%d");
    if (pTVar3->End < pTVar3->CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(pTVar3,3);
    }
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>(pTVar3->CurPos,3," Y=",3);
    pTVar3->CurPos = pwVar4;
    pTVar3 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar3,L"%d");
    if (pTVar3->End < pTVar3->CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(pTVar3,3);
    }
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>(pTVar3->CurPos,3," Z=",3);
    pTVar3->CurPos = pwVar4;
    TStringBuilderBase<wchar_t>::AppendfImpl(pTVar3,L"%d");
    ::FString::AppendChars
              ((FString *)local_168,local_148.Base,
               (int)((longlong)local_148.CurPos - (longlong)local_148.Base >> 1));
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
    if (pFVar1 != (FDataflowSelection *)local_168) {
      if (pFVar1->GroupName != (FName)0x0) {
        FMemory::Free((void *)pFVar1->GroupName);
      }
      (pFVar1->GroupName).ComparisonIndex = (FNameEntryId)local_168._0_4_;
      (pFVar1->GroupName).Number = local_168._4_4_;
      *(undefined4 *)(pFVar1->SelectionArray).AllocatorInstance.InlineData = local_168._8_4_;
      *(undefined4 *)((pFVar1->SelectionArray).AllocatorInstance.InlineData + 4) = local_168._12_4_;
      local_168[8] = '\0';
      local_168[9] = '\0';
      local_168[10] = '\0';
      local_168[0xb] = '\0';
      local_168[0xc] = '\0';
      local_168[0xd] = '\0';
      local_168[0xe] = '\0';
      local_168[0xf] = '\0';
      local_168._0_4_ = 0;
      local_168._4_4_ = 0;
    }
    if ((FName)local_168._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_168._0_8_);
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>'::__l17::<lambda_1>_> @ 1444266e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
FDataflowStringConvertibleTypePolicy::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FContext *pFVar4;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **ppTVar5;
  FDataflowSelection *this;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  undefined8 *puVar9;
  FContextCacheElementBase *pFVar10;
  bool *pbVar11;
  FDataflowSelection *pFVar12;
  TTransform<double> *this_00;
  char *pcVar13;
  undefined1 auStack_148 [32];
  bool local_128 [8];
  undefined1 local_120 [16];
  FString local_110;
  FString local_100;
  <lambda_1> local_e8;
  <lambda_1> local_c8;
  <lambda_1> local_a8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar4 = param_2->Context;
  ppTVar5 = param_2->CacheEntry;
  this = param_2->ReturnValue;
  if (param_1 != TDataflowSingleTypePolicy<FString>::TypeName) {
    local_e8.__this = param_2->__this;
    local_e8.Context = pFVar4;
    local_e8.CacheEntry = ppTVar5;
    local_e8.ReturnValue = this;
    bVar6 = TDataflowMultiTypePolicy<FName,FText>::
            VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                      (param_1,&local_e8);
    if (bVar6) {
      return true;
    }
    local_c8.__this = param_2->__this;
    local_c8.Context = param_2->Context;
    local_c8.CacheEntry = ppTVar5;
    local_c8.ReturnValue = this;
    bVar6 = TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
            ::
            VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                      (param_1,&local_c8);
    if (bVar6) {
      return true;
    }
    local_a8.__this = param_2->__this;
    local_a8.Context = param_2->Context;
    local_a8.CacheEntry = ppTVar5;
    local_a8.ReturnValue = this;
    bVar6 = TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
            ::
            VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                      (param_1,&local_a8);
    if (bVar6) {
      return true;
    }
    pFVar4 = param_2->Context;
    if (param_1 == TDataflowSingleTypePolicy<bool>::TypeName) {
      pFVar10 = (*ppTVar5)->Ptr;
      EVar1 = pFVar10->Type;
      local_128[0] = bVar6;
      if (EVar1 == CacheElementTyped) {
        cVar8 = (char)pFVar10[1]._padding_;
      }
      else if (EVar1 == CacheElementReference) {
        puVar9 = (undefined8 *)(**(code **)pFVar4->_padding_)(pFVar4,(int)pFVar10[1]._padding_);
        cVar8 = local_128[0];
        if (puVar9 != (undefined8 *)0x0) {
          pbVar11 = UE::Dataflow::FContextCacheElementBase::GetTypedData<bool>
                              ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)pFVar4,
                               (FProperty *)0x0,local_128);
          cVar8 = *pbVar11;
        }
      }
      else if (EVar1 == CacheElementNull) {
        cVar8 = '\0';
      }
      else {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                           ,0x24a,L"");
        cVar8 = local_128[0];
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
      }
      pcVar13 = "False";
      if (cVar8 == '\x01') {
        pcVar13 = "True";
      }
      pFVar12 = (FDataflowSelection *)::FString::FString(&local_110,pcVar13);
      local_100.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
      if (this != pFVar12) {
        pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this->GroupName)->
                 AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this->GroupName)->AllocatorInstance).Data
             = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->GroupName)->
               AllocatorInstance).Data;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->GroupName)->AllocatorInstance).
        Data = (FScriptContainerElement *)0x0;
        *(int *)(this->SelectionArray).AllocatorInstance.InlineData =
             *(int *)(pFVar12->SelectionArray).AllocatorInstance.InlineData;
        *(int *)((longlong)(this->SelectionArray).AllocatorInstance.InlineData + 4) =
             *(int *)((longlong)(pFVar12->SelectionArray).AllocatorInstance.InlineData + 4);
        *(undefined8 *)(pFVar12->SelectionArray).AllocatorInstance.InlineData = 0;
        local_100.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
      }
    }
    else {
      if (param_1 != TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName) {
        return false;
      }
      local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_88.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_88.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_88.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_88.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_88.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_88.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      this_00 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TTransform<double>_>
                          ((*ppTVar5)->Ptr,(IContextCacheStore *)pFVar4,(FProperty *)0x0,&local_88);
      pFVar12 = (FDataflowSelection *)UE::Math::TTransform<double>::ToString(this_00,&local_100);
      if (this != pFVar12) {
        pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this->GroupName)->
                 AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this->GroupName)->AllocatorInstance).Data
             = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->GroupName)->
               AllocatorInstance).Data;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->GroupName)->AllocatorInstance).
        Data = (FScriptContainerElement *)0x0;
        *(int *)(this->SelectionArray).AllocatorInstance.InlineData =
             *(int *)(pFVar12->SelectionArray).AllocatorInstance.InlineData;
        *(int *)((longlong)(this->SelectionArray).AllocatorInstance.InlineData + 4) =
             *(int *)((longlong)(pFVar12->SelectionArray).AllocatorInstance.InlineData + 4);
        *(undefined8 *)(pFVar12->SelectionArray).AllocatorInstance.InlineData = 0;
      }
    }
    goto LAB_1444267c2;
  }
  local_120._0_8_ = (FScriptContainerElement *)0x0;
  local_120._8_4_ = CacheElementTyped;
  local_120._12_4_ = 0;
  pFVar10 = (*ppTVar5)->Ptr;
  EVar1 = pFVar10->Type;
  if (EVar1 == CacheElementTyped) {
    pFVar10 = pFVar10 + 1;
  }
  else {
    if (EVar1 == CacheElementReference) {
      puVar9 = (undefined8 *)(**(code **)pFVar4->_padding_)(pFVar4,(int)pFVar10[1]._padding_);
      if (puVar9 != (undefined8 *)0x0) {
        pFVar10 = (FContextCacheElementBase *)
                  UE::Dataflow::FContextCacheElementBase::GetTypedData<FString>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)pFVar4,
                             (FProperty *)0x0,(FString *)local_120);
        goto LAB_1444267ab;
      }
    }
    else if ((EVar1 != CacheElementNull) &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pFVar10 = (FContextCacheElementBase *)local_120;
  }
LAB_1444267ab:
  ::FString::operator=((FString *)this,(FString *)pFVar10);
  local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_120._0_8_;
LAB_1444267c2:
  if ((FProperty *)local_100.Data.AllocatorInstance.Data != (FProperty *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowStringTypes>'::__l17::<lambda_1>_> @ 144426a20

bool __cdecl
TDataflowMultiTypePolicy<FName,FText>::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  EType EVar1;
  FScriptContainerElement *pFVar2;
  FContext *pFVar3;
  code *pcVar4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  FContextCacheElementBase *pFVar9;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  FString *pFVar11;
  FName local_res8;
  FText local_38;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **local_28;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTStack_20;
  FString local_18;
  
  local_28 = param_2->CacheEntry;
  pTStack_20 = param_2->ReturnValue;
  pFVar3 = param_2->Context;
  if (param_1 != TDataflowSingleTypePolicy<FName>::TypeName) {
    if (param_1 != TDataflowSingleTypePolicy<FText>::TypeName) {
      return false;
    }
    FText::FText(&local_38);
    pFVar9 = (*local_28)->Ptr;
    EVar1 = pFVar9->Type;
    if (EVar1 == CacheElementTyped) {
      pFVar9 = pFVar9 + 1;
    }
    else {
      if (EVar1 == CacheElementReference) {
        pFVar3 = param_2->Context;
        puVar8 = (undefined8 *)(**(code **)pFVar3->_padding_)(pFVar3,(int)pFVar9[1]._padding_);
        if (puVar8 != (undefined8 *)0x0) {
          pFVar9 = (FContextCacheElementBase *)
                   UE::Dataflow::FContextCacheElementBase::GetTypedData<FText>
                             ((FContextCacheElementBase *)*puVar8,(IContextCacheStore *)pFVar3,
                              (FProperty *)0x0,&local_38);
          goto LAB_144426bd0;
        }
      }
      else if ((EVar1 != CacheElementNull) &&
              (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                  ,0x24a,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar9 = (FContextCacheElementBase *)&local_38;
    }
LAB_144426bd0:
    pFVar11 = FText::ToString((FText *)pFVar9);
    ::FString::operator=((FString *)pTStack_20,pFVar11);
    if (local_38.TextData.Reference == (ITextData *)0x0) {
      return true;
    }
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    return true;
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar9 = (*local_28)->Ptr;
  EVar1 = pFVar9->Type;
  if (EVar1 == CacheElementTyped) {
    pFVar9 = pFVar9 + 1;
  }
  else {
    if (EVar1 == CacheElementReference) {
      puVar8 = (undefined8 *)(**(code **)pFVar3->_padding_)(pFVar3,(int)pFVar9[1]._padding_);
      if (puVar8 != (undefined8 *)0x0) {
        pFVar9 = (FContextCacheElementBase *)
                 UE::Dataflow::FContextCacheElementBase::GetTypedData<FName>
                           ((FContextCacheElementBase *)*puVar8,(IContextCacheStore *)pFVar3,
                            (FProperty *)0x0,&local_res8);
        goto LAB_144426acf;
      }
    }
    else if ((EVar1 != CacheElementNull) &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pFVar9 = (FContextCacheElementBase *)&local_res8;
  }
LAB_144426acf:
  pTVar10 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
            ::FName::ToString((FName *)pFVar9,&local_18);
  pTVar5 = pTStack_20;
  if (pTStack_20 != pTVar10) {
    pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTStack_20->AllocatorInstance)->
             AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5->AllocatorInstance)->AllocatorInstance)
    .Data = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar10->AllocatorInstance)->
            AllocatorInstance).Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar10->AllocatorInstance)->AllocatorInstance
    ).Data = (FScriptContainerElement *)0x0;
    pTVar5->ArrayNum = pTVar10->ArrayNum;
    pTVar5->ArrayMax = pTVar10->ArrayMax;
    *(undefined8 *)&pTVar10->ArrayNum = 0;
  }
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return true;
  }
  FMemory::Free(local_18.Data.AllocatorInstance.Data);
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>_> @ 144426c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
TDataflowMultiTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  undefined8 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> local_78;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_68;
  <lambda_1> local_58;
  
  local_58.__this = param_2->__this;
  local_58.Context = param_2->Context;
  local_58.CacheEntry = param_2->CacheEntry;
  this = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)param_2->ReturnValue;
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    uVar12 = 0;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    pTVar9 = UE::Dataflow::FContextCacheElementBase::
             GetTypedData<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                       ((*local_58.CacheEntry)->Ptr,(IContextCacheStore *)local_58.Context,
                        (FProperty *)0x0,&local_78);
    TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
              (this,pTVar9->ArrayNum,Default);
    FVar11.Data = local_78.AllocatorInstance.Data;
    uVar14 = uVar12;
    uVar15 = uVar12;
    if (0 < pTVar9->ArrayNum) {
      do {
        uVar13 = (uint)uVar14;
        uVar8 = 0;
        if ((int)uVar13 < this->ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar3 = (this->AllocatorInstance).Data;
        uVar8 = 0;
        if ((int)uVar13 < pTVar9->ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar4 = (pTVar9->AllocatorInstance).Data;
        iVar2 = *(int *)(pFVar4 + uVar15 * 8 + 4);
        *(double *)(pFVar3 + uVar12) = (double)*(int *)(pFVar4 + uVar15 * 8);
        *(double *)(pFVar3 + uVar12 + 8) = (double)iVar2;
        *(undefined8 *)(pFVar3 + uVar12 + 0x10) = 0;
        *(undefined8 *)(pFVar3 + uVar12 + 0x18) = 0;
        uVar12 = uVar12 + 0x20;
        FVar11.Data = local_78.AllocatorInstance.Data;
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 1;
      } while ((int)(uVar13 + 1) < pTVar9->ArrayNum);
    }
  }
  else {
    if (param_1 !=
        TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>::
        TypeName) {
      local_58.ReturnValue = (bool *)this;
      bVar6 = TDataflowMultiTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
              ::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_58);
      return bVar6;
    }
    uVar12 = 0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    pTVar10 = UE::Dataflow::FContextCacheElementBase::
              GetTypedData<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                        ((*local_58.CacheEntry)->Ptr,(IContextCacheStore *)local_58.Context,
                         (FProperty *)0x0,&local_68);
    TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
              (this,pTVar10->ArrayNum,Default);
    FVar11.Data = local_68.AllocatorInstance.Data;
    uVar14 = uVar12;
    uVar15 = uVar12;
    if (0 < pTVar10->ArrayNum) {
      do {
        uVar13 = (uint)uVar12;
        uVar8 = 0;
        if ((int)uVar13 < this->ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar3 = (this->AllocatorInstance).Data;
        uVar8 = 0;
        if ((int)uVar13 < pTVar10->ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar4 = (pTVar10->AllocatorInstance).Data;
        uVar12 = (ulonglong)(uVar13 + 1);
        uVar1 = *(undefined8 *)(pFVar4 + uVar15 + 4);
        *(double *)(pFVar3 + uVar14) = (double)*(int *)(pFVar4 + uVar15);
        *(double *)(pFVar3 + uVar14 + 8) = (double)(int)uVar1;
        *(double *)(pFVar3 + uVar14 + 8 + 8) = (double)(int)((ulonglong)uVar1 >> 0x20);
        *(undefined8 *)(pFVar3 + uVar14 + 0x18) = 0;
        FVar11.Data = local_68.AllocatorInstance.Data;
        uVar14 = uVar14 + 0x20;
        uVar15 = uVar15 + 0xc;
      } while ((int)(uVar13 + 1) < pTVar10->ArrayNum);
    }
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>_> @ 144426f40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
TDataflowMultiTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  undefined8 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> local_58;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_48 [2];
  
  this = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)param_2->ReturnValue;
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    uVar14 = 0;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    pTVar11 = UE::Dataflow::FContextCacheElementBase::
              GetTypedData<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                        ((*param_2->CacheEntry)->Ptr,(IContextCacheStore *)param_2->Context,
                         (FProperty *)0x0,&local_58);
    TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
              (this,pTVar11->ArrayNum,Default);
    FVar13.Data = local_58.AllocatorInstance.Data;
    uVar16 = uVar14;
    uVar17 = uVar14;
    if (0 < pTVar11->ArrayNum) {
      do {
        uVar15 = (uint)uVar14;
        uVar10 = 0;
        if ((int)uVar15 < this->ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        pFVar3 = (this->AllocatorInstance).Data;
        uVar10 = 0;
        if ((int)uVar15 < pTVar11->ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        pFVar4 = (pTVar11->AllocatorInstance).Data;
        uVar14 = (ulonglong)(uVar15 + 1);
        uVar1 = *(undefined8 *)(pFVar4 + uVar16 + 4);
        iVar2 = *(int *)(pFVar4 + uVar16 + 0xc);
        *(double *)(pFVar3 + uVar17) = (double)*(int *)(pFVar4 + uVar16);
        *(double *)(pFVar3 + uVar17 + 8) = (double)(int)uVar1;
        *(double *)(pFVar3 + uVar17 + 8 + 8) = (double)(int)((ulonglong)uVar1 >> 0x20);
        *(double *)(pFVar3 + uVar17 + 0x18) = (double)iVar2;
        FVar13.Data = local_58.AllocatorInstance.Data;
        uVar16 = uVar16 + 0x10;
        uVar17 = uVar17 + 0x20;
      } while ((int)(uVar15 + 1) < pTVar11->ArrayNum);
    }
  }
  else {
    if (param_1 !=
        TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>::
        TypeName) {
      return false;
    }
    uVar14 = 0;
    local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48[0].ArrayNum = 0;
    local_48[0].ArrayMax = 0;
    pTVar12 = UE::Dataflow::FContextCacheElementBase::
              GetTypedData<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                        ((*param_2->CacheEntry)->Ptr,(IContextCacheStore *)param_2->Context,
                         (FProperty *)0x0,local_48);
    TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
              (this,pTVar12->ArrayNum,Default);
    FVar13.Data = local_48[0].AllocatorInstance.Data;
    uVar16 = uVar14;
    uVar17 = uVar14;
    if (0 < pTVar12->ArrayNum) {
      do {
        uVar15 = (uint)uVar14;
        uVar10 = 0;
        if ((int)uVar15 < this->ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        pFVar3 = (this->AllocatorInstance).Data;
        uVar10 = 0;
        if ((int)uVar15 < pTVar12->ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        pFVar5 = (pTVar12->AllocatorInstance).Data;
        uVar14 = (ulonglong)(uVar15 + 1);
        pFVar4 = pFVar5 + uVar17 + 8;
        uVar1 = *(undefined8 *)pFVar4;
        uVar7 = *(undefined8 *)(pFVar4 + 8);
        *(undefined8 *)(pFVar3 + uVar16) = *(undefined8 *)(pFVar5 + uVar17);
        *(undefined8 *)(pFVar3 + uVar16 + 8) = uVar1;
        *(undefined8 *)(pFVar3 + uVar16 + 8 + 8) = uVar7;
        *(undefined8 *)(pFVar3 + uVar16 + 0x18) = 0;
        FVar13.Data = local_48[0].AllocatorInstance.Data;
        uVar16 = uVar16 + 0x20;
        uVar17 = uVar17 + 0x18;
      } while ((int)(uVar15 + 1) < pTVar12->ArrayNum);
    }
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>_> @ 144427260

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
TDataflowMultiTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_88;
  FDataflowInput *local_78;
  FContext *pFStack_70;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **local_68;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTStack_60;
  <lambda_1> local_58;
  
  local_78 = param_2->__this;
  pFStack_70 = param_2->Context;
  local_68 = param_2->CacheEntry;
  this = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)param_2->ReturnValue;
  pTStack_60 = this;
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    `FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>_>
              (&local_78,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                )local_res8);
    return true;
  }
  if (param_1 !=
      TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::TypeName) {
    local_58.__this = local_78;
    local_58.Context = pFStack_70;
    local_58.CacheEntry = local_68;
    local_58.ReturnValue = (bool *)this;
    bVar9 = TDataflowMultiTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
            ::
            VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>_::__l17::<lambda_1>_>
                      (param_1,&local_58);
    return bVar9;
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pTVar12 = UE::Dataflow::FContextCacheElementBase::
            GetTypedData<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                      ((*local_68)->Ptr,(IContextCacheStore *)pFStack_70,(FProperty *)0x0,&local_88)
  ;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
            (this,pTVar12->ArrayNum,Default);
  uVar14 = 0;
  if (0 < pTVar12->ArrayNum) {
    lVar13 = 0;
    lVar15 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar14 < this->ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar4 = (this->AllocatorInstance).Data;
      uVar11 = 0;
      if ((int)uVar14 < pTVar12->ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar5 = (pTVar12->AllocatorInstance).Data;
      uVar14 = uVar14 + 1;
      pFVar1 = pFVar5 + lVar13;
      uVar3 = *(undefined8 *)(pFVar5 + lVar13 + 4);
      fVar2 = *(float *)(pFVar5 + lVar13 + 0xc);
      lVar13 = lVar13 + 0x10;
      dVar8 = (double)(float)((ulonglong)uVar3 >> 0x20);
      *(double *)(pFVar4 + lVar15) = (double)*(float *)pFVar1;
      auVar7._8_4_ = SUB84(dVar8,0);
      auVar7._0_8_ = (double)(float)uVar3;
      auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])(pFVar4 + lVar15 + 8) = auVar7;
      *(double *)(pFVar4 + lVar15 + 0x18) = (double)fVar2;
      lVar15 = lVar15 + 0x20;
    } while ((int)uVar14 < pTVar12->ArrayNum);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>_> @ 1444274c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
TDataflowMultiTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_78;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_68;
  <lambda_1> local_58;
  
  local_58.__this = param_2->__this;
  local_58.Context = param_2->Context;
  local_58.CacheEntry = param_2->CacheEntry;
  this = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)param_2->ReturnValue;
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    uVar13 = 0;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    pTVar10 = UE::Dataflow::FContextCacheElementBase::
              GetTypedData<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                        ((*local_58.CacheEntry)->Ptr,(IContextCacheStore *)local_58.Context,
                         (FProperty *)0x0,&local_78);
    TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
              (this,pTVar10->ArrayNum,Default);
    FVar12.Data = local_78.AllocatorInstance.Data;
    uVar15 = uVar13;
    uVar16 = uVar13;
    if (0 < pTVar10->ArrayNum) {
      do {
        uVar14 = (uint)uVar13;
        uVar9 = 0;
        if ((int)uVar14 < this->ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar2 = (this->AllocatorInstance).Data;
        uVar9 = 0;
        if ((int)uVar14 < pTVar10->ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar3 = (pTVar10->AllocatorInstance).Data;
        uVar13 = (ulonglong)(uVar14 + 1);
        uVar1 = *(undefined8 *)(pFVar3 + uVar16 + 8);
        *(undefined8 *)(pFVar2 + uVar15) = *(undefined8 *)(pFVar3 + uVar16);
        *(undefined8 *)(pFVar2 + uVar15 + 8) = uVar1;
        *(undefined8 *)(pFVar2 + uVar15 + 0x10) = 0;
        *(undefined8 *)(pFVar2 + uVar15 + 0x18) = 0;
        FVar12.Data = local_78.AllocatorInstance.Data;
        uVar15 = uVar15 + 0x20;
        uVar16 = uVar16 + 0x10;
      } while ((int)(uVar14 + 1) < pTVar10->ArrayNum);
    }
  }
  else {
    if (param_1 !=
        TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>::
        TypeName) {
      local_58.ReturnValue = (bool *)this;
      bVar7 = TDataflowMultiTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
              ::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_58);
      return bVar7;
    }
    uVar13 = 0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    pTVar11 = UE::Dataflow::FContextCacheElementBase::
              GetTypedData<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                        ((*local_58.CacheEntry)->Ptr,(IContextCacheStore *)local_58.Context,
                         (FProperty *)0x0,&local_68);
    TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
              (this,pTVar11->ArrayNum,Default);
    FVar12.Data = local_68.AllocatorInstance.Data;
    uVar15 = uVar13;
    uVar16 = uVar13;
    if (0 < pTVar11->ArrayNum) {
      do {
        uVar14 = (uint)uVar13;
        uVar9 = 0;
        if ((int)uVar14 < this->ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar2 = (this->AllocatorInstance).Data;
        uVar9 = 0;
        if ((int)uVar14 < pTVar11->ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar4 = (pTVar11->AllocatorInstance).Data;
        uVar13 = (ulonglong)(uVar14 + 1);
        pFVar3 = pFVar4 + uVar16 + 8;
        uVar1 = *(undefined8 *)pFVar3;
        uVar6 = *(undefined8 *)(pFVar3 + 8);
        *(undefined8 *)(pFVar2 + uVar15) = *(undefined8 *)(pFVar4 + uVar16);
        *(undefined8 *)(pFVar2 + uVar15 + 8) = uVar1;
        *(undefined8 *)(pFVar2 + uVar15 + 8 + 8) = uVar6;
        *(undefined8 *)(pFVar2 + uVar15 + 0x18) = 0;
        FVar12.Data = local_68.AllocatorInstance.Data;
        uVar15 = uVar15 + 0x20;
        uVar16 = uVar16 + 0x18;
      } while ((int)(uVar14 + 1) < pTVar11->ArrayNum);
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>_> @ 1444277e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
TDataflowMultiTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_88;
  FDataflowInput *local_78;
  FContext *pFStack_70;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **local_68;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTStack_60;
  <lambda_1> local_58;
  
  local_78 = param_2->__this;
  pFStack_70 = param_2->Context;
  local_68 = param_2->CacheEntry;
  this = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)param_2->ReturnValue;
  pTStack_60 = this;
  if (param_1 ==
      TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    `FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>_>
              (&local_78,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                )local_res8);
    return true;
  }
  if (param_1 !=
      TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    local_58.__this = local_78;
    local_58.Context = pFStack_70;
    local_58.CacheEntry = local_68;
    local_58.ReturnValue = (bool *)this;
    bVar7 = TDataflowMultiTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
            ::
            VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>_::__l17::<lambda_1>_>
                      (param_1,&local_58);
    return bVar7;
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pTVar10 = UE::Dataflow::FContextCacheElementBase::
            GetTypedData<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                      ((*local_68)->Ptr,(IContextCacheStore *)pFStack_70,(FProperty *)0x0,&local_88)
  ;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
            (this,pTVar10->ArrayNum,Default);
  uVar12 = 0;
  if (0 < pTVar10->ArrayNum) {
    lVar11 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar12 < this->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pFVar2 = (this->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)uVar12 < pTVar10->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pFVar3 = (pTVar10->AllocatorInstance).Data;
      uVar12 = uVar12 + 1;
      uVar5 = *(undefined8 *)(pFVar3 + lVar11 + 8);
      uVar6 = *(undefined8 *)(pFVar3 + lVar11 + 8 + 8);
      uVar1 = *(undefined8 *)(pFVar3 + lVar11 + 0x18);
      *(undefined8 *)(pFVar2 + lVar11) = *(undefined8 *)(pFVar3 + lVar11);
      *(undefined8 *)(pFVar2 + lVar11 + 8) = uVar5;
      *(undefined8 *)(pFVar2 + lVar11 + 8 + 8) = uVar6;
      *(undefined8 *)(pFVar2 + lVar11 + 0x18) = uVar1;
      lVar11 = lVar11 + 0x20;
    } while ((int)uVar12 < pTVar10->ArrayNum);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>_> @ 144427a20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
TDataflowMultiTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::
VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_a8;
  FDataflowInput *local_98;
  FContext *pFStack_90;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **local_88;
  bool *pbStack_80;
  FDataflowInput *local_78;
  FContext *pFStack_70;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **local_68;
  bool *pbStack_60;
  <lambda_1> local_58;
  
  local_98 = param_2->__this;
  pFStack_90 = param_2->Context;
  if (param_1 !=
      TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
      TypeName) {
    local_88 = param_2->CacheEntry;
    pbStack_80 = param_2->ReturnValue;
    if (param_1 ==
        TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::
        TypeName) {
      `FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>::
      operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>_>
                (&local_98,
                 (TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                  )local_res8);
      return true;
    }
    local_78 = local_98;
    pFStack_70 = pFStack_90;
    local_68 = local_88;
    pbStack_60 = pbStack_80;
    if (param_1 !=
        TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
        TypeName) {
      local_58.__this = local_98;
      local_58.Context = pFStack_90;
      local_58.CacheEntry = local_88;
      local_58.ReturnValue = pbStack_80;
      bVar7 = TDataflowMultiTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
              ::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_58);
      return bVar7;
    }
    `FDataflowInput::GetValueFromAnyType<FDataflowVectorArrayTypes>'::__l17::<lambda_1>::
    operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>
              (&local_78,
               (TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                )local_res10);
    return true;
  }
  uVar11 = 0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  pTVar10 = UE::Dataflow::FContextCacheElementBase::
            GetTypedData<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                      ((*param_2->CacheEntry)->Ptr,(IContextCacheStore *)pFStack_90,(FProperty *)0x0
                       ,&local_a8);
  this = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)param_2->ReturnValue;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
            (this,pTVar10->ArrayNum,Default);
  uVar13 = uVar11;
  if (0 < pTVar10->ArrayNum) {
    do {
      uVar12 = (uint)uVar13;
      uVar9 = 0;
      if ((int)uVar12 < this->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar3 = (this->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)uVar12 < pTVar10->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar4 = (pTVar10->AllocatorInstance).Data;
      pFVar1 = pFVar4 + uVar11;
      uVar6 = *(undefined8 *)(pFVar1 + 8);
      pFVar2 = pFVar3 + uVar11;
      *(undefined8 *)pFVar2 = *(undefined8 *)pFVar1;
      *(undefined8 *)(pFVar2 + 8) = uVar6;
      pFVar4 = pFVar4 + uVar11 + 0x10;
      uVar6 = *(undefined8 *)(pFVar4 + 8);
      pFVar3 = pFVar3 + uVar11 + 0x10;
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar4;
      *(undefined8 *)(pFVar3 + 8) = uVar6;
      uVar11 = uVar11 + 0x20;
      uVar13 = (ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < pTVar10->ArrayNum);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>'::__l17::<lambda_1>_> @ 144427c70

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  float fVar1;
  float fVar2;
  EType EVar3;
  FContextCacheElementBase *pFVar4;
  code *pcVar5;
  FContext *pFVar6;
  TVector4<double> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  TVector2<float>_u_0 *pTVar11;
  TVector<float>_u_0 *pTVar12;
  TVector2<float>_u_0 local_res8;
  TVector<float>_u_0 local_48;
  <lambda_1> local_38;
  
  local_38.__this = param_2->__this;
  pFVar6 = param_2->Context;
  local_38.CacheEntry = param_2->CacheEntry;
  pTVar7 = param_2->ReturnValue;
  if (param_1 != TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName) {
    if (param_1 != TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName) {
      local_38.Context = pFVar6;
      local_38.ReturnValue = pTVar7;
      bVar8 = TDataflowMultiTypePolicy<UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
              ::
              VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>_::__l17::<lambda_1>_>
                        (param_1,&local_38);
      return bVar8;
    }
    local_48._0_8_ = 0;
    local_48._s_0.Z = 0.0;
    pFVar4 = (*local_38.CacheEntry)->Ptr;
    EVar3 = pFVar4->Type;
    if (EVar3 == CacheElementTyped) {
      local_48._s_0.X = (float)*(undefined4 *)&pFVar4[1]._padding_;
      pTVar12 = (TVector<float>_u_0 *)(pFVar4 + 1);
    }
    else if (EVar3 == CacheElementReference) {
      puVar10 = (undefined8 *)(**(code **)pFVar6->_padding_)(pFVar6,(int)pFVar4[1]._padding_);
      if (puVar10 == (undefined8 *)0x0) {
        pTVar12 = &local_48;
      }
      else {
        pTVar12 = &UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector<float>_>
                             ((FContextCacheElementBase *)*puVar10,(IContextCacheStore *)pFVar6,
                              (FProperty *)0x0,(TVector<float> *)&local_48._s_0)->field0_0x0;
        local_48._s_0.X = (((TVector<float>_u_0 *)&(pTVar12->_s_0).X)->_s_0).X;
      }
    }
    else {
      if (EVar3 == CacheElementNull) {
        local_48._s_0.X = 0.0;
      }
      else {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                           ,0x24a,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      pTVar12 = &local_48;
    }
    fVar1 = (pTVar12->_s_0).Y;
    fVar2 = (pTVar12->_s_0).Z;
    (pTVar7->field0_0x0)._s_0.X = (double)local_48._s_0.X;
    (pTVar7->field0_0x0)._s_0.Y = (double)fVar1;
    (pTVar7->field0_0x0)._s_0.Z = (double)fVar2;
    (pTVar7->field0_0x0)._s_0.W = 0.0;
    return true;
  }
  local_res8 = (TVector2<float>_u_0)0x0;
  pFVar4 = (*local_38.CacheEntry)->Ptr;
  EVar3 = pFVar4->Type;
  if (EVar3 == CacheElementTyped) {
    pTVar11 = (TVector2<float>_u_0 *)(pFVar4 + 1);
  }
  else if (EVar3 == CacheElementReference) {
    puVar10 = (undefined8 *)(**(code **)pFVar6->_padding_)(pFVar6,(int)pFVar4[1]._padding_);
    if (puVar10 == (undefined8 *)0x0) {
      pTVar11 = &local_res8;
    }
    else {
      pTVar11 = &UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector2<float>_>
                           ((FContextCacheElementBase *)*puVar10,(IContextCacheStore *)pFVar6,
                            (FProperty *)0x0,(TVector2<float> *)&local_res8._s_0)->field0_0x0;
    }
  }
  else {
    if (EVar3 != CacheElementNull) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    pTVar11 = &local_res8;
  }
  fVar1 = (pTVar11->_s_0).Y;
  (pTVar7->field0_0x0)._s_0.X = (double)(((TVector2<float>_u_0 *)&(pTVar11->_s_0).X)->_s_0).X;
  (pTVar7->field0_0x0)._s_0.Y = (double)fVar1;
  (pTVar7->field0_0x0)._s_0.Z = 0.0;
  (pTVar7->field0_0x0)._s_0.W = 0.0;
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>'::__l17::<lambda_1>_> @ 144427e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
TDataflowMultiTypePolicy<UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  EType EVar5;
  code *pcVar6;
  FContext *pFVar7;
  TVector4<double> *pTVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  TVector4<float>_u_0 *pTVar14;
  TQuat<double> *pTVar15;
  FContextCacheElementBase *pFVar16;
  TVector4<float>_u_0 local_78;
  TVector4<float>_u_0 local_68;
  TQuat<double> local_58;
  <lambda_1> local_38;
  
  local_38.__this = param_2->__this;
  pFVar7 = param_2->Context;
  local_38.CacheEntry = param_2->CacheEntry;
  pTVar8 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName) {
    local_78._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_78._8_8_ = _UNK_150689648;
    pFVar16 = (*local_38.CacheEntry)->Ptr;
    EVar5 = pFVar16->Type;
    if (EVar5 != CacheElementTyped) {
      if (EVar5 == CacheElementReference) {
        puVar13 = (undefined8 *)(**(code **)pFVar7->_padding_)(pFVar7,(int)pFVar16[1]._padding_);
        if (puVar13 == (undefined8 *)0x0) {
          pTVar14 = &local_78;
        }
        else {
          pTVar14 = &UE::Dataflow::FContextCacheElementBase::
                     GetTypedData<UE::Math::TVector4<float>_>
                               ((FContextCacheElementBase *)*puVar13,(IContextCacheStore *)pFVar7,
                                (FProperty *)0x0,(TVector4<float> *)&local_78._s_0)->field0_0x0;
          local_78._s_0.X = (((TVector4<float>_u_0 *)&(pTVar14->_s_0).X)->_s_0).X;
        }
      }
      else if (EVar5 == CacheElementNull) {
        local_78._s_0.X = 0.0;
        pTVar14 = &local_78;
      }
      else {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                            ,0x24a,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        pTVar14 = &local_78;
      }
      goto LAB_144428071;
    }
  }
  else {
    if (param_1 == TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName) {
      local_58.X = 0.0;
      local_58.Y = 0.0;
      local_58.Z = 0.0;
      local_58.W = 0.0;
      pTVar15 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TQuat<double>_>
                          ((*local_38.CacheEntry)->Ptr,(IContextCacheStore *)pFVar7,(FProperty *)0x0
                           ,&local_58);
      dVar9 = pTVar15->Y;
      dVar10 = pTVar15->Z;
      dVar4 = pTVar15->W;
      (pTVar8->field0_0x0)._s_0.X = pTVar15->X;
      (pTVar8->field0_0x0)._s_0.Y = dVar9;
      (pTVar8->field0_0x0)._s_0.Z = dVar10;
      (pTVar8->field0_0x0)._s_0.W = dVar4;
      return true;
    }
    if (param_1 != TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName) {
      local_38.Context = pFVar7;
      local_38.ReturnValue = pTVar8;
      bVar11 = TDataflowMultiTypePolicy<FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
               ::
               VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>_::__l17::<lambda_1>_>
                         (param_1,&local_38);
      return bVar11;
    }
    local_78._s_0.X = 0.0;
    local_68._s_0.X = 0.0;
    local_68._s_0.Y = 0.0;
    local_68._s_0.Z = 0.0;
    local_68._s_0.W = 0.0;
    pFVar16 = (*local_38.CacheEntry)->Ptr;
    EVar5 = pFVar16->Type;
    if (EVar5 != CacheElementTyped) {
      if (EVar5 == CacheElementReference) {
        puVar13 = (undefined8 *)(**(code **)pFVar7->_padding_)(pFVar7,(int)pFVar16[1]._padding_);
        if (puVar13 == (undefined8 *)0x0) {
          pTVar14 = &local_68;
          local_78._s_0.X = local_68._s_0.X;
        }
        else {
          pTVar14 = (TVector4<float>_u_0 *)
                    UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TQuat<float>_>
                              ((FContextCacheElementBase *)*puVar13,(IContextCacheStore *)pFVar7,
                               (FProperty *)0x0,(TQuat<float> *)&local_68._s_0);
          local_78._s_0.X = (pTVar14->_s_0).X;
        }
      }
      else {
        if ((EVar5 != CacheElementNull) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                ,0x24a,L""), local_78._s_0.X = local_68._s_0.X, bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        pTVar14 = &local_68;
      }
      goto LAB_144428071;
    }
  }
  local_78._s_0.X = (float)pFVar16[1].Type;
  pTVar14 = (TVector4<float>_u_0 *)&pFVar16[1].Type;
LAB_144428071:
  fVar1 = (pTVar14->_s_0).Y;
  fVar2 = (pTVar14->_s_0).Z;
  fVar3 = (pTVar14->_s_0).W;
  (pTVar8->field0_0x0)._s_0.X = (double)local_78._s_0.X;
  (pTVar8->field0_0x0)._s_0.Y = (double)fVar1;
  (pTVar8->field0_0x0)._s_0.Z = (double)fVar2;
  (pTVar8->field0_0x0)._s_0.W = (double)fVar3;
  return true;
}

// VisitPolicyByType<`FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>'::__l17::<lambda_1>_> @ 1444280f0

bool __cdecl
TDataflowMultiTypePolicy<FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>
::VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>_::__l17::<lambda_1>_>
          (FName param_1,<lambda_1> *param_2)

{
  int iVar1;
  int iVar2;
  FContext *pFVar3;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **ppTVar4;
  TVector4<double> *pTVar5;
  FLinearColor *pFVar6;
  TIntPoint<int> *pTVar7;
  TIntVector3<int> *pTVar8;
  TIntVector4<int> *pTVar9;
  TRotator<double> *pTVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TIntPoint<int>_u_0 local_res8 [4];
  FLinearColor_u_0 local_38;
  undefined8 local_28;
  
  pFVar3 = param_2->Context;
  ppTVar4 = param_2->CacheEntry;
  pTVar5 = param_2->ReturnValue;
  if (param_1 == TDataflowSingleTypePolicy<FLinearColor>::TypeName) {
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    pFVar6 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FLinearColor>
                       ((*ppTVar4)->Ptr,(IContextCacheStore *)pFVar3,(FProperty *)0x0,
                        (FLinearColor *)&local_38._s_0);
    dVar12 = (double)(pFVar6->field0_0x0)._s_0.G;
    dVar13 = (double)(pFVar6->field0_0x0)._s_0.B;
    dVar14 = (double)(pFVar6->field0_0x0)._s_0.A;
    dVar11 = (double)(pFVar6->field0_0x0)._s_0.R;
  }
  else {
    if (param_1 == TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName) {
      local_res8[0] = (TIntPoint<int>_u_0)0x0;
      pTVar7 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TIntPoint<int>_>
                         ((*ppTVar4)->Ptr,(IContextCacheStore *)pFVar3,(FProperty *)0x0,
                          (TIntPoint<int> *)&local_res8[0]._s_0);
      iVar1 = (pTVar7->field0_0x0)._s_0.Y;
      (pTVar5->field0_0x0)._s_0.X = (double)(pTVar7->field0_0x0)._s_0.X;
      (pTVar5->field0_0x0)._s_0.Y = (double)iVar1;
      (pTVar5->field0_0x0)._s_0.Z = 0.0;
      (pTVar5->field0_0x0)._s_0.W = 0.0;
      return true;
    }
    if (param_1 == TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName) {
      local_38._0_8_ = 0;
      local_38._8_8_ = local_38._8_8_ & 0xffffffff00000000;
      pTVar8 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TIntVector3<int>_>
                         ((*ppTVar4)->Ptr,(IContextCacheStore *)pFVar3,(FProperty *)0x0,
                          (TIntVector3<int> *)&local_38._s_0);
      iVar1 = (pTVar8->field0_0x0)._s_0.Y;
      iVar2 = (pTVar8->field0_0x0)._s_0.Z;
      (pTVar5->field0_0x0)._s_0.X = (double)(pTVar8->field0_0x0)._s_0.X;
      (pTVar5->field0_0x0)._s_0.Y = (double)iVar1;
      (pTVar5->field0_0x0)._s_0.Z = (double)iVar2;
      (pTVar5->field0_0x0)._s_0.W = 0.0;
      return true;
    }
    if (param_1 != TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName) {
      if (param_1 == TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName) {
        local_28 = 0;
        local_38._0_8_ = 0;
        local_38._8_8_ = 0;
        pTVar10 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TRotator<double>_>
                            ((*ppTVar4)->Ptr,(IContextCacheStore *)pFVar3,(FProperty *)0x0,
                             (TRotator<double> *)&local_38._s_0);
        dVar11 = pTVar10->Yaw;
        dVar12 = pTVar10->Roll;
        (pTVar5->field0_0x0)._s_0.X = pTVar10->Pitch;
        (pTVar5->field0_0x0)._s_0.Y = dVar11;
        (pTVar5->field0_0x0)._s_0.Z = dVar12;
        (pTVar5->field0_0x0)._s_0.W = 0.0;
        return true;
      }
      return false;
    }
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    pTVar9 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TIntVector4<int>_>
                       ((*ppTVar4)->Ptr,(IContextCacheStore *)pFVar3,(FProperty *)0x0,
                        (TIntVector4<int> *)&local_38._s_0);
    dVar12 = (double)(pTVar9->field0_0x0)._s_0.Y;
    dVar13 = (double)(pTVar9->field0_0x0)._s_0.Z;
    dVar14 = (double)(pTVar9->field0_0x0)._s_0.W;
    dVar11 = (double)(pTVar9->field0_0x0)._s_0.X;
  }
  (pTVar5->field0_0x0)._s_0.X = dVar11;
  (pTVar5->field0_0x0)._s_0.Y = dVar12;
  (pTVar5->field0_0x0)._s_0.Z = dVar13;
  (pTVar5->field0_0x0)._s_0.W = dVar14;
  return true;
}

// ~<lambda_1> @ 144432cf0

void __thiscall
`Async<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
          (void *this)

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
                    /* WARNING: Could not recover jumptable at 0x000144432d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>,1,0> @ 144432d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDataflowOutput::EvaluateParallel_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDataflowOutput::EvaluateParallel'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Async<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 144432db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FDataflowOutput::EvaluateParallel_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FDataflowOutput::EvaluateParallel'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_1>,1,1> @ 144432dd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UE::Dataflow::FContextEvaluator::ScheduleTask_::__l5::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x50);
    if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x68);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000144432e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_2>,1,1> @ 144432e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_2>,1,1>::
~TFunction_OwnedObject<_UE::Dataflow::FContextEvaluator::ScheduleTask_::__l5::<lambda_2>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::`5'::<lambda_2>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x000144432e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// operator<< @ 144434650

FArchive * __cdecl operator<<(FArchive *param_1,FContextCache *param_2)

{
  UE::Dataflow::FContextCache::Serialize(param_2,param_1);
  return param_1;
}

// operator<< @ 144434680

FArchive * __cdecl operator<<(FArchive *param_1,FTimestamp *param_2)

{
  ulong64 *puVar1;
  
  puVar1 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Value);
    }
  }
  else {
    param_2->Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar1 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    UE::Dataflow::FTimestamp::Invalid = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&UE::Dataflow::FTimestamp::Invalid,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&UE::Dataflow::FTimestamp::Invalid);
  return param_1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 144434b10

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::Dataflow::TContextCacheElementUObject<struct
   TObjectPtr<class UObject> >::`vector deleting destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::
_vector_deleting_destructor__adjustor_56__
          (TContextCacheElementUObject<TObjectPtr<UObject>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TContextCacheElementUObject<TObjectPtr<UObject>_> *)&this[-1]._padding_,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 144434b20

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::Dataflow::TContextCacheElementUObjectArray<struct TObjectPtr<class UObject> >::`vector
   deleting destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UObject>_>::
_vector_deleting_destructor__adjustor_56__
          (TContextCacheElementUObjectArray<TObjectPtr<UObject>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TContextCacheElementUObjectArray<TObjectPtr<UObject>_> *)&this[-1]._padding_,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 144434b30

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::Dataflow::FContextCacheElementUStruct::`vector
   deleting destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UE::Dataflow::FContextCacheElementUStruct::_vector_deleting_destructor__adjustor_56__
          (FContextCacheElementUStruct *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FContextCacheElementUStruct *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 144434b40

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::Dataflow::FContextCacheElementUStructArray::`vector deleting destructor'`adjustor{56}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::Dataflow::FContextCacheElementUStructArray::_vector_deleting_destructor__adjustor_56__
          (FContextCacheElementUStructArray *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FContextCacheElementUStructArray *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 144434b50

void * __thiscall
IBaseDelegateInstance<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434b80

void * __thiscall
IBaseDelegateInstance<void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434bb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Dataflow::FNodeColorsRegistry,void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434be0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Dataflow::FPinSettingsRegistry,void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434c10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434c40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434c70

void * __thiscall
UE::Dataflow::TContextCacheElement<int_&>::_scalar_deleting_destructor_
          (TContextCacheElement<int_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434cb0

void * __thiscall
UE::Dataflow::TContextCacheElement<signed_char_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<signed_char_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434cf0

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<unsigned_char_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434d30

void * __thiscall
UE::Dataflow::TContextCacheElement<short_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<short_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434d70

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<unsigned_short_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434db0

void * __thiscall
UE::Dataflow::TContextCacheElement<int_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<int_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434df0

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<unsigned_int_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434e30

void * __thiscall
UE::Dataflow::TContextCacheElement<float_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<float_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434e70

void * __thiscall
UE::Dataflow::TContextCacheElement<double_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<double_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434eb0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntPoint<int>_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TIntPoint<int>_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434ef0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector3<int>_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TIntVector3<int>_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434f30

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector4<int>_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TIntVector4<int>_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434f70

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TQuat<float>_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434fb0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<double>_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TQuat<double>_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144434ff0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TRotator<double>_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TRotator<double>_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435030

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TTransform<double>_const_&>::
_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TTransform<double>_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435070

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TVector2<float>_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444350b0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<double>_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TVector2<double>_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444350f0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TVector4<float>_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435130

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<double>_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TVector4<double>_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435170

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TVector<float>_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444351b0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<double>_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TVector<double>_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444351f0

void * __thiscall
UE::Dataflow::TContextCacheElement<FLinearColor_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<FLinearColor_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435230

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435280

void * __thiscall
UE::Dataflow::TContextCacheElement<FName_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<FName_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444352c0

void * __thiscall
UE::Dataflow::TContextCacheElement<FString_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<FString_const_&> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435310

void * __thiscall
UE::Dataflow::TContextCacheElement<FText_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<FText_const_&> *this,uint param_1)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->Data).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435360

void * __thiscall
UE::Dataflow::TContextCacheElement<enum_EDataflowImageResolution_const_&>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444353a0

void * __thiscall
UE::Dataflow::TContextCacheElement<__int64_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<__int64_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444353e0

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<unsigned___int64_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435420

void * __thiscall
UE::Dataflow::TContextCacheElement<bool_const_&>::_scalar_deleting_destructor_
          (TContextCacheElement<bool_const_&> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435460

void * __thiscall
UE::Dataflow::TContextCacheElement<signed_char>::_scalar_deleting_destructor_
          (TContextCacheElement<signed_char> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444354a0

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char>::_scalar_deleting_destructor_
          (TContextCacheElement<unsigned_char> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444354e0

void * __thiscall
UE::Dataflow::TContextCacheElement<short>::_scalar_deleting_destructor_
          (TContextCacheElement<short> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435520

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short>::_scalar_deleting_destructor_
          (TContextCacheElement<unsigned_short> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435560

void * __thiscall
UE::Dataflow::TContextCacheElement<int>::_scalar_deleting_destructor_
          (TContextCacheElement<int> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444355a0

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int>::_scalar_deleting_destructor_
          (TContextCacheElement<unsigned_int> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444355e0

void * __thiscall
UE::Dataflow::TContextCacheElement<float>::_scalar_deleting_destructor_
          (TContextCacheElement<float> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435620

void * __thiscall
UE::Dataflow::TContextCacheElement<double>::_scalar_deleting_destructor_
          (TContextCacheElement<double> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435660

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TQuat<float>_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444356a0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TVector2<float>_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444356e0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TVector4<float>_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435720

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_>::_scalar_deleting_destructor_
          (TContextCacheElement<UE::Math::TVector<float>_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435760

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_> *this,uint param_1
          )

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444357b0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435800

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435850

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444358a0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444358f0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435940

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435990

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444359e0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> *this
          ,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435a30

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::_scalar_deleting_destructor_
          (TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435a80

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::_scalar_deleting_destructor_
          (TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435ad0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435b20

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435b70

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::_scalar_deleting_destructor_
          (TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435bc0

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435c10

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435c60

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::_scalar_deleting_destructor_
          (TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435cb0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435d00

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::_scalar_deleting_destructor_
          (TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435d50

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this
          ,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435da0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435df0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435e40

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435e90

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>((FString *)(this->Data).AllocatorInstance.Data,(this->Data).ArrayNum);
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435ef0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FText,int>((FText *)(this->Data).AllocatorInstance.Data,(this->Data).ArrayNum);
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435f50

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<enum_EDataflowImageResolution,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  *(undefined ***)this = &___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435fa0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144435ff0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436040

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436090

void * __thiscall
UE::Dataflow::TContextCacheElement<FName>::_scalar_deleting_destructor_
          (TContextCacheElement<FName> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444360d0

void * __thiscall
UE::Dataflow::TContextCacheElement<FString>::_scalar_deleting_destructor_
          (TContextCacheElement<FString> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436120

void * __thiscall
UE::Dataflow::TContextCacheElement<FText>::_scalar_deleting_destructor_
          (TContextCacheElement<FText> *this,uint param_1)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->Data).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436170

void * __thiscall
UE::Dataflow::TContextCacheElement<__int64>::_scalar_deleting_destructor_
          (TContextCacheElement<__int64> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444361b0

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64>::_scalar_deleting_destructor_
          (TContextCacheElement<unsigned___int64> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444361f0

void * __thiscall
UE::Dataflow::TContextCacheElement<bool>::_scalar_deleting_destructor_
          (TContextCacheElement<bool> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436230

void * __thiscall
UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::_scalar_deleting_destructor_
          (TContextCacheElementUObject<TObjectPtr<UObject>_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436290

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UObject>_>::_scalar_deleting_destructor_
          (TContextCacheElementUObjectArray<TObjectPtr<UObject>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ObjectPtrArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_UFDataflowNode__U__TDefaultDelete_UFDataflowNode______AEBUFNewNodeParameters_Dataflow_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDataflowOutput::EvaluateParallel'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FDataflowOutput::EvaluateParallel'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444363d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x50);
    if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x68);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::`5'::<lambda_2>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444364b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDataflowNode,SharedPointerInternals::DefaultDeleter<FDataflowNode>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDataflowNode,SharedPointerInternals::DefaultDeleter<FDataflowNode>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444364f0

void * __thiscall
UE::Dataflow::FContextCacheElementBase::_scalar_deleting_destructor_
          (FContextCacheElementBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436530

void * __thiscall
UE::Dataflow::FContextCacheElementNull::_scalar_deleting_destructor_
          (FContextCacheElementNull *this,uint param_1)

{
  *(undefined ***)this = &___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436570

void * __thiscall
UE::Dataflow::FContextCacheElementReference::_scalar_deleting_destructor_
          (FContextCacheElementReference *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444365b0

void * __thiscall
UE::Dataflow::FContextCacheElementUStruct::_scalar_deleting_destructor_
          (FContextCacheElementUStruct *this,uint param_1)

{
  FInstancedStruct::Reset(&this->InstancedStruct);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436610

void * __thiscall
UE::Dataflow::FContextCacheElementUStructArray::_scalar_deleting_destructor_
          (FContextCacheElementUStructArray *this,uint param_1)

{
  FInstancedStructArray::~FInstancedStructArray(&this->InstancedStructArray);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436670

void * __thiscall
FDataflowArrayInput::_scalar_deleting_destructor_(FDataflowArrayInput *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDataflowConnection__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444366b0

void * __thiscall
FDataflowArrayOutput::_scalar_deleting_destructor_(FDataflowArrayOutput *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FDataflowConnection__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436710

void * __thiscall FDataflowInput::_scalar_deleting_destructor_(FDataflowInput *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDataflowConnection__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436750

void * __thiscall FDataflowNode::_scalar_deleting_destructor_(FDataflowNode *this,uint param_1)

{
  ~FDataflowNode(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436790

void * __thiscall FDataflowOutput::_scalar_deleting_destructor_(FDataflowOutput *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OutputLock).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Connections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDataflowConnection__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444367f0

void * __thiscall
FDynamicMeshDebugDrawMesh::_scalar_deleting_destructor_
          (FDynamicMeshDebugDrawMesh *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436820

void * __thiscall UE::Dataflow::FGraph::_scalar_deleting_destructor_(FGraph *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  (this->DisabledNodes).HashSize = 0;
  this->_padding_ = (longlong)&___7FGraph_Dataflow_UE__6B_;
  FVar1 = (this->DisabledNodes).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DisabledNodes).Elements);
  pFVar2 = (this->Connections).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->FilteredNodes).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FilteredNodes).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FilteredNodes);
  DestructItems<TSharedPtr<FDataflowNode,1>,int>
            ((TSharedPtr<FDataflowNode,1> *)(this->Nodes).AllocatorInstance.Data,
             (this->Nodes).ArrayNum);
  pFVar2 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444368e0

void * __thiscall FObjectReader::_scalar_deleting_destructor_(FObjectReader *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436920

void * __thiscall FObjectWriter::_scalar_deleting_destructor_(FObjectWriter *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436960

void * __thiscall
IDataflowDebugDrawInterface::IDebugDrawMesh::_scalar_deleting_destructor_
          (IDebugDrawMesh *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144436990

void * __thiscall
UDataflowGraphInterface::_scalar_deleting_destructor_(UDataflowGraphInterface *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 1444369f0

void * __thiscall
UDataflowSettings::_scalar_deleting_destructor_(UDataflowSettings *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDataflowSettings__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDataflowSettingsChangedPinSettingsDelegate).field_0x8,
             *(int *)&(this->OnDataflowSettingsChangedPinSettingsDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnDataflowSettingsChangedPinSettingsDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataflowSettingsChangedPinSettingsDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDataflowSettingsChangedDelegate).field_0x8,
             *(int *)&(this->OnDataflowSettingsChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnDataflowSettingsChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataflowSettingsChangedDelegate);
  pFVar2 = (this->TransformLevelColors).LevelColors.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PinSettingsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PinSettingsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PinSettingsMap);
  *(undefined4 *)&(this->NodeColorsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NodeColorsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeColorsMap);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x138);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDataflowAnyType @ 144445360

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowAnyType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowConnection @ 144445370

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowConnection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowConvertNodes @ 144445380

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowConvertNodes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowCoreNodes @ 144445390

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowCoreNodes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowCore_init @ 1444453a0

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowCore_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowElement @ 1444453b0

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowElement(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowGraph @ 1444453c0

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowGraph(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowImage @ 1444453d0

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowImage(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowImageNodes @ 1444453e0

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowImageNodes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowInputOutput @ 1444453f0

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowInputOutput(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowMathNodes @ 144445400

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowMathNodes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowNode @ 144445410

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowOverrideNode @ 144445420

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowOverrideNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowPath @ 144445430

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowPath(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowSelection @ 144445440

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowSelection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowSettings @ 144445450

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowTerminalNode @ 144445460

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowTerminalNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataflowVectorNodes @ 144445470

void __cdecl EmptyLinkFunctionForGeneratedCodeDataflowVectorNodes(void)

{
  return;
}

// Z_Construct_UClass_UDataflowGraphInterface_NoRegister @ 14446a770

UClass * __cdecl Z_Construct_UClass_UDataflowGraphInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowGraphInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowCore",L"DataflowGraphInterface",
               &Z_Registration_Info_UClass_UDataflowGraphInterface.InnerSingleton,
               UDataflowGraphInterface::StaticRegisterNativesUDataflowGraphInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowGraphInterface>,
               InternalVTableHelperCtorCaller<UDataflowGraphInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowGraphInterface.InnerSingleton;
}

// Z_Construct_UClass_UDataflowSettings_NoRegister @ 14446a830

UClass * __cdecl Z_Construct_UClass_UDataflowSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowCore",L"DataflowSettings",
               &Z_Registration_Info_UClass_UDataflowSettings.InnerSingleton,
               UDataflowSettings::StaticRegisterNativesUDataflowSettings,0x138,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<UDataflowSettings>,
               InternalVTableHelperCtorCaller<UDataflowSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowSettings.InnerSingleton;
}

// Z_Construct_UEnum_DataflowCore_EDataflowImageChannel @ 14446a8f0

UEnum * __cdecl Z_Construct_UEnum_DataflowCore_EDataflowImageChannel(void)

{
  if (Z_Registration_Info_UEnum_EDataflowImageChannel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDataflowImageChannel.InnerSingleton,
               &Z_Construct_UEnum_DataflowCore_EDataflowImageChannel_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDataflowImageChannel.InnerSingleton;
}

// Z_Construct_UEnum_DataflowCore_EDataflowSelectionType @ 14446a930

UEnum * __cdecl Z_Construct_UEnum_DataflowCore_EDataflowSelectionType(void)

{
  if (Z_Registration_Info_UEnum_EDataflowSelectionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDataflowSelectionType.InnerSingleton,
               &Z_Construct_UEnum_DataflowCore_EDataflowSelectionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDataflowSelectionType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FConvertBoolArrayTypesDataflowNode @ 14446a970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertBoolArrayTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertBoolArrayTypesDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertBoolArrayTypesDataflowNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertBoolArrayTypesDataflowNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertBoolArrayTypesDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertBoolArrayTypesDataflowNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConvertBoolTypesDataflowNode @ 14446a9f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertBoolTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertBoolTypesDataflowNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode @ 14446aa70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
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

// Z_Construct_UScriptStruct_FConvertIndexToSelectionTypesDataflowNode @ 14446aaf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertIndexToSelectionTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertIndexToSelectionTypesDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertIndexToSelectionTypesDataflowNode.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertIndexToSelectionTypesDataflowNode_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertIndexToSelectionTypesDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertIndexToSelectionTypesDataflowNode.
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

// Z_Construct_UScriptStruct_FConvertNumericArrayTypesDataflowNode @ 14446ab70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertNumericArrayTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertNumericArrayTypesDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertNumericArrayTypesDataflowNode.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertNumericArrayTypesDataflowNode_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertNumericArrayTypesDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertNumericArrayTypesDataflowNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConvertNumericTypesDataflowNode @ 14446abf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertNumericTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertNumericTypesDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertNumericTypesDataflowNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertNumericTypesDataflowNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertNumericTypesDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertNumericTypesDataflowNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConvertRotationDataflowNode @ 14446ac70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertRotationDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertRotationDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertRotationDataflowNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertRotationDataflowNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertRotationDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertRotationDataflowNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConvertSelectionTypesDataflowNode @ 14446acf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertSelectionTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertSelectionTypesDataflowNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertSelectionTypesDataflowNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode @ 14446ad70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
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

// Z_Construct_UScriptStruct_FConvertStringArrayTypesDataflowNode @ 14446adf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertStringArrayTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertStringArrayTypesDataflowNode_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConvertStringConvertibleTypesDataflowNode @ 14446ae70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertStringConvertibleTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertStringConvertibleTypesDataflowNode_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.
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

// Z_Construct_UScriptStruct_FConvertStringTypesDataflowNode @ 14446aef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertStringTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertStringTypesDataflowNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConvertTransformArrayTypesDataflowNode @ 14446af70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertTransformArrayTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertTransformArrayTypesDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertTransformArrayTypesDataflowNode.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertTransformArrayTypesDataflowNode_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertTransformArrayTypesDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertTransformArrayTypesDataflowNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConvertTransformTypesDataflowNode @ 14446aff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertTransformTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertTransformTypesDataflowNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode @ 14446b070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.
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

// Z_Construct_UScriptStruct_FConvertVectorArrayTypesDataflowNode @ 14446b0f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertVectorArrayTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertVectorArrayTypesDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertVectorArrayTypesDataflowNode.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertVectorArrayTypesDataflowNode_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FConvertVectorArrayTypesDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertVectorArrayTypesDataflowNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConvertVectorTypesDataflowNode @ 14446b170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConvertVectorTypesDataflowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FConvertVectorTypesDataflowNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowAllTypes @ 14446b1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowAllTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowAllTypes.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowAllTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowAllTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowAllTypes.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowAllTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowArrayInput @ 14446b270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowArrayInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowArrayInput.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowArrayInput.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowArrayInput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowArrayInput.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowArrayInput.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowArrayOutput @ 14446b2f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowArrayOutput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowArrayOutput.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowArrayOutput.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowArrayOutput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowArrayOutput.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowArrayOutput.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowArrayTypes @ 14446b370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowArrayTypes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowArrayTypes.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowArrayTypes.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowArrayTypes_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowArrayTypes.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowArrayTypes.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowBaseElement @ 14446b3f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowBaseElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowBaseElement.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowBaseElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowBaseElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowBaseElement.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowBaseElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowBranchNode @ 14446b470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowBranchNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowBranchNode.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowBranchNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowBranchNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowBranchNode.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowBranchNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowCurveSelection @ 14446b4f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowCurveSelection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowCurveSelection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowCurveSelection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowFaceSelection @ 14446b570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowFaceSelection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowFaceSelection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowForceDependencyNode @ 14446b5f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowForceDependencyNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowForceDependencyNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowFreezeActions @ 14446b670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowFreezeActions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowFreezeActions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowFreezeActions.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowFreezeActions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowFreezeActions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowFreezeActions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowGeometrySelection @ 14446b6f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowGeometrySelection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowGeometrySelection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowGeometrySelection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowImageCombineChannelsNode @ 14446b770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowImageCombineChannelsNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowImageCombineChannelsNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowImageFromColorNode @ 14446b7f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowImageFromColorNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowImageFromColorNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowImageSplitChannelsNode @ 14446b870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowImageSplitChannelsNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowImageSplitChannelsNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMaterialSelection @ 14446b8f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMaterialSelection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMaterialSelection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMaterialSelection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathAbsNode @ 14446b970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathAbsNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathAbsNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathAddNode @ 14446b9f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathAddNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathAddNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathArcCosNode @ 14446ba70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathArcCosNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcCosNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathArcCosNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathArcCosNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcCosNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathArcCosNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathArcSinNode @ 14446baf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathArcSinNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcSinNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathArcSinNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathArcSinNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcSinNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathArcSinNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathArcTan2Node @ 14446bb70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathArcTan2Node(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathArcTan2Node_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathArcTanNode @ 14446bbf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathArcTanNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcTanNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathArcTanNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathArcTanNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcTanNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathArcTanNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathCeilNode @ 14446bc70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathCeilNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathCeilNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathClampNode @ 14446bcf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathClampNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathClampNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathConstantNode @ 14446bd70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathConstantNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathConstantNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathCosNode @ 14446bdf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathCosNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathCosNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathCubeNode @ 14446be70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathCubeNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathCubeNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathDegToRadNode @ 14446bef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathDegToRadNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathDegToRadNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathDegToRadNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathDegToRadNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathDegToRadNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathDegToRadNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathDivideNode @ 14446bf70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathDivideNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathDivideNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathDivideNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathDivideNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathDivideNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathDivideNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathExpNode @ 14446bff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathExpNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathExpNode.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathExpNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathExpNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathExpNode.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowMathExpNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathFloorNode @ 14446c070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathFloorNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathFloorNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathFloorNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathFloorNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathFloorNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathFloorNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathFracNode @ 14446c0f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathFracNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathFracNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode @ 14446c170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathInverseSquareRootNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathInverseSquareRootNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathInverseSquareRootNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathInverseSquareRootNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathInverseSquareRootNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathLogNode @ 14446c1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathLogNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathLogNode.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathLogNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathLogNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathLogNode.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowMathLogNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathLogXNode @ 14446c270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathLogXNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathLogXNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathMaximumNode @ 14446c2f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathMaximumNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathMaximumNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathMaximumNode_v2 @ 14446c370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathMaximumNode_v2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathMaximumNode_v2_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathMinimumNode @ 14446c3f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathMinimumNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathMinimumNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathMinimumNode_v2 @ 14446c470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathMinimumNode_v2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode_v2.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode_v2.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathMinimumNode_v2_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode_v2.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathMinimumNode_v2.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathMultiplyNode @ 14446c4f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathMultiplyNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMultiplyNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathMultiplyNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathMultiplyNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMultiplyNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathMultiplyNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathNegateNode @ 14446c570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathNegateNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathNegateNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathNegateNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathNegateNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathNegateNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathNegateNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathOneMinusNode @ 14446c5f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathOneMinusNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathOneMinusNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathOneMinusNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathOneMinusNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathOneMinusNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathOneMinusNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathPowNode @ 14446c670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathPowNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathPowNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathRadToDegNode @ 14446c6f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathRadToDegNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathRadToDegNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathReciprocalNode @ 14446c770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathReciprocalNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathReciprocalNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathReciprocalNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathReciprocalNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathReciprocalNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathReciprocalNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathRoundNode @ 14446c7f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathRoundNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathRoundNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathSignNode @ 14446c870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathSignNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSignNode.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathSignNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathSignNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSignNode.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathSignNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathSinNode @ 14446c8f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathSinNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSinNode.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathSinNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathSinNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSinNode.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowMathSinNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathSquareNode @ 14446c970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathSquareNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSquareNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathSquareNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathSquareNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSquareNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathSquareNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathSquareRootNode @ 14446c9f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathSquareRootNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathSquareRootNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathSubtractNode @ 14446ca70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathSubtractNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathSubtractNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathTanNode @ 14446caf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathTanNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathTanNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowMathTruncNode @ 14446cb70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowMathTruncNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathTruncNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowMathTruncNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowMathTruncNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowMathTruncNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowMathTruncNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowOverrideNode @ 14446cbf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowOverrideNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowPath @ 14446cc70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowPath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowPath.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowPath.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowPath_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowPath.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowPath.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowPrintNode @ 14446ccf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowPrintNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowPrintNode.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowPrintNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowPrintNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowPrintNode.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowPrintNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowReRouteNode @ 14446cd70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowReRouteNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowReRouteNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowSelectNode @ 14446cdf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowSelectNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSelectNode.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowSelectNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowSelectNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowSelectNode.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDataflowSelectNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowTerminalNode @ 14446ce70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowTerminalNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowTerminalNode.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowTerminalNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowTerminalNode.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FDataflowTerminalNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowTransformSelection @ 14446cef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowTransformSelection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowTransformSelection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorAddNode @ 14446cf70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorAddNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorAddNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorAddNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorAddNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorAddNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorAddNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorBreakNode @ 14446cff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorBreakNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorBreakNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode @ 14446d070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorCrossProductNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorCrossProductNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorCrossProductNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorCrossProductNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorCrossProductNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorDistanceNode @ 14446d0f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorDistanceNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorDistanceNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorDivideNode @ 14446d170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorDivideNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorDivideNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorDivideNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorDivideNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorDivideNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorDivideNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorDotProductNode @ 14446d1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorDotProductNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorDotProductNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorDotProductNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorDotProductNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorDotProductNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorDotProductNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorLengthNode @ 14446d270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorLengthNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorLengthNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node @ 14446d2f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec2Node.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec2Node.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorMakeVec2Node_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec2Node.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec2Node.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node @ 14446d370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node @ 14446d3f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec4Node.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec4Node.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorMakeVec4Node_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec4Node.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec4Node.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorMultiplyNode @ 14446d470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorMultiplyNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMultiplyNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorMultiplyNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorMultiplyNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMultiplyNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorMultiplyNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorNormalize @ 14446d4f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorNormalize(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorNormalize_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorScaleNode @ 14446d570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorScaleNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorScaleNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorScaleNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorScaleNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorScaleNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorScaleNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode @ 14446d5f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorSquaredLengthNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorSquaredLengthNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorSquaredLengthNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorSquaredLengthNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorSquaredLengthNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVectorSubtractNode @ 14446d670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVectorSubtractNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorSubtractNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVectorSubtractNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVectorSubtractNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorSubtractNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVectorSubtractNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDataflowVertexSelection @ 14446d6f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDataflowVertexSelection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.InnerSingleton,
               &Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDataflowVertexSelection.InnerSingleton;
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

// IMPLEMENT_MODULE_DataflowCore @ 14446d770

void __cdecl IMPLEMENT_MODULE_DataflowCore(void)

{
  return;
}

// NoOpInput'' @ 15036b830

void __cdecl `dynamic_atexit_destructor_for_'FDataflowInput::NoOpInput__(void)

{
  FDataflowInput::NoOpInput._padding_ = (longlong)&___7FDataflowConnection__6B_;
  return;
}

// NoOpOutput'' @ 15036b850

void __cdecl `dynamic_atexit_destructor_for_'FDataflowOutput::NoOpOutput__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FDataflowOutput::NoOpOutput.OutputLock.SharedReferenceCount.ReferenceController);
  if (FDataflowOutput::NoOpOutput.Connections.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FDataflowOutput::NoOpOutput.Connections.AllocatorInstance.Data);
  }
  FDataflowOutput::NoOpOutput._padding_ = (longlong)&___7FDataflowConnection__6B_;
  return;
}

// RegisteredFilters'' @ 15036b890

void __cdecl `dynamic_atexit_destructor_for_'UE::Dataflow::FGraph::RegisteredFilters__(void)

{
  UE::Dataflow::FGraph::RegisteredFilters.HashSize = 0;
  if (UE::Dataflow::FGraph::RegisteredFilters.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)UE::Dataflow::FGraph::RegisteredFilters.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&UE::Dataflow::FGraph::RegisteredFilters.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'CVARDataflowEnableGraphEval'' @ 15036b8d0

void __cdecl _dynamic_atexit_destructor_for__CVARDataflowEnableGraphEval__(void)

{
  CVARDataflowEnableGraphEval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVARDataflowEnableGraphEval);
  return;
}

// `dynamic_atexit_destructor_for_'CVar'' @ 15036b8f0

void __cdecl UE::Dataflow::Private::_dynamic_atexit_destructor_for__CVar__(void)

{
  CVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar);
  return;
}

// `dynamic_atexit_destructor_for_'DATAFLOW_LOG'' @ 15036b910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__DATAFLOW_LOG__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&DATAFLOW_LOG);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15036b930

void __cdecl
`UE::Dataflow::FContext::GetPerfData'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  ::Default.DataPerOutput._72_4_ = 0;
  if (::Default.DataPerOutput._64_8_ != 0) {
    FMemory::Free((void *)::Default.DataPerOutput._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyFactoryParameters'' @ 15036b970

void __cdecl
`UE::Dataflow::FNodeFactory::GetParameters'::__l2::
_dynamic_atexit_destructor_for__EmptyFactoryParameters__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (EmptyFactoryParameters.DefaultNodeObject.SharedReferenceCount.ReferenceController);
  if (EmptyFactoryParameters.ToolTip.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(EmptyFactoryParameters.ToolTip.Data.AllocatorInstance.Data);
  }
  if (EmptyFactoryParameters.Tags.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyFactoryParameters.Tags.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 15036b9c0

void __cdecl
`UE::Dataflow::FAnyTypesRegistry::GetInstance'::__l2::_dynamic_atexit_destructor_for__Instance__
          (void)

{
  DestructItems<UE::Dataflow::FAnyTypesRegistry::FAutoConvertNodeInfo,int>
            ((FAutoConvertNodeInfo *)::Instance.AutoConvertNodes.AllocatorInstance.Data,
             ::Instance.AutoConvertNodes.ArrayNum);
  if (::Instance.AutoConvertNodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Instance.AutoConvertNodes.AllocatorInstance.Data);
  }
  ::Instance.TypeInfosByName._72_4_ = 0;
  if (::Instance.TypeInfosByName._64_8_ != 0) {
    FMemory::Free((void *)::Instance.TypeInfosByName._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'LogDataflowContextCachingFactory'' @ 15036ba20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDataflowContextCachingFactory__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDataflowContextCachingFactory);
  return;
}

// `dynamic_atexit_destructor_for_'LogDataflowFactory'' @ 15036ba40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDataflowFactory__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDataflowFactory);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15036ba60

void __cdecl
`TLazySingleton<UE::Dataflow::FCategoryRegistry>::GetLazy'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  void *pvVar1;
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  this = DAT_15507c280;
  if (DAT_15507c280 !=
      (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&DAT_15507c280[1].field_0x10 = 0;
    pvVar1 = *(void **)&this[1].field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this);
    DAT_15507c280 =
         (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15036bab0

void __cdecl
`TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::Reset
            ((TLazySingleton<UE::Dataflow::FNodeColorsRegistry> *)
             &`private:_static_class_TLazySingleton<class_UE::Dataflow::FNodeColorsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15036bad0

void __cdecl
`TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::Reset
            ((TLazySingleton<UE::Dataflow::FPinSettingsRegistry> *)
             &`private:_static_class_TLazySingleton<class_UE::Dataflow::FPinSettingsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

