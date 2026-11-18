// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 148fe1e80

UClass * __cdecl UNiagaraBakerOutputTexture2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBakerOutputTexture2D",
               &Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D.InnerSingleton,
               StaticRegisterNativesUNiagaraBakerOutputTexture2D,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBakerOutputTexture2D>,
               InternalVTableHelperCtorCaller<UNiagaraBakerOutputTexture2D>,local_res8,
               UNiagaraBakerOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D.InnerSingleton;
}

// UNiagaraBakerOutputTexture2D @ 149023840

UNiagaraBakerOutputTexture2D * __thiscall
UNiagaraBakerOutputTexture2D::UNiagaraBakerOutputTexture2D
          (UNiagaraBakerOutputTexture2D *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->FrameSize).field0_0x0._s_0.X = 0x80;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SourceBinding).DisplayString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceBinding).DisplayString.Data.ArrayNum = 0;
  (this->SourceBinding).DisplayString.Data.ArrayMax = 0;
  (this->SourceBinding).SourceName.ComparisonIndex = 0;
  (this->SourceBinding).SourceName.Number = 0;
  this->TextureAddressX = '\0';
  this->TextureAddressY = '\0';
  this->_padding_ = (longlong)&___7UNiagaraBakerOutputTexture2D__6B_;
  (this->FrameSize).field0_0x0._s_0.Y = 0x80;
  (this->AtlasTextureSize).field0_0x0._s_0.X = 0x400;
  (this->AtlasTextureSize).field0_0x0._s_0.Y = 0x400;
  (this->SequenceFrameSize).field0_0x0._s_0.X = 0x80;
  (this->SequenceFrameSize).field0_0x0._s_0.Y = 0x80;
  ::FString::FString(&this->AtlasAssetPathFormat,
                     L"{AssetFolder}/{AssetName}_BakedAtlas_{OutputName}");
  ::FString::FString(&this->FramesAssetPathFormat,
                     L"{AssetFolder}/{AssetName}_BakedFrame_{OutputName}_{FrameIndex}");
  ::FString::FString(&this->FramesExportPathFormat,
                     L"{SavedDir}/NiagaraBaker/{AssetName}_{OutputName}/Frame_{FrameIndex}.png");
  return this;
}

// ~UNiagaraBakerOutputTexture2D @ 1490265e0

void __thiscall
UNiagaraBakerOutputTexture2D::~UNiagaraBakerOutputTexture2D(UNiagaraBakerOutputTexture2D *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraBakerOutputTexture2D__6B_;
  pFVar1 = (this->FramesExportPathFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FramesAssetPathFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AtlasAssetPathFormat).Data.AllocatorInstance.Data;
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

// Equals @ 1490401a0

bool __thiscall
UNiagaraBakerOutputTexture2D::Equals
          (UNiagaraBakerOutputTexture2D *this,UNiagaraBakerOutput *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  bool bVar9;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraBakerOutput *)0x0) {
    pFVar6 = GetTypeName<UNiagaraBakerOutputTexture2D>(&local_28);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar5 = StaticClass();
  iVar4 = (int)pUVar5->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar4 * 8)
      != &pUVar5->_padding_)) {
    pFVar6 = GetTypeName<UNiagaraBakerOutputTexture2D>(&local_28);
    pwVar8 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = GetFullNameForCastLogError<UNiagaraBakerOutput_const_>(&local_18,param_1);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar8,pwVar7);
  }
  iVar4 = (int)this->_padding_;
  iVar3 = (param_1->OutputName).Data.ArrayNum;
  if (iVar4 == iVar3) {
    if (iVar4 < 2) goto LAB_149040210;
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)this->_padding_,
                       (wchar_t *)(param_1->OutputName).Data.AllocatorInstance.Data);
    bVar9 = iVar4 == 0;
  }
  else {
    bVar9 = iVar4 + iVar3 == 1;
  }
  if (!bVar9) {
    return false;
  }
LAB_149040210:
  if ((this->SourceBinding).SourceName == (FName)param_1[1]._padding_) {
    bVar1 = (byte)param_1[1]._padding_;
    uVar2 = this->field_0x50;
    if ((((((bVar1 ^ this->bGenerateAtlas) & 1) == 0) && (((uVar2 ^ bVar1) & 2) == 0)) &&
        (((uVar2 ^ bVar1) & 4) == 0)) &&
       ((((this->FrameSize).field0_0x0._s_0.X == *(int *)((longlong)&param_1[1]._padding_ + 4) &&
         ((this->FrameSize).field0_0x0._s_0.Y == (int)param_1[1]._padding_)) &&
        (((this->AtlasTextureSize).field0_0x0._s_0.X ==
          *(int *)((longlong)&param_1[1]._padding_ + 4) &&
         ((this->AtlasTextureSize).field0_0x0._s_0.Y ==
          *(int *)&param_1[1].OutputName.Data.AllocatorInstance.Data)))))) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 149048000

UClass * __cdecl UNiagaraBakerOutputTexture2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBakerOutputTexture2D",
               &Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D.InnerSingleton,
               StaticRegisterNativesUNiagaraBakerOutputTexture2D,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBakerOutputTexture2D>,
               InternalVTableHelperCtorCaller<UNiagaraBakerOutputTexture2D>,local_res8,
               UNiagaraBakerOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D.InnerSingleton;
}

// PostInitProperties @ 14905dd80

void __thiscall UNiagaraBakerOutputTexture2D::PostInitProperties(UNiagaraBakerOutputTexture2D *this)

{
  longlong *plVar1;
  longlong *plVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  void *local_18 [2];
  
  UObject::PostInitProperties((UObject *)this);
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x2b8))(this,local_18);
  plVar1 = &this->_padding_;
  if (plVar1 != plVar2) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = *plVar2;
    *plVar2 = 0;
    *(int *)&this->_padding_ = (int)plVar2[1];
    *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  pUVar3 = UNiagaraBakerSettings::StaticClass();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if (pUVar4 != (UObject *)0x0) {
    (this->AtlasTextureSize).field0_0x0._s_0.X =
         (this->FrameSize).field0_0x0._s_0.X * *(int *)&pUVar4[1].field_0x10;
    (this->AtlasTextureSize).field0_0x0._s_0.Y =
         (this->FrameSize).field0_0x0._s_0.Y * *(int *)&pUVar4[1].field_0x14;
  }
  return;
}

// StaticRegisterNativesUNiagaraBakerOutputTexture2D @ 14906a490

void __cdecl UNiagaraBakerOutputTexture2D::StaticRegisterNativesUNiagaraBakerOutputTexture2D(void)

{
  return;
}

