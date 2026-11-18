// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 148fe1a10

UClass * __cdecl UNiagaraBakerOutputStaticMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBakerOutputStaticMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBakerOutputStaticMesh",
               &Z_Registration_Info_UClass_UNiagaraBakerOutputStaticMesh.InnerSingleton,
               StaticRegisterNativesUNiagaraBakerOutputStaticMesh,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBakerOutputStaticMesh>,
               InternalVTableHelperCtorCaller<UNiagaraBakerOutputStaticMesh>,local_res8,
               UNiagaraBakerOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBakerOutputStaticMesh.InnerSingleton;
}

// UNiagaraBakerOutputStaticMesh @ 1490237d0

UNiagaraBakerOutputStaticMesh * __thiscall
UNiagaraBakerOutputStaticMesh::UNiagaraBakerOutputStaticMesh
          (UNiagaraBakerOutputStaticMesh *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraBakerOutputStaticMesh__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::FString(&this->FramesAssetPathFormat,
                     L"{AssetFolder}/{AssetName}_BakedFrame_{OutputName}_{FrameIndex}");
  (this->ExportParameters).bExportPosition = true;
  (this->ExportParameters).bExportTangentBasis = true;
  (this->ExportParameters).bExportColor = true;
  (this->ExportParameters).ExportNumTexCoords = 1;
  (this->ExportParameters).bExportMaterials = true;
  (this->ExportParameters).bApplyWPO = false;
  (this->ExportParameters).ViewIndexToCapture.TypedValue = 0;
  (this->ExportParameters).ViewIndexToCapture.bIsSet = true;
  return this;
}

// ~UNiagaraBakerOutputStaticMesh @ 149026590

void __thiscall
UNiagaraBakerOutputStaticMesh::~UNiagaraBakerOutputStaticMesh(UNiagaraBakerOutputStaticMesh *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraBakerOutputStaticMesh__6B_;
  pFVar1 = (this->FramesAssetPathFormat).Data.AllocatorInstance.Data;
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

// Equals @ 149040090

bool __thiscall
UNiagaraBakerOutputStaticMesh::Equals
          (UNiagaraBakerOutputStaticMesh *this,UNiagaraBakerOutput *param_1)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraBakerOutput *)0x0) {
    pFVar4 = GetTypeName<UNiagaraBakerOutputStaticMesh>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = StaticClass();
  iVar2 = (int)pUVar3->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar3->_padding_)) {
    pFVar4 = GetTypeName<UNiagaraBakerOutputStaticMesh>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraBakerOutput_const_>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  iVar2 = (int)this->_padding_;
  iVar1 = (param_1->OutputName).Data.ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)this->_padding_,
                       (wchar_t *)(param_1->OutputName).Data.AllocatorInstance.Data);
    return iVar2 == 0;
  }
  return true;
}

// GetPrivateStaticClass @ 149047f40

UClass * __cdecl UNiagaraBakerOutputStaticMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBakerOutputStaticMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBakerOutputStaticMesh",
               &Z_Registration_Info_UClass_UNiagaraBakerOutputStaticMesh.InnerSingleton,
               StaticRegisterNativesUNiagaraBakerOutputStaticMesh,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBakerOutputStaticMesh>,
               InternalVTableHelperCtorCaller<UNiagaraBakerOutputStaticMesh>,local_res8,
               UNiagaraBakerOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBakerOutputStaticMesh.InnerSingleton;
}

// StaticRegisterNativesUNiagaraBakerOutputStaticMesh @ 14906a480

void __cdecl UNiagaraBakerOutputStaticMesh::StaticRegisterNativesUNiagaraBakerOutputStaticMesh(void)

{
  return;
}

