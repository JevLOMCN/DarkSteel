// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// operator<UObjectBase_const_*,FMeshMapBuildLegacyData>_TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData> @ 145ef9380

TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData> * __thiscall
TPairInitializer<UObjectBase_const_*_const_&,FMeshMapBuildLegacyData_const_&>::
operator<UObjectBase_const_*,FMeshMapBuildLegacyData>_TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>
          (TPairInitializer<UObjectBase_const_*_const_&,FMeshMapBuildLegacyData_const_&> *this,
          TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FMeshMapBuildLegacyData *pFVar3;
  FScriptContainerElement *_Src;
  
  pFVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(UObjectBase **)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->Data).ArrayNum;
  _Src = (pFVar3->Data).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 * 0x18);
  }
  return __return_storage_ptr__;
}

