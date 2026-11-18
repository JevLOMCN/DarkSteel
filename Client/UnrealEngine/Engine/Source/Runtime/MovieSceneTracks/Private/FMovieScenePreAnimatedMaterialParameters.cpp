// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// FMovieScenePreAnimatedMaterialParameters @ 14675fef0

FMovieScenePreAnimatedMaterialParameters * __thiscall
FMovieScenePreAnimatedMaterialParameters::FMovieScenePreAnimatedMaterialParameters
          (FMovieScenePreAnimatedMaterialParameters *this,
          FMovieScenePreAnimatedMaterialParameters *param_1)

{
  UMaterialInterface *pUVar1;
  undefined8 uVar2;
  
  pUVar1 = (param_1->PreviousMaterial).field0_0x0.DebugPtr;
  (this->PreviousMaterial).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)&(this->SoftPreviousMaterial).SoftObjectPtr =
       *(undefined8 *)&(param_1->SoftPreviousMaterial).SoftObjectPtr;
  uVar2 = *(undefined8 *)&(param_1->SoftPreviousMaterial).SoftObjectPtr.field_0x10;
  *(undefined8 *)&(this->SoftPreviousMaterial).SoftObjectPtr.field_0x8 =
       *(undefined8 *)&(param_1->SoftPreviousMaterial).SoftObjectPtr.field_0x8;
  *(undefined8 *)&(this->SoftPreviousMaterial).SoftObjectPtr.field_0x10 = uVar2;
  *(undefined8 *)&(this->SoftPreviousMaterial).SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->SoftPreviousMaterial).SoftObjectPtr.field_0x18 =
       *(undefined8 *)&(param_1->SoftPreviousMaterial).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(param_1->SoftPreviousMaterial).SoftObjectPtr.field_0x18 = 0;
  *(undefined4 *)&(this->SoftPreviousMaterial).SoftObjectPtr.field_0x20 =
       *(undefined4 *)&(param_1->SoftPreviousMaterial).SoftObjectPtr.field_0x20;
  *(undefined4 *)&(this->SoftPreviousMaterial).SoftObjectPtr.field_0x24 =
       *(undefined4 *)&(param_1->SoftPreviousMaterial).SoftObjectPtr.field_0x24;
  *(undefined8 *)&(param_1->SoftPreviousMaterial).SoftObjectPtr.field_0x20 = 0;
  return this;
}

// StaticStruct @ 1467cd260

UScriptStruct * __cdecl FMovieScenePreAnimatedMaterialParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieScenePreAnimatedMaterialParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieScenePreAnimatedMaterialParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters,
                         (UObject *)pUVar1,L"MovieScenePreAnimatedMaterialParameters");
  }
  return Z_Registration_Info_UScriptStruct_FMovieScenePreAnimatedMaterialParameters.OuterSingleton;
}

// GetMaterial @ 146834aa0

UMaterialInterface * __thiscall
FMovieScenePreAnimatedMaterialParameters::GetMaterial
          (FMovieScenePreAnimatedMaterialParameters *this)

{
  TSoftObjectPtr<UMaterialInterface> *this_00;
  int iVar1;
  UMaterialInterface *pUVar2;
  UClass *pUVar3;
  
  if (!UE::MovieScene::GUseSoftObjectPtrsForPreAnimatedMaterial) {
    return (this->PreviousMaterial).field0_0x0.DebugPtr;
  }
  this_00 = &this->SoftPreviousMaterial;
  pUVar2 = (UMaterialInterface *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar2 != (UMaterialInterface *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  pUVar2 = (UMaterialInterface *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar2 == (UMaterialInterface *)0x0) {
    if (*(longlong *)&(this->SoftPreviousMaterial).SoftObjectPtr.field_0x8 == 0) {
      return (UMaterialInterface *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftPreviousMaterial).SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar2 = (UMaterialInterface *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  }
  if (pUVar2 != (UMaterialInterface *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMaterialInterface *)0x0;
}

// SetMaterial @ 14686bda0

void __thiscall
FMovieScenePreAnimatedMaterialParameters::SetMaterial
          (FMovieScenePreAnimatedMaterialParameters *this,UMaterialInterface *param_1)

{
  UMaterialInterface *local_res18 [2];
  
  if (UE::MovieScene::GUseSoftObjectPtrsForPreAnimatedMaterial) {
    local_res18[0] = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FSoftObjectPtr::operator=(&(this->SoftPreviousMaterial).SoftObjectPtr,(FObjectPtr)local_res18);
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->PreviousMaterial).field0_0x0.DebugPtr = param_1;
  return;
}

