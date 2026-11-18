// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147f08510

UClass * __cdecl UMaterialInterfaceEditorOnlyData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInterfaceEditorOnlyData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInterfaceEditorOnlyData",
               &Z_Registration_Info_UClass_UMaterialInterfaceEditorOnlyData.InnerSingleton,
               StaticRegisterNativesUMaterialInterfaceEditorOnlyData,0x40,8,
               CLASS_Intrinsic|CLASS_Optional,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialInterfaceEditorOnlyData>,
               InternalVTableHelperCtorCaller<UMaterialInterfaceEditorOnlyData>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInterfaceEditorOnlyData.InnerSingleton;
}

// UMaterialInterfaceEditorOnlyData @ 147f2e880

UMaterialInterfaceEditorOnlyData * __thiscall
UMaterialInterfaceEditorOnlyData::UMaterialInterfaceEditorOnlyData
          (UMaterialInterfaceEditorOnlyData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialInterfaceEditorOnlyData__6B_;
  (this->CachedExpressionData).Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  (this->CachedExpressionData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bLoadedCachedExpressionData = false;
  return this;
}

// UMaterialInterfaceEditorOnlyData @ 147f2e8c0

UMaterialInterfaceEditorOnlyData * __thiscall
UMaterialInterfaceEditorOnlyData::UMaterialInterfaceEditorOnlyData
          (UMaterialInterfaceEditorOnlyData *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMaterialInterfaceEditorOnlyData__6B_;
  (this->CachedExpressionData).Object = (FMaterialCachedExpressionEditorOnlyData *)0x0;
  (this->CachedExpressionData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bLoadedCachedExpressionData = false;
  return this;
}

// ~UMaterialInterfaceEditorOnlyData @ 147f2f610

void __thiscall
UMaterialInterfaceEditorOnlyData::~UMaterialInterfaceEditorOnlyData
          (UMaterialInterfaceEditorOnlyData *this)

{
  this->_padding_ = (longlong)&___7UMaterialInterfaceEditorOnlyData__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedExpressionData).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147f43970

UClass * __cdecl UMaterialInterfaceEditorOnlyData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInterfaceEditorOnlyData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInterfaceEditorOnlyData",
               &Z_Registration_Info_UClass_UMaterialInterfaceEditorOnlyData.InnerSingleton,
               StaticRegisterNativesUMaterialInterfaceEditorOnlyData,0x40,8,
               CLASS_Intrinsic|CLASS_Optional,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialInterfaceEditorOnlyData>,
               InternalVTableHelperCtorCaller<UMaterialInterfaceEditorOnlyData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInterfaceEditorOnlyData.InnerSingleton;
}

// Serialize @ 147f4fa30

void __thiscall
UMaterialInterfaceEditorOnlyData::Serialize
          (UMaterialInterfaceEditorOnlyData *this,FArchive *param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  code *pcVar3;
  UScriptStruct *this_00;
  uint uVar4;
  bool bVar5;
  uint local_res10 [2];
  
  UObject::Serialize((UObject *)this,param_1);
  uVar4 = 0;
  if ((((*(longlong *)&param_1->field_0x68 != 0) &&
       (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) ||
      (((param_1->field_0x28 & 4) != 0 && ((*(uint *)&param_1->field_0x34 & 0x1000) != 0)))) &&
     ((this->CachedExpressionData).Object != (FMaterialCachedExpressionEditorOnlyData *)0x0)) {
    uVar4 = 1;
  }
  bVar5 = SUB41(uVar4,0);
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_res10[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res10[0] = uVar4;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res10[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147f4faf0;
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  bVar5 = uVar4 != 0;
LAB_147f4faf0:
  if (bVar5 != false) {
    if (((this->CachedExpressionData).Object == (FMaterialCachedExpressionEditorOnlyData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedExpressionData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                           ,0x90a,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = FMaterialCachedExpressionEditorOnlyData::StaticStruct();
    UStruct::SerializeTaggedProperties
              ((UStruct *)this_00,param_1,(uchar *)(this->CachedExpressionData).Object,
               (UStruct *)this_00,(uchar *)0x0,(UObject *)0x0);
    this->bLoadedCachedExpressionData = true;
  }
  return;
}

// Serialize @ 147f4fb70

void __thiscall
UMaterialInterfaceEditorOnlyData::Serialize
          (UMaterialInterfaceEditorOnlyData *this,FStructuredArchiveRecord param_1)

{
  uint *puVar1;
  FFastPathLoadBuffer *pFVar2;
  code *pcVar3;
  FArchiveState *this_00;
  UScriptStruct *this_01;
  uint uVar4;
  bool bVar5;
  uint local_res10 [2];
  FSlotBase local_res18 [2];
  
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  uVar4 = 0;
  if ((((this_00->SavePackageData != (FArchiveSavePackageData *)0x0) &&
       (this_00->SavePackageData->CookContext != (FArchiveCookContext *)0x0)) ||
      ((this_00->ArIsSaving != '\0' && ((this_00->ArPortFlags & 0x1000) != 0)))) &&
     ((this->CachedExpressionData).Object != (FMaterialCachedExpressionEditorOnlyData *)0x0)) {
    uVar4 = 1;
  }
  bVar5 = SUB41(uVar4,0);
  pFVar2 = this_00->ActiveFPLB;
  puVar1 = (uint *)((longlong)pFVar2->StartFastPathLoadBuffer + 4);
  if (pFVar2->EndFastPathLoadBuffer < puVar1) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = uVar4;
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar4 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_147f4fc42;
  }
  else {
    uVar4 = *(uint *)pFVar2->StartFastPathLoadBuffer;
    pFVar2->StartFastPathLoadBuffer = (uchar *)puVar1;
  }
  bVar5 = uVar4 != 0;
LAB_147f4fc42:
  if (bVar5 != false) {
    if (((this->CachedExpressionData).Object == (FMaterialCachedExpressionEditorOnlyData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedExpressionData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInterface.cpp"
                           ,0x90a,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_01 = FMaterialCachedExpressionEditorOnlyData::StaticStruct();
    UStruct::SerializeTaggedProperties
              ((UStruct *)this_01,(FArchive *)this_00,(uchar *)(this->CachedExpressionData).Object,
               (UStruct *)this_01,(uchar *)0x0,(UObject *)0x0);
    this->bLoadedCachedExpressionData = true;
  }
  return;
}

// StaticRegisterNativesUMaterialInterfaceEditorOnlyData @ 147f52d40

void __cdecl
UMaterialInterfaceEditorOnlyData::StaticRegisterNativesUMaterialInterfaceEditorOnlyData(void)

{
  return;
}

