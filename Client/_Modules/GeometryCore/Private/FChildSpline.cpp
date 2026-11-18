// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// Serialize @ 1435c1510

bool __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline
::Serialize(FChildSpline *this,FArchive *param_1)

{
  TInterval1<float> *pTVar1;
  TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
  *pTVar2;
  undefined1 *puVar3;
  EMappingRangeSpace *pEVar4;
  float *pfVar5;
  float *pfVar6;
  longlong *plVar7;
  ISplineInterface *pIVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
  TVar13;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined8 *local_res18;
  
  pEVar4 = (EMappingRangeSpace *)**(undefined8 **)&param_1->field_0x8;
  if ((EMappingRangeSpace *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    this->MappingRangeSpace = *pEVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pTVar1 = &this->MappingRange;
  pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pTVar1);
    }
  }
  else {
    pTVar1->Min = *pfVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar5 = &(this->MappingRange).Max;
  puVar3 = &param_1->field_0x2a;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar5);
    }
  }
  else {
    *pfVar5 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    uVar12 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    plVar7 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar7[1] < (uint *)*plVar7 + 1) {
      if ((*puVar3 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar7;
      *plVar7 = *plVar7 + 4;
    }
    plVar7 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar7[1] < (uint *)*plVar7 + 1) {
      if ((*puVar3 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar7;
      *plVar7 = *plVar7 + 4;
    }
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar12);
    TVar13 = FSplineTypeRegistry::CreateSpline((uint)&local_res18);
    pTVar2 = &this->Spline;
    if ((ISplineInterface *)pTVar2 != TVar13.Ptr) {
      pIVar8 = pTVar2->Ptr;
      pTVar2->Ptr = (ISplineInterface *)*TVar13.Ptr;
      *TVar13.Ptr = (ISplineInterface)0x0;
      if (pIVar8 != (ISplineInterface *)0x0) {
        (**(code **)*pIVar8)(pIVar8,1);
      }
    }
    if (local_res18 != (undefined8 *)0x0) {
      (**(code **)*local_res18)(local_res18,1);
    }
    if (pTVar2->Ptr == (ISplineInterface *)0x0) {
      bVar10 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3439113273209782161>,true,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Splines\\MultiSpline.h"
                          ,0x6f,"Spline");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
    }
  }
  pIVar8 = (this->Spline).Ptr;
  (**(code **)((longlong)*pIVar8 + 0x60))(pIVar8,param_1);
  return true;
}

