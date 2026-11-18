// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 14

// StaticClass @ 14cc92c60

UClass * __cdecl UMeshGroupPaintToolFreezeActions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshGroupPaintToolFreezeActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshGroupPaintToolFreezeActions",
               &Z_Registration_Info_UClass_UMeshGroupPaintToolFreezeActions.InnerSingleton,
               StaticRegisterNativesUMeshGroupPaintToolFreezeActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshGroupPaintToolFreezeActions>,
               InternalVTableHelperCtorCaller<UMeshGroupPaintToolFreezeActions>,local_res8,
               UMeshGroupPaintToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshGroupPaintToolFreezeActions.InnerSingleton;
}

// UMeshGroupPaintToolFreezeActions @ 14ccbc7a0

UMeshGroupPaintToolFreezeActions * __thiscall
UMeshGroupPaintToolFreezeActions::UMeshGroupPaintToolFreezeActions
          (UMeshGroupPaintToolFreezeActions *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UMeshGroupPaintToolFreezeActions__6B_;
  return this;
}

// UMeshGroupPaintToolFreezeActions @ 14ccbc7d0

UMeshGroupPaintToolFreezeActions * __thiscall
UMeshGroupPaintToolFreezeActions::UMeshGroupPaintToolFreezeActions
          (UMeshGroupPaintToolFreezeActions *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UMeshGroupPaintToolFreezeActions__6B_;
  return this;
}

// ~UMeshGroupPaintToolFreezeActions @ 14ccc3d90

void __thiscall
UMeshGroupPaintToolFreezeActions::~UMeshGroupPaintToolFreezeActions
          (UMeshGroupPaintToolFreezeActions *this)

{
  *(undefined ***)this = &___7UMeshGroupPaintToolActionPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd00080

UClass * __cdecl UMeshGroupPaintToolFreezeActions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshGroupPaintToolFreezeActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshGroupPaintToolFreezeActions",
               &Z_Registration_Info_UClass_UMeshGroupPaintToolFreezeActions.InnerSingleton,
               StaticRegisterNativesUMeshGroupPaintToolFreezeActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshGroupPaintToolFreezeActions>,
               InternalVTableHelperCtorCaller<UMeshGroupPaintToolFreezeActions>,local_res8,
               UMeshGroupPaintToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshGroupPaintToolFreezeActions.InnerSingleton;
}

// StaticRegisterNativesUMeshGroupPaintToolFreezeActions @ 14cd2eff0

void __cdecl
UMeshGroupPaintToolFreezeActions::StaticRegisterNativesUMeshGroupPaintToolFreezeActions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UMeshGroupPaintToolFreezeActions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClearAll @ 14cd3f830

void __cdecl
UMeshGroupPaintToolFreezeActions::execClearAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd3f87d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x6a8))(pUVar2,8,*(code **)(*(longlong *)pUVar2 + 0x6a8));
    return;
  }
  return;
}

// execClearCurrent @ 14cd3f8f0

void __cdecl
UMeshGroupPaintToolFreezeActions::execClearCurrent(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd3f93d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x6a8))(pUVar2,6,*(code **)(*(longlong *)pUVar2 + 0x6a8));
    return;
  }
  return;
}

// execFloodFillCurrent @ 14cd3fad0

void __cdecl
UMeshGroupPaintToolFreezeActions::execFloodFillCurrent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd3fb1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x6a8))(pUVar2,7,*(code **)(*(longlong *)pUVar2 + 0x6a8));
    return;
  }
  return;
}

// execFreezeCurrent @ 14cd3fb30

void __cdecl
UMeshGroupPaintToolFreezeActions::execFreezeCurrent(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd3fb7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x6a8))(pUVar2,2,*(code **)(*(longlong *)pUVar2 + 0x6a8));
    return;
  }
  return;
}

// execFreezeOthers @ 14cd3fb90

void __cdecl
UMeshGroupPaintToolFreezeActions::execFreezeOthers(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd3fbdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x6a8))(pUVar2,3,*(code **)(*(longlong *)pUVar2 + 0x6a8));
    return;
  }
  return;
}

// execGrowCurrent @ 14cd3fee0

void __cdecl
UMeshGroupPaintToolFreezeActions::execGrowCurrent(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd3ff2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x6a8))(pUVar2,4,*(code **)(*(longlong *)pUVar2 + 0x6a8));
    return;
  }
  return;
}

// execShrinkCurrent @ 14cd408a0

void __cdecl
UMeshGroupPaintToolFreezeActions::execShrinkCurrent(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd408ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x6a8))(pUVar2,5,*(code **)(*(longlong *)pUVar2 + 0x6a8));
    return;
  }
  return;
}

// execUnfreezeAll @ 14cd40900

void __cdecl
UMeshGroupPaintToolFreezeActions::execUnfreezeAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd4094d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x6a8))(pUVar2,1,*(code **)(*(longlong *)pUVar2 + 0x6a8));
    return;
  }
  return;
}

