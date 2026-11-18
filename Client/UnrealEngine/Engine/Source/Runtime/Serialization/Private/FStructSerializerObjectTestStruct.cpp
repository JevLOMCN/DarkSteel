// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 3

// StaticStruct @ 148b87070

UScriptStruct * __cdecl FStructSerializerObjectTestStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerObjectTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerObjectTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct,
                         (UObject *)pUVar1,L"StructSerializerObjectTestStruct");
  }
  return Z_Registration_Info_UScriptStruct_FStructSerializerObjectTestStruct.OuterSingleton;
}

// FStructSerializerObjectTestStruct @ 148b9e810

FStructSerializerObjectTestStruct * __thiscall
FStructSerializerObjectTestStruct::FStructSerializerObjectTestStruct
          (FStructSerializerObjectTestStruct *this)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  
  (this->RawClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->WrappedClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SubClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  puVar1 = &(this->SoftClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SoftClass).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SoftClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->SoftClass).SoftObjectPtr,(FObjectPtr)&local_res8);
  (this->RawObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->WrappedObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->WeakObject).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->WeakObject).WeakPtr,(FObjectPtr)&local_res8);
  puVar1 = &(this->SoftObject).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SoftObject).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SoftObject).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftObject).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftObject).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->SoftObject).SoftObjectPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&(this->ClassPath).field_0x0 = 0;
  *(undefined8 *)&(this->ClassPath).field_0x8 = 0;
  *(undefined8 *)&(this->ClassPath).field_0x10 = 0;
  *(undefined8 *)&(this->ClassPath).field_0x18 = 0;
  FSoftObjectPath::SetPath((FSoftObjectPath *)&this->ClassPath,(UObject *)0x0);
  (this->ObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ObjectPath).AssetPath.PackageName.Number = 0;
  (this->ObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ObjectPath).AssetPath.AssetName.Number = 0;
  (this->ObjectPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->ObjectPath).SubPathString.Data.ArrayMax = 0;
  return this;
}

// operator= @ 148ba1880

FStructSerializerObjectTestStruct * __thiscall
FStructSerializerObjectTestStruct::operator=
          (FStructSerializerObjectTestStruct *this,FStructSerializerObjectTestStruct *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  undefined8 uVar3;
  FName FVar4;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->RawClass).field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->RawClass).field0_0x0 = (param_1->RawClass).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->WrappedClass).field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->WrappedClass).field0_0x0 = (param_1->WrappedClass).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SubClass).Class.field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->SubClass).Class.field0_0x0 = (param_1->SubClass).Class.field0_0x0;
  *(undefined8 *)&(this->SoftClass).SoftObjectPtr =
       *(undefined8 *)&(param_1->SoftClass).SoftObjectPtr;
  uVar3 = *(undefined8 *)&(param_1->SoftClass).SoftObjectPtr.field_0x10;
  *(undefined8 *)&(this->SoftClass).SoftObjectPtr.field_0x8 =
       *(undefined8 *)&(param_1->SoftClass).SoftObjectPtr.field_0x8;
  *(undefined8 *)&(this->SoftClass).SoftObjectPtr.field_0x10 = uVar3;
  FUtf8String::operator=
            ((FUtf8String *)&(this->SoftClass).SoftObjectPtr.field_0x18,
             (FUtf8String *)&(param_1->SoftClass).SoftObjectPtr.field_0x18);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->RawObject).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  (this->RawObject).field0_0x0 = (param_1->RawObject).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->WrappedObject).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  (this->WrappedObject).field0_0x0 = (param_1->WrappedObject).field0_0x0;
  (this->WeakObject).WeakPtr = (param_1->WeakObject).WeakPtr;
  *(undefined8 *)&(this->SoftObject).SoftObjectPtr =
       *(undefined8 *)&(param_1->SoftObject).SoftObjectPtr;
  uVar3 = *(undefined8 *)&(param_1->SoftObject).SoftObjectPtr.field_0x10;
  *(undefined8 *)&(this->SoftObject).SoftObjectPtr.field_0x8 =
       *(undefined8 *)&(param_1->SoftObject).SoftObjectPtr.field_0x8;
  *(undefined8 *)&(this->SoftObject).SoftObjectPtr.field_0x10 = uVar3;
  FUtf8String::operator=
            ((FUtf8String *)&(this->SoftObject).SoftObjectPtr.field_0x18,
             (FUtf8String *)&(param_1->SoftObject).SoftObjectPtr.field_0x18);
  uVar3 = *(undefined8 *)&(param_1->ClassPath).field_0x8;
  *(undefined8 *)&this->ClassPath = *(undefined8 *)&param_1->ClassPath;
  *(undefined8 *)&(this->ClassPath).field_0x8 = uVar3;
  FUtf8String::operator=
            ((FUtf8String *)&(this->ClassPath).field_0x10,
             (FUtf8String *)&(param_1->ClassPath).field_0x10);
  FVar4 = (param_1->ObjectPath).AssetPath.AssetName;
  (this->ObjectPath).AssetPath.PackageName = (param_1->ObjectPath).AssetPath.PackageName;
  (this->ObjectPath).AssetPath.AssetName = FVar4;
  FUtf8String::operator=(&(this->ObjectPath).SubPathString,&(param_1->ObjectPath).SubPathString);
  return this;
}

