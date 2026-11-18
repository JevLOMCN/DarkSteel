// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 14

// StaticClass @ 14cc04320

UClass * __cdecl UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions_Triangles.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolEdgeActions_Triangles",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions_Triangles.InnerSingleton
               ,StaticRegisterNativesUEditMeshPolygonsToolEdgeActions_Triangles,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolEdgeActions_Triangles>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolEdgeActions_Triangles>,local_res8
               ,UEditMeshPolygonsToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions_Triangles.InnerSingleton;
}

// UEditMeshPolygonsToolEdgeActions_Triangles @ 14cc1fe40

UEditMeshPolygonsToolEdgeActions_Triangles * __thiscall
UEditMeshPolygonsToolEdgeActions_Triangles::UEditMeshPolygonsToolEdgeActions_Triangles
          (UEditMeshPolygonsToolEdgeActions_Triangles *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UEditMeshPolygonsToolEdgeActions_Triangles__6B_;
  return this;
}

// UEditMeshPolygonsToolEdgeActions_Triangles @ 14cc1fe70

UEditMeshPolygonsToolEdgeActions_Triangles * __thiscall
UEditMeshPolygonsToolEdgeActions_Triangles::UEditMeshPolygonsToolEdgeActions_Triangles
          (UEditMeshPolygonsToolEdgeActions_Triangles *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UEditMeshPolygonsToolEdgeActions_Triangles__6B_;
  return this;
}

// ~UEditMeshPolygonsToolEdgeActions_Triangles @ 14cc23350

void __thiscall
UEditMeshPolygonsToolEdgeActions_Triangles::~UEditMeshPolygonsToolEdgeActions_Triangles
          (UEditMeshPolygonsToolEdgeActions_Triangles *this)

{
  *(undefined ***)this = &___7UEditMeshPolygonsToolActionPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5d430

UClass * __cdecl UEditMeshPolygonsToolEdgeActions_Triangles::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions_Triangles.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolEdgeActions_Triangles",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions_Triangles.InnerSingleton
               ,StaticRegisterNativesUEditMeshPolygonsToolEdgeActions_Triangles,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolEdgeActions_Triangles>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolEdgeActions_Triangles>,local_res8
               ,UEditMeshPolygonsToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions_Triangles.InnerSingleton;
}

// StaticRegisterNativesUEditMeshPolygonsToolEdgeActions_Triangles @ 14cc825c0

void __cdecl
UEditMeshPolygonsToolEdgeActions_Triangles::
StaticRegisterNativesUEditMeshPolygonsToolEdgeActions_Triangles(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Triangles_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBridge @ 14cc8a710

void __cdecl
UEditMeshPolygonsToolEdgeActions_Triangles::execBridge
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8a75d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x1b,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execCollapse @ 14cc8a7d0

void __cdecl
UEditMeshPolygonsToolEdgeActions_Triangles::execCollapse
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8a81d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x16,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execExtrude @ 14cc8ad50

void __cdecl
UEditMeshPolygonsToolEdgeActions_Triangles::execExtrude
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8ad9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x1c,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execFillHole @ 14cc8ae10

void __cdecl
UEditMeshPolygonsToolEdgeActions_Triangles::execFillHole
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8ae5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x1a,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execFlip @ 14cc8af30

void __cdecl
UEditMeshPolygonsToolEdgeActions_Triangles::execFlip(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8af7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x24,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execSplit @ 14cc8b8d0

void __cdecl
UEditMeshPolygonsToolEdgeActions_Triangles::execSplit
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b91d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x23,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execWeld @ 14cc8b9f0

void __cdecl
UEditMeshPolygonsToolEdgeActions_Triangles::execWeld(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8ba3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x17,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execWeldCentered @ 14cc8bab0

void __cdecl
UEditMeshPolygonsToolEdgeActions_Triangles::execWeldCentered
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8bafd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x18,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

