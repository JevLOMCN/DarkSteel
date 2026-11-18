// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cc91900

UClass * __cdecl UHoleFillToolActions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHoleFillToolActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"HoleFillToolActions",
               &Z_Registration_Info_UClass_UHoleFillToolActions.InnerSingleton,
               StaticRegisterNativesUHoleFillToolActions,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UHoleFillToolActions>,
               InternalVTableHelperCtorCaller<UHoleFillToolActions>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHoleFillToolActions.InnerSingleton;
}

// UHoleFillToolActions @ 14ccbb0c0

UHoleFillToolActions * __thiscall
UHoleFillToolActions::UHoleFillToolActions(UHoleFillToolActions *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UHoleFillToolActions__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UHoleFillToolActions @ 14ccbb0f0

UHoleFillToolActions * __thiscall
UHoleFillToolActions::UHoleFillToolActions(UHoleFillToolActions *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UHoleFillToolActions__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UHoleFillToolActions @ 14ccc35d0

void __thiscall UHoleFillToolActions::~UHoleFillToolActions(UHoleFillToolActions *this)

{
  this->_padding_ = (longlong)&___7UHoleFillToolActions__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccff190

UClass * __cdecl UHoleFillToolActions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHoleFillToolActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"HoleFillToolActions",
               &Z_Registration_Info_UClass_UHoleFillToolActions.InnerSingleton,
               StaticRegisterNativesUHoleFillToolActions,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UHoleFillToolActions>,
               InternalVTableHelperCtorCaller<UHoleFillToolActions>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHoleFillToolActions.InnerSingleton;
}

// PostAction @ 14cd15d50

void __thiscall
UHoleFillToolActions::PostAction(UHoleFillToolActions *this,EHoleFillToolActions param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ParentTool).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ParentTool).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x3c8))(pUVar2,param_1);
  }
  return;
}

// StaticRegisterNativesUHoleFillToolActions @ 14cd2ee20

void __cdecl UHoleFillToolActions::StaticRegisterNativesUHoleFillToolActions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UHoleFillToolActions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClear @ 14cd3f7d0

void __cdecl UHoleFillToolActions::execClear(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd3f81d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x3c8))(pUVar2,2,*(code **)(*(longlong *)pUVar2 + 0x3c8));
    return;
  }
  return;
}

// execSelectAll @ 14cd402e0

void __cdecl UHoleFillToolActions::execSelectAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd4032d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x3c8))(pUVar2,1,*(code **)(*(longlong *)pUVar2 + 0x3c8));
    return;
  }
  return;
}

