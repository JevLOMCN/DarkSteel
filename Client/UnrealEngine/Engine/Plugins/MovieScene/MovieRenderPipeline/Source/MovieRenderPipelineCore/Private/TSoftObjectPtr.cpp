// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// Get @ 14dcca490

UDataLayerAsset * __thiscall
TSoftObjectPtr<UDataLayerAsset>::Get(TSoftObjectPtr<UDataLayerAsset> *this)

{
  int iVar1;
  UDataLayerAsset *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UDataLayerAsset *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UDataLayerAsset *)0x0) {
    pUVar3 = Z_Construct_UClass_UDataLayerAsset_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UDataLayerAsset *)0x0;
}

// Get @ 14dcca4e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall
TSoftObjectPtr<USceneComponent>::Get(TSoftObjectPtr<USceneComponent> *this)

{
  int iVar1;
  USceneComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (USceneComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (USceneComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USceneComponent *)0x0;
}

// LoadSynchronous @ 14dcd7ad0

UMovieGraphConfig * __thiscall
TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(TSoftObjectPtr<UMovieGraphConfig> *this)

{
  int iVar1;
  UMovieGraphConfig *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMovieGraphConfig *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (UMovieGraphConfig *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (UMovieGraphConfig *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (UMovieGraphConfig *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
  if (pUVar2 != (UMovieGraphConfig *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieGraphConfig_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMovieGraphConfig *)0x0;
}

// Get @ 14dd22e70

UMaterialParameterCollection * __thiscall
TSoftObjectPtr<UMaterialParameterCollection>::Get
          (TSoftObjectPtr<UMaterialParameterCollection> *this)

{
  int iVar1;
  UMaterialParameterCollection *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMaterialParameterCollection *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UMaterialParameterCollection *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMaterialParameterCollection *)0x0;
}

// Get @ 14dd22ec0

UMoviePipelineShotConfig * __thiscall
TSoftObjectPtr<UMoviePipelineShotConfig>::Get(TSoftObjectPtr<UMoviePipelineShotConfig> *this)

{
  int iVar1;
  UMoviePipelineShotConfig *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMoviePipelineShotConfig *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UMoviePipelineShotConfig *)0x0) {
    pUVar3 = Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMoviePipelineShotConfig *)0x0;
}

// LoadSynchronous @ 14dd36070

UMaterialParameterCollection * __thiscall
TSoftObjectPtr<UMaterialParameterCollection>::LoadSynchronous
          (TSoftObjectPtr<UMaterialParameterCollection> *this)

{
  int iVar1;
  UMaterialParameterCollection *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMaterialParameterCollection *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 == (UMaterialParameterCollection *)0x0) {
    if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
      return (UMaterialParameterCollection *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar2 = (UMaterialParameterCollection *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
  }
  if (pUVar2 != (UMaterialParameterCollection *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMaterialParameterCollection *)0x0;
}

// Get @ 14dd85ca0

UMovieGraphConfig * __thiscall
TSoftObjectPtr<UMovieGraphConfig>::Get(TSoftObjectPtr<UMovieGraphConfig> *this)

{
  int iVar1;
  UMovieGraphConfig *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMovieGraphConfig *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UMovieGraphConfig *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieGraphConfig_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMovieGraphConfig *)0x0;
}

