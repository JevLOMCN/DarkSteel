// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 18

// StaticClass @ 14cc03a70

UClass * __cdecl UEditMeshPolygonsToolActions_Triangles::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolActions_Triangles.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolActions_Triangles",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolActions_Triangles.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsToolActions_Triangles,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolActions_Triangles>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolActions_Triangles>,local_res8,
               UEditMeshPolygonsToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolActions_Triangles.InnerSingleton;
}

// UEditMeshPolygonsToolActions_Triangles @ 14cc1fd20

UEditMeshPolygonsToolActions_Triangles * __thiscall
UEditMeshPolygonsToolActions_Triangles::UEditMeshPolygonsToolActions_Triangles
          (UEditMeshPolygonsToolActions_Triangles *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UEditMeshPolygonsToolActions_Triangles__6B_;
  return this;
}

// UEditMeshPolygonsToolActions_Triangles @ 14cc1fd50

UEditMeshPolygonsToolActions_Triangles * __thiscall
UEditMeshPolygonsToolActions_Triangles::UEditMeshPolygonsToolActions_Triangles
          (UEditMeshPolygonsToolActions_Triangles *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UEditMeshPolygonsToolActions_Triangles__6B_;
  return this;
}

// ~UEditMeshPolygonsToolActions_Triangles @ 14cc232f0

void __thiscall
UEditMeshPolygonsToolActions_Triangles::~UEditMeshPolygonsToolActions_Triangles
          (UEditMeshPolygonsToolActions_Triangles *this)

{
  *(undefined ***)this = &___7UEditMeshPolygonsToolActionPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5d1f0

UClass * __cdecl UEditMeshPolygonsToolActions_Triangles::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolActions_Triangles.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolActions_Triangles",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolActions_Triangles.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsToolActions_Triangles,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolActions_Triangles>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolActions_Triangles>,local_res8,
               UEditMeshPolygonsToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolActions_Triangles.InnerSingleton;
}

// StaticRegisterNativesUEditMeshPolygonsToolActions_Triangles @ 14cc82530

void __cdecl
UEditMeshPolygonsToolActions_Triangles::StaticRegisterNativesUEditMeshPolygonsToolActions_Triangles
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UEditMeshPolygonsToolActions_Triangles_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCutFaces @ 14cc8a890

void __cdecl
UEditMeshPolygonsToolActions_Triangles::execCutFaces(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8a8dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0xf,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execDelete @ 14cc8a9b0

void __cdecl
UEditMeshPolygonsToolActions_Triangles::execDelete(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8a9fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0xe,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execDisconnect @ 14cc8ab10

void __cdecl
UEditMeshPolygonsToolActions_Triangles::execDisconnect
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8ab5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x14,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execDuplicate @ 14cc8abd0

void __cdecl
UEditMeshPolygonsToolActions_Triangles::execDuplicate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8ac1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x15,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execExtrude @ 14cc8ac90

void __cdecl
UEditMeshPolygonsToolActions_Triangles::execExtrude(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8acdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,3,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execFlip @ 14cc8aed0

void __cdecl
UEditMeshPolygonsToolActions_Triangles::execFlip(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8af1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x11,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execInset @ 14cc8b2d0

void __cdecl
UEditMeshPolygonsToolActions_Triangles::execInset(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b31d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,6,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execOffset @ 14cc8b3f0

void __cdecl
UEditMeshPolygonsToolActions_Triangles::execOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b43d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,5,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execOutset @ 14cc8b4b0

void __cdecl
UEditMeshPolygonsToolActions_Triangles::execOutset(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b4fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,7,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execPoke @ 14cc8b570

void __cdecl
UEditMeshPolygonsToolActions_Triangles::execPoke(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b5bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x22,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execPushPull @ 14cc8b630

void __cdecl
UEditMeshPolygonsToolActions_Triangles::execPushPull(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b67d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,4,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execRecalcNormals @ 14cc8b6f0

void __cdecl
UEditMeshPolygonsToolActions_Triangles::execRecalcNormals
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b73d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x10,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

