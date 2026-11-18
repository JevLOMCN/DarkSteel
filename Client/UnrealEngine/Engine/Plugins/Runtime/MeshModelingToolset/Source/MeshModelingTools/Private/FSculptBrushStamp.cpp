// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// FSculptBrushStamp @ 14ccba280

FSculptBrushStamp * __thiscall FSculptBrushStamp::FSculptBrushStamp(FSculptBrushStamp *this)

{
  undefined8 uVar1;
  FDateTime FVar2;
  
  (this->WorldFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->WorldFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->WorldFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->WorldFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->WorldFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->WorldFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->WorldFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->LocalFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LocalFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LocalFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LocalFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LocalFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LocalFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->LocalFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LocalFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LocalFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LocalFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LocalFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->PrevWorldFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->PrevWorldFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->PrevWorldFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->PrevWorldFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevWorldFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevWorldFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevWorldFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PrevWorldFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->PrevWorldFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->PrevWorldFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->PrevWorldFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->PrevLocalFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->PrevLocalFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->PrevLocalFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->PrevLocalFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevLocalFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevLocalFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevLocalFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PrevLocalFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->PrevLocalFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->PrevLocalFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->PrevLocalFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->TimeStamp).Ticks = 0;
  (this->RegionPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->RegionPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->RegionPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->RegionPlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RegionPlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RegionPlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->RegionPlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->RegionPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->RegionPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->RegionPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->RegionPlane).Rotation.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&this->StampAlphaFunc = 0;
  *(undefined8 *)&(this->StampAlphaFunc).field_0x28 = 0;
  FVar2 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
  (this->TimeStamp).Ticks = *FVar2.Ticks;
  return this;
}

