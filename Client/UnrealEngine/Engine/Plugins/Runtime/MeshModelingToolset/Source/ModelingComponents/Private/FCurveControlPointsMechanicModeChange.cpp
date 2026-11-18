// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 5

// FCurveControlPointsMechanicModeChange @ 14cac9520

FCurveControlPointsMechanicModeChange * __thiscall
FCurveControlPointsMechanicModeChange::FCurveControlPointsMechanicModeChange
          (FCurveControlPointsMechanicModeChange *this,bool param_1,bool param_2,int param_3)

{
  this->bDoneWithInitialization = param_1;
  this->_padding_ = (longlong)&___7FCurveControlPointsMechanicModeChange__6B_;
  this->bIsLoop = param_2;
  this->ChangeStamp = param_3;
  return this;
}

// Apply @ 14caeaae0

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
FCurveControlPointsMechanicModeChange::Apply
          (FCurveControlPointsMechanicModeChange *this,UObject *param_1)

{
  FColor_u_0 FVar1;
  UPointSetComponent *this_00;
  ULineSetComponent *this_01;
  int iVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = UCurveControlPointsMechanic::StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar3->_padding_)) goto LAB_14caeab1a;
  }
  param_1 = (UObject *)0x0;
LAB_14caeab1a:
  if (this->bDoneWithInitialization == false) {
    UCurveControlPointsMechanic::SetInteractiveInitialization
              ((UCurveControlPointsMechanic *)param_1,true);
    if (((UCurveControlPointsMechanic *)param_1)->bIsLoop != false) {
      if (1 < (((UCurveControlPointsMechanic *)param_1)->ControlPoints).Sequence.ArrayNum) {
        iVar2 = UCurveControlPointsMechanic::FOrderedPoints::Last
                          (&((UCurveControlPointsMechanic *)param_1)->ControlPoints);
        UE::Geometry::FGeometrySet3::RemoveCurve
                  (&((UCurveControlPointsMechanic *)param_1)->GeometrySet,iVar2);
        this_01 = (((UCurveControlPointsMechanic *)param_1)->DrawnControlSegments).field0_0x0.
                  DebugPtr;
        iVar2 = UCurveControlPointsMechanic::FOrderedPoints::Last
                          (&((UCurveControlPointsMechanic *)param_1)->ControlPoints);
        ULineSetComponent::RemoveLine(this_01,iVar2);
      }
      ((UCurveControlPointsMechanic *)param_1)->bIsLoop = false;
    }
  }
  else {
    if (((UCurveControlPointsMechanic *)param_1)->bInteractiveInitializationMode != false) {
      this_00 = (((UCurveControlPointsMechanic *)param_1)->DrawnControlPoints).field0_0x0.DebugPtr;
      ((UCurveControlPointsMechanic *)param_1)->bInteractiveInitializationMode = false;
      FVar1 = (((UCurveControlPointsMechanic *)param_1)->NormalCurveColor).field0_0x0;
      (((UCurveControlPointsMechanic *)param_1)->CurrentSegmentsColor).field0_0x0 = FVar1;
      (((UCurveControlPointsMechanic *)param_1)->CurrentPointsColor).field0_0x0 = FVar1;
      UPointSetComponent::SetAllPointsColor
                (this_00,&((UCurveControlPointsMechanic *)param_1)->CurrentPointsColor);
      ULineSetComponent::SetAllLinesColor
                ((((UCurveControlPointsMechanic *)param_1)->DrawnControlSegments).field0_0x0.
                 DebugPtr,&((UCurveControlPointsMechanic *)param_1)->CurrentSegmentsColor);
      (**(code **)((((UCurveControlPointsMechanic *)param_1)->SnapEngine)._padding_ + 0x18))
                (&((UCurveControlPointsMechanic *)param_1)->SnapEngine,
                 ((UCurveControlPointsMechanic *)param_1)->FirstPointSnapID);
      (**(code **)((((UCurveControlPointsMechanic *)param_1)->SnapEngine)._padding_ + 0x18))
                (&((UCurveControlPointsMechanic *)param_1)->SnapEngine,
                 ((UCurveControlPointsMechanic *)param_1)->LastPointSnapID);
    }
    UCurveControlPointsMechanic::SetIsLoop((UCurveControlPointsMechanic *)param_1,this->bIsLoop);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((UCurveControlPointsMechanic *)param_1)->OnModeChanged);
  return;
}

