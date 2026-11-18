// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// StaticStruct @ 1436ce890

UScriptStruct * __cdecl FChaosVDManifoldPoint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDManifoldPoint.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDManifoldPoint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDManifoldPoint,(UObject *)pUVar1,
                         L"ChaosVDManifoldPoint");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDManifoldPoint.OuterSingleton;
}

// FChaosVDManifoldPoint @ 1436d4c70

FChaosVDManifoldPoint * __thiscall
FChaosVDManifoldPoint::FChaosVDManifoldPoint(FChaosVDManifoldPoint *this)

{
  this->bDisabled = '\0';
  this->bInsideStaticFrictionCone = '\0';
  this->bIsValid = '\0';
  this->bHasStaticFrictionAnchor = '\0';
  this->bWasReplaced = '\0';
  this->bWasRestored = '\0';
  (this->NetPushOut).field0_0x0._s_0.X = 0.0;
  (this->NetPushOut).field0_0x0._s_0.Y = 0.0;
  (this->NetPushOut).field0_0x0._s_0.Z = 0.0;
  (this->NetImpulse).field0_0x0._s_0.X = 0.0;
  (this->NetImpulse).field0_0x0._s_0.Y = 0.0;
  (this->NetImpulse).field0_0x0._s_0.Z = 0.0;
  this->TargetPhi = 0.0;
  this->InitialPhi = 0.0;
  this->ShapeAnchorPoints[0].field0_0x0._s_0.X = 0.0;
  this->ShapeAnchorPoints[0].field0_0x0._s_0.Y = 0.0;
  this->ShapeAnchorPoints[0].field0_0x0._s_0.Z = 0.0;
  this->ShapeAnchorPoints[1].field0_0x0._s_0.X = 0.0;
  this->ShapeAnchorPoints[1].field0_0x0._s_0.Y = 0.0;
  this->ShapeAnchorPoints[1].field0_0x0._s_0.Z = 0.0;
  this->InitialShapeContactPoints[0].field0_0x0._s_0.X = 0.0;
  this->InitialShapeContactPoints[0].field0_0x0._s_0.Y = 0.0;
  this->InitialShapeContactPoints[0].field0_0x0._s_0.Z = 0.0;
  this->InitialShapeContactPoints[1].field0_0x0._s_0.X = 0.0;
  this->InitialShapeContactPoints[1].field0_0x0._s_0.Y = 0.0;
  this->InitialShapeContactPoints[1].field0_0x0._s_0.Z = 0.0;
  (this->ContactPoint).ShapeContactPoints[0].field0_0x0._s_0.X = 0.0;
  (this->ContactPoint).ShapeContactPoints[0].field0_0x0._s_0.Y = 0.0;
  (this->ContactPoint).ShapeContactPoints[0].field0_0x0._s_0.Z = 0.0;
  (this->ContactPoint).ShapeContactPoints[1].field0_0x0._s_0.X = 0.0;
  (this->ContactPoint).ShapeContactPoints[1].field0_0x0._s_0.Y = 0.0;
  (this->ContactPoint).ShapeContactPoints[1].field0_0x0._s_0.Z = 0.0;
  (this->ContactPoint).ShapeContactNormal.field0_0x0._s_0.X = 0.0;
  (this->ContactPoint).ShapeContactNormal.field0_0x0._s_0.Y = 0.0;
  (this->ContactPoint).ShapeContactNormal.field0_0x0._s_0.Z = 0.0;
  (this->ContactPoint).Phi = 0.0;
  (this->ContactPoint).FaceIndex = 0;
  (this->ContactPoint).ContactType = Unknown;
  this->ShapeContactPoints[0].field0_0x0._s_0.X = 0.0;
  this->ShapeContactPoints[0].field0_0x0._s_0.Y = 0.0;
  this->ShapeContactPoints[0].field0_0x0._s_0.Z = 0.0;
  this->ShapeContactPoints[1].field0_0x0._s_0.X = 0.0;
  this->ShapeContactPoints[1].field0_0x0._s_0.Y = 0.0;
  this->ShapeContactPoints[1].field0_0x0._s_0.Z = 0.0;
  this->bIsSelectedInEditor = false;
  return this;
}

