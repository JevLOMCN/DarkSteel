// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 24

// StaticClass @ 14cc039b0

UClass * __cdecl UEditMeshPolygonsToolActions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolActions",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolActions.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsToolActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolActions>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolActions>,local_res8,
               UEditMeshPolygonsToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolActions.InnerSingleton;
}

// UEditMeshPolygonsToolActions @ 14cc1fcc0

UEditMeshPolygonsToolActions * __thiscall
UEditMeshPolygonsToolActions::UEditMeshPolygonsToolActions
          (UEditMeshPolygonsToolActions *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UEditMeshPolygonsToolActions__6B_;
  return this;
}

// UEditMeshPolygonsToolActions @ 14cc1fcf0

UEditMeshPolygonsToolActions * __thiscall
UEditMeshPolygonsToolActions::UEditMeshPolygonsToolActions
          (UEditMeshPolygonsToolActions *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UEditMeshPolygonsToolActions__6B_;
  return this;
}

// ~UEditMeshPolygonsToolActions @ 14cc232d0

void __thiscall
UEditMeshPolygonsToolActions::~UEditMeshPolygonsToolActions(UEditMeshPolygonsToolActions *this)

{
  *(undefined ***)this = &___7UEditMeshPolygonsToolActionPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5d130

UClass * __cdecl UEditMeshPolygonsToolActions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolActions",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolActions.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsToolActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolActions>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolActions>,local_res8,
               UEditMeshPolygonsToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolActions.InnerSingleton;
}

// StaticRegisterNativesUEditMeshPolygonsToolActions @ 14cc824f0

void __cdecl UEditMeshPolygonsToolActions::StaticRegisterNativesUEditMeshPolygonsToolActions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UEditMeshPolygonsToolActions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBevel @ 14cc8a5f0

void __cdecl UEditMeshPolygonsToolActions::execBevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8a63d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,8,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execCutFaces @ 14cc8a830

void __cdecl
UEditMeshPolygonsToolActions::execCutFaces(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8a87d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0xf,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execDecompose @ 14cc8a8f0

void __cdecl
UEditMeshPolygonsToolActions::execDecompose(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8a93d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x13,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execDelete @ 14cc8a950

void __cdecl
UEditMeshPolygonsToolActions::execDelete(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8a99d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0xe,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execDisconnect @ 14cc8aab0

void __cdecl
UEditMeshPolygonsToolActions::execDisconnect(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8aafd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x14,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execDuplicate @ 14cc8ab70

void __cdecl
UEditMeshPolygonsToolActions::execDuplicate(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8abbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x15,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execExtrude @ 14cc8ac30

void __cdecl
UEditMeshPolygonsToolActions::execExtrude(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8ac7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,3,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execFlip @ 14cc8ae70

void __cdecl UEditMeshPolygonsToolActions::execFlip(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8aebd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x11,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execInsertEdge @ 14cc8b1b0

void __cdecl
UEditMeshPolygonsToolActions::execInsertEdge(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b1fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,9,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execInsertEdgeLoop @ 14cc8b210

void __cdecl
UEditMeshPolygonsToolActions::execInsertEdgeLoop(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b25d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,10,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execInset @ 14cc8b270

void __cdecl UEditMeshPolygonsToolActions::execInset(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b2bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,6,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execMerge @ 14cc8b330

void __cdecl UEditMeshPolygonsToolActions::execMerge(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b37d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0xd,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execOffset @ 14cc8b390

void __cdecl
UEditMeshPolygonsToolActions::execOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b3dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,5,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execOutset @ 14cc8b450

void __cdecl
UEditMeshPolygonsToolActions::execOutset(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b49d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,7,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execPushPull @ 14cc8b5d0

void __cdecl
UEditMeshPolygonsToolActions::execPushPull(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b61d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,4,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execRecalcNormals @ 14cc8b690

void __cdecl
UEditMeshPolygonsToolActions::execRecalcNormals(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b6dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x10,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execRetriangulate @ 14cc8b7b0

void __cdecl
UEditMeshPolygonsToolActions::execRetriangulate(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b7fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x12,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execSimplifyByGroups @ 14cc8b870

void __cdecl
UEditMeshPolygonsToolActions::execSimplifyByGroups(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b8bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x20,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

