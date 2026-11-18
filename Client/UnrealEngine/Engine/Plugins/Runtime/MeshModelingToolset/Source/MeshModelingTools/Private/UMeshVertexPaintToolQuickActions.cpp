// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cc94990

UClass * __cdecl UMeshVertexPaintToolQuickActions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexPaintToolQuickActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexPaintToolQuickActions",
               &Z_Registration_Info_UClass_UMeshVertexPaintToolQuickActions.InnerSingleton,
               StaticRegisterNativesUMeshVertexPaintToolQuickActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexPaintToolQuickActions>,
               InternalVTableHelperCtorCaller<UMeshVertexPaintToolQuickActions>,local_res8,
               UMeshVertexPaintToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexPaintToolQuickActions.InnerSingleton;
}

// UMeshVertexPaintToolQuickActions @ 14ccbe480

UMeshVertexPaintToolQuickActions * __thiscall
UMeshVertexPaintToolQuickActions::UMeshVertexPaintToolQuickActions
          (UMeshVertexPaintToolQuickActions *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UMeshVertexPaintToolQuickActions__6B_;
  return this;
}

// UMeshVertexPaintToolQuickActions @ 14ccbe4b0

UMeshVertexPaintToolQuickActions * __thiscall
UMeshVertexPaintToolQuickActions::UMeshVertexPaintToolQuickActions
          (UMeshVertexPaintToolQuickActions *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UMeshVertexPaintToolQuickActions__6B_;
  return this;
}

// ~UMeshVertexPaintToolQuickActions @ 14ccc4600

void __thiscall
UMeshVertexPaintToolQuickActions::~UMeshVertexPaintToolQuickActions
          (UMeshVertexPaintToolQuickActions *this)

{
  *(undefined ***)this = &___7UMeshVertexPaintToolActionPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd00a30

UClass * __cdecl UMeshVertexPaintToolQuickActions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexPaintToolQuickActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexPaintToolQuickActions",
               &Z_Registration_Info_UClass_UMeshVertexPaintToolQuickActions.InnerSingleton,
               StaticRegisterNativesUMeshVertexPaintToolQuickActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexPaintToolQuickActions>,
               InternalVTableHelperCtorCaller<UMeshVertexPaintToolQuickActions>,local_res8,
               UMeshVertexPaintToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexPaintToolQuickActions.InnerSingleton;
}

// StaticRegisterNativesUMeshVertexPaintToolQuickActions @ 14cd2f180

void __cdecl
UMeshVertexPaintToolQuickActions::StaticRegisterNativesUMeshVertexPaintToolQuickActions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMeshVertexPaintToolQuickActions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEraseAll @ 14cd3f9b0

void __cdecl
UMeshVertexPaintToolQuickActions::execEraseAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd3f9fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x6b0))(pUVar2,2,*(code **)(*(longlong *)pUVar2 + 0x6b0));
    return;
  }
  return;
}

// execFillBlack @ 14cd3fa10

void __cdecl
UMeshVertexPaintToolQuickActions::execFillBlack(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd3fa5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x6b0))(pUVar2,3,*(code **)(*(longlong *)pUVar2 + 0x6b0));
    return;
  }
  return;
}

// execFillWhite @ 14cd3fa70

void __cdecl
UMeshVertexPaintToolQuickActions::execFillWhite(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd3fabd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x6b0))(pUVar2,4,*(code **)(*(longlong *)pUVar2 + 0x6b0));
    return;
  }
  return;
}

// execPaintAll @ 14cd40110

void __cdecl
UMeshVertexPaintToolQuickActions::execPaintAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd4015d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x6b0))(pUVar2,1,*(code **)(*(longlong *)pUVar2 + 0x6b0));
    return;
  }
  return;
}

