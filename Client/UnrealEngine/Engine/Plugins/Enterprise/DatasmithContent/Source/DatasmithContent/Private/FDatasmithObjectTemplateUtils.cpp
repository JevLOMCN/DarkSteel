// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 7

// FindOrCreateDatasmithUserData @ 14e2fa510

UDatasmithAssetUserData * __cdecl
FDatasmithObjectTemplateUtils::FindOrCreateDatasmithUserData(UObject *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  IInterface_AssetUserData *this;
  UDatasmithAssetUserData *pUVar6;
  UObject *pUVar7;
  UObjectBaseUtility *this_00;
  
  if (param_1 != (UObject *)0x0) {
    lVar2 = *(longlong *)&param_1->field_0x10;
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    this_00 = (UObjectBaseUtility *)param_1;
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = Z_Construct_UClass_AActor_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
           (pUVar7 = param_1,
           (longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar4->_padding_)) {
          pUVar7 = (UObject *)0x0;
        }
        this_00 = *(UObjectBaseUtility **)(pUVar7 + 0xb);
        if (this_00 == (UObjectBaseUtility *)0x0) {
          return (UDatasmithAssetUserData *)0x0;
        }
      }
    }
    pUVar4 = *(UClass **)&this_00->field_0x10;
    pUVar5 = Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
    bVar3 = UClass::ImplementsInterface(pUVar4,pUVar5);
    if (bVar3) {
      pUVar4 = Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
      this = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar4);
      if (this != (IInterface_AssetUserData *)0x0) {
        pUVar6 = IInterface_AssetUserData::GetAssetUserData<UDatasmithAssetUserData>(this);
        if (pUVar6 == (UDatasmithAssetUserData *)0x0) {
          lVar2 = *(longlong *)&param_1->field_0x10;
          pUVar4 = Z_Construct_UClass_AActor_NoRegister();
          if (pUVar4 != (UClass *)0x0) {
            iVar1 = (int)pUVar4->_padding_;
            if ((*(int *)(lVar2 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar4->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              param_1 = *(UObject **)(param_1 + 0xb);
            }
          }
          pUVar6 = NewObject<UDatasmithAssetUserData>
                             (param_1,(FName)0x0,RF_Public,(UObject *)0x0,false,
                              (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
          (**(code **)((longlong)*this + 0x10))(this,pUVar6);
          return pUVar6;
        }
        return pUVar6;
      }
    }
  }
  return (UDatasmithAssetUserData *)0x0;
}

// FindOrCreateObjectTemplates @ 14e2fa680

TMap<TSubclassOf<UDatasmithObjectTemplate>,TObjectPtr<UDatasmithObjectTemplate>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UDatasmithObjectTemplate>,TObjectPtr<UDatasmithObjectTemplate>,0>_>
* __cdecl FDatasmithObjectTemplateUtils::FindOrCreateObjectTemplates(UObject *param_1)

{
  return (TMap<TSubclassOf<UDatasmithObjectTemplate>,TObjectPtr<UDatasmithObjectTemplate>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UDatasmithObjectTemplate>,TObjectPtr<UDatasmithObjectTemplate>,0>_>
          *)0x0;
}

// GetObjectTemplate @ 14e2fba00

UDatasmithObjectTemplate * __cdecl
FDatasmithObjectTemplateUtils::GetObjectTemplate
          (UObject *param_1,TSubclassOf<UDatasmithObjectTemplate> param_2)

{
  return (UDatasmithObjectTemplate *)0x0;
}

// HasObjectTemplates @ 14e2fd980

bool __cdecl FDatasmithObjectTemplateUtils::HasObjectTemplates(UObject *param_1)

{
  return false;
}

// SetObjectTemplate @ 14e2feb80

void __cdecl
FDatasmithObjectTemplateUtils::SetObjectTemplate(UObject *param_1,UDatasmithObjectTemplate *param_2)

{
  return;
}

// SetsEquals @ 14e2feb90

bool __cdecl
FDatasmithObjectTemplateUtils::SetsEquals
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2)

{
  bool bVar1;
  
  if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 ==
      *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34) {
    bVar1 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Includes(param_1,param_2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// ThreeWaySetMerge @ 14e2feec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __cdecl
FDatasmithObjectTemplateUtils::ThreeWaySetMerge
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_3)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this;
  undefined1 auStack_148 [32];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_128;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_d8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Difference(param_1,&local_d8,param_2);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Difference(param_2,&local_128,param_1);
  this = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Union
                   (param_3,&local_88,&local_128);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Difference
            (this,__return_storage_ptr__,&local_d8);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  local_128.HashSize = 0;
  if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Elements);
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.Elements);
  return __return_storage_ptr__;
}

