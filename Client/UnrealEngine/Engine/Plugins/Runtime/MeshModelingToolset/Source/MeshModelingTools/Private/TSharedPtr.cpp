// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 11

// operator*<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 14cbd3710

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1>::
operator*<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  
  if (this->Object != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator-> @ 14cbe09d0

FDynamicSubmesh3 * __thiscall
TSharedPtr<UE::Geometry::FDynamicSubmesh3,1>::operator->
          (TSharedPtr<UE::Geometry::FDynamicSubmesh3,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicSubmesh3 *pFVar3;
  
  if (this->Object != (FDynamicSubmesh3 *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicSubmesh3 *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14cbe0a20

TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> * __thiscall
TSharedPtr<UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>,1>::operator->
          (TSharedPtr<UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *pTVar3;
  
  if (this->Object != (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator-> @ 14cbe0a70

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1>::operator->
          (TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  
  if (this->Object != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// TSharedPtr<UE::Geometry::FDynamicMesh3,1><UE::Geometry::FDynamicMesh3> @ 14cc05c10

TSharedPtr<UE::Geometry::FDynamicMesh3,1> * __thiscall
TSharedPtr<UE::Geometry::FDynamicMesh3,1>::
TSharedPtr<UE::Geometry::FDynamicMesh3,1><UE::Geometry::FDynamicMesh3>
          (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *this,
          TRawPtrProxy<UE::Geometry::FDynamicMesh3> *param_1)

{
  FDynamicMesh3 *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDynamicMesh3_Geometry_UE__U__DefaultDeleter_VFDynamicMesh3_Geometry_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 14cc23800

FGroupTopology * __thiscall
TSharedPtr<UE::Geometry::FGroupTopology,1>::operator->
          (TSharedPtr<UE::Geometry::FGroupTopology,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGroupTopology *pFVar3;
  
  if (this->Object != (FGroupTopology *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGroupTopology *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ccc5570

FMeshSculptFallofFunc * __thiscall
TSharedPtr<FMeshSculptFallofFunc,1>::operator->(TSharedPtr<FMeshSculptFallofFunc,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMeshSculptFallofFunc *pFVar3;
  
  if (this->Object != (FMeshSculptFallofFunc *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMeshSculptFallofFunc *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14cd452a0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::
operator*<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->Object != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator*<UE::Geometry::FGroupTopology> @ 14cd452f0

FGroupTopology * __thiscall
TSharedPtr<UE::Geometry::FGroupTopology,1>::operator*<UE::Geometry::FGroupTopology>
          (TSharedPtr<UE::Geometry::FGroupTopology,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGroupTopology *pFVar3;
  
  if (this->Object != (FGroupTopology *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGroupTopology *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14cd53de0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::operator->
          (TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->Object != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator-> @ 14cd53e30

TMeshAABBTree3<UE::Geometry::FDynamicMesh3> * __thiscall
TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>::operator->
          (TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar3;
  
  if (this->Object != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

