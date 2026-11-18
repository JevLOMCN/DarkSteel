// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// StaticStruct @ 149eddb20

UScriptStruct * __cdecl FPCGDebugVisualizationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDebugVisualizationSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDebugVisualizationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings,(UObject *)pUVar1,
                         L"PCGDebugVisualizationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDebugVisualizationSettings.OuterSingleton;
}

// FPCGDebugVisualizationSettings @ 149eed3a0

FPCGDebugVisualizationSettings * __thiscall
FPCGDebugVisualizationSettings::FPCGDebugVisualizationSettings(FPCGDebugVisualizationSettings *this)

{
  undefined1 *this_00;
  undefined1 *puVar1;
  undefined1 *this_01;
  int iVar2;
  FNameEntryId FVar3;
  uint uVar4;
  FNameEntryId FVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FUtf8String local_28;
  
  this->PointScale = 1.0;
  this_00 = &(this->PointMesh).SoftObjectPtr.field_0x18;
  this->ScaleMethod = Extents;
  *(undefined8 *)&(this->PointMesh).SoftObjectPtr = 0;
  puVar1 = &(this->PointMesh).SoftObjectPtr.field_0x24;
  *(undefined4 *)puVar1 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)&(this->PointMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PointMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PointMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this_01 = &(this->MaterialOverride).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->MaterialOverride).SoftObjectPtr = 0;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->MaterialOverride).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->MaterialOverride).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->MaterialOverride).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_01,0);
  FVar7 = PCGDebugVisConstants::DefaultPointMesh.SubPathString.Data.AllocatorInstance;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar8 = PCGDebugVisConstants::DefaultPointMesh.SubPathString.Data.ArrayNum;
  FVar3.Value = PCGDebugVisConstants::DefaultPointMesh.AssetPath.PackageName.ComparisonIndex.Value;
  uVar4 = PCGDebugVisConstants::DefaultPointMesh.AssetPath.PackageName.Number;
  FVar5.Value = PCGDebugVisConstants::DefaultPointMesh.AssetPath.AssetName.ComparisonIndex.Value;
  uVar6 = PCGDebugVisConstants::DefaultPointMesh.AssetPath.AssetName.Number;
  local_28.Data.ArrayNum = iVar8;
  if (iVar8 == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar8,0,(ForAnyElementType *)&local_28,iVar8,&local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,FVar7.Data,(longlong)iVar8);
  }
  iVar8 = local_28.Data.ArrayNum;
  FVar7.Data = local_28.Data.AllocatorInstance.Data;
  *(undefined8 *)&(this->PointMesh).SoftObjectPtr = 0;
  *(uint *)&(this->PointMesh).SoftObjectPtr.field_0x8 = FVar3.Value;
  *(uint *)&(this->PointMesh).SoftObjectPtr.field_0xc = uVar4;
  *(uint *)&(this->PointMesh).SoftObjectPtr.field_0x10 = FVar5.Value;
  *(uint *)&(this->PointMesh).SoftObjectPtr.field_0x14 = uVar6;
  if ((FUtf8String *)this_00 != &local_28) {
    iVar2 = *(int *)puVar1;
    *(int *)&(this->PointMesh).SoftObjectPtr.field_0x20 = local_28.Data.ArrayNum;
    if ((local_28.Data.ArrayNum == 0) && (iVar2 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_28.Data.ArrayNum,iVar2,(ForAnyElementType *)this_00,
                 local_28.Data.ArrayNum,(int *)puVar1);
      if (iVar8 != 0) {
        memcpy(*(void **)this_00,FVar7.Data,(longlong)iVar8);
      }
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// GetMaterial @ 149f02230

TSoftObjectPtr<UMaterialInterface> * __thiscall
FPCGDebugVisualizationSettings::GetMaterial
          (FPCGDebugVisualizationSettings *this,
          TSoftObjectPtr<UMaterialInterface> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FNameEntryId FVar3;
  uint uVar4;
  FNameEntryId FVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  if ((*(longlong *)&(this->MaterialOverride).SoftObjectPtr.field_0x8 != 0) ||
     (bVar8 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)&(this->PointMesh).SoftObjectPtr.field_0x8,
                         &PCGDebugVisConstants::DefaultPointMesh),
     FVar7 = PCGDebugVisConstants::MaterialForDefaultPointMesh.SubPathString.Data.AllocatorInstance,
     !bVar8)) {
    *(undefined8 *)&__return_storage_ptr__->SoftObjectPtr =
         *(undefined8 *)&(this->MaterialOverride).SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)&(__return_storage_ptr__->SoftObjectPtr).field_0x8,
               (FSoftObjectPath *)&(this->MaterialOverride).SoftObjectPtr.field_0x8);
    return __return_storage_ptr__;
  }
  FVar3.Value = PCGDebugVisConstants::MaterialForDefaultPointMesh.AssetPath.PackageName.
                ComparisonIndex.Value;
  uVar4 = PCGDebugVisConstants::MaterialForDefaultPointMesh.AssetPath.PackageName.Number;
  FVar5.Value = PCGDebugVisConstants::MaterialForDefaultPointMesh.AssetPath.AssetName.
                ComparisonIndex.Value;
  uVar6 = PCGDebugVisConstants::MaterialForDefaultPointMesh.AssetPath.AssetName.Number;
  local_28.Data = (FScriptContainerElement *)0x0;
  iVar9 = PCGDebugVisConstants::MaterialForDefaultPointMesh.SubPathString.Data.ArrayNum;
  local_20 = iVar9;
  if (iVar9 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar9,0,&local_28,iVar9,&local_1c);
    memcpy(local_28.Data,FVar7.Data,(longlong)iVar9);
  }
  iVar9 = local_20;
  FVar7.Data = local_28.Data;
  puVar1 = &(__return_storage_ptr__->SoftObjectPtr).field_0x18;
  *(undefined8 *)&__return_storage_ptr__->SoftObjectPtr = 0;
  puVar2 = &(__return_storage_ptr__->SoftObjectPtr).field_0x24;
  *(uint *)&(__return_storage_ptr__->SoftObjectPtr).field_0x8 = FVar3.Value;
  *(uint *)&(__return_storage_ptr__->SoftObjectPtr).field_0xc = uVar4;
  *(uint *)&(__return_storage_ptr__->SoftObjectPtr).field_0x10 = FVar5.Value;
  *(uint *)&(__return_storage_ptr__->SoftObjectPtr).field_0x14 = uVar6;
  *(undefined8 *)puVar1 = 0;
  *(int *)&(__return_storage_ptr__->SoftObjectPtr).field_0x20 = local_20;
  if (local_20 == 0) {
    *(undefined4 *)puVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_20,0,(ForAnyElementType *)puVar1,local_20,(int *)puVar2);
    memcpy(*(void **)puVar1,FVar7.Data,(longlong)iVar9);
  }
  if (local_28.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_28.Data);
  return __return_storage_ptr__;
}

