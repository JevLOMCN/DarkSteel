// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 8

// Call @ 14439f420

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14439f440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
::Call(void *param_1,TIntrTriangle3Triangle3<double> *param_2)

{
  bool bVar1;
  undefined1 auStack_d8 [32];
  TVector<double>_u_0 TStack_b8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  TVector<double>_u_0 TStack_68;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TStack_b8._s_0.X = (param_2->Triangle1).V[0].field0_0x0._s_0.X;
  TStack_b8._s_0.Y = (param_2->Triangle1).V[0].field0_0x0._s_0.Y;
  TStack_b8._s_0.Z = (param_2->Triangle1).V[0].field0_0x0._s_0.Z;
  dStack_a0 = (param_2->Triangle1).V[1].field0_0x0._s_0.X;
  dStack_98 = (param_2->Triangle1).V[1].field0_0x0._s_0.Y;
  dStack_90 = (param_2->Triangle1).V[1].field0_0x0._s_0.Z;
  dStack_88 = (param_2->Triangle1).V[2].field0_0x0._s_0.X;
  dStack_80 = (param_2->Triangle1).V[2].field0_0x0._s_0.Y;
  dStack_78 = (param_2->Triangle1).V[2].field0_0x0._s_0.Z;
  TStack_68._s_0.X = (param_2->Triangle0).V[0].field0_0x0._s_0.X;
  TStack_68._s_0.Y = (param_2->Triangle0).V[0].field0_0x0._s_0.Y;
  TStack_68._s_0.Z = (param_2->Triangle0).V[0].field0_0x0._s_0.Z;
  dStack_50 = (param_2->Triangle0).V[1].field0_0x0._s_0.X;
  dStack_48 = (param_2->Triangle0).V[1].field0_0x0._s_0.Y;
  dStack_40 = (param_2->Triangle0).V[1].field0_0x0._s_0.Z;
  dStack_38 = (param_2->Triangle0).V[2].field0_0x0._s_0.X;
  dStack_30 = (param_2->Triangle0).V[2].field0_0x0._s_0.Y;
  dStack_28 = (param_2->Triangle0).V[2].field0_0x0._s_0.Z;
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    ((TTriangle3<double> *)&TStack_68._s_0,(TTriangle3<double> *)&TStack_b8._s_0,
                     __real_3e45798ee2308c3a);
  param_2->Quantity = 0;
  param_2->Result = (bVar1 ^ 1) + Intersects;
  param_2->Type = -(uint)bVar1 & Unknown;
  return bVar1;
}

// Call @ 14439f450

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`UE::Impl::UnposeMesh'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Impl::UnposeMesh'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14439f460

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = *(undefined8 **)param_1;
  CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[5];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3,param_2);
  return __return_storage_ptr__;
}

// Call @ 14439f4d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14439f4f0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = *(undefined8 **)param_1;
  CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[5];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3,param_2);
  return __return_storage_ptr__;
}

// Call @ 14439f560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSkeletalMeshOperations::CopySkinWeightAttributeFromMesh'::__l2::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `FSkeletalMeshOperations::CopySkinWeightAttributeFromMesh'::__l2::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14439f570

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`UE::Impl::PoseMesh'::__l2::<lambda_3>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Impl::PoseMesh'::__l2::<lambda_3>::operator()(param_1,*param_2);
  return;
}

