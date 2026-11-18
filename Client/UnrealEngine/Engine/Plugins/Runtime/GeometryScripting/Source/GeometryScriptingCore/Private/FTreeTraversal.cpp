// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 6

// <lambda_invoker_cdecl> @ 14ce226c0

bool __cdecl
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::<lambda_27_>::
<lambda_invoker_cdecl>(TAxisAlignedBox3<double> *param_1,int param_2)

{
  return true;
}

// <lambda_invoker_cdecl> @ 14ce226d0

void __cdecl
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::<lambda_28_>::
<lambda_invoker_cdecl>(int param_1,int param_2)

{
  return;
}

// <lambda_invoker_cdecl> @ 14ce226e0

void __cdecl
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::<lambda_29_>::
<lambda_invoker_cdecl>(int param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 14ce226f0

void __cdecl
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::<lambda_30_>::
<lambda_invoker_cdecl>(int param_1)

{
  return;
}

// FTreeTraversal @ 14ce26740

FTreeTraversal * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::FTreeTraversal
          (FTreeTraversal *this)

{
  undefined1 *puVar1;
  
  *(undefined8 *)&this->NextBoxF = 0;
  *(undefined8 *)&(this->NextBoxF).field_0x28 = 0;
  *(undefined ***)&(this->NextBoxF).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TAxisAlignedBox3_N_Geometry_UE__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->NextBoxF).field_0x18;
  *(code **)puVar1 = <lambda_27_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NextBoxF =
         Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),bool,UE::Geometry::TAxisAlignedBox3<double>_const_&,int>
         ::Call;
  }
  *(undefined8 *)&this->BeginBoxTrianglesF = 0;
  *(undefined8 *)&(this->BeginBoxTrianglesF).field_0x28 = 0;
  *(undefined ***)&(this->BeginBoxTrianglesF).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXHH_Z_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->BeginBoxTrianglesF).field_0x18;
  *(code **)puVar1 = <lambda_28_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->BeginBoxTrianglesF =
         Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int,int),void,int,int>::Call;
  }
  *(undefined8 *)&this->NextTriangleF = 0;
  puVar1 = &(this->NextTriangleF).field_0x18;
  *(undefined8 *)&(this->NextTriangleF).field_0x28 = 0;
  *(undefined ***)&(this->NextTriangleF).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXH_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(code **)puVar1 = <lambda_29_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->NextTriangleF =
         Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int),void,int>::Call;
  }
  *(undefined8 *)&this->EndBoxTrianglesF = 0;
  puVar1 = &(this->EndBoxTrianglesF).field_0x18;
  *(undefined8 *)&(this->EndBoxTrianglesF).field_0x28 = 0;
  *(code **)puVar1 = <lambda_30_>::<lambda_invoker_cdecl>;
  *(undefined ***)&(this->EndBoxTrianglesF).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXH_Z_0A__0A__Function_Private_Core_UE__6B_;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->EndBoxTrianglesF =
         Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int),void,int>::Call;
  }
  return this;
}

// ~FTreeTraversal @ 14ce27260

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::~FTreeTraversal
          (FTreeTraversal *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->EndBoxTrianglesF != 0) {
    plVar1 = *(longlong **)&(this->EndBoxTrianglesF).field_0x28;
    plVar2 = (longlong *)&(this->EndBoxTrianglesF).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->NextTriangleF != 0) {
    plVar1 = *(longlong **)&(this->NextTriangleF).field_0x28;
    plVar2 = (longlong *)&(this->NextTriangleF).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->BeginBoxTrianglesF != 0) {
    plVar1 = *(longlong **)&(this->BeginBoxTrianglesF).field_0x28;
    plVar2 = (longlong *)&(this->BeginBoxTrianglesF).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->NextBoxF != 0) {
    plVar1 = *(longlong **)&(this->NextBoxF).field_0x28;
    plVar2 = (longlong *)&(this->NextBoxF).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ce272e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

