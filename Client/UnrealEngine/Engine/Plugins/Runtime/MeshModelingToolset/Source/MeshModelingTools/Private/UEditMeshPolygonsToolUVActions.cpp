// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc03db0

UClass * __cdecl UEditMeshPolygonsToolUVActions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolUVActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolUVActions",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolUVActions.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsToolUVActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolUVActions>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolUVActions>,local_res8,
               UEditMeshPolygonsToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolUVActions.InnerSingleton;
}

// UEditMeshPolygonsToolUVActions @ 14cc1fea0

UEditMeshPolygonsToolUVActions * __thiscall
UEditMeshPolygonsToolUVActions::UEditMeshPolygonsToolUVActions
          (UEditMeshPolygonsToolUVActions *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UEditMeshPolygonsToolUVActions__6B_;
  return this;
}

// UEditMeshPolygonsToolUVActions @ 14cc1fed0

UEditMeshPolygonsToolUVActions * __thiscall
UEditMeshPolygonsToolUVActions::UEditMeshPolygonsToolUVActions
          (UEditMeshPolygonsToolUVActions *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UEditMeshPolygonsToolUVActions__6B_;
  return this;
}

// ~UEditMeshPolygonsToolUVActions @ 14cc23370

void __thiscall
UEditMeshPolygonsToolUVActions::~UEditMeshPolygonsToolUVActions
          (UEditMeshPolygonsToolUVActions *this)

{
  *(undefined ***)this = &___7UEditMeshPolygonsToolActionPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5d4f0

UClass * __cdecl UEditMeshPolygonsToolUVActions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolUVActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolUVActions",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolUVActions.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsToolUVActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolUVActions>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolUVActions>,local_res8,
               UEditMeshPolygonsToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolUVActions.InnerSingleton;
}

// StaticRegisterNativesUEditMeshPolygonsToolUVActions @ 14cc82600

void __cdecl
UEditMeshPolygonsToolUVActions::StaticRegisterNativesUEditMeshPolygonsToolUVActions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UEditMeshPolygonsToolUVActions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execPlanarProjection @ 14cc8b510

void __cdecl
UEditMeshPolygonsToolUVActions::execPlanarProjection(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b55d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x1f,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

