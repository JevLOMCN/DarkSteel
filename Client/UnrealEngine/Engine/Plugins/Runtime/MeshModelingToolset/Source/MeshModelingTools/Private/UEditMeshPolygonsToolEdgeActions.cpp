// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 16

// StaticClass @ 14cc03f50

UClass * __cdecl UEditMeshPolygonsToolEdgeActions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolEdgeActions",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsToolEdgeActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolEdgeActions>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolEdgeActions>,local_res8,
               UEditMeshPolygonsToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions.InnerSingleton;
}

// UEditMeshPolygonsToolEdgeActions @ 14cc1fde0

UEditMeshPolygonsToolEdgeActions * __thiscall
UEditMeshPolygonsToolEdgeActions::UEditMeshPolygonsToolEdgeActions
          (UEditMeshPolygonsToolEdgeActions *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UEditMeshPolygonsToolEdgeActions__6B_;
  return this;
}

// UEditMeshPolygonsToolEdgeActions @ 14cc1fe10

UEditMeshPolygonsToolEdgeActions * __thiscall
UEditMeshPolygonsToolEdgeActions::UEditMeshPolygonsToolEdgeActions
          (UEditMeshPolygonsToolEdgeActions *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UEditMeshPolygonsToolEdgeActions__6B_;
  return this;
}

// ~UEditMeshPolygonsToolEdgeActions @ 14cc23330

void __thiscall
UEditMeshPolygonsToolEdgeActions::~UEditMeshPolygonsToolEdgeActions
          (UEditMeshPolygonsToolEdgeActions *this)

{
  *(undefined ***)this = &___7UEditMeshPolygonsToolActionPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5d370

UClass * __cdecl UEditMeshPolygonsToolEdgeActions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolEdgeActions",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsToolEdgeActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolEdgeActions>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolEdgeActions>,local_res8,
               UEditMeshPolygonsToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolEdgeActions.InnerSingleton;
}

// StaticRegisterNativesUEditMeshPolygonsToolEdgeActions @ 14cc82580

void __cdecl
UEditMeshPolygonsToolEdgeActions::StaticRegisterNativesUEditMeshPolygonsToolEdgeActions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UEditMeshPolygonsToolEdgeActions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBevel @ 14cc8a650

void __cdecl
UEditMeshPolygonsToolEdgeActions::execBevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8a69d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x1d,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execBridge @ 14cc8a6b0

void __cdecl
UEditMeshPolygonsToolEdgeActions::execBridge(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8a6fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x1b,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execCollapse @ 14cc8a770

void __cdecl
UEditMeshPolygonsToolEdgeActions::execCollapse(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8a7bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x16,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execDeleteEdge @ 14cc8aa10

void __cdecl
UEditMeshPolygonsToolEdgeActions::execDeleteEdge(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8aa5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0xe,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execExtrude @ 14cc8acf0

void __cdecl
UEditMeshPolygonsToolEdgeActions::execExtrude(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8ad3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x1c,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execFillHole @ 14cc8adb0

void __cdecl
UEditMeshPolygonsToolEdgeActions::execFillHole(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8adfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x1a,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execSimplify @ 14cc8b810

void __cdecl
UEditMeshPolygonsToolEdgeActions::execSimplify(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b85d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x1e,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execStraighten @ 14cc8b930

void __cdecl
UEditMeshPolygonsToolEdgeActions::execStraighten(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b97d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x19,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execWeld @ 14cc8b990

void __cdecl
UEditMeshPolygonsToolEdgeActions::execWeld(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b9dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x17,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execWeldCentered @ 14cc8ba50

void __cdecl
UEditMeshPolygonsToolEdgeActions::execWeldCentered(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8ba9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x18,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

