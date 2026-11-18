// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> @ 14cac7890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> * __thiscall
UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
          (TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          FMeshDescriptionTriangleMeshSurfaceAdapter *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x148 = 0;
  *(undefined8 *)&this->field_0x150 = 0;
  *(undefined8 *)&this->field_0x178 = 0;
  *(undefined8 *)&this->field_0x180 = 0;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_48 = *(longlong *)this;
  uVar2 = *(undefined8 *)&this->field_0x8;
  local_38 = *(longlong *)&this->field_0x10;
  uStack_30 = *(undefined8 *)&this->field_0x18;
  uVar1 = *(undefined8 *)&this->field_0x20;
  plStack_20 = *(longlong **)&this->field_0x28;
  *(code **)this =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_1>,bool,int>
       ::Call;
  *(undefined8 *)&this->field_0x8 = uStack_40;
  *(undefined4 *)&this->field_0x10 = 0x52912470;
  *(undefined4 *)&this->field_0x14 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> **)
   &this->field_0x18 = this;
  *(undefined4 *)&this->field_0x20 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x24 = local_28._4_4_;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0;
  this->WrappedAdapter = param_1;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x30;
  uVar2 = *(undefined8 *)&this->field_0x38;
  local_38 = *(longlong *)&this->field_0x40;
  uStack_30 = *(undefined8 *)&this->field_0x48;
  uVar1 = *(undefined8 *)&this->field_0x50;
  plStack_20 = *(longlong **)&this->field_0x58;
  *(code **)&this->field_0x30 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_2>,bool,int>
       ::Call;
  *(undefined8 *)&this->field_0x38 = uStack_40;
  *(undefined4 *)&this->field_0x40 = 0x52912490;
  *(undefined4 *)&this->field_0x44 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> **)
   &this->field_0x48 = this;
  *(undefined4 *)&this->field_0x50 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x54 = local_28._4_4_;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x5c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x60;
  uVar2 = *(undefined8 *)&this->field_0x68;
  local_38 = *(longlong *)&this->field_0x70;
  uStack_30 = *(undefined8 *)&this->field_0x78;
  uVar1 = *(undefined8 *)&this->field_0x80;
  plStack_20 = *(longlong **)&this->field_0x88;
  *(code **)&this->field_0x60 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_3>,int>
       ::Call;
  *(undefined8 *)&this->field_0x68 = uStack_40;
  *(undefined4 *)&this->field_0x70 = 0x529124b0;
  *(undefined4 *)&this->field_0x74 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> **)
   &this->field_0x78 = this;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x84 = local_28._4_4_;
  *(undefined4 *)&this->field_0x88 = 0;
  *(undefined4 *)&this->field_0x8c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x90;
  uVar2 = *(undefined8 *)&this->field_0x98;
  local_38 = *(longlong *)&this->field_0xa0;
  uStack_30 = *(undefined8 *)&this->field_0xa8;
  uVar1 = *(undefined8 *)&this->field_0xb0;
  plStack_20 = *(longlong **)&this->field_0xb8;
  *(code **)&this->field_0x90 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_4>,int>
       ::Call;
  *(undefined8 *)&this->field_0x98 = uStack_40;
  *(undefined4 *)&this->field_0xa0 = 0x529124d0;
  *(undefined4 *)&this->field_0xa4 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> **)
   &this->field_0xa8 = this;
  *(undefined4 *)&this->field_0xb0 = (undefined4)local_28;
  *(undefined4 *)&this->field_0xb4 = local_28._4_4_;
  *(undefined4 *)&this->field_0xb8 = 0;
  *(undefined4 *)&this->field_0xbc = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0xc0;
  uVar2 = *(undefined8 *)&this->field_0xc8;
  local_38 = *(longlong *)&this->field_0xd0;
  uStack_30 = *(undefined8 *)&this->field_0xd8;
  uVar1 = *(undefined8 *)&this->field_0xe0;
  plStack_20 = *(longlong **)&this->field_0xe8;
  *(code **)&this->field_0xc0 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_5>,int>
       ::Call;
  *(undefined8 *)&this->field_0xc8 = uStack_40;
  *(undefined4 *)&this->field_0xd0 = 0x529124f0;
  *(undefined4 *)&this->field_0xd4 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> **)
   &this->field_0xd8 = this;
  *(undefined4 *)&this->field_0xe0 = (undefined4)local_28;
  *(undefined4 *)&this->field_0xe4 = local_28._4_4_;
  *(undefined4 *)&this->field_0xe8 = 0;
  *(undefined4 *)&this->field_0xec = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0xf0;
  uVar2 = *(undefined8 *)&this->field_0xf8;
  local_38 = *(longlong *)&this->field_0x100;
  uStack_30 = *(undefined8 *)&this->field_0x108;
  uVar1 = *(undefined8 *)&this->field_0x110;
  plStack_20 = *(longlong **)&this->field_0x118;
  *(code **)&this->field_0xf0 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_6>,int>
       ::Call;
  *(undefined8 *)&this->field_0xf8 = uStack_40;
  *(undefined4 *)&this->field_0x100 = 0x52912510;
  *(undefined4 *)&this->field_0x104 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> **)
   &this->field_0x108 = this;
  *(undefined4 *)&this->field_0x110 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x114 = local_28._4_4_;
  *(undefined4 *)&this->field_0x118 = 0;
  *(undefined4 *)&this->field_0x11c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x120;
  uVar2 = *(undefined8 *)&this->field_0x128;
  local_38 = *(longlong *)&this->field_0x130;
  uStack_30 = *(undefined8 *)&this->field_0x138;
  uVar1 = *(undefined8 *)&this->field_0x140;
  plStack_20 = *(longlong **)&this->field_0x148;
  *(code **)&this->field_0x120 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_7>,unsigned___int64>
       ::Call;
  *(undefined8 *)&this->field_0x128 = uStack_40;
  *(undefined4 *)&this->field_0x130 = 0x52912530;
  *(undefined4 *)&this->field_0x134 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> **)
   &this->field_0x138 = this;
  *(undefined4 *)&this->field_0x140 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x144 = local_28._4_4_;
  *(undefined4 *)&this->field_0x148 = 0;
  *(undefined4 *)&this->field_0x14c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x150;
  uVar2 = *(undefined8 *)&this->field_0x158;
  local_38 = *(longlong *)&this->field_0x160;
  uStack_30 = *(undefined8 *)&this->field_0x168;
  uVar1 = *(undefined8 *)&this->field_0x170;
  plStack_20 = *(longlong **)&this->field_0x178;
  *(code **)&this->field_0x150 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_8>,UE::Geometry::FIndex3i,int>
       ::Call;
  *(undefined8 *)&this->field_0x158 = uStack_40;
  *(undefined4 *)&this->field_0x160 = 0x52912550;
  *(undefined4 *)&this->field_0x164 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> **)
   &this->field_0x168 = this;
  *(undefined4 *)&this->field_0x170 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x174 = local_28._4_4_;
  *(undefined4 *)&this->field_0x178 = 0;
  *(undefined4 *)&this->field_0x17c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x180;
  uVar2 = *(undefined8 *)&this->field_0x188;
  local_38 = *(longlong *)&this->field_0x190;
  uStack_30 = *(undefined8 *)&this->field_0x198;
  uVar1 = *(undefined8 *)&this->field_0x1a0;
  plStack_20 = *(longlong **)&this->field_0x1a8;
  *(code **)&this->field_0x180 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_9>,UE::Math::TVector<double>,int>
       ::Call;
  *(undefined8 *)&this->field_0x188 = uStack_40;
  *(undefined4 *)&this->field_0x190 = 0x52912570;
  *(undefined4 *)&this->field_0x194 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> **)
   &this->field_0x198 = this;
  *(undefined4 *)&this->field_0x1a0 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x1a4 = local_28._4_4_;
  *(undefined4 *)&this->field_0x1a8 = 0;
  *(undefined4 *)&this->field_0x1ac = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> @ 14cac7dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> * __thiscall
UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
          (TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          FStaticMeshLODResourcesMeshSurfaceAdapter *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x148 = 0;
  *(undefined8 *)&this->field_0x150 = 0;
  *(undefined8 *)&this->field_0x178 = 0;
  *(undefined8 *)&this->field_0x180 = 0;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_48 = *(longlong *)this;
  uVar2 = *(undefined8 *)&this->field_0x8;
  local_38 = *(longlong *)&this->field_0x10;
  uStack_30 = *(undefined8 *)&this->field_0x18;
  uVar1 = *(undefined8 *)&this->field_0x20;
  plStack_20 = *(longlong **)&this->field_0x28;
  *(code **)this =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_1>,bool,int>
       ::Call;
  *(undefined8 *)&this->field_0x8 = uStack_40;
  *(undefined4 *)&this->field_0x10 = 0x52912590;
  *(undefined4 *)&this->field_0x14 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> **)
   &this->field_0x18 = this;
  *(undefined4 *)&this->field_0x20 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x24 = local_28._4_4_;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0;
  this->WrappedAdapter = param_1;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x30;
  uVar2 = *(undefined8 *)&this->field_0x38;
  local_38 = *(longlong *)&this->field_0x40;
  uStack_30 = *(undefined8 *)&this->field_0x48;
  uVar1 = *(undefined8 *)&this->field_0x50;
  plStack_20 = *(longlong **)&this->field_0x58;
  *(code **)&this->field_0x30 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_2>,bool,int>
       ::Call;
  *(undefined8 *)&this->field_0x38 = uStack_40;
  *(undefined4 *)&this->field_0x40 = 0x529125b0;
  *(undefined4 *)&this->field_0x44 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> **)
   &this->field_0x48 = this;
  *(undefined4 *)&this->field_0x50 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x54 = local_28._4_4_;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x5c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x60;
  uVar2 = *(undefined8 *)&this->field_0x68;
  local_38 = *(longlong *)&this->field_0x70;
  uStack_30 = *(undefined8 *)&this->field_0x78;
  uVar1 = *(undefined8 *)&this->field_0x80;
  plStack_20 = *(longlong **)&this->field_0x88;
  *(code **)&this->field_0x60 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_3>,int>
       ::Call;
  *(undefined8 *)&this->field_0x68 = uStack_40;
  *(undefined4 *)&this->field_0x70 = 0x529125d0;
  *(undefined4 *)&this->field_0x74 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> **)
   &this->field_0x78 = this;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x84 = local_28._4_4_;
  *(undefined4 *)&this->field_0x88 = 0;
  *(undefined4 *)&this->field_0x8c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x90;
  uVar2 = *(undefined8 *)&this->field_0x98;
  local_38 = *(longlong *)&this->field_0xa0;
  uStack_30 = *(undefined8 *)&this->field_0xa8;
  uVar1 = *(undefined8 *)&this->field_0xb0;
  plStack_20 = *(longlong **)&this->field_0xb8;
  *(code **)&this->field_0x90 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_4>,int>
       ::Call;
  *(undefined8 *)&this->field_0x98 = uStack_40;
  *(undefined4 *)&this->field_0xa0 = 0x529125f0;
  *(undefined4 *)&this->field_0xa4 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> **)
   &this->field_0xa8 = this;
  *(undefined4 *)&this->field_0xb0 = (undefined4)local_28;
  *(undefined4 *)&this->field_0xb4 = local_28._4_4_;
  *(undefined4 *)&this->field_0xb8 = 0;
  *(undefined4 *)&this->field_0xbc = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0xc0;
  uVar2 = *(undefined8 *)&this->field_0xc8;
  local_38 = *(longlong *)&this->field_0xd0;
  uStack_30 = *(undefined8 *)&this->field_0xd8;
  uVar1 = *(undefined8 *)&this->field_0xe0;
  plStack_20 = *(longlong **)&this->field_0xe8;
  *(code **)&this->field_0xc0 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_5>,int>
       ::Call;
  *(undefined8 *)&this->field_0xc8 = uStack_40;
  *(undefined4 *)&this->field_0xd0 = 0x52912610;
  *(undefined4 *)&this->field_0xd4 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> **)
   &this->field_0xd8 = this;
  *(undefined4 *)&this->field_0xe0 = (undefined4)local_28;
  *(undefined4 *)&this->field_0xe4 = local_28._4_4_;
  *(undefined4 *)&this->field_0xe8 = 0;
  *(undefined4 *)&this->field_0xec = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0xf0;
  uVar2 = *(undefined8 *)&this->field_0xf8;
  local_38 = *(longlong *)&this->field_0x100;
  uStack_30 = *(undefined8 *)&this->field_0x108;
  uVar1 = *(undefined8 *)&this->field_0x110;
  plStack_20 = *(longlong **)&this->field_0x118;
  *(code **)&this->field_0xf0 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_6>,int>
       ::Call;
  *(undefined8 *)&this->field_0xf8 = uStack_40;
  *(undefined4 *)&this->field_0x100 = 0x52912630;
  *(undefined4 *)&this->field_0x104 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> **)
   &this->field_0x108 = this;
  *(undefined4 *)&this->field_0x110 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x114 = local_28._4_4_;
  *(undefined4 *)&this->field_0x118 = 0;
  *(undefined4 *)&this->field_0x11c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x120;
  uVar2 = *(undefined8 *)&this->field_0x128;
  local_38 = *(longlong *)&this->field_0x130;
  uStack_30 = *(undefined8 *)&this->field_0x138;
  uVar1 = *(undefined8 *)&this->field_0x140;
  plStack_20 = *(longlong **)&this->field_0x148;
  *(code **)&this->field_0x120 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_7>,unsigned___int64>
       ::Call;
  *(undefined8 *)&this->field_0x128 = uStack_40;
  *(undefined4 *)&this->field_0x130 = 0x52912650;
  *(undefined4 *)&this->field_0x134 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> **)
   &this->field_0x138 = this;
  *(undefined4 *)&this->field_0x140 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x144 = local_28._4_4_;
  *(undefined4 *)&this->field_0x148 = 0;
  *(undefined4 *)&this->field_0x14c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x150;
  uVar2 = *(undefined8 *)&this->field_0x158;
  local_38 = *(longlong *)&this->field_0x160;
  uStack_30 = *(undefined8 *)&this->field_0x168;
  uVar1 = *(undefined8 *)&this->field_0x170;
  plStack_20 = *(longlong **)&this->field_0x178;
  *(code **)&this->field_0x150 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_8>,UE::Geometry::FIndex3i,int>
       ::Call;
  *(undefined8 *)&this->field_0x158 = uStack_40;
  *(undefined4 *)&this->field_0x160 = 0x52912670;
  *(undefined4 *)&this->field_0x164 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> **)
   &this->field_0x168 = this;
  *(undefined4 *)&this->field_0x170 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x174 = local_28._4_4_;
  *(undefined4 *)&this->field_0x178 = 0;
  *(undefined4 *)&this->field_0x17c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x180;
  uVar2 = *(undefined8 *)&this->field_0x188;
  local_38 = *(longlong *)&this->field_0x190;
  uStack_30 = *(undefined8 *)&this->field_0x198;
  uVar1 = *(undefined8 *)&this->field_0x1a0;
  plStack_20 = *(longlong **)&this->field_0x1a8;
  *(code **)&this->field_0x180 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_9>,UE::Math::TVector<double>,int>
       ::Call;
  *(undefined8 *)&this->field_0x188 = uStack_40;
  *(undefined4 *)&this->field_0x190 = 0x52912690;
  *(undefined4 *)&this->field_0x194 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> **)
   &this->field_0x198 = this;
  *(undefined4 *)&this->field_0x1a0 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x1a4 = local_28._4_4_;
  *(undefined4 *)&this->field_0x1a8 = 0;
  *(undefined4 *)&this->field_0x1ac = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// TMeshWrapperAdapterd<UE::Geometry::FColliderMesh> @ 14cac8310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMeshWrapperAdapterd<UE::Geometry::FColliderMesh> * __thiscall
UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::
TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>
          (TMeshWrapperAdapterd<UE::Geometry::FColliderMesh> *this,FColliderMesh *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x148 = 0;
  *(undefined8 *)&this->field_0x150 = 0;
  *(undefined8 *)&this->field_0x178 = 0;
  *(undefined8 *)&this->field_0x180 = 0;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_48 = *(longlong *)this;
  uVar2 = *(undefined8 *)&this->field_0x8;
  local_38 = *(longlong *)&this->field_0x10;
  uStack_30 = *(undefined8 *)&this->field_0x18;
  uVar1 = *(undefined8 *)&this->field_0x20;
  plStack_20 = *(longlong **)&this->field_0x28;
  *(code **)this =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_1>,bool,int>
       ::Call;
  *(undefined8 *)&this->field_0x8 = uStack_40;
  *(undefined4 *)&this->field_0x10 = 0x52912350;
  *(undefined4 *)&this->field_0x14 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FColliderMesh> **)&this->field_0x18 = this;
  *(undefined4 *)&this->field_0x20 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x24 = local_28._4_4_;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0;
  this->WrappedAdapter = param_1;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x30;
  uVar2 = *(undefined8 *)&this->field_0x38;
  local_38 = *(longlong *)&this->field_0x40;
  uStack_30 = *(undefined8 *)&this->field_0x48;
  uVar1 = *(undefined8 *)&this->field_0x50;
  plStack_20 = *(longlong **)&this->field_0x58;
  *(code **)&this->field_0x30 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_2>,bool,int>
       ::Call;
  *(undefined8 *)&this->field_0x38 = uStack_40;
  *(undefined4 *)&this->field_0x40 = 0x52912370;
  *(undefined4 *)&this->field_0x44 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FColliderMesh> **)&this->field_0x48 = this;
  *(undefined4 *)&this->field_0x50 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x54 = local_28._4_4_;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x5c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x60;
  uVar2 = *(undefined8 *)&this->field_0x68;
  local_38 = *(longlong *)&this->field_0x70;
  uStack_30 = *(undefined8 *)&this->field_0x78;
  uVar1 = *(undefined8 *)&this->field_0x80;
  plStack_20 = *(longlong **)&this->field_0x88;
  *(code **)&this->field_0x60 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_3>,int>
       ::Call;
  *(undefined8 *)&this->field_0x68 = uStack_40;
  *(undefined4 *)&this->field_0x70 = 0x52912390;
  *(undefined4 *)&this->field_0x74 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FColliderMesh> **)&this->field_0x78 = this;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x84 = local_28._4_4_;
  *(undefined4 *)&this->field_0x88 = 0;
  *(undefined4 *)&this->field_0x8c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x90;
  uVar2 = *(undefined8 *)&this->field_0x98;
  local_38 = *(longlong *)&this->field_0xa0;
  uStack_30 = *(undefined8 *)&this->field_0xa8;
  uVar1 = *(undefined8 *)&this->field_0xb0;
  plStack_20 = *(longlong **)&this->field_0xb8;
  *(code **)&this->field_0x90 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_4>,int>
       ::Call;
  *(undefined8 *)&this->field_0x98 = uStack_40;
  *(undefined4 *)&this->field_0xa0 = 0x529123b0;
  *(undefined4 *)&this->field_0xa4 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FColliderMesh> **)&this->field_0xa8 = this;
  *(undefined4 *)&this->field_0xb0 = (undefined4)local_28;
  *(undefined4 *)&this->field_0xb4 = local_28._4_4_;
  *(undefined4 *)&this->field_0xb8 = 0;
  *(undefined4 *)&this->field_0xbc = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0xc0;
  uVar2 = *(undefined8 *)&this->field_0xc8;
  local_38 = *(longlong *)&this->field_0xd0;
  uStack_30 = *(undefined8 *)&this->field_0xd8;
  uVar1 = *(undefined8 *)&this->field_0xe0;
  plStack_20 = *(longlong **)&this->field_0xe8;
  *(code **)&this->field_0xc0 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_5>,int>
       ::Call;
  *(undefined8 *)&this->field_0xc8 = uStack_40;
  *(undefined4 *)&this->field_0xd0 = 0x529123d0;
  *(undefined4 *)&this->field_0xd4 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FColliderMesh> **)&this->field_0xd8 = this;
  *(undefined4 *)&this->field_0xe0 = (undefined4)local_28;
  *(undefined4 *)&this->field_0xe4 = local_28._4_4_;
  *(undefined4 *)&this->field_0xe8 = 0;
  *(undefined4 *)&this->field_0xec = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0xf0;
  uVar2 = *(undefined8 *)&this->field_0xf8;
  local_38 = *(longlong *)&this->field_0x100;
  uStack_30 = *(undefined8 *)&this->field_0x108;
  uVar1 = *(undefined8 *)&this->field_0x110;
  plStack_20 = *(longlong **)&this->field_0x118;
  *(code **)&this->field_0xf0 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_6>,int>
       ::Call;
  *(undefined8 *)&this->field_0xf8 = uStack_40;
  *(undefined4 *)&this->field_0x100 = 0x529123f0;
  *(undefined4 *)&this->field_0x104 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FColliderMesh> **)&this->field_0x108 = this;
  *(undefined4 *)&this->field_0x110 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x114 = local_28._4_4_;
  *(undefined4 *)&this->field_0x118 = 0;
  *(undefined4 *)&this->field_0x11c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x120;
  uVar2 = *(undefined8 *)&this->field_0x128;
  local_38 = *(longlong *)&this->field_0x130;
  uStack_30 = *(undefined8 *)&this->field_0x138;
  uVar1 = *(undefined8 *)&this->field_0x140;
  plStack_20 = *(longlong **)&this->field_0x148;
  *(code **)&this->field_0x120 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_7>,unsigned___int64>
       ::Call;
  *(undefined8 *)&this->field_0x128 = uStack_40;
  *(undefined4 *)&this->field_0x130 = 0x52912410;
  *(undefined4 *)&this->field_0x134 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FColliderMesh> **)&this->field_0x138 = this;
  *(undefined4 *)&this->field_0x140 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x144 = local_28._4_4_;
  *(undefined4 *)&this->field_0x148 = 0;
  *(undefined4 *)&this->field_0x14c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x150;
  uVar2 = *(undefined8 *)&this->field_0x158;
  local_38 = *(longlong *)&this->field_0x160;
  uStack_30 = *(undefined8 *)&this->field_0x168;
  uVar1 = *(undefined8 *)&this->field_0x170;
  plStack_20 = *(longlong **)&this->field_0x178;
  *(code **)&this->field_0x150 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_8>,UE::Geometry::FIndex3i,int>
       ::Call;
  *(undefined8 *)&this->field_0x158 = uStack_40;
  *(undefined4 *)&this->field_0x160 = 0x52912430;
  *(undefined4 *)&this->field_0x164 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FColliderMesh> **)&this->field_0x168 = this;
  *(undefined4 *)&this->field_0x170 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x174 = local_28._4_4_;
  *(undefined4 *)&this->field_0x178 = 0;
  *(undefined4 *)&this->field_0x17c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->field_0x180;
  uVar2 = *(undefined8 *)&this->field_0x188;
  local_38 = *(longlong *)&this->field_0x190;
  uStack_30 = *(undefined8 *)&this->field_0x198;
  uVar1 = *(undefined8 *)&this->field_0x1a0;
  plStack_20 = *(longlong **)&this->field_0x1a8;
  *(code **)&this->field_0x180 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>'::__l2::<lambda_9>,UE::Math::TVector<double>,int>
       ::Call;
  *(undefined8 *)&this->field_0x188 = uStack_40;
  *(undefined4 *)&this->field_0x190 = 0x52912450;
  *(undefined4 *)&this->field_0x194 = 1;
  *(TMeshWrapperAdapterd<UE::Geometry::FColliderMesh> **)&this->field_0x198 = this;
  *(undefined4 *)&this->field_0x1a0 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x1a4 = local_28._4_4_;
  *(undefined4 *)&this->field_0x1a8 = 0;
  *(undefined4 *)&this->field_0x1ac = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

