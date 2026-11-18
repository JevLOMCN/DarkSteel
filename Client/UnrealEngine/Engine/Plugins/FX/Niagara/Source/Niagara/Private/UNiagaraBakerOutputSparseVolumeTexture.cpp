// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 148fe13a0

UClass * __cdecl UNiagaraBakerOutputSparseVolumeTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBakerOutputSparseVolumeTexture.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBakerOutputSparseVolumeTexture",
               &Z_Registration_Info_UClass_UNiagaraBakerOutputSparseVolumeTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraBakerOutputSparseVolumeTexture,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBakerOutputSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UNiagaraBakerOutputSparseVolumeTexture>,local_res8,
               UNiagaraBakerOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBakerOutputSparseVolumeTexture.InnerSingleton;
}

// UNiagaraBakerOutputSparseVolumeTexture @ 149023730

UNiagaraBakerOutputSparseVolumeTexture * __thiscall
UNiagaraBakerOutputSparseVolumeTexture::UNiagaraBakerOutputSparseVolumeTexture
          (UNiagaraBakerOutputSparseVolumeTexture *this,FVTableHelper *param_1)

{
  int iVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SourceBinding).DisplayString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceBinding).DisplayString.Data.ArrayNum = 0;
  (this->SourceBinding).DisplayString.Data.ArrayMax = 0;
  (this->SourceBinding).SourceName.ComparisonIndex = 0;
  (this->SourceBinding).SourceName.Number = 0;
  this->_padding_ = (longlong)&___7UNiagaraBakerOutputSparseVolumeTexture__6B_;
  (this->VolumeWorldSpaceSizeBinding).ResolvedParameter.Name.ComparisonIndex = 0;
  (this->VolumeWorldSpaceSizeBinding).ResolvedParameter.Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->VolumeWorldSpaceSizeBinding).ResolvedParameter.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->VolumeWorldSpaceSizeBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex = iVar1;
  ::FString::FString(&this->SparseVolumeTextureAssetPathFormat,
                     L"{AssetFolder}/{AssetName}_BakedSVT_{OutputName}");
  this->bEnableLoopedOutput = false;
  ::FString::FString(&this->LoopedSparseVolumeTextureAssetPathFormat,
                     L"{AssetFolder}/{AssetName}_Looped_BakedSVT_{OutputName}");
  this->StartTime = 4.0;
  this->BlendDuration = 2.0;
  return this;
}

// ~UNiagaraBakerOutputSparseVolumeTexture @ 149026520

void __thiscall
UNiagaraBakerOutputSparseVolumeTexture::~UNiagaraBakerOutputSparseVolumeTexture
          (UNiagaraBakerOutputSparseVolumeTexture *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraBakerOutputSparseVolumeTexture__6B_;
  pFVar1 = (this->LoopedSparseVolumeTextureAssetPathFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SparseVolumeTextureAssetPathFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceBinding).DisplayString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UNiagaraBakerOutput__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14903fed0

bool __thiscall
UNiagaraBakerOutputSparseVolumeTexture::Equals
          (UNiagaraBakerOutputSparseVolumeTexture *this,UNiagaraBakerOutput *param_1)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraBakerOutput *)0x0) {
    pFVar4 = GetTypeName<UNiagaraBakerOutputSparseVolumeTexture>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar3 = StaticClass();
  iVar2 = (int)pUVar3->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar3->_padding_)) {
    pFVar4 = GetTypeName<UNiagaraBakerOutputSparseVolumeTexture>(&local_28);
    pwVar6 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraBakerOutput_const_>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar5);
  }
  iVar2 = (int)this->_padding_;
  iVar1 = (param_1->OutputName).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)this->_padding_,
                         (wchar_t *)(param_1->OutputName).Data.AllocatorInstance.Data);
      bVar7 = iVar2 == 0;
      goto LAB_14903ff39;
    }
  }
  else {
    bVar7 = iVar2 + iVar1 == 1;
LAB_14903ff39:
    if (!bVar7) {
      return false;
    }
  }
  if ((this->SourceBinding).SourceName != (FName)param_1[1]._padding_) {
    return false;
  }
  if ((this->VolumeWorldSpaceSizeBinding).ResolvedParameter.Name != (FName)param_1[1]._padding_) {
    return false;
  }
  if ((this->VolumeWorldSpaceSizeBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex !=
      (int)param_1[1]._padding_) {
    return false;
  }
  iVar2 = (this->SparseVolumeTextureAssetPathFormat).Data.ArrayNum;
  iVar1 = param_1[1].OutputName.Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)
                         (this->SparseVolumeTextureAssetPathFormat).Data.AllocatorInstance.Data,
                         (wchar_t *)param_1[1].OutputName.Data.AllocatorInstance.Data);
      bVar7 = iVar2 == 0;
      goto LAB_14903ff91;
    }
  }
  else {
    bVar7 = iVar2 + iVar1 == 1;
LAB_14903ff91:
    if (!bVar7) {
      return false;
    }
  }
  if (this->bEnableLoopedOutput != (bool)(char)param_1[2]._padding_) {
    return false;
  }
  iVar2 = (this->LoopedSparseVolumeTextureAssetPathFormat).Data.ArrayNum;
  iVar1 = (int)param_1[2]._padding_;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_14903ffd3;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)
                       (this->LoopedSparseVolumeTextureAssetPathFormat).Data.AllocatorInstance.Data,
                       (wchar_t *)param_1[2]._padding_);
    bVar7 = iVar2 == 0;
  }
  else {
    bVar7 = iVar2 + iVar1 == 1;
  }
  if (!bVar7) {
    return false;
  }
LAB_14903ffd3:
  if ((*(float *)&param_1[2]._padding_ == this->StartTime) &&
     (*(float *)((longlong)&param_1[2]._padding_ + 4) == this->BlendDuration)) {
    return true;
  }
  return false;
}

// GetPrivateStaticClass @ 149047e80

UClass * __cdecl UNiagaraBakerOutputSparseVolumeTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBakerOutputSparseVolumeTexture.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBakerOutputSparseVolumeTexture",
               &Z_Registration_Info_UClass_UNiagaraBakerOutputSparseVolumeTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraBakerOutputSparseVolumeTexture,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBakerOutputSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UNiagaraBakerOutputSparseVolumeTexture>,local_res8,
               UNiagaraBakerOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBakerOutputSparseVolumeTexture.InnerSingleton;
}

// StaticRegisterNativesUNiagaraBakerOutputSparseVolumeTexture @ 14906a470

void __cdecl
UNiagaraBakerOutputSparseVolumeTexture::StaticRegisterNativesUNiagaraBakerOutputSparseVolumeTexture
          (void)

{
  return;
}

