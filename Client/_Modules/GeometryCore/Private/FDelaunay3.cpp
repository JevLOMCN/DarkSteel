// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 6

// GetTetrahedra @ 1433b24e0

TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FDelaunay3::GetTetrahedra
          (FDelaunay3 *this,
          TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  FDelaunay3Connectivity *this_00;
  <lambda_1> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (this->Connectivity).Ptr;
  if (this_00 != (FDelaunay3Connectivity *)0x0) {
    local_18.bReverseOrientation = param_1;
    local_18.ToRet = __return_storage_ptr__;
    FDelaunay3Connectivity::
    EnumerateTrianglePerTet<_UE::Geometry::FDelaunay3::GetTetrahedra_::__l5::<lambda_1>_>
              (this_00,&local_18,true);
  }
  return __return_storage_ptr__;
}

// GetTetrahedraAsFIndex4i @ 1433b2530

TArray<UE::Geometry::FIndex4i,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FDelaunay3::GetTetrahedraAsFIndex4i
          (FDelaunay3 *this,
          TArray<UE::Geometry::FIndex4i,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  FDelaunay3Connectivity *this_00;
  <lambda_1> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (this->Connectivity).Ptr;
  if (this_00 != (FDelaunay3Connectivity *)0x0) {
    local_18.bReverseOrientation = param_1;
    local_18.ToRet = __return_storage_ptr__;
    FDelaunay3Connectivity::
    EnumerateTrianglePerTet<_UE::Geometry::FDelaunay3::GetTetrahedraAsFIndex4i_::__l5::<lambda_1>_>
              (this_00,&local_18,true);
  }
  return __return_storage_ptr__;
}

// IsDelaunay @ 1433bc120

bool __thiscall
UE::Geometry::FDelaunay3::IsDelaunay
          (FDelaunay3 *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool local_res8 [32];
  TArrayView<UE::Math::TVector<float>_const_,int> local_38;
  <lambda_1> local_28;
  
  local_28.Connectivity = (this->Connectivity).Ptr;
  if (local_28.Connectivity != (FDelaunay3Connectivity *)0x0) {
    local_38.DataPtr = param_1->DataPtr;
    local_38.ArrayNum = param_1->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_28.Vertices = &local_38;
    local_res8[0] = false;
    local_28.bFoundNonDelaunay = local_res8;
    FDelaunay3Connectivity::
    EnumerateOrientedTriangles<_UE::Geometry::Delaunay3Internal::IsDelaunay<float>_::__l2::<lambda_1>_>
              (local_28.Connectivity,&local_28);
    return local_res8[0] == false;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6295043899714962040>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\Delaunay3.cpp"
                     ,0x278,"Connectivity.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// IsDelaunay @ 1433bc1b0

bool __thiscall
UE::Geometry::FDelaunay3::IsDelaunay
          (FDelaunay3 *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool local_res8 [32];
  TArrayView<UE::Math::TVector<double>_const_,int> local_38;
  <lambda_1> local_28;
  
  local_28.Connectivity = (this->Connectivity).Ptr;
  if (local_28.Connectivity != (FDelaunay3Connectivity *)0x0) {
    local_38.DataPtr = param_1->DataPtr;
    local_38.ArrayNum = param_1->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_28.Vertices = &local_38;
    local_res8[0] = false;
    local_28.bFoundNonDelaunay = local_res8;
    FDelaunay3Connectivity::
    EnumerateOrientedTriangles<_UE::Geometry::Delaunay3Internal::IsDelaunay<double>_::__l2::<lambda_1>_>
              (local_28.Connectivity,&local_28);
    return local_res8[0] == false;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6295043899714962049>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\Delaunay3.cpp"
                     ,0x281,"Connectivity.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Triangulate @ 1433db220

bool __thiscall
UE::Geometry::FDelaunay3::Triangulate
          (FDelaunay3 *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1)

{
  TPimplPtr<UE::Geometry::FDelaunay3Connectivity,0> *pTVar1;
  FDelaunay3Connectivity *pFVar2;
  bool bVar3;
  TPimplPtr<UE::Geometry::FDelaunay3Connectivity,0> TVar4;
  longlong local_res8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_18;
  
  TVar4 = MakePimpl<UE::Geometry::FDelaunay3Connectivity,0>();
  pTVar1 = &this->Connectivity;
  if (TVar4.Ptr != (FDelaunay3Connectivity *)pTVar1) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = *(FDelaunay3Connectivity **)&(TVar4.Ptr)->TriToVert;
    *(undefined8 *)&(TVar4.Ptr)->TriToVert = 0;
    if (pFVar2 != (FDelaunay3Connectivity *)0x0) {
      (**(code **)&pFVar2[-1].DuplicateVertices.field_0x40)
                (&pFVar2[-1].DuplicateVertices.field_0x40);
    }
  }
  if (local_res8 != 0) {
    (**(code **)(local_res8 + -0x10))(local_res8 + -0x10);
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar3 = Delaunay3Internal::Triangulate<float>(&this->RandomStream,pTVar1->Ptr,&local_18);
  return bVar3;
}

// Triangulate @ 1433db2b0

bool __thiscall
UE::Geometry::FDelaunay3::Triangulate
          (FDelaunay3 *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1)

{
  TPimplPtr<UE::Geometry::FDelaunay3Connectivity,0> *pTVar1;
  FDelaunay3Connectivity *pFVar2;
  bool bVar3;
  TPimplPtr<UE::Geometry::FDelaunay3Connectivity,0> TVar4;
  longlong local_res8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_18;
  
  TVar4 = MakePimpl<UE::Geometry::FDelaunay3Connectivity,0>();
  pTVar1 = &this->Connectivity;
  if (TVar4.Ptr != (FDelaunay3Connectivity *)pTVar1) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = *(FDelaunay3Connectivity **)&(TVar4.Ptr)->TriToVert;
    *(undefined8 *)&(TVar4.Ptr)->TriToVert = 0;
    if (pFVar2 != (FDelaunay3Connectivity *)0x0) {
      (**(code **)&pFVar2[-1].DuplicateVertices.field_0x40)
                (&pFVar2[-1].DuplicateVertices.field_0x40);
    }
  }
  if (local_res8 != 0) {
    (**(code **)(local_res8 + -0x10))(local_res8 + -0x10);
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar3 = Delaunay3Internal::Triangulate<double>(&this->RandomStream,pTVar1->Ptr,&local_18);
  return bVar3;
}

