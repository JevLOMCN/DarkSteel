// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14ca408b0

UClass * __cdecl UGeometrySelectionEditCommandResult::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometrySelectionEditCommandResult.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"GeometrySelectionEditCommandResult",
               &Z_Registration_Info_UClass_UGeometrySelectionEditCommandResult.InnerSingleton,
               StaticRegisterNativesUGeometrySelectionEditCommandResult,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometrySelectionEditCommandResult>,
               InternalVTableHelperCtorCaller<UGeometrySelectionEditCommandResult>,local_res8,
               UInteractiveCommandResult::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometrySelectionEditCommandResult.InnerSingleton;
}

// UGeometrySelectionEditCommandResult @ 14ca67a60

UGeometrySelectionEditCommandResult * __thiscall
UGeometrySelectionEditCommandResult::UGeometrySelectionEditCommandResult
          (UGeometrySelectionEditCommandResult *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UInteractiveCommandResult::UInteractiveCommandResult((UInteractiveCommandResult *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometrySelectionEditCommandResult__6B_;
  this_00 = &(this->SourceHandle).Identifier.TargetObject;
  (this->SourceHandle).Identifier.TargetType = PrimitiveComponent;
  (this->SourceHandle).Identifier.ObjectType = Unknown;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->SourceHandle).Selector = (IGeometrySelector *)0x0;
  (this->OutputSelection).ElementType = Face;
  (this->OutputSelection).TopologyType = Triangle;
  *(undefined8 *)&(this->OutputSelection).Selection.Elements = 0;
  *(undefined8 *)&(this->OutputSelection).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OutputSelection).Selection.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OutputSelection).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OutputSelection).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputSelection).Selection.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputSelection).Selection.Elements.field_0x34 = 0;
  (this->OutputSelection).Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OutputSelection).Selection.HashSize = 0;
  return this;
}

// UGeometrySelectionEditCommandResult @ 14ca67b00

UGeometrySelectionEditCommandResult * __thiscall
UGeometrySelectionEditCommandResult::UGeometrySelectionEditCommandResult
          (UGeometrySelectionEditCommandResult *this,FObjectInitializer *param_1)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UInteractiveCommandResult::UInteractiveCommandResult((UInteractiveCommandResult *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometrySelectionEditCommandResult__6B_;
  this_00 = &(this->SourceHandle).Identifier.TargetObject;
  (this->SourceHandle).Identifier.TargetType = PrimitiveComponent;
  (this->SourceHandle).Identifier.ObjectType = Unknown;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->SourceHandle).Selector = (IGeometrySelector *)0x0;
  (this->OutputSelection).ElementType = Face;
  (this->OutputSelection).TopologyType = Triangle;
  *(undefined8 *)&(this->OutputSelection).Selection.Elements = 0;
  *(undefined8 *)&(this->OutputSelection).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OutputSelection).Selection.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OutputSelection).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OutputSelection).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputSelection).Selection.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputSelection).Selection.Elements.field_0x34 = 0;
  (this->OutputSelection).Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OutputSelection).Selection.HashSize = 0;
  return this;
}

// ~UGeometrySelectionEditCommandResult @ 14ca6b600

void __thiscall
UGeometrySelectionEditCommandResult::~UGeometrySelectionEditCommandResult
          (UGeometrySelectionEditCommandResult *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UGeometrySelectionEditCommandResult__6B_;
  (this->OutputSelection).Selection.HashSize = 0;
  FVar1 = (this->OutputSelection).Selection.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OutputSelection).Selection.Elements);
  UInteractiveCommandResult::~UInteractiveCommandResult((UInteractiveCommandResult *)this);
  return;
}

// GetPrivateStaticClass @ 14ca91370

UClass * __cdecl UGeometrySelectionEditCommandResult::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometrySelectionEditCommandResult.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"GeometrySelectionEditCommandResult",
               &Z_Registration_Info_UClass_UGeometrySelectionEditCommandResult.InnerSingleton,
               StaticRegisterNativesUGeometrySelectionEditCommandResult,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometrySelectionEditCommandResult>,
               InternalVTableHelperCtorCaller<UGeometrySelectionEditCommandResult>,local_res8,
               UInteractiveCommandResult::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometrySelectionEditCommandResult.InnerSingleton;
}

// StaticRegisterNativesUGeometrySelectionEditCommandResult @ 14caa7130

void __cdecl
UGeometrySelectionEditCommandResult::StaticRegisterNativesUGeometrySelectionEditCommandResult(void)

{
  return;
}

