// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436ce680

UScriptStruct * __cdecl FChaosVDContactPoint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDContactPoint.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDContactPoint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDContactPoint,(UObject *)pUVar1,
                         L"ChaosVDContactPoint");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDContactPoint.OuterSingleton;
}

// Serialize @ 1436dc7a0

bool __thiscall FChaosVDContactPoint::Serialize(FChaosVDContactPoint *this,FArchive *param_1)

{
  float *pfVar1;
  int *piVar2;
  longlong *plVar3;
  float *pfVar4;
  int *piVar5;
  EChaosVDContactPointType *pEVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [4];
  
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if ((param_1->field_0x28 & 1) == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x4e8,L"float -> double conversion applied outside of load!");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res18);
      }
    }
    else {
      local_res18[0] = *(float *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
      }
    }
    else {
      local_res8[0] = *(float *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res10);
      }
    }
    else {
      local_res10[0] = *(float *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    this->ShapeContactPoints[0].field0_0x0._s_0.X = (double)local_res18[0];
    this->ShapeContactPoints[0].field0_0x0._s_0.Y = (double)local_res8[0];
    this->ShapeContactPoints[0].field0_0x0._s_0.Z = (double)local_res10[0];
  }
  else {
    ::operator<<(param_1,(double *)this);
    ::operator<<(param_1,&this->ShapeContactPoints[0].field0_0x0._s_0.Y);
    ::operator<<(param_1,&this->ShapeContactPoints[0].field0_0x0._s_0.Z);
  }
  puVar10 = &param_1->field_0x2a;
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if ((param_1->field_0x28 & 1) == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x4e8,L"float -> double conversion applied outside of load!");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
      if ((*puVar10 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res18);
      }
    }
    else {
      local_res18[0] = *(float *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
      if ((*puVar10 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
      }
    }
    else {
      local_res8[0] = *(float *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
      if ((*puVar10 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res10);
      }
    }
    else {
      local_res10[0] = *(float *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    this->ShapeContactPoints[1].field0_0x0._s_0.X = (double)local_res18[0];
    this->ShapeContactPoints[1].field0_0x0._s_0.Y = (double)local_res8[0];
    this->ShapeContactPoints[1].field0_0x0._s_0.Z = (double)local_res10[0];
  }
  else {
    ::operator<<(param_1,(double *)(this->ShapeContactPoints + 1));
    ::operator<<(param_1,&this->ShapeContactPoints[1].field0_0x0._s_0.Y);
    ::operator<<(param_1,&this->ShapeContactPoints[1].field0_0x0._s_0.Z);
  }
  UE::Math::operator<<(param_1,&this->ShapeContactNormal);
  pfVar1 = &this->Phi;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar10 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &this->FaceIndex;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((*puVar10 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar6 = (EChaosVDContactPointType *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar6 + 1 <= (EChaosVDContactPointType *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    this->ContactType = *pEVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ContactType,1);
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

