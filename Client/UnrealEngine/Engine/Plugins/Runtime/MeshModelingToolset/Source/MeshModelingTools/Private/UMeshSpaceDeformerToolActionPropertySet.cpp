// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cc8e900

UClass * __cdecl UMeshSpaceDeformerToolActionPropertySet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSpaceDeformerToolActionPropertySet",
               &Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet.InnerSingleton,
               StaticRegisterNativesUMeshSpaceDeformerToolActionPropertySet,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSpaceDeformerToolActionPropertySet>,
               InternalVTableHelperCtorCaller<UMeshSpaceDeformerToolActionPropertySet>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet.InnerSingleton;
}

// UMeshSpaceDeformerToolActionPropertySet @ 14ccbd860

UMeshSpaceDeformerToolActionPropertySet * __thiscall
UMeshSpaceDeformerToolActionPropertySet::UMeshSpaceDeformerToolActionPropertySet
          (UMeshSpaceDeformerToolActionPropertySet *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshSpaceDeformerToolActionPropertySet__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UMeshSpaceDeformerToolActionPropertySet @ 14ccbd890

UMeshSpaceDeformerToolActionPropertySet * __thiscall
UMeshSpaceDeformerToolActionPropertySet::UMeshSpaceDeformerToolActionPropertySet
          (UMeshSpaceDeformerToolActionPropertySet *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshSpaceDeformerToolActionPropertySet__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UMeshSpaceDeformerToolActionPropertySet @ 14ccc4160

void __thiscall
UMeshSpaceDeformerToolActionPropertySet::~UMeshSpaceDeformerToolActionPropertySet
          (UMeshSpaceDeformerToolActionPropertySet *this)

{
  this->_padding_ = (longlong)&___7UMeshSpaceDeformerToolActionPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd00370

UClass * __cdecl UMeshSpaceDeformerToolActionPropertySet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSpaceDeformerToolActionPropertySet",
               &Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet.InnerSingleton,
               StaticRegisterNativesUMeshSpaceDeformerToolActionPropertySet,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSpaceDeformerToolActionPropertySet>,
               InternalVTableHelperCtorCaller<UMeshSpaceDeformerToolActionPropertySet>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet.InnerSingleton;
}

// PostAction @ 14cd15ea0

void __thiscall
UMeshSpaceDeformerToolActionPropertySet::PostAction
          (UMeshSpaceDeformerToolActionPropertySet *this,EMeshSpaceDeformerToolAction param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ParentTool).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ParentTool).WeakPtr);
    if (*(int *)&pUVar2[8].field_0x10 == 0) {
      *(EMeshSpaceDeformerToolAction *)&pUVar2[8].field_0x10 = param_1;
    }
  }
  return;
}

// StaticRegisterNativesUMeshSpaceDeformerToolActionPropertySet @ 14cd2f090

void __cdecl
UMeshSpaceDeformerToolActionPropertySet::
StaticRegisterNativesUMeshSpaceDeformerToolActionPropertySet(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execShiftToCenter @ 14cd40840

void __cdecl
UMeshSpaceDeformerToolActionPropertySet::execShiftToCenter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
    if (*(int *)&pUVar2[8].field_0x10 == 0) {
      *(undefined4 *)&pUVar2[8].field_0x10 = 1;
    }
  }
  return;
}

