// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cc94bf0

UClass * __cdecl UMeshVertexPaintToolUtilityActions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexPaintToolUtilityActions.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexPaintToolUtilityActions",
               &Z_Registration_Info_UClass_UMeshVertexPaintToolUtilityActions.InnerSingleton,
               StaticRegisterNativesUMeshVertexPaintToolUtilityActions,0x108,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexPaintToolUtilityActions>,
               InternalVTableHelperCtorCaller<UMeshVertexPaintToolUtilityActions>,local_res8,
               UMeshVertexPaintToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexPaintToolUtilityActions.InnerSingleton;
}

// UMeshVertexPaintToolUtilityActions @ 14ccbe4e0

UMeshVertexPaintToolUtilityActions * __thiscall
UMeshVertexPaintToolUtilityActions::UMeshVertexPaintToolUtilityActions
          (UMeshVertexPaintToolUtilityActions *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  (this->TargetChannels).bRed = true;
  (this->TargetChannels).bGreen = true;
  (this->TargetChannels).bBlue = true;
  (this->TargetChannels).bAlpha = false;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMeshVertexPaintToolUtilityActions__6B_;
  this->Operation = BlendAllSeams;
  this->SourceChannel = Red;
  this->SourceValue = 0.0;
  (this->WeightMap).ComparisonIndex = 0;
  (this->WeightMap).Number = 0;
  (this->WeightMapsList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightMapsList).ArrayNum = 0;
  (this->WeightMapsList).ArrayMax = 0;
  this->TargetChannel = Green;
  this->bCopyToHiRes = false;
  (this->CopyToLODName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CopyToLODName).Data.ArrayNum = 0;
  (this->CopyToLODName).Data.ArrayMax = 0;
  (this->LODNamesList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODNamesList).ArrayNum = 0;
  (this->LODNamesList).ArrayMax = 0;
  return this;
}

// UMeshVertexPaintToolUtilityActions @ 14ccbe570

UMeshVertexPaintToolUtilityActions * __thiscall
UMeshVertexPaintToolUtilityActions::UMeshVertexPaintToolUtilityActions
          (UMeshVertexPaintToolUtilityActions *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  (this->TargetChannels).bRed = true;
  (this->TargetChannels).bGreen = true;
  (this->TargetChannels).bBlue = true;
  (this->TargetChannels).bAlpha = false;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMeshVertexPaintToolUtilityActions__6B_;
  this->Operation = BlendAllSeams;
  this->SourceChannel = Red;
  this->SourceValue = 0.0;
  (this->WeightMap).ComparisonIndex = 0;
  (this->WeightMap).Number = 0;
  (this->WeightMapsList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightMapsList).ArrayNum = 0;
  (this->WeightMapsList).ArrayMax = 0;
  this->TargetChannel = Green;
  this->bCopyToHiRes = false;
  (this->CopyToLODName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CopyToLODName).Data.ArrayNum = 0;
  (this->CopyToLODName).Data.ArrayMax = 0;
  (this->LODNamesList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODNamesList).ArrayNum = 0;
  (this->LODNamesList).ArrayMax = 0;
  return this;
}

// ~UMeshVertexPaintToolUtilityActions @ 14ccc4620

void __thiscall
UMeshVertexPaintToolUtilityActions::~UMeshVertexPaintToolUtilityActions
          (UMeshVertexPaintToolUtilityActions *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMeshVertexPaintToolUtilityActions__6B_;
  DestructItems<FString,int>
            ((FString *)(this->LODNamesList).AllocatorInstance.Data,(this->LODNamesList).ArrayNum);
  pFVar1 = (this->LODNamesList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CopyToLODName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->WeightMapsList).AllocatorInstance.Data,
             (this->WeightMapsList).ArrayNum);
  pFVar1 = (this->WeightMapsList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMeshVertexPaintToolActionPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd00af0

UClass * __cdecl UMeshVertexPaintToolUtilityActions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexPaintToolUtilityActions.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexPaintToolUtilityActions",
               &Z_Registration_Info_UClass_UMeshVertexPaintToolUtilityActions.InnerSingleton,
               StaticRegisterNativesUMeshVertexPaintToolUtilityActions,0x108,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexPaintToolUtilityActions>,
               InternalVTableHelperCtorCaller<UMeshVertexPaintToolUtilityActions>,local_res8,
               UMeshVertexPaintToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexPaintToolUtilityActions.InnerSingleton;
}

// StaticRegisterNativesUMeshVertexPaintToolUtilityActions @ 14cd2f1c0

void __cdecl
UMeshVertexPaintToolUtilityActions::StaticRegisterNativesUMeshVertexPaintToolUtilityActions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execApplySelectedOperation @ 14cd3f770

void __cdecl
UMeshVertexPaintToolUtilityActions::execApplySelectedOperation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cd3f7bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x6b0))(pUVar2,5,*(code **)(*(longlong *)pUVar2 + 0x6b0));
    return;
  }
  return;
}

// execGetLODNamesFunc @ 14cd3fc20

void __cdecl
UMeshVertexPaintToolUtilityActions::execGetLODNamesFunc
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FString,TSizedDefaultAllocator<32>_> *)&param_1[6].field_0x8);
  return;
}

// execGetWeightMapsFunc @ 14cd3fdd0

void __cdecl
UMeshVertexPaintToolUtilityActions::execGetWeightMapsFunc
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  int iVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)&param_1[5].field_0x10;
  pFVar1 = *(FString **)&param_1[5].field_0x8;
  local_10 = CONCAT44(local_10._4_4_,iVar2);
  if (iVar2 == 0) {
    local_10 = 0;
    local_10._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,&local_18,iVar2,(int *)((longlong)&local_10 + 4));
    ConstructItems<FString,FString,int>(local_18.Data,pFVar1,iVar2);
  }
  iVar2 = (int)local_10;
  if (param_3 != &local_18) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    iVar2 = 0;
    *(int *)((longlong)param_3 + 8) = (int)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FString,int>((FString *)local_18.Data,iVar2);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