// operator= @ 14ccc5350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSculptBrushStamp * __thiscall
FSculptBrushStamp::operator=(FSculptBrushStamp *this,FSculptBrushStamp *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  dVar10 = (param_1->WorldFrame).Origin.field0_0x0._s_0.Y;
  uStack_20 = (longlong *)0x0;
  (this->WorldFrame).Origin.field0_0x0._s_0.X = (param_1->WorldFrame).Origin.field0_0x0._s_0.X;
  (this->WorldFrame).Origin.field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->WorldFrame).Rotation.field0_0x0._s_0.X;
  (this->WorldFrame).Origin.field0_0x0._s_0.Z = (param_1->WorldFrame).Origin.field0_0x0._s_0.Z;
  (this->WorldFrame).Rotation.field0_0x0._s_0.X = dVar10;
  dVar10 = (param_1->WorldFrame).Rotation.field0_0x0._s_0.Z;
  (this->WorldFrame).Rotation.field0_0x0._s_0.Y = (param_1->WorldFrame).Rotation.field0_0x0._s_0.Y;
  (this->WorldFrame).Rotation.field0_0x0._s_0.Z = dVar10;
  (this->WorldFrame).Rotation.field0_0x0._s_0.W = (param_1->WorldFrame).Rotation.field0_0x0._s_0.W;
  dVar10 = (param_1->LocalFrame).Origin.field0_0x0._s_0.Y;
  (this->LocalFrame).Origin.field0_0x0._s_0.X = (param_1->LocalFrame).Origin.field0_0x0._s_0.X;
  (this->LocalFrame).Origin.field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->LocalFrame).Rotation.field0_0x0._s_0.X;
  (this->LocalFrame).Origin.field0_0x0._s_0.Z = (param_1->LocalFrame).Origin.field0_0x0._s_0.Z;
  (this->LocalFrame).Rotation.field0_0x0._s_0.X = dVar10;
  dVar10 = (param_1->LocalFrame).Rotation.field0_0x0._s_0.Z;
  (this->LocalFrame).Rotation.field0_0x0._s_0.Y = (param_1->LocalFrame).Rotation.field0_0x0._s_0.Y;
  (this->LocalFrame).Rotation.field0_0x0._s_0.Z = dVar10;
  (this->LocalFrame).Rotation.field0_0x0._s_0.W = (param_1->LocalFrame).Rotation.field0_0x0._s_0.W;
  this->Radius = param_1->Radius;
  this->Falloff = param_1->Falloff;
  this->Power = param_1->Power;
  this->Direction = param_1->Direction;
  this->Depth = param_1->Depth;
  this->DeltaTime = param_1->DeltaTime;
  dVar10 = (param_1->PrevWorldFrame).Origin.field0_0x0._s_0.Y;
  (this->PrevWorldFrame).Origin.field0_0x0._s_0.X =
       (param_1->PrevWorldFrame).Origin.field0_0x0._s_0.X;
  (this->PrevWorldFrame).Origin.field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->PrevWorldFrame).Rotation.field0_0x0._s_0.X;
  (this->PrevWorldFrame).Origin.field0_0x0._s_0.Z =
       (param_1->PrevWorldFrame).Origin.field0_0x0._s_0.Z;
  (this->PrevWorldFrame).Rotation.field0_0x0._s_0.X = dVar10;
  dVar10 = (param_1->PrevWorldFrame).Rotation.field0_0x0._s_0.Z;
  (this->PrevWorldFrame).Rotation.field0_0x0._s_0.Y =
       (param_1->PrevWorldFrame).Rotation.field0_0x0._s_0.Y;
  (this->PrevWorldFrame).Rotation.field0_0x0._s_0.Z = dVar10;
  (this->PrevWorldFrame).Rotation.field0_0x0._s_0.W =
       (param_1->PrevWorldFrame).Rotation.field0_0x0._s_0.W;
  dVar10 = (param_1->PrevLocalFrame).Origin.field0_0x0._s_0.Y;
  (this->PrevLocalFrame).Origin.field0_0x0._s_0.X =
       (param_1->PrevLocalFrame).Origin.field0_0x0._s_0.X;
  (this->PrevLocalFrame).Origin.field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->PrevLocalFrame).Rotation.field0_0x0._s_0.X;
  (this->PrevLocalFrame).Origin.field0_0x0._s_0.Z =
       (param_1->PrevLocalFrame).Origin.field0_0x0._s_0.Z;
  (this->PrevLocalFrame).Rotation.field0_0x0._s_0.X = dVar10;
  dVar10 = (param_1->PrevLocalFrame).Rotation.field0_0x0._s_0.Z;
  (this->PrevLocalFrame).Rotation.field0_0x0._s_0.Y =
       (param_1->PrevLocalFrame).Rotation.field0_0x0._s_0.Y;
  (this->PrevLocalFrame).Rotation.field0_0x0._s_0.Z = dVar10;
  (this->PrevLocalFrame).Rotation.field0_0x0._s_0.W =
       (param_1->PrevLocalFrame).Rotation.field0_0x0._s_0.W;
  (this->TimeStamp).Ticks = (param_1->TimeStamp).Ticks;
  dVar10 = (param_1->RegionPlane).Origin.field0_0x0._s_0.Y;
  (this->RegionPlane).Origin.field0_0x0._s_0.X = (param_1->RegionPlane).Origin.field0_0x0._s_0.X;
  (this->RegionPlane).Origin.field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->RegionPlane).Rotation.field0_0x0._s_0.X;
  (this->RegionPlane).Origin.field0_0x0._s_0.Z = (param_1->RegionPlane).Origin.field0_0x0._s_0.Z;
  (this->RegionPlane).Rotation.field0_0x0._s_0.X = dVar10;
  uVar2 = *(undefined4 *)((longlong)&(param_1->RegionPlane).Rotation.field0_0x0 + 8);
  uVar3 = *(undefined4 *)((longlong)&(param_1->RegionPlane).Rotation.field0_0x0 + 0xc);
  uVar4 = *(undefined4 *)((longlong)&(param_1->RegionPlane).Rotation.field0_0x0 + 0x10);
  uVar5 = *(undefined4 *)((longlong)&(param_1->RegionPlane).Rotation.field0_0x0 + 0x14);
  *(undefined4 *)((longlong)&(this->RegionPlane).Rotation.field0_0x0 + 8) = uVar2;
  *(undefined4 *)((longlong)&(this->RegionPlane).Rotation.field0_0x0 + 0xc) = uVar3;
  *(undefined4 *)((longlong)&(this->RegionPlane).Rotation.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(this->RegionPlane).Rotation.field0_0x0 + 0x14) = uVar5;
  (this->RegionPlane).Rotation.field0_0x0._s_0.W = (param_1->RegionPlane).Rotation.field0_0x0._s_0.W
  ;
  local_48 = *(longlong *)&param_1->StampAlphaFunc;
  if (local_48 != 0) {
    puVar1 = *(undefined8 **)&(param_1->StampAlphaFunc).field_0x28;
    puVar11 = (undefined8 *)&(param_1->StampAlphaFunc).field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar11 = puVar1;
    }
    (**(code **)*puVar11)(uVar2,&local_38);
  }
  lVar8 = *(longlong *)&this->StampAlphaFunc;
  uVar9 = *(undefined8 *)&(this->StampAlphaFunc).field_0x8;
  uVar2 = *(undefined4 *)&(this->StampAlphaFunc).field_0x10;
  uVar3 = *(undefined4 *)&(this->StampAlphaFunc).field_0x14;
  uVar4 = *(undefined4 *)&(this->StampAlphaFunc).field_0x18;
  uVar5 = *(undefined4 *)&(this->StampAlphaFunc).field_0x1c;
  uVar6 = *(undefined8 *)&(this->StampAlphaFunc).field_0x20;
  plVar7 = *(longlong **)&(this->StampAlphaFunc).field_0x28;
  *(longlong *)&this->StampAlphaFunc = local_48;
  *(undefined8 *)&(this->StampAlphaFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->StampAlphaFunc).field_0x10 = (undefined4)local_38;
  *(undefined4 *)&(this->StampAlphaFunc).field_0x14 = local_38._4_4_;
  *(undefined4 *)&(this->StampAlphaFunc).field_0x18 = uStack_30;
  *(undefined4 *)&(this->StampAlphaFunc).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->StampAlphaFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->StampAlphaFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->StampAlphaFunc).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->StampAlphaFunc).field_0x2c = uStack_20._4_4_;
  local_38._0_4_ = uVar2;
  local_38._4_4_ = uVar3;
  uStack_30 = uVar4;
  uStack_2c = uVar5;
  local_28 = uVar6;
  uStack_20 = plVar7;
  if (lVar8 != 0) {
    plVar12 = &local_38;
    if (plVar7 != (longlong *)0x0) {
      plVar12 = plVar7;
    }
    local_48 = lVar8;
    uStack_40 = uVar9;
    (**(code **)(*plVar12 + 0x10))();
  }
  return this;
}