// Serialize @ 1436de5a0

bool __thiscall FChaosVDManifoldPoint::Serialize(FChaosVDManifoldPoint *this,FArchive *param_1)

{
  float *pfVar1;
  longlong *plVar2;
  float *pfVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined1 *puVar9;
  byte local_res8 [8];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44 [3];
  
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    bVar8 = this->bDisabled;
    local_res8[0] = bVar8 != 0;
    if (this->bWasRestored != '\0') {
      local_res8[0] = bVar8 | 2;
      bVar8 = local_res8[0];
    }
    if (this->bWasReplaced != '\0') {
      local_res8[0] = bVar8 | 4;
    }
    bVar5 = bVar8 | 4;
    if (this->bWasReplaced == '\0') {
      bVar5 = bVar8;
    }
    if (this->bHasStaticFrictionAnchor != '\0') {
      local_res8[0] = bVar5 | 8;
    }
    if (this->bIsValid != '\0') {
      local_res8[0] = local_res8[0] | 0x10;
    }
    if (this->bInsideStaticFrictionCone != '\0') {
      local_res8[0] = local_res8[0] | 0x20;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    }
    else {
      local_res8[0] = *(byte *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
  }
  else {
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
      this->bDisabled = '\0';
      this->bInsideStaticFrictionCone = '\0';
      this->bIsValid = '\0';
      this->bHasStaticFrictionAnchor = '\0';
      this->bWasReplaced = '\0';
      this->bWasRestored = '\0';
      *(byte *)this = *(byte *)this | local_res8[0] & 0x3f;
    }
    else {
      local_res8[0] = *(byte *)*plVar2;
      *plVar2 = *plVar2 + 1;
      this->bDisabled = '\0';
      this->bInsideStaticFrictionCone = '\0';
      this->bIsValid = '\0';
      this->bHasStaticFrictionAnchor = '\0';
      this->bWasReplaced = '\0';
      this->bWasRestored = '\0';
      *(byte *)this = *(byte *)this | local_res8[0] & 0x3f;
    }
  }
  puVar9 = &param_1->field_0x8;
  UE::Math::operator<<(param_1,&this->NetPushOut);
  UE::Math::operator<<(param_1,&this->NetImpulse);
  pfVar1 = &this->TargetPhi;
  pfVar3 = (float *)**(undefined8 **)puVar9;
  if ((float *)(*(undefined8 **)puVar9)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)puVar9 = **(longlong **)puVar9 + 4;
  }
  pfVar1 = &this->InitialPhi;
  pfVar3 = (float *)**(undefined8 **)puVar9;
  if ((float *)(*(undefined8 **)puVar9)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)puVar9 = **(longlong **)puVar9 + 4;
  }
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if (((param_1->field_0x28 & 1) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!"), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res20);
      }
    }
    else {
      local_res20[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res10);
      }
    }
    else {
      local_res10[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res18);
      }
    }
    else {
      local_res18[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    this->ShapeAnchorPoints[0].field0_0x0._s_0.X = (double)local_res20[0];
    this->ShapeAnchorPoints[0].field0_0x0._s_0.Y = (double)local_res10[0];
    this->ShapeAnchorPoints[0].field0_0x0._s_0.Z = (double)local_res18[0];
  }
  else {
    ::operator<<(param_1,(double *)this->ShapeAnchorPoints);
    ::operator<<(param_1,&this->ShapeAnchorPoints[0].field0_0x0._s_0.Y);
    ::operator<<(param_1,&this->ShapeAnchorPoints[0].field0_0x0._s_0.Z);
  }
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if (((param_1->field_0x28 & 1) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!"), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res20);
      }
    }
    else {
      local_res20[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res10);
      }
    }
    else {
      local_res10[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res18);
      }
    }
    else {
      local_res18[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    this->ShapeAnchorPoints[1].field0_0x0._s_0.X = (double)local_res20[0];
    this->ShapeAnchorPoints[1].field0_0x0._s_0.Y = (double)local_res10[0];
    this->ShapeAnchorPoints[1].field0_0x0._s_0.Z = (double)local_res18[0];
  }
  else {
    ::operator<<(param_1,(double *)(this->ShapeAnchorPoints + 1));
    ::operator<<(param_1,&this->ShapeAnchorPoints[1].field0_0x0._s_0.Y);
    ::operator<<(param_1,&this->ShapeAnchorPoints[1].field0_0x0._s_0.Z);
  }
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if (((param_1->field_0x28 & 1) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!"), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_50,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_50);
      }
    }
    else {
      local_50 = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_58,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_58);
      }
    }
    else {
      local_58 = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_54,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_54);
      }
    }
    else {
      local_54 = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    this->InitialShapeContactPoints[0].field0_0x0._s_0.X = (double)local_50;
    this->InitialShapeContactPoints[0].field0_0x0._s_0.Y = (double)local_58;
    this->InitialShapeContactPoints[0].field0_0x0._s_0.Z = (double)local_54;
  }
  else {
    ::operator<<(param_1,(double *)this->InitialShapeContactPoints);
    ::operator<<(param_1,&this->InitialShapeContactPoints[0].field0_0x0._s_0.Y);
    ::operator<<(param_1,&this->InitialShapeContactPoints[0].field0_0x0._s_0.Z);
  }
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if (((param_1->field_0x28 & 1) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!"), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_50,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_50);
      }
    }
    else {
      local_50 = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_58,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_58);
      }
    }
    else {
      local_58 = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_54,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_54);
      }
    }
    else {
      local_54 = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    this->InitialShapeContactPoints[1].field0_0x0._s_0.X = (double)local_50;
    this->InitialShapeContactPoints[1].field0_0x0._s_0.Y = (double)local_58;
    this->InitialShapeContactPoints[1].field0_0x0._s_0.Z = (double)local_54;
  }
  else {
    ::operator<<(param_1,(double *)(this->InitialShapeContactPoints + 1));
    ::operator<<(param_1,&this->InitialShapeContactPoints[1].field0_0x0._s_0.Y);
    ::operator<<(param_1,&this->InitialShapeContactPoints[1].field0_0x0._s_0.Z);
  }
  FChaosVDContactPoint::Serialize(&this->ContactPoint,param_1);
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if (((param_1->field_0x28 & 1) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!"), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_44,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_44);
      }
    }
    else {
      local_44[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_4c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_4c);
      }
    }
    else {
      local_4c = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_48,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_48);
      }
    }
    else {
      local_48 = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    this->ShapeContactPoints[0].field0_0x0._s_0.X = (double)local_44[0];
    this->ShapeContactPoints[0].field0_0x0._s_0.Y = (double)local_4c;
    this->ShapeContactPoints[0].field0_0x0._s_0.Z = (double)local_48;
  }
  else {
    ::operator<<(param_1,(double *)this->ShapeContactPoints);
    ::operator<<(param_1,&this->ShapeContactPoints[0].field0_0x0._s_0.Y);
    ::operator<<(param_1,&this->ShapeContactPoints[0].field0_0x0._s_0.Z);
  }
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if (((param_1->field_0x28 & 1) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!"), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_44,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_44);
      }
    }
    else {
      local_44[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_4c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_4c);
      }
    }
    else {
      local_4c = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)puVar9;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_48,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_48);
      }
    }
    else {
      local_48 = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    this->ShapeContactPoints[1].field0_0x0._s_0.X = (double)local_44[0];
    this->ShapeContactPoints[1].field0_0x0._s_0.Y = (double)local_4c;
    this->ShapeContactPoints[1].field0_0x0._s_0.Z = (double)local_48;
  }
  else {
    ::operator<<(param_1,(double *)(this->ShapeContactPoints + 1));
    ::operator<<(param_1,&this->ShapeContactPoints[1].field0_0x0._s_0.Y);
    ::operator<<(param_1,&this->ShapeContactPoints[1].field0_0x0._s_0.Z);
  }
  return true;
}