// HasExpired @ 14cb1a6c0

bool __thiscall
FCurveControlPointsMechanicModeChange::HasExpired
          (FCurveControlPointsMechanicModeChange *this,UObject *param_1)

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
        &pUVar2->_padding_)) goto LAB_14cb1a6fa;
  }
  param_1 = (UObject *)0x0;
LAB_14cb1a6fa:
  return *(int *)&param_1[0x29].field_0x8 != this->ChangeStamp;
}

// Revert @ 14cb32840

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
FCurveControlPointsMechanicModeChange::Revert
          (FCurveControlPointsMechanicModeChange *this,UObject *param_1)

{
  FColor_u_0 FVar1;
  ULineSetComponent *this_00;
  UPointSetComponent *this_01;
  int iVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = UCurveControlPointsMechanic::StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar3->_padding_)) goto LAB_14cb3287a;
  }
  param_1 = (UObject *)0x0;
LAB_14cb3287a:
  if (this->bDoneWithInitialization == false) {
    if (((UCurveControlPointsMechanic *)param_1)->bInteractiveInitializationMode != false) {
      this_01 = (((UCurveControlPointsMechanic *)param_1)->DrawnControlPoints).field0_0x0.DebugPtr;
      ((UCurveControlPointsMechanic *)param_1)->bInteractiveInitializationMode = false;
      FVar1 = (((UCurveControlPointsMechanic *)param_1)->NormalCurveColor).field0_0x0;
      (((UCurveControlPointsMechanic *)param_1)->CurrentSegmentsColor).field0_0x0 = FVar1;
      (((UCurveControlPointsMechanic *)param_1)->CurrentPointsColor).field0_0x0 = FVar1;
      UPointSetComponent::SetAllPointsColor
                (this_01,&((UCurveControlPointsMechanic *)param_1)->CurrentPointsColor);
      ULineSetComponent::SetAllLinesColor
                ((((UCurveControlPointsMechanic *)param_1)->DrawnControlSegments).field0_0x0.
                 DebugPtr,&((UCurveControlPointsMechanic *)param_1)->CurrentSegmentsColor);
      (**(code **)((((UCurveControlPointsMechanic *)param_1)->SnapEngine)._padding_ + 0x18))
                (&((UCurveControlPointsMechanic *)param_1)->SnapEngine,
                 ((UCurveControlPointsMechanic *)param_1)->FirstPointSnapID);
      (**(code **)((((UCurveControlPointsMechanic *)param_1)->SnapEngine)._padding_ + 0x18))
                (&((UCurveControlPointsMechanic *)param_1)->SnapEngine,
                 ((UCurveControlPointsMechanic *)param_1)->LastPointSnapID);
    }
    UCurveControlPointsMechanic::SetIsLoop((UCurveControlPointsMechanic *)param_1,this->bIsLoop);
  }
  else {
    UCurveControlPointsMechanic::SetInteractiveInitialization
              ((UCurveControlPointsMechanic *)param_1,true);
    if (((UCurveControlPointsMechanic *)param_1)->bIsLoop != false) {
      if (1 < (((UCurveControlPointsMechanic *)param_1)->ControlPoints).Sequence.ArrayNum) {
        iVar2 = UCurveControlPointsMechanic::FOrderedPoints::Last
                          (&((UCurveControlPointsMechanic *)param_1)->ControlPoints);
        UE::Geometry::FGeometrySet3::RemoveCurve
                  (&((UCurveControlPointsMechanic *)param_1)->GeometrySet,iVar2);
        this_00 = (((UCurveControlPointsMechanic *)param_1)->DrawnControlSegments).field0_0x0.
                  DebugPtr;
        iVar2 = UCurveControlPointsMechanic::FOrderedPoints::Last
                          (&((UCurveControlPointsMechanic *)param_1)->ControlPoints);
        ULineSetComponent::RemoveLine(this_00,iVar2);
      }
      ((UCurveControlPointsMechanic *)param_1)->bIsLoop = false;
    }
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((UCurveControlPointsMechanic *)param_1)->OnModeChanged);
  return;
}

// ToString @ 14cb410c0

FString * __thiscall
FCurveControlPointsMechanicModeChange::ToString
          (FCurveControlPointsMechanicModeChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FCurveControlPointsMechanicModeChange");
  return __return_storage_ptr__;
}

