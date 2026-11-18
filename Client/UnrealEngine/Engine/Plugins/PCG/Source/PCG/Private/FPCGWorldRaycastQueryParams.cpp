// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticStruct @ 149854ac0

UScriptStruct * __cdecl FPCGWorldRaycastQueryParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGWorldRaycastQueryParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGWorldRaycastQueryParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGWorldRaycastQueryParams,(UObject *)pUVar1,
                         L"PCGWorldRaycastQueryParams");
  }
  return Z_Registration_Info_UScriptStruct_FPCGWorldRaycastQueryParams.OuterSingleton;
}

// operator= @ 149892e00

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

FPCGWorldRaycastQueryParams * __thiscall
FPCGWorldRaycastQueryParams::operator=
          (FPCGWorldRaycastQueryParams *this,FPCGWorldRaycastQueryParams *param_1)

{
  byte bVar1;
  
  FPCGWorldCommonQueryParams::operator=
            ((FPCGWorldCommonQueryParams *)this,(FPCGWorldCommonQueryParams *)param_1);
  bVar1 = (this->bIgnoreBackfaceHits ^ param_1->bIgnoreBackfaceHits) & 1 ^ this->field_0xc8;
  this->field_0xc8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc8) & 2 ^ bVar1;
  this->field_0xc8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc8) & 4 ^ bVar1;
  this->field_0xc8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc8) & 8 ^ bVar1;
  this->field_0xc8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc8) & 0x10 ^ bVar1;
  this->field_0xc8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc8) & 0x20 ^ bVar1;
  this->field_0xc8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc8) & 0x40 ^ bVar1;
  this->field_0xc8 = bVar1;
  this->field_0xc8 = (bVar1 ^ param_1->field_0xc8) & 0x7f ^ param_1->field_0xc8;
  bVar1 = (this->bGetReferenceToStaticMesh ^ param_1->bGetReferenceToStaticMesh) & 1 ^
          this->field_0xc9;
  this->field_0xc9 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc9) & 2 ^ bVar1;
  this->field_0xc9 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc9) & 4 ^ bVar1;
  this->field_0xc9 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc9) & 8 ^ bVar1;
  this->field_0xc9 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc9) & 0x10 ^ bVar1;
  this->field_0xc9 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc9) & 0x20 ^ bVar1;
  this->field_0xc9 = bVar1;
  this->field_0xc9 = (bVar1 ^ param_1->field_0xc9) & 0x40 ^ bVar1;
  this->RenderMaterialIndex = param_1->RenderMaterialIndex;
  this->field_0xd0 =
       (this->bGetRenderMaterialIndex ^ param_1->bGetRenderMaterialIndex) & 1 ^ this->field_0xd0;
  this->UVChannel = param_1->UVChannel;
  return this;
}

// Initialize @ 1498cb260

void __thiscall FPCGWorldRaycastQueryParams::Initialize(FPCGWorldRaycastQueryParams *this)

{
  longlong *this_00;
  int iVar1;
  FName *pFVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  FName FStackX_8;
  FName FStackX_10;
  FName aFStackX_18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> TStack_38;
  
  this_00 = &this->_padding_;
  if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00);
    return;
  }
  PCGHelpers::GetStringArrayFromCommaSeparatedList(&TStack_38,(FString *)&this->_padding_);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00);
  iVar1 = TStack_38.ArrayNum;
  pFVar5 = TStack_38.AllocatorInstance.Data + (longlong)TStack_38.ArrayNum * 0x10;
  FVar4.Data = TStack_38.AllocatorInstance.Data;
  while( true ) {
    if (TStack_38.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&FStackX_8)
      ;
    }
    if (FVar4.Data == pFVar5) break;
    iVar3 = *(int *)(FVar4.Data + 8) + -1;
    if (*(int *)(FVar4.Data + 8) == 0) {
      iVar3 = 0;
    }
    pFVar2 = ::FName::FName(aFStackX_18,iVar3,*(wchar_t **)FVar4.Data,FNAME_Add);
    FStackX_8 = *pFVar2;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00,&FStackX_10,
               (bool *)&FStackX_8);
    FVar4.Data = FVar4.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)TStack_38.AllocatorInstance.Data,TStack_38.ArrayNum);
  if (TStack_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_38.AllocatorInstance.Data);
  }
  return;
}

// PostSerialize @ 1498d29d0

void __thiscall
FPCGWorldRaycastQueryParams::PostSerialize(FPCGWorldRaycastQueryParams *this,FArchive *param_1)

{
  return;
}

// FPCGWorldRaycastQueryParams @ 149be60e0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

FPCGWorldRaycastQueryParams * __thiscall
FPCGWorldRaycastQueryParams::FPCGWorldRaycastQueryParams
          (FPCGWorldRaycastQueryParams *this,FPCGWorldRaycastQueryParams *param_1)

