// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 5

// FCurveControlPointsMechanicMovementChange @ 14cac9540

FCurveControlPointsMechanicMovementChange * __thiscall
FCurveControlPointsMechanicMovementChange::FCurveControlPointsMechanicMovementChange
          (FCurveControlPointsMechanicMovementChange *this,int param_1,TVector<double> *param_2,
          TVector<double> *param_3,int param_4)

{
  double dVar1;
  
  this->PointID = param_1;
  this->_padding_ = (longlong)&___7FCurveControlPointsMechanicMovementChange__6B_;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->OriginalPosition).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->OriginalPosition).field0_0x0._s_0.Y = dVar1;
  (this->OriginalPosition).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->NewPosition).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->NewPosition).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  this->ChangeStamp = param_4;
  (this->NewPosition).field0_0x0._s_0.Z = dVar1;
  return this;
}

// Apply @ 14caeac30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FCurveControlPointsMechanicMovementChange::Apply
          (FCurveControlPointsMechanicMovementChange *this,UObject *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  UClass *pUVar5;
  int *piVar6;
  TVector<double>_u_0 local_28;
  
  if (param_1 != (UObject *)0x0) {
    pUVar5 = UCurveControlPointsMechanic::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14caeac6f;
  }
  param_1 = (UObject *)0x0;
LAB_14caeac6f:
  UCurveControlPointsMechanic::UpdatePointLocation
            ((UCurveControlPointsMechanic *)param_1,this->PointID,&this->NewPosition);
  UCurveControlPointsMechanic::UpdateGizmoLocation((UCurveControlPointsMechanic *)param_1);
  dVar3 = (this->NewPosition).field0_0x0._s_0.X;
  dVar4 = (this->NewPosition).field0_0x0._s_0.Y;
  dVar1 = (this->NewPosition).field0_0x0._s_0.Z;
  piVar6 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)&(((UCurveControlPointsMechanic *)param_1)->ControlPoints).
                           PointIDToSequencePosition,this->PointID);
  iVar2 = *piVar6;
  local_28._s_0.X = dVar3;
  local_28._s_0.Y = dVar4;
  local_28._s_0.Z = dVar1;
  UE::Geometry::FPointPlanarSnapSolver::RemoveHistoryPoint
            (&((UCurveControlPointsMechanic *)param_1)->SnapEngine,iVar2);
  UE::Geometry::FPointPlanarSnapSolver::InsertHistoryPoint
            (&((UCurveControlPointsMechanic *)param_1)->SnapEngine,(TVector<double> *)&local_28._s_0
             ,iVar2);
  UCurveControlPointsMechanic::UpdateSnapTargetsForHover((UCurveControlPointsMechanic *)param_1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((UCurveControlPointsMechanic *)param_1)->OnPointsChanged);
  return;
}

// HasExpired @ 14cb1a720

bool __thiscall
FCurveControlPointsMechanicMovementChange::HasExpired
          (FCurveControlPointsMechanicMovementChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UCurveControlPointsMechanic::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cb1a75a;
  }
  param_1 = (UObject *)0x0;
LAB_14cb1a75a:
  return *(int *)&param_1[0x29].field_0x8 != this->ChangeStamp;
}

// Revert @ 14cb32990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FCurveControlPointsMechanicMovementChange::Revert
          (FCurveControlPointsMechanicMovementChange *this,UObject *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  UClass *pUVar5;
  int *piVar6;
  TVector<double>_u_0 local_28;
  
  if (param_1 != (UObject *)0x0) {
    pUVar5 = UCurveControlPointsMechanic::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14cb329cf;
  }
  param_1 = (UObject *)0x0;
LAB_14cb329cf:
  UCurveControlPointsMechanic::UpdatePointLocation
            ((UCurveControlPointsMechanic *)param_1,this->PointID,&this->OriginalPosition);
  UCurveControlPointsMechanic::UpdateGizmoLocation((UCurveControlPointsMechanic *)param_1);
  dVar3 = (this->OriginalPosition).field0_0x0._s_0.X;
  dVar4 = (this->OriginalPosition).field0_0x0._s_0.Y;
  dVar1 = (this->OriginalPosition).field0_0x0._s_0.Z;
  piVar6 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)&(((UCurveControlPointsMechanic *)param_1)->ControlPoints).
                           PointIDToSequencePosition,this->PointID);
  iVar2 = *piVar6;
  local_28._s_0.X = dVar3;
  local_28._s_0.Y = dVar4;
  local_28._s_0.Z = dVar1;
  UE::Geometry::FPointPlanarSnapSolver::RemoveHistoryPoint
            (&((UCurveControlPointsMechanic *)param_1)->SnapEngine,iVar2);
  UE::Geometry::FPointPlanarSnapSolver::InsertHistoryPoint
            (&((UCurveControlPointsMechanic *)param_1)->SnapEngine,(TVector<double> *)&local_28._s_0
             ,iVar2);
  UCurveControlPointsMechanic::UpdateSnapTargetsForHover((UCurveControlPointsMechanic *)param_1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((UCurveControlPointsMechanic *)param_1)->OnPointsChanged);
  return;
}

// ToString @ 14cb410f0

FString * __thiscall
FCurveControlPointsMechanicMovementChange::ToString
          (FCurveControlPointsMechanicMovementChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FCurveControlPointsMechanicMovementChange");
  return __return_storage_ptr__;
}

