// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 21

// ~TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument> @ 14b34eb50

void __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument>::
~TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument>
          (TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument> *this)

{
  return;
}

// ~TMetasoundUObjectRegistryEntry<UMetaSoundPatch> @ 14b34eb60

void __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundPatch>::
~TMetasoundUObjectRegistryEntry<UMetaSoundPatch>
          (TMetasoundUObjectRegistryEntry<UMetaSoundPatch> *this)

{
  return;
}

// ~TMetasoundUObjectRegistryEntry<UMetaSoundSource> @ 14b34eb70

void __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundSource>::
~TMetasoundUObjectRegistryEntry<UMetaSoundSource>
          (TMetasoundUObjectRegistryEntry<UMetaSoundSource> *this)

{
  return;
}

// Cast @ 14b3681f0

FMetasoundAssetBase * __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument>::Cast
          (TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument> *this,UObject *param_1)

{
  return (FMetasoundAssetBase *)0x0;
}

// Cast @ 14b368200

FMetasoundAssetBase * __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument>::Cast
          (TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument> *this,UObject *param_1)

{
  return (FMetasoundAssetBase *)0x0;
}

// Cast @ 14b368210

FMetasoundAssetBase * __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundPatch>::Cast
          (TMetasoundUObjectRegistryEntry<UMetaSoundPatch> *this,UObject *param_1)

{
  UMetaSoundPatch *pUVar1;
  FMetasoundAssetBase *pFVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = CastChecked<UMetaSoundPatch,UObject>(param_1);
    pFVar2 = (FMetasoundAssetBase *)&pUVar1->_padding_;
    if (pUVar1 == (UMetaSoundPatch *)0x0) {
      pFVar2 = (FMetasoundAssetBase *)0x0;
    }
    return pFVar2;
  }
  return (FMetasoundAssetBase *)0x0;
}

// Cast @ 14b368250

FMetasoundAssetBase * __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundPatch>::Cast
          (TMetasoundUObjectRegistryEntry<UMetaSoundPatch> *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    return (FMetasoundAssetBase *)0x0;
  }
  pUVar2 = UMetaSoundPatch::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (FMetasoundAssetBase *)(param_1 + 1);
  }
  pFVar3 = GetTypeName<UMetaSoundPatch_const_>(&local_28);
  pwVar5 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar4);
}

// Cast @ 14b3682f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FMetasoundAssetBase * __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundSource>::Cast
          (TMetasoundUObjectRegistryEntry<UMetaSoundSource> *this,UObject *param_1)

{
  UMetaSoundSource *pUVar1;
  FMetasoundAssetBase *pFVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = CastChecked<UMetaSoundSource,UObject>(param_1);
    pFVar2 = (FMetasoundAssetBase *)&pUVar1->field_0x468;
    if (pUVar1 == (UMetaSoundSource *)0x0) {
      pFVar2 = (FMetasoundAssetBase *)0x0;
    }
    return pFVar2;
  }
  return (FMetasoundAssetBase *)0x0;
}

// Cast @ 14b368330

FMetasoundAssetBase * __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundSource>::Cast
          (TMetasoundUObjectRegistryEntry<UMetaSoundSource> *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    return (FMetasoundAssetBase *)0x0;
  }
  pUVar2 = UMetaSoundSource::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (FMetasoundAssetBase *)&param_1[0x1c].field_0x8;
  }
  pFVar3 = GetTypeName<UMetaSoundSource_const_>(&local_28);
  pwVar5 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar4);
}

// GetUClass @ 14b3c1fb0

UClass * __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument>::GetUClass
          (TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument> *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundBuilderDocument.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundFrontend",L"MetaSoundBuilderDocument",
               &Z_Registration_Info_UClass_UMetaSoundBuilderDocument.InnerSingleton,
               UMetaSoundBuilderDocument::StaticRegisterNativesUMetaSoundBuilderDocument,0x1d0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMetaSoundBuilderDocument>,
               InternalVTableHelperCtorCaller<UMetaSoundBuilderDocument>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundBuilderDocument.InnerSingleton;
}

// GetUClass @ 14b3c1fc0

UClass * __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundPatch>::GetUClass
          (TMetasoundUObjectRegistryEntry<UMetaSoundPatch> *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundPatch",
               &Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton,
               UMetaSoundPatch::StaticRegisterNativesUMetaSoundPatch,0x308,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaSoundPatch>,
               InternalVTableHelperCtorCaller<UMetaSoundPatch>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton;
}

// GetUClass @ 14b3c1fd0

UClass * __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundSource>::GetUClass
          (TMetasoundUObjectRegistryEntry<UMetaSoundSource> *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundSource",
               &Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton,
               UMetaSoundSource::StaticRegisterNativesUMetaSoundSource,0x8c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMetaSoundSource>,
               InternalVTableHelperCtorCaller<UMetaSoundSource>,aFStackX_8,
               USoundWaveProcedural::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundSource.InnerSingleton;
}

// IsAssetType @ 14b3c7f30

bool __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument>::IsAssetType
          (TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument> *this)

{
  return false;
}

// IsAssetType @ 14b3c7f40

bool __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundPatch>::IsAssetType
          (TMetasoundUObjectRegistryEntry<UMetaSoundPatch> *this)

{
  return true;
}

// IsAssetType @ 14b3c7f50

bool __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundSource>::IsAssetType
          (TMetasoundUObjectRegistryEntry<UMetaSoundSource> *this)

{
  return true;
}

// IsChildClass @ 14b3c7f70

bool __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument>::IsChildClass
          (TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument> *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UClass *)0x0) {
    pUVar2 = Z_Construct_UClass_UMetaSoundBuilderDocument_NoRegister();
    if (pUVar2 != (UClass *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

// IsChildClass @ 14b3c7fc0

bool __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument>::IsChildClass
          (TMetasoundUObjectRegistryEntry<UMetaSoundBuilderDocument> *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UMetaSoundBuilderDocument_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return true;
    }
  }
  return false;
}

// IsChildClass @ 14b3c8010

bool __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundPatch>::IsChildClass
          (TMetasoundUObjectRegistryEntry<UMetaSoundPatch> *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UClass *)0x0) {
    pUVar2 = UMetaSoundPatch::StaticClass();
    if (pUVar2 != (UClass *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

// IsChildClass @ 14b3c8060

bool __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundPatch>::IsChildClass
          (TMetasoundUObjectRegistryEntry<UMetaSoundPatch> *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UMetaSoundPatch::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return true;
    }
  }
  return false;
}

// IsChildClass @ 14b3c80b0

bool __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundSource>::IsChildClass
          (TMetasoundUObjectRegistryEntry<UMetaSoundSource> *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UClass *)0x0) {
    pUVar2 = UMetaSoundSource::StaticClass();
    if (pUVar2 != (UClass *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

// IsChildClass @ 14b3c8100

bool __thiscall
Metasound::TMetasoundUObjectRegistryEntry<UMetaSoundSource>::IsChildClass
          (TMetasoundUObjectRegistryEntry<UMetaSoundSource> *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UMetaSoundSource::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return true;
    }
  }
  return false;
}

