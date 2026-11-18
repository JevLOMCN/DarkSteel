// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// operator() @ 14cb68400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransformSRT3<double> * __thiscall
`FDynamicMeshComponentSelectorFactory::BuildForTarget'::__l2::<lambda_1>::operator()
          (void *this,TTransformSRT3<double> *__return_storage_ptr__)

{
  UDynamicMeshComponent *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_18;
  
  pUVar1 = FGeometryIdentifier::GetAsComponentType<UDynamicMeshComponent>(this);
  if ((pUVar1 == (UDynamicMeshComponent *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
    local_60 = 0.0;
    dStack_58 = 0.0;
    local_50 = ___xmm_3ff00000000000000000000000000000;
    dStack_48 = _UNK_15061cbc8;
    local_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dStack_18 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  }
  else {
    local_60 = (double)pUVar1->_padding_;
    dStack_58 = (double)pUVar1->_padding_;
    local_50 = (double)pUVar1->_padding_;
    dStack_48 = (double)pUVar1->_padding_;
    local_30 = (double)pUVar1->_padding_;
    dStack_18 = (double)pUVar1->_padding_;
    local_40 = (double)pUVar1->_padding_;
    dStack_38 = (double)pUVar1->_padding_;
    uVar2 = pUVar1->_padding_;
    uVar3 = pUVar1->_padding_;
  }
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = local_60;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = dStack_58;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = local_50;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = dStack_48;
  (__return_storage_ptr__->Translation).field0_0x0._s_0.X = local_40;
  (__return_storage_ptr__->Translation).field0_0x0._s_0.Y = dStack_38;
  (__return_storage_ptr__->Translation).field0_0x0._s_0.Z = local_30;
  (__return_storage_ptr__->Scale3D).field0_0x0._s_0.X = (double)uVar2;
  (__return_storage_ptr__->Scale3D).field0_0x0._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->Scale3D).field0_0x0._s_0.Z = dStack_18;
  return __return_storage_ptr__;
}

// BuildForTarget @ 14cb75510

TUniquePtr<IGeometrySelector,TDefaultDelete<IGeometrySelector>_> __thiscall
FDynamicMeshComponentSelectorFactory::BuildForTarget
          (FDynamicMeshComponentSelectorFactory *this,FGeometryIdentifier *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDynamicMeshComponent *pUVar3;
  TUniquePtr<IGeometrySelector,TDefaultDelete<IGeometrySelector>_> TVar4;
  FDynamicMeshSelector *pFVar5;
  undefined8 uVar6;
  FGeometryIdentifier *in_R8;
  ETargetType local_48;
  EObjectType EStack_44;
  int iStack_40;
  int iStack_3c;
  code *local_38 [2];
  undefined **local_28;
  ETargetType local_20;
  EObjectType EStack_1c;
  int iStack_18;
  int iStack_14;
  undefined8 local_10;
  
  pUVar3 = FGeometryIdentifier::GetAsComponentType<UDynamicMeshComponent>(in_R8);
  if (pUVar3 == (UDynamicMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\DynamicMeshSelector.cpp"
                       ,0x339,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.Ptr = (IGeometrySelector *)(*pcVar1)();
      return (TUniquePtr<IGeometrySelector,TDefaultDelete<IGeometrySelector>_>)TVar4.Ptr;
    }
  }
  pFVar5 = ::operator_new(0xd0);
  if (pFVar5 == (FDynamicMeshSelector *)0x0) {
    pFVar5 = (FDynamicMeshSelector *)0x0;
  }
  else {
    memset(pFVar5,0,0xd0);
    pFVar5 = FDynamicMeshSelector::FDynamicMeshSelector(pFVar5);
  }
  local_20 = in_R8->TargetType;
  EStack_1c = in_R8->ObjectType;
  iStack_18 = (in_R8->TargetObject).WeakPtr.ObjectIndex;
  iStack_14 = (in_R8->TargetObject).WeakPtr.ObjectSerialNumber;
  local_10 = 0;
  pcVar1 = *(code **)(pFVar5->_padding_ + 200);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDynamicMeshComponentSelectorFactory::BuildForTarget'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDynamicMeshComponentSelectorFactory::BuildForTarget'::__l2::<lambda_1>,UE::Geometry::TTransformSRT3<double>_>
                ::Call;
  uVar6 = (**(code **)(pUVar3->_padding_ + 0xb48))(pUVar3);
  local_48 = in_R8->TargetType;
  EStack_44 = in_R8->ObjectType;
  iStack_40 = (in_R8->TargetObject).WeakPtr.ObjectIndex;
  iStack_3c = (in_R8->TargetObject).WeakPtr.ObjectSerialNumber;
  (*pcVar1)(pFVar5,&local_48,uVar6,local_38);
  *(FDynamicMeshSelector **)param_1 = pFVar5;
  return (TUniquePtr<IGeometrySelector,TDefaultDelete<IGeometrySelector>_>)
         (IGeometrySelector *)param_1;
}

// CanBuildForTarget @ 14cb77790

bool __thiscall
FDynamicMeshComponentSelectorFactory::CanBuildForTarget
          (FDynamicMeshComponentSelectorFactory *this,FGeometryIdentifier *param_1)

{
  UDynamicMeshComponent *pUVar1;
  
  if (param_1->TargetType == PrimitiveComponent) {
    pUVar1 = FGeometryIdentifier::GetAsComponentType<UDynamicMeshComponent>(param_1);
    return pUVar1 != (UDynamicMeshComponent *)0x0;
  }
  return false;
}

