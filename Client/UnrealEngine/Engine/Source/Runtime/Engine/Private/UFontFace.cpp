// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// StaticClass @ 147ba91c0

UClass * __cdecl UFontFace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFontFace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FontFace",&Z_Registration_Info_UClass_UFontFace.InnerSingleton,
               StaticRegisterNativesUFontFace,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFontFace>,InternalVTableHelperCtorCaller<UFontFace>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFontFace.InnerSingleton;
}

// UFontFace @ 147bbc500

UFontFace * __thiscall UFontFace::UFontFace(UFontFace *this,FVTableHelper *param_1)

{
  code *pcVar1;
  bool bVar2;
  FFontFaceData *pFVar3;
  FFontFaceData *pFVar4;
  FFontFaceData *pFVar5;
  UFontFace *pUVar6;
  
  UObject::UObject((UObject *)this,param_1);
  pFVar5 = (FFontFaceData *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SourceFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IFontFaceInterface__;
  (this->SourceFilename).Data.ArrayNum = 0;
  (this->SourceFilename).Data.ArrayMax = 0;
  pFVar3 = ::operator_new(0x20);
  pFVar4 = pFVar5;
  if (pFVar3 != (FFontFaceData *)0x0) {
    pFVar4 = FFontFaceData::FFontFaceData(pFVar3);
  }
  (this->FontFaceData).Object = pFVar4;
  pFVar3 = ::operator_new(0x18);
  if (pFVar3 != (FFontFaceData *)0x0) {
    (pFVar3->Data).ArrayNum = 1;
    (pFVar3->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)
         &
         ___7__TReferenceControllerWithDeleter_UFFontFaceData__U__DefaultDeleter_UFFontFaceData___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (pFVar3->Data).ArrayMax = 1;
    (pFVar3->PreprocessedFontGeometries).AllocatorInstance.Data = (FScriptContainerElement *)pFVar4;
    pFVar5 = pFVar3;
  }
  (this->FontFaceData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar5;
  EnsureRetrievingVTablePtrDuringCtor(L"TSharedRef()");
  if (((this->FontFaceData).Object == (FFontFaceData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar6 = (UFontFace *)(*pcVar1)();
    return pUVar6;
  }
  this->bEnableDistanceFieldRendering = false;
  *(undefined2 *)&(this->PlatformRasterizationModeOverrides).bIsSet = 0;
  (this->DeviceRasterizationSettings).DistanceFieldPpem = 0;
  this->MinDistanceFieldPpem = 0x20;
  this->MidDistanceFieldPpem = 0x30;
  this->MaxDistanceFieldPpem = 0x40;
  this->MinMultiDistanceFieldPpem = 0x20;
  this->MidMultiDistanceFieldPpem = 0x28;
  this->MaxMultiDistanceFieldPpem = 0x38;
  return this;
}

// UFontFace @ 147bbc620

UFontFace * __thiscall UFontFace::UFontFace(UFontFace *this)

{
  UObject::UObject((UObject *)this);
  this->StrikeBrushHeightPercentage = 0x3c;
  (this->SourceFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SourceFilename).Data.ArrayNum = 0;
  (this->SourceFilename).Data.ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IFontFaceInterface__;
  this->AscendOverriddenValue = 0;
  this->bIsAscendOverridden = false;
  this->DescendOverriddenValue = 0;
  this->bIsDescendOverridden = false;
  FFontFaceData::MakeFontFaceData(&this->FontFaceData);
  this->bEnableDistanceFieldRendering = false;
  this->MinDistanceFieldPpem = 0x20;
  this->MidDistanceFieldPpem = 0x30;
  this->MaxDistanceFieldPpem = 0x40;
  this->MinMultiDistanceFieldPpem = 0x20;
  this->MidMultiDistanceFieldPpem = 0x28;
  this->MaxMultiDistanceFieldPpem = 0x38;
  *(undefined2 *)&(this->PlatformRasterizationModeOverrides).bIsSet = 0;
  (this->DeviceRasterizationSettings).DistanceFieldPpem = 0;
  return this;
}

// ~UFontFace @ 147bbf390

void __thiscall UFontFace::~UFontFace(UFontFace *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IFontFaceInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FontFaceData).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SourceFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IFontFaceInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetAscendOverriddenValue @ 147bdeae0

int __thiscall UFontFace::GetAscendOverriddenValue(UFontFace *this)

{
  return *(int *)((longlong)&this->_padding_ + 4);
}

// GetCookedFilename @ 147bdf470

FString * __thiscall UFontFace::GetCookedFilename(UFontFace *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UPackage *pUVar2;
  FString *pFVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FName local_res8;
  FString local_68;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pUVar2 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  local_res8 = (FName)pUVar2->_padding_;
  ::FName::ToString(&local_res8,&local_68);
  pFVar3 = FPackageName::GetLocalizedPackagePath(&local_48,&local_68);
  if (&local_68 != pFVar3) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    local_68.Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,L".uasset");
  FPackageName::LongPackageNameToFilename(&local_38,&local_68,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  pTVar4 = &FPaths::GetPath(&local_28,&local_38)->Data;
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  if ((pTVar4->ArrayNum != 0) || (iVar1 = 2, iVar5 == -1)) {
    iVar1 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_58,pTVar4,iVar5 + iVar1);
  ::FString::PathAppend((FString *)&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  ::FString::ConcatFC(__return_storage_ptr__,(FString *)&local_58,L".ufont");
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDescendOverriddenValue @ 147bdf890

int __thiscall UFontFace::GetDescendOverriddenValue(UFontFace *this)

{
  return *(int *)((longlong)&this->_padding_ + 4);
}

// GetFontFaceData @ 147be0600

TSharedRef<FFontFaceData_const_,1> * __thiscall
UFontFace::GetFontFaceData
          (UFontFace *this,TSharedRef<FFontFaceData_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object =
       (FFontFaceData *)(this->SourceFilename).Data.AllocatorInstance.Data;
  pTVar1 = *(TReferenceControllerBase<1> **)&(this->SourceFilename).Data.ArrayNum;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFontFilename @ 147be0630

FString * __thiscall UFontFace::GetFontFilename(UFontFace *this)

{
  return (FString *)&this->_padding_;
}

// GetHinting @ 147be0990

EFontHinting __thiscall UFontFace::GetHinting(UFontFace *this)

{
  return (EFontHinting)this->_padding_;
}

// GetLayoutMethod @ 147be0c90

EFontLayoutMethod __thiscall UFontFace::GetLayoutMethod(UFontFace *this)

{
  return *(EFontLayoutMethod *)((longlong)&this->_padding_ + 2);
}

// GetLoadingPolicy @ 147be2990

EFontLoadingPolicy __thiscall UFontFace::GetLoadingPolicy(UFontFace *this)

{
  return *(EFontLoadingPolicy *)((longlong)&this->_padding_ + 1);
}

// GetPrivateStaticClass @ 147be50b0

UClass * __cdecl UFontFace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFontFace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FontFace",&Z_Registration_Info_UClass_UFontFace.InnerSingleton,
               StaticRegisterNativesUFontFace,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFontFace>,InternalVTableHelperCtorCaller<UFontFace>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFontFace.InnerSingleton;
}

// GetRasterizationSettings @ 147be68a0

FFontRasterizationSettings __thiscall UFontFace::GetRasterizationSettings(UFontFace *this)

{
  FFontRasterizationSettings in_RDX;
  
  *(TReferenceControllerBase<1> **)in_RDX =
       (this->FontFaceData).SharedReferenceCount.ReferenceController;
  return in_RDX;
}

// GetResourceSizeEx @ 147be6d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall UFontFace::GetResourceSizeEx(UFontFace *this,FResourceSizeEx *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplication *pFVar4;
  ulong64 uVar5;
  TSharedRef<FSlateFontCache,1> local_18;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  if (this->LoadingPolicy == Inline) {
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)(((this->FontFaceData).Object)->Data).ArrayMax);
    return;
  }
  if ((this->LoadingPolicy == LazyLoad) &&
     (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
    pFVar4 = FSlateApplication::Get();
    lVar1 = *(longlong *)&pFVar4->field_0x60;
    if (*(longlong *)(lVar1 + 8) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FSlateFontServices::GetFontCache(*(FSlateFontServices **)(lVar1 + 8),&local_18);
    uVar5 = FSlateFontCache::GetFontDataAssetResidentMemory(local_18.Object,(UObject *)this);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// GetStrikeBrushHeightPercentage @ 147bea030

int __thiscall UFontFace::GetStrikeBrushHeightPercentage(UFontFace *this)

{
  return *(int *)((longlong)&this->_padding_ + 4);
}

// IsAscendOverridden @ 147bf0570

bool __thiscall UFontFace::IsAscendOverridden(UFontFace *this)

{
  return (bool)(char)this->_padding_;
}

// IsDescendOverridden @ 147bf07f0

bool __thiscall UFontFace::IsDescendOverridden(UFontFace *this)

{
  return (bool)(char)this->_padding_;
}

// PostLoad @ 147bf6e20

void __thiscall UFontFace::PostLoad(UFontFace *this)

{
  UObject::PostLoad((UObject *)this);
  UpdateDeviceRasterizationSettings(this);
  return;
}

// Serialize @ 147bff5c0

void __thiscall UFontFace::Serialize(UFontFace *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  FFontFaceData *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  int iVar8;
  UPackage *pUVar9;
  FString *pFVar10;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar11;
  TSharedRef<FFontFaceData,1> *pTVar12;
  FNameEntryId FVar13;
  int iVar14;
  bool bVar15;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FString local_88;
  FString local_78;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  TSharedRef<FFontFaceData,1> local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name57,L"FontFaceData");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name57,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name57,true);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (FVar13.Value = 1, *(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    FVar13.Value = 0;
  }
  iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (0xb < iVar8) {
    puVar3 = *(ulonglong **)&param_1->field_0x8;
    if (puVar3[1] < *puVar3 + 4) {
      uVar2 = local_res18.Number;
      local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
      if ((param_1->field_0x28 & 1) == 0) {
        local_res18.Number = uVar2;
        local_res18.ComparisonIndex.Value = FVar13.Value;
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res18,4);
      if (1 < local_res18.ComparisonIndex.Value) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar3 = *puVar3 + 4;
    }
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if (((this->LoadingPolicy == Inline) || (*(longlong *)&param_1->field_0x68 == 0)) ||
       (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
      FVar13.Value = 1;
    }
    else {
      FVar13.Value = 0;
    }
    bVar15 = SUB41(FVar13.Value,0);
    puVar3 = *(ulonglong **)&param_1->field_0x8;
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      local_res18.ComparisonIndex.Value = FVar13.Value;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res18,4);
      if (1 < local_res18.ComparisonIndex.Value) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res18.ComparisonIndex.Value;
      if ((param_1->field_0x28 & 1) != 0) goto LAB_147bff9a1;
    }
    else {
      uVar2 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
LAB_147bff9a1:
      bVar15 = uVar2 != 0;
    }
    if (bVar15 == false) goto LAB_147bff9b6;
  }
  else {
    pUVar9 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    local_res18 = (FName)pUVar9->_padding_;
    ::FName::ToString(&local_res18,&local_88);
    pFVar10 = FPackageName::GetLocalizedPackagePath(&local_58,&local_88);
    if (&local_88 != pFVar10) {
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_88.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_58,L".uasset");
    FPackageName::LongPackageNameToFilename(&local_48,&local_88,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_res18 = (FName)this->_padding_;
    ::FName::ToString(&local_res18,&local_58);
    pTVar11 = &FPaths::GetPath((FString *)&local_38,&local_48)->Data;
    iVar8 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    if ((pTVar11->ArrayNum != 0) || (iVar14 = 1, iVar8 + 1 == 0)) {
      iVar14 = 0;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_68,pTVar11,iVar14 + iVar8 + 1);
    ::FString::PathAppend
              ((FString *)&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar8);
    ::FString::ConcatFC(&local_78,(FString *)&local_68,L".ufont");
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (local_38.Object != (FFontFaceData *)0x0) {
      FMemory::Free(local_38.Object);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar10 = &this->SourceFilename;
    if (pFVar10 != &local_78) {
      pFVar4 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar10->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      (this->SourceFilename).Data.ArrayNum = local_78.Data.ArrayNum;
      (this->SourceFilename).Data.ArrayMax = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
    if (iVar8 < 0xe) goto LAB_147bff9b6;
    puVar3 = *(ulonglong **)&param_1->field_0x8;
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res18,4);
      if (1 < local_res18.ComparisonIndex.Value) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res18.ComparisonIndex.Value;
      if ((param_1->field_0x28 & 1) == 0) goto LAB_147bff9b6;
    }
    else {
      uVar2 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar2 == 0) goto LAB_147bff9b6;
    if (0 < (((this->FontFaceData).Object)->Data).ArrayNum) {
      pTVar12 = FFontFaceData::MakeFontFaceData(&local_38);
      pFVar5 = (this->FontFaceData).Object;
      pTVar6 = (this->FontFaceData).SharedReferenceCount.ReferenceController;
      pTVar7 = (pTVar12->SharedReferenceCount).ReferenceController;
      (this->FontFaceData).Object = pTVar12->Object;
      (this->FontFaceData).SharedReferenceCount.ReferenceController = pTVar7;
      pTVar12->Object = pFVar5;
      (pTVar12->SharedReferenceCount).ReferenceController = pTVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  FFontFaceData::Serialize((this->FontFaceData).Object,param_1);
LAB_147bff9b6:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// Serialize @ 147bffa30

void __thiscall UFontFace::Serialize(UFontFace *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUFontFace @ 147c035d0

void __cdecl UFontFace::StaticRegisterNativesUFontFace(void)

{
  return;
}

// UpdateDeviceRasterizationSettings @ 147c0af70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UFontFace::UpdateDeviceRasterizationSettings(UFontFace *this)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  TConsoleVariableData<FString> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  UClass *this_00;
  UEnum *this_01;
  long64 lVar6;
  FFontFacePlatformRasterizationOverrides *pFVar7;
  EFontRasterizationMode EVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  FString local_18;
  
  lVar12 = 0;
  (this->DeviceRasterizationSettings).Mode = Bitmap;
  *(undefined3 *)&(this->DeviceRasterizationSettings).field_0x1 = 0;
  (this->DeviceRasterizationSettings).DistanceFieldPpem = 0;
  if (this->bEnableDistanceFieldRendering == false) {
    return;
  }
  this_00 = Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr[0xf].field_0x26 == '\0') {
    return;
  }
  this_01 = StaticEnum<enum_EFontRasterizationMode>();
  pTVar3 = CVarFontFaceDistanceFieldRasterizationMode.Ref;
  bVar5 = IsInParallelGameThread();
  if (bVar5) {
LAB_147c0aff2:
    lVar10 = lVar12;
  }
  else {
    bVar5 = IsInGameThread();
    lVar10 = 0x10;
    if (bVar5) goto LAB_147c0aff2;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = *(int *)((longlong)&pTVar3->ShadowedValue[0].Data.ArrayNum + lVar10);
  lVar11 = (longlong)local_18.Data.ArrayNum;
  _Src = *(void **)((longlong)&pTVar3->ShadowedValue[0].Data.AllocatorInstance.Data + lVar10);
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
  }
  lVar6 = UEnum::GetValueByNameString(this_01,&local_18,None);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (lVar6 == -1) {
    if (2 < (byte)LogFontFace._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFontFace);
    }
    lVar6 = 0;
  }
  (this->DeviceRasterizationSettings).Mode = (EFontRasterizationMode)lVar6;
  if (((this->PlatformRasterizationModeOverrides).bIsSet != false) &&
     (uVar9 = (uint)lVar6 & 0xff, (EFontRasterizationMode)lVar6 != Bitmap)) {
    if (uVar9 == 1) {
      pFVar7 = TOptional<FFontFacePlatformRasterizationOverrides>::operator->
                         (&this->PlatformRasterizationModeOverrides);
      EVar8 = pFVar7->MsdfOverride;
    }
    else if (uVar9 == 2) {
      pFVar7 = TOptional<FFontFacePlatformRasterizationOverrides>::operator->
                         (&this->PlatformRasterizationModeOverrides);
      EVar8 = pFVar7->SdfOverride;
    }
    else {
      if (uVar9 != 3) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\FontFace.cpp"
                           ,0x14c,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_147c0b123;
      }
      pFVar7 = TOptional<FFontFacePlatformRasterizationOverrides>::operator->
                         (&this->PlatformRasterizationModeOverrides);
      EVar8 = pFVar7->SdfApproximationOverride;
    }
    (this->DeviceRasterizationSettings).Mode = EVar8;
  }
LAB_147c0b123:
  pTVar4 = CVarFontFaceDistanceFieldResolutionLevel.Ref;
  EVar8 = (this->DeviceRasterizationSettings).Mode;
  bVar5 = IsInParallelGameThread();
  if ((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) {
    lVar12 = 4;
  }
  iVar1 = *(int *)((longlong)pTVar4->ShadowedValue + lVar12);
  if (iVar1 < 2) {
    lVar12 = 0x78;
    lVar10 = 0x6c;
  }
  else if (iVar1 < 3) {
    lVar12 = 0x7c;
    lVar10 = 0x70;
  }
  else {
    lVar12 = 0x80;
    lVar10 = 0x74;
  }
  if (EVar8 != Msdf) {
    lVar12 = lVar10;
  }
  (this->DeviceRasterizationSettings).DistanceFieldPpem =
       *(int *)((longlong)&this->_padding_ + lVar12);
  return;
}

// _getUObject @ 147c12270

UObject * __thiscall UFontFace::_getUObject(UFontFace *this)

{
  return (UObject *)&this[-1].bEnableDistanceFieldRendering;
}

