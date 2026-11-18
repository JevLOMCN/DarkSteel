// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// StaticStruct @ 1421f2350

UScriptStruct * __cdecl FSoftClassPath::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoftClassPath.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FSoftClassPath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoftClassPath,(UObject *)pUVar1,L"SoftClassPath"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FSoftClassPath.OuterSingleton;
}

// GetOrCreateIDForClass @ 14220dd50

FSoftClassPath * __cdecl
FSoftClassPath::GetOrCreateIDForClass(FSoftClassPath *__return_storage_ptr__,UClass *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSoftClassPath *pFVar3;
  
  if (param_1 == (UClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SoftObjectPath.cpp"
                       ,0x41f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSoftClassPath *)(*pcVar1)();
      return pFVar3;
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  FSoftObjectPath::SetPath((FSoftObjectPath *)__return_storage_ptr__,(UObject *)param_1);
  return __return_storage_ptr__;
}

// ResolveClass @ 14221b8c0

UClass * __thiscall FSoftClassPath::ResolveClass(FSoftClassPath *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  if (*(longlong *)this != 0) {
    bVar2 = IsInGameThread();
    if ((!bVar2) || (GIsSavingPackage == false)) {
      pUVar3 = (UClass *)FSoftObjectPath::ResolveObjectInternal((FSoftObjectPath *)this);
      if (pUVar3 != (UClass *)0x0) {
        pUVar4 = Z_Construct_UClass_UClass_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          return pUVar3;
        }
      }
    }
  }
  return (UClass *)0x0;
}

// SerializeFromMismatchedTag @ 14222a010

bool __thiscall
FSoftClassPath::SerializeFromMismatchedTag
          (FSoftClassPath *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  bool bVar1;
  FArchive *pFVar2;
  int iVar3;
  FSlotBase local_res18 [2];
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  FSoftObjectPath::ToString((FSoftObjectPath *)this,&local_28);
  bVar1 = SerializeFromMismatchedTagTemplate<_FSoftClassPath::SerializeFromMismatchedTag_::__l2::UClassTypePolicy>
                    (&local_28,param_1,(FStructuredArchiveSlot)local_res18[0].StructuredArchive);
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  if ((pFVar2->field_0x28 & 1) != 0) {
    iVar3 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    local_18.Size = iVar3;
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath((FSoftObjectPath *)this,&local_18);
    UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

