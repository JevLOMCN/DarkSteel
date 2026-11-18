// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 12

// operator*<UE::Geometry::FGeometrySelection> @ 14cd9c550

FGeometrySelection * __thiscall
TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator*<UE::Geometry::FGeometrySelection>
          (TSharedPtr<UE::Geometry::FGeometrySelection,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometrySelection *pFVar3;
  
  if (this->Object != (FGeometrySelection *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometrySelection *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14cd9c5a0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1>::
operator*<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->Object != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator*<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_> @ 14cd9c5f0

TImageBuilder<UE::Math::TVector4<float>_> * __thiscall
TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>::
operator*<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>
          (TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar3;
  
  if (this->Object != (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TImageBuilder<UE::Math::TVector4<float>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// ~TSharedPtr<UE::Geometry::FMeshMapEvaluator,1> @ 14cda6400

void __thiscall
TSharedPtr<UE::Geometry::FMeshMapEvaluator,1>::~TSharedPtr<UE::Geometry::FMeshMapEvaluator,1>
          (TSharedPtr<UE::Geometry::FMeshMapEvaluator,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// operator-> @ 14cda6ed0

FGeometrySelection * __thiscall
TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->
          (TSharedPtr<UE::Geometry::FGeometrySelection,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometrySelection *pFVar3;
  
  if (this->Object != (FGeometrySelection *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometrySelection *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14cda6f20

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1>::operator->
          (TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->Object != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator-> @ 14cda6f70

FMeshHeightMapEvaluator * __thiscall
TSharedPtr<UE::Geometry::FMeshHeightMapEvaluator,1>::operator->
          (TSharedPtr<UE::Geometry::FMeshHeightMapEvaluator,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMeshHeightMapEvaluator *pFVar3;
  
  if (this->Object != (FMeshHeightMapEvaluator *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMeshHeightMapEvaluator *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14cda6fc0

FMeshMultiResampleImageEvaluator * __thiscall
TSharedPtr<UE::Geometry::FMeshMultiResampleImageEvaluator,1>::operator->
          (TSharedPtr<UE::Geometry::FMeshMultiResampleImageEvaluator,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMeshMultiResampleImageEvaluator *pFVar3;
  
  if (this->Object != (FMeshMultiResampleImageEvaluator *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMeshMultiResampleImageEvaluator *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14cda7010

FMeshOcclusionMapEvaluator * __thiscall
TSharedPtr<UE::Geometry::FMeshOcclusionMapEvaluator,1>::operator->
          (TSharedPtr<UE::Geometry::FMeshOcclusionMapEvaluator,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMeshOcclusionMapEvaluator *pFVar3;
  
  if (this->Object != (FMeshOcclusionMapEvaluator *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMeshOcclusionMapEvaluator *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14cda7060

FMeshPropertyMapEvaluator * __thiscall
TSharedPtr<UE::Geometry::FMeshPropertyMapEvaluator,1>::operator->
          (TSharedPtr<UE::Geometry::FMeshPropertyMapEvaluator,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMeshPropertyMapEvaluator *pFVar3;
  
  if (this->Object != (FMeshPropertyMapEvaluator *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMeshPropertyMapEvaluator *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14cda70b0

FMeshUVShellMapEvaluator * __thiscall
TSharedPtr<UE::Geometry::FMeshUVShellMapEvaluator,1>::operator->
          (TSharedPtr<UE::Geometry::FMeshUVShellMapEvaluator,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMeshUVShellMapEvaluator *pFVar3;
  
  if (this->Object != (FMeshUVShellMapEvaluator *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMeshUVShellMapEvaluator *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<TArray<double,TSizedDefaultAllocator<32>_>_> @ 14cea8910

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
TSharedPtr<TArray<double,TSizedDefaultAllocator<32>_>,1>::
operator*<TArray<double,TSizedDefaultAllocator<32>_>_>
          (TSharedPtr<TArray<double,TSizedDefaultAllocator<32>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->Object != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