{
  byte bVar1;
  
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)this,(FPCGWorldCommonQueryParams *)param_1);
  bVar1 = (this->bIgnoreBackfaceHits ^ param_1->bIgnoreBackfaceHits) & 1 ^ this->field_0xc8;
  this->field_0xc8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc8) & 2 ^ bVar1;
  this->field_0xc8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc8) & 4 ^ bVar1;
  this->field_0xc8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc8) & 8 ^ bVar1;
  this->field_0xc8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc8) & 0x10 ^ bVar1;
  this->field_0xc8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc8) & 0x20 ^ bVar1;
  this->field_0xc8 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc8) & 0x40 ^ bVar1;
  this->field_0xc8 = bVar1;
  this->field_0xc8 = (bVar1 ^ param_1->field_0xc8) & 0x7f ^ param_1->field_0xc8;
  bVar1 = (this->bGetReferenceToStaticMesh ^ param_1->bGetReferenceToStaticMesh) & 1 ^
          this->field_0xc9;
  this->field_0xc9 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc9) & 2 ^ bVar1;
  this->field_0xc9 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc9) & 4 ^ bVar1;
  this->field_0xc9 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc9) & 8 ^ bVar1;
  this->field_0xc9 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc9) & 0x10 ^ bVar1;
  this->field_0xc9 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0xc9) & 0x20 ^ bVar1;
  this->field_0xc9 = bVar1;
  this->field_0xc9 = (bVar1 ^ param_1->field_0xc9) & 0x40 ^ bVar1;
  this->RenderMaterialIndex = param_1->RenderMaterialIndex;
  this->field_0xd0 =
       (this->bGetRenderMaterialIndex ^ param_1->bGetRenderMaterialIndex) & 1 ^ this->field_0xd0;
  this->UVChannel = param_1->UVChannel;
  return this;
}

// FPCGWorldRaycastQueryParams @ 149be6280

FPCGWorldRaycastQueryParams * __thiscall
FPCGWorldRaycastQueryParams::FPCGWorldRaycastQueryParams
          (FPCGWorldRaycastQueryParams *this,FPCGWorldRaycastQueryParams *param_1)

{
  UObject *pUVar1;
  byte bVar2;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  *(undefined1 *)((longlong)&this->_padding_ + 3) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 3);
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  ::FString::FString((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  pUVar1 = (UObject *)param_1->_padding_;
  this->_padding_ = (longlong)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)&this->_padding_,
             (FPCGAttributePropertySelector *)&param_1->_padding_);
  this->_padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&this->_padding_,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&param_1->_padding_);
  bVar2 = (this->bIgnoreBackfaceHits ^ param_1->bIgnoreBackfaceHits) & 1 ^ this->field_0xc8;
  this->field_0xc8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0xc8) & 2 ^ bVar2;
  this->field_0xc8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0xc8) & 4 ^ bVar2;
  this->field_0xc8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0xc8) & 8 ^ bVar2;
  this->field_0xc8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0xc8) & 0x10 ^ bVar2;
  this->field_0xc8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0xc8) & 0x20 ^ bVar2;
  this->field_0xc8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0xc8) & 0x40 ^ bVar2;
  this->field_0xc8 = bVar2;
  this->field_0xc8 = (bVar2 ^ param_1->field_0xc8) & 0x7f ^ param_1->field_0xc8;
  bVar2 = (this->bGetReferenceToStaticMesh ^ param_1->bGetReferenceToStaticMesh) & 1 ^
          this->field_0xc9;
  this->field_0xc9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0xc9) & 2 ^ bVar2;
  this->field_0xc9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0xc9) & 4 ^ bVar2;
  this->field_0xc9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0xc9) & 8 ^ bVar2;
  this->field_0xc9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0xc9) & 0x10 ^ bVar2;
  this->field_0xc9 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0xc9) & 0x20 ^ bVar2;
  this->field_0xc9 = bVar2;
  this->field_0xc9 = (bVar2 ^ param_1->field_0xc9) & 0x40 ^ bVar2;
  this->RenderMaterialIndex = param_1->RenderMaterialIndex;
  this->field_0xd0 =
       (this->bGetRenderMaterialIndex ^ param_1->bGetRenderMaterialIndex) & 1 ^ this->field_0xd0;
  this->UVChannel = param_1->UVChannel;
  return this;
}

// FPCGWorldRaycastQueryParams @ 149be64d0

FPCGWorldRaycastQueryParams * __thiscall
FPCGWorldRaycastQueryParams::FPCGWorldRaycastQueryParams(FPCGWorldRaycastQueryParams *this)

{
  undefined1 *puVar1;
  
  *(undefined4 *)&this->_padding_ = 0x100;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->bGetReferenceToStaticMesh = '\0';
  this->bUseRenderMaterialIndex = '\0';
  this->bApplyMetadataFromLandscape = '\0';
  this->bGetSectionIndex = '\0';
  this->bGetElementIndex = '\0';
  this->bGetUVCoords = '\0';
  this->bGetFaceIndex = '\0';
  this->bGetRenderMaterialIndex = '\0';
  puVar1 = &this->field_0xc8;
  this->bIgnoreBackfaceHits = '\0';
  this->bGetReferenceToRenderMaterial = '\0';
  this->bGetLocalImpactPoint = '\0';
  this->bGetDistance = '\0';
  this->bGetReflection = '\0';
  this->bGetImpactNormal = '\0';
  this->bGetImpactPoint = '\0';
  this->bGetImpact = '\0';
  this->RenderMaterialIndex = 0;
  this->UVChannel = 0;
  return this;
}

