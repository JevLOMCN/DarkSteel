// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cd42fd0

UClass * __cdecl UUVProjectionToolEditActions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVProjectionToolEditActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVProjectionToolEditActions",
               &Z_Registration_Info_UClass_UUVProjectionToolEditActions.InnerSingleton,
               StaticRegisterNativesUUVProjectionToolEditActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UUVProjectionToolEditActions>,
               InternalVTableHelperCtorCaller<UUVProjectionToolEditActions>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVProjectionToolEditActions.InnerSingleton;
}

// UUVProjectionToolEditActions @ 14cd51ef0

UUVProjectionToolEditActions * __thiscall
UUVProjectionToolEditActions::UUVProjectionToolEditActions
          (UUVProjectionToolEditActions *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UUVProjectionToolEditActions__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UUVProjectionToolEditActions @ 14cd51f20

UUVProjectionToolEditActions * __thiscall
UUVProjectionToolEditActions::UUVProjectionToolEditActions
          (UUVProjectionToolEditActions *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UUVProjectionToolEditActions__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UUVProjectionToolEditActions @ 14cd53ad0

void __thiscall
UUVProjectionToolEditActions::~UUVProjectionToolEditActions(UUVProjectionToolEditActions *this)

{
  this->_padding_ = (longlong)&___7UUVProjectionToolEditActions__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6ebd0

UClass * __cdecl UUVProjectionToolEditActions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVProjectionToolEditActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVProjectionToolEditActions",
               &Z_Registration_Info_UClass_UUVProjectionToolEditActions.InnerSingleton,
               StaticRegisterNativesUUVProjectionToolEditActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UUVProjectionToolEditActions>,
               InternalVTableHelperCtorCaller<UUVProjectionToolEditActions>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVProjectionToolEditActions.InnerSingleton;
}

// PostAction @ 14cd76600

void __thiscall
UUVProjectionToolEditActions::PostAction
          (UUVProjectionToolEditActions *this,EUVProjectionToolActions param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ParentTool).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ParentTool).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,param_1);
  }
  return;
}

// StaticRegisterNativesUUVProjectionToolEditActions @ 14cd81560

void __cdecl UUVProjectionToolEditActions::StaticRegisterNativesUUVProjectionToolEditActions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UUVProjectionToolEditActions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAutoFit @ 14cd868e0

void __cdecl
UUVProjectionToolEditActions::execAutoFit(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd8692d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,1,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execAutoFitAlign @ 14cd86940

void __cdecl
UUVProjectionToolEditActions::execAutoFitAlign(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd8698d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,2,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

// execReset @ 14cd869a0

void __cdecl UUVProjectionToolEditActions::execReset(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd869ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,3,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

