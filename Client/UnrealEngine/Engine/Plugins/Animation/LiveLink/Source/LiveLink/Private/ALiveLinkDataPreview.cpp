// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 13

// StaticClass @ 14cff4a30

UClass * __cdecl ALiveLinkDataPreview::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALiveLinkDataPreview.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkDataPreview",
               &Z_Registration_Info_UClass_ALiveLinkDataPreview.InnerSingleton,
               StaticRegisterNativesALiveLinkDataPreview,0x418,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALiveLinkDataPreview>,
               InternalVTableHelperCtorCaller<ALiveLinkDataPreview>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALiveLinkDataPreview.InnerSingleton;
}

// ALiveLinkDataPreview @ 14d00f200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALiveLinkDataPreview * __thiscall
ALiveLinkDataPreview::ALiveLinkDataPreview(ALiveLinkDataPreview *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  AActor::AActor((AActor *)this,param_1);
  puVar1 = &(this->BoneMesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7ALiveLinkDataPreview__6B_;
  (this->Subjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subjects).ArrayNum = 0;
  (this->Subjects).ArrayMax = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->BoneMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->BoneMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->BoneMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BoneMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->JointMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->JointMesh).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->JointMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->JointMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->JointMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->AxisMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->AxisMesh).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->AxisMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AxisMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AxisMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TransformMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TransformMesh).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TransformMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TransformMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TransformMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->CameraMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->CameraMesh).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->CameraMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->CameraMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->CameraMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->LocatorMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->LocatorMesh).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->LocatorMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->LocatorMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->LocatorMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->SpriteTexture).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SpriteTexture).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SpriteTexture).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SpriteTexture).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SpriteTexture).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->Visualizers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Visualizers).ArrayNum = 0;
  (this->Visualizers).ArrayMax = 0;
  (this->BillboardComponent).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  (this->CachedSubjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSubjects).ArrayNum = 0;
  (this->CachedSubjects).ArrayMax = 0;
  return this;
}

// ALiveLinkDataPreview @ 14d00f390

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALiveLinkDataPreview * __thiscall
ALiveLinkDataPreview::ALiveLinkDataPreview(ALiveLinkDataPreview *this)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 *this_00;
  undefined1 *this_01;
  undefined1 *this_02;
  undefined1 *this_03;
  undefined1 *puVar3;
  TSoftObjectPtr<UTexture2D> *this_04;
  int iVar4;
  double dVar5;
  ForAnyElementType FVar6;
  int iVar7;
  bool bVar8;
  FName *pFVar9;
  UClass *pUVar10;
  USceneComponent *pUVar11;
  UBillboardComponent *pUVar12;
  FName FVar13;
  FName FVar14;
  FUObjectItem *pFVar15;
  TQuat<double> *pTVar16;
  size_t sVar17;
  FName local_res8;
  FName local_res10;
  TVector<double>_u_0 local_198;
  FSoftObjectPath local_178;
  FSoftObjectPath local_158;
  FSoftObjectPath local_138;
  FSoftObjectPath local_118;
  FSoftObjectPath local_f8;
  FSoftObjectPath local_d8;
  FSoftObjectPath local_b8 [2];
  TQuat<double> local_78 [2];
  
  AActor::AActor((AActor *)this);
  this_00 = &(this->BoneMesh).SoftObjectPtr.field_0x18;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7ALiveLinkDataPreview__6B_;
  puVar1 = &(this->BoneMesh).SoftObjectPtr.field_0x24;
  (this->Subjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subjects).ArrayNum = 0;
  (this->Subjects).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)&(this->BoneMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined8 *)&(this->BoneMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->BoneMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BoneMesh).SoftObjectPtr.field_0x8 = 0;
  local_res10 = (FName)puVar1;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this_01 = &(this->JointMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->JointMesh).SoftObjectPtr = 0;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->JointMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->JointMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->JointMesh).SoftObjectPtr.field_0x8 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FUtf8String::Reset((FUtf8String *)this_01,0);
  this_02 = &(this->AxisMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->AxisMesh).SoftObjectPtr = 0;
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)&(this->AxisMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AxisMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AxisMesh).SoftObjectPtr.field_0x8 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FUtf8String::Reset((FUtf8String *)this_02,0);
  this_03 = &(this->TransformMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TransformMesh).SoftObjectPtr = 0;
  *(undefined8 *)this_03 = 0;
  *(undefined8 *)&(this->TransformMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TransformMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TransformMesh).SoftObjectPtr.field_0x8 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FUtf8String::Reset((FUtf8String *)this_03,0);
  puVar3 = &(this->CameraMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->CameraMesh).SoftObjectPtr = 0;
  *(undefined8 *)puVar3 = 0;
  *(undefined8 *)&(this->CameraMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->CameraMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->CameraMesh).SoftObjectPtr.field_0x8 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FUtf8String::Reset((FUtf8String *)puVar3,0);
  puVar3 = &(this->LocatorMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->LocatorMesh).SoftObjectPtr = 0;
  *(undefined8 *)puVar3 = 0;
  *(undefined8 *)&(this->LocatorMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->LocatorMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->LocatorMesh).SoftObjectPtr.field_0x8 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FUtf8String::Reset((FUtf8String *)puVar3,0);
  this_04 = &this->SpriteTexture;
  puVar3 = &(this->SpriteTexture).SoftObjectPtr.field_0x18;
  *(undefined8 *)&this_04->SoftObjectPtr = 0;
  *(undefined8 *)puVar3 = 0;
  *(undefined8 *)&(this->SpriteTexture).SoftObjectPtr.field_0x20 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  *(undefined8 *)&(this->SpriteTexture).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SpriteTexture).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar3,0);
  pbVar2 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar2 = *pbVar2 | 2;
  local_198._8_4_ = 0x25;
  (this->Visualizers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Visualizers).ArrayNum = 0;
  (this->Visualizers).ArrayMax = 0;
  (this->BillboardComponent).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  (this->CachedSubjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSubjects).ArrayNum = 0;
  (this->CachedSubjects).ArrayMax = 0;
  local_178.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_178.AssetPath.PackageName.Number = 0;
  local_178.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_178.AssetPath.AssetName.Number = 0;
  local_178.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.SubPathString.Data.ArrayNum = 0;
  local_178.SubPathString.Data.ArrayMax = 0;
  local_198._s_0.X = 2.807215514233e-314;
  this->bEvaluateLiveLink = true;
  FSoftObjectPath::SetPath(&local_178,(TStringView<char> *)&local_198);
  FVar6.Data = local_178.SubPathString.Data.AllocatorInstance.Data;
  *(undefined8 *)&(this->BoneMesh).SoftObjectPtr = 0;
  *(uint *)&(this->BoneMesh).SoftObjectPtr.field_0x8 =
       local_178.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->BoneMesh).SoftObjectPtr.field_0xc = local_178.AssetPath.PackageName.Number;
  *(uint *)&(this->BoneMesh).SoftObjectPtr.field_0x10 =
       local_178.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->BoneMesh).SoftObjectPtr.field_0x14 = local_178.AssetPath.AssetName.Number;
  if ((FUtf8String *)this_00 != &local_178.SubPathString) {
    iVar7 = local_178.SubPathString.Data.ArrayNum;
    sVar17 = (size_t)local_178.SubPathString.Data.ArrayNum;
    iVar4 = *(int *)puVar1;
    *(int *)&(this->BoneMesh).SoftObjectPtr.field_0x20 = local_178.SubPathString.Data.ArrayNum;
    if ((local_178.SubPathString.Data.ArrayNum == 0) && (iVar4 == 0)) {
      *(undefined4 *)local_res10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_178.SubPathString.Data.ArrayNum,iVar4,
                 (ForAnyElementType *)&(this->BoneMesh).SoftObjectPtr.field_0x18,
                 local_178.SubPathString.Data.ArrayNum,
                 (int *)&(this->BoneMesh).SoftObjectPtr.field_0x24);
      if (iVar7 != 0) {
        memcpy(*(void **)&(this->BoneMesh).SoftObjectPtr.field_0x18,FVar6.Data,sVar17);
      }
    }
  }
  if (local_178.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.SubPathString.Data.AllocatorInstance.Data);
  }
  local_198._8_4_ = 0x27;
  local_198._s_0.X = 2.80721553399563e-314;
  local_158.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_158.AssetPath.PackageName.Number = 0;
  local_158.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_158.AssetPath.AssetName.Number = 0;
  local_158.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubPathString.Data.ArrayNum = 0;
  local_158.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_158,(TStringView<char> *)&local_198);
  FVar6.Data = local_158.SubPathString.Data.AllocatorInstance.Data;
  *(undefined8 *)&(this->JointMesh).SoftObjectPtr = 0;
  *(uint *)&(this->JointMesh).SoftObjectPtr.field_0x8 =
       local_158.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->JointMesh).SoftObjectPtr.field_0xc = local_158.AssetPath.PackageName.Number;
  *(uint *)&(this->JointMesh).SoftObjectPtr.field_0x10 =
       local_158.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->JointMesh).SoftObjectPtr.field_0x14 = local_158.AssetPath.AssetName.Number;
  if ((FUtf8String *)this_01 != &local_158.SubPathString) {
    iVar7 = local_158.SubPathString.Data.ArrayNum;
    sVar17 = (size_t)local_158.SubPathString.Data.ArrayNum;
    puVar1 = &(this->JointMesh).SoftObjectPtr.field_0x24;
    iVar4 = *(int *)puVar1;
    *(int *)&(this->JointMesh).SoftObjectPtr.field_0x20 = local_158.SubPathString.Data.ArrayNum;
    if ((local_158.SubPathString.Data.ArrayNum == 0) && (iVar4 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_158.SubPathString.Data.ArrayNum,iVar4,(ForAnyElementType *)this_01,
                 local_158.SubPathString.Data.ArrayNum,(int *)puVar1);
      if (iVar7 != 0) {
        memcpy(*(void **)this_01,FVar6.Data,sVar17);
      }
    }
  }
  if (local_158.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.SubPathString.Data.AllocatorInstance.Data);
  }
  local_198._8_4_ = 0x2f;
  local_198._s_0.X = 2.80721555375825e-314;
  local_138.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_138.AssetPath.PackageName.Number = 0;
  local_138.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_138.AssetPath.AssetName.Number = 0;
  local_138.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.SubPathString.Data.ArrayNum = 0;
  local_138.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_138,(TStringView<char> *)&local_198);
  FVar6.Data = local_138.SubPathString.Data.AllocatorInstance.Data;
  *(undefined8 *)&(this->AxisMesh).SoftObjectPtr = 0;
  *(uint *)&(this->AxisMesh).SoftObjectPtr.field_0x8 =
       local_138.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->AxisMesh).SoftObjectPtr.field_0xc = local_138.AssetPath.PackageName.Number;
  *(uint *)&(this->AxisMesh).SoftObjectPtr.field_0x10 =
       local_138.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->AxisMesh).SoftObjectPtr.field_0x14 = local_138.AssetPath.AssetName.Number;
  if ((FUtf8String *)this_02 != &local_138.SubPathString) {
    iVar7 = local_138.SubPathString.Data.ArrayNum;
    sVar17 = (size_t)local_138.SubPathString.Data.ArrayNum;
    puVar1 = &(this->AxisMesh).SoftObjectPtr.field_0x24;
    iVar4 = *(int *)puVar1;
    *(int *)&(this->AxisMesh).SoftObjectPtr.field_0x20 = local_138.SubPathString.Data.ArrayNum;
    if ((local_138.SubPathString.Data.ArrayNum == 0) && (iVar4 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_138.SubPathString.Data.ArrayNum,iVar4,(ForAnyElementType *)this_02,
                 local_138.SubPathString.Data.ArrayNum,(int *)puVar1);
      if (iVar7 != 0) {
        memcpy(*(void **)this_02,FVar6.Data,sVar17);
      }
    }
  }
  if (local_138.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.SubPathString.Data.AllocatorInstance.Data);
  }
  local_198._8_4_ = 0x37;
  local_198._s_0.X = 2.8072155774734e-314;
  local_118.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_118.AssetPath.PackageName.Number = 0;
  local_118.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_118.AssetPath.AssetName.Number = 0;
  local_118.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SubPathString.Data.ArrayNum = 0;
  local_118.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_118,(TStringView<char> *)&local_198);
  FVar6.Data = local_118.SubPathString.Data.AllocatorInstance.Data;
  *(undefined8 *)&(this->TransformMesh).SoftObjectPtr = 0;
  *(uint *)&(this->TransformMesh).SoftObjectPtr.field_0x8 =
       local_118.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->TransformMesh).SoftObjectPtr.field_0xc = local_118.AssetPath.PackageName.Number;
  *(uint *)&(this->TransformMesh).SoftObjectPtr.field_0x10 =
       local_118.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->TransformMesh).SoftObjectPtr.field_0x14 = local_118.AssetPath.AssetName.Number;
  if ((FUtf8String *)this_03 != &local_118.SubPathString) {
    iVar7 = local_118.SubPathString.Data.ArrayNum;
    sVar17 = (size_t)local_118.SubPathString.Data.ArrayNum;
    puVar1 = &(this->TransformMesh).SoftObjectPtr.field_0x24;
    iVar4 = *(int *)puVar1;
    *(int *)&(this->TransformMesh).SoftObjectPtr.field_0x20 = local_118.SubPathString.Data.ArrayNum;
    if ((local_118.SubPathString.Data.ArrayNum == 0) && (iVar4 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_118.SubPathString.Data.ArrayNum,iVar4,(ForAnyElementType *)this_03,
                 local_118.SubPathString.Data.ArrayNum,(int *)puVar1);
      if (iVar7 != 0) {
        memcpy(*(void **)this_03,FVar6.Data,sVar17);
      }
    }
  }
  if (local_118.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.SubPathString.Data.AllocatorInstance.Data);
  }
  local_198._8_4_ = 0x35;
  local_198._s_0.X = 2.80721560514108e-314;
  local_f8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_f8.AssetPath.PackageName.Number = 0;
  local_f8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_f8.AssetPath.AssetName.Number = 0;
  local_f8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.SubPathString.Data.ArrayNum = 0;
  local_f8.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_f8,(TStringView<char> *)&local_198);
  FVar6.Data = local_f8.SubPathString.Data.AllocatorInstance.Data;
  *(undefined8 *)&(this->LocatorMesh).SoftObjectPtr = 0;
  puVar1 = &(this->LocatorMesh).SoftObjectPtr.field_0x18;
  *(uint *)&(this->LocatorMesh).SoftObjectPtr.field_0x8 =
       local_f8.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->LocatorMesh).SoftObjectPtr.field_0xc = local_f8.AssetPath.PackageName.Number;
  *(uint *)&(this->LocatorMesh).SoftObjectPtr.field_0x10 =
       local_f8.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->LocatorMesh).SoftObjectPtr.field_0x14 = local_f8.AssetPath.AssetName.Number;
  if ((FUtf8String *)puVar1 != &local_f8.SubPathString) {
    iVar7 = local_f8.SubPathString.Data.ArrayNum;
    sVar17 = (size_t)local_f8.SubPathString.Data.ArrayNum;
    puVar3 = &(this->LocatorMesh).SoftObjectPtr.field_0x24;
    iVar4 = *(int *)puVar3;
    *(int *)&(this->LocatorMesh).SoftObjectPtr.field_0x20 = local_f8.SubPathString.Data.ArrayNum;
    if ((local_f8.SubPathString.Data.ArrayNum == 0) && (iVar4 == 0)) {
      *(undefined4 *)puVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_f8.SubPathString.Data.ArrayNum,iVar4,(ForAnyElementType *)puVar1,
                 local_f8.SubPathString.Data.ArrayNum,(int *)puVar3);
      if (iVar7 != 0) {
        memcpy(*(void **)puVar1,FVar6.Data,sVar17);
      }
    }
  }
  if (local_f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.SubPathString.Data.AllocatorInstance.Data);
  }
  local_198._8_4_ = 0x39;
  local_198._s_0.X = 2.80721563280876e-314;
  local_d8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_d8.AssetPath.PackageName.Number = 0;
  local_d8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_d8.AssetPath.AssetName.Number = 0;
  local_d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.SubPathString.Data.ArrayNum = 0;
  local_d8.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_d8,(TStringView<char> *)&local_198);
  FVar6.Data = local_d8.SubPathString.Data.AllocatorInstance.Data;
  *(undefined8 *)&(this->CameraMesh).SoftObjectPtr = 0;
  puVar1 = &(this->CameraMesh).SoftObjectPtr.field_0x18;
  *(uint *)&(this->CameraMesh).SoftObjectPtr.field_0x8 =
       local_d8.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->CameraMesh).SoftObjectPtr.field_0xc = local_d8.AssetPath.PackageName.Number;
  *(uint *)&(this->CameraMesh).SoftObjectPtr.field_0x10 =
       local_d8.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->CameraMesh).SoftObjectPtr.field_0x14 = local_d8.AssetPath.AssetName.Number;
  if ((FUtf8String *)puVar1 != &local_d8.SubPathString) {
    iVar7 = local_d8.SubPathString.Data.ArrayNum;
    sVar17 = (size_t)local_d8.SubPathString.Data.ArrayNum;
    puVar3 = &(this->CameraMesh).SoftObjectPtr.field_0x24;
    iVar4 = *(int *)puVar3;
    *(int *)&(this->CameraMesh).SoftObjectPtr.field_0x20 = local_d8.SubPathString.Data.ArrayNum;
    if ((local_d8.SubPathString.Data.ArrayNum == 0) && (iVar4 == 0)) {
      *(undefined4 *)puVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_d8.SubPathString.Data.ArrayNum,iVar4,(ForAnyElementType *)puVar1,
                 local_d8.SubPathString.Data.ArrayNum,(int *)puVar3);
      if (iVar7 != 0) {
        memcpy(*(void **)puVar1,FVar6.Data,sVar17);
      }
    }
  }
  if (local_d8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.SubPathString.Data.AllocatorInstance.Data);
  }
  local_198._8_4_ = 0x2c;
  local_198._s_0.X = 2.80721566442896e-314;
  local_b8[0].AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_b8[0].AssetPath.PackageName.Number = 0;
  local_b8[0].AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_b8[0].AssetPath.AssetName.Number = 0;
  local_b8[0].SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8[0].SubPathString.Data.ArrayNum = 0;
  local_b8[0].SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(local_b8,(TStringView<char> *)&local_198);
  FVar6.Data = local_b8[0].SubPathString.Data.AllocatorInstance.Data;
  *(undefined8 *)&this_04->SoftObjectPtr = 0;
  puVar1 = &(this->SpriteTexture).SoftObjectPtr.field_0x18;
  *(uint *)&(this->SpriteTexture).SoftObjectPtr.field_0x8 =
       local_b8[0].AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->SpriteTexture).SoftObjectPtr.field_0xc = local_b8[0].AssetPath.PackageName.Number
  ;
  *(uint *)&(this->SpriteTexture).SoftObjectPtr.field_0x10 =
       local_b8[0].AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->SpriteTexture).SoftObjectPtr.field_0x14 = local_b8[0].AssetPath.AssetName.Number;
  if ((FUtf8String *)puVar1 != &local_b8[0].SubPathString) {
    iVar7 = local_b8[0].SubPathString.Data.ArrayNum;
    sVar17 = (size_t)local_b8[0].SubPathString.Data.ArrayNum;
    puVar3 = &(this->SpriteTexture).SoftObjectPtr.field_0x24;
    iVar4 = *(int *)puVar3;
    *(int *)&(this->SpriteTexture).SoftObjectPtr.field_0x20 =
         local_b8[0].SubPathString.Data.ArrayNum;
    if ((local_b8[0].SubPathString.Data.ArrayNum == 0) && (iVar4 == 0)) {
      *(undefined4 *)puVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_b8[0].SubPathString.Data.ArrayNum,iVar4,(ForAnyElementType *)puVar1,
                 local_b8[0].SubPathString.Data.ArrayNum,(int *)puVar3);
      if (iVar7 != 0) {
        memcpy(*(void **)puVar1,FVar6.Data,sVar17);
      }
    }
  }
  if (local_b8[0].SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8[0].SubPathString.Data.AllocatorInstance.Data);
  }
  pFVar9 = ::FName::FName(&local_res10,"Root");
  FVar13 = *pFVar9;
  pUVar10 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar11 = (USceneComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar13,pUVar10,pUVar10,true,false);
  AActor::SetRootComponent((AActor *)this,pUVar11);
  pFVar9 = ::FName::FName(&local_res8,"Sprite");
  FVar13 = *pFVar9;
  pUVar10 = Z_Construct_UClass_UBillboardComponent_NoRegister();
  pUVar12 = (UBillboardComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar13,pUVar10,pUVar10,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 != (UBillboardComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->BillboardComponent).field0_0x0.DebugPtr = pUVar12;
  USceneComponent::SetupAttachment((USceneComponent *)pUVar12,pUVar11,(FName)0x0);
  bVar8 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar8) {
    return this;
  }
  FVar13 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)this_04);
  if ((FVar13 == (FName)0x0) && (*(longlong *)&(this->SpriteTexture).SoftObjectPtr.field_0x8 != 0))
  {
    FVar14 = (FName)FSoftObjectPath::ResolveObject
                              ((FSoftObjectPath *)&(this->SpriteTexture).SoftObjectPtr.field_0x8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar14 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar14);
    }
    bVar8 = (*IsInAsyncLoadingThread)();
    if (((bVar8) && (FVar14 != (FName)0x0)) &&
       (pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)FVar14 + 0xc)),
       ((pFVar15->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14d00fca6:
      if ((*(uint *)((longlong)FVar14 + 8) >> 0x1e & 1) != 0) goto LAB_14d00fcb4;
      bVar8 = true;
    }
    else {
      local_res8 = FVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar14 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar14);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this_04,(FObjectPtr)&local_res8);
      if (FVar14 != (FName)0x0) goto LAB_14d00fca6;
LAB_14d00fcb4:
      bVar8 = false;
    }
    FVar13.ComparisonIndex.Value = 0;
    FVar13.Number = 0;
    if (bVar8) {
      FVar13 = FVar14;
    }
  }
  if (FVar13 != (FName)0x0) goto LAB_14d00fd9c;
  if (*(longlong *)&(this->SpriteTexture).SoftObjectPtr.field_0x8 == 0) {
    return this;
  }
  FSoftObjectPath::TryLoad
            ((FSoftObjectPath *)&(this->SpriteTexture).SoftObjectPtr.field_0x8,
             (FUObjectSerializeContext *)0x0);
  FVar13 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)this_04);
  if ((FVar13 == (FName)0x0) && (*(longlong *)&(this->SpriteTexture).SoftObjectPtr.field_0x8 != 0))
  {
    FVar14 = (FName)FSoftObjectPath::ResolveObject
                              ((FSoftObjectPath *)&(this->SpriteTexture).SoftObjectPtr.field_0x8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar14 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar14);
    }
    bVar8 = (*IsInAsyncLoadingThread)();
    if (((bVar8) && (FVar14 != (FName)0x0)) &&
       (pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)FVar14 + 0xc)),
       ((pFVar15->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14d00fd7a:
      if ((*(uint *)((longlong)FVar14 + 8) >> 0x1e & 1) != 0) goto LAB_14d00fd88;
      bVar8 = true;
    }
    else {
      local_res8 = FVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar14 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar14);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this_04,(FObjectPtr)&local_res8);
      if (FVar14 != (FName)0x0) goto LAB_14d00fd7a;
LAB_14d00fd88:
      bVar8 = false;
    }
    FVar13.ComparisonIndex.Value = 0;
    FVar13.Number = 0;
    if (bVar8) {
      FVar13 = FVar14;
    }
  }
  if (FVar13 == (FName)0x0) {
    return this;
  }
LAB_14d00fd9c:
  pUVar10 = Z_Construct_UClass_UTexture2D_NoRegister();
  iVar4 = (int)pUVar10->_padding_;
  if ((iVar4 <= *(int *)(*(longlong *)((longlong)FVar13 + 0x10) + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)((longlong)FVar13 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
      &pUVar10->_padding_)) {
    pUVar12 = (this->BillboardComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar12->_padding_ + 0xa90))(pUVar12,FVar13);
    dVar5 = __real_4024000000000000;
    ((this->BillboardComponent).field0_0x0.DebugPtr)->bIsScreenSizeScaled = 1;
    ((this->BillboardComponent).field0_0x0.DebugPtr)->ScreenSize = 0.0006;
    pUVar12 = (this->BillboardComponent).field0_0x0.DebugPtr;
    local_198._s_0.X = ((TRotator<double> *)&pUVar12->_padding_)->Pitch;
    local_198._s_0.Y = (double)pUVar12->_padding_;
    local_198._s_0.Z = (double)pUVar12->_padding_;
    pTVar16 = FRotationConversionCache::RotatorToQuat
                        ((FRotationConversionCache *)&pUVar12->_padding_,local_78,
                         (TRotator<double> *)&local_198);
    local_198._s_0.X = 0.0;
    local_198._s_0.Y = 0.0;
    local_198._s_0.Z = dVar5;
    USceneComponent::SetRelativeLocationAndRotation
              ((USceneComponent *)pUVar12,(TVector<double> *)&local_198,pTVar16,false,
               (FHitResult *)0x0,None);
  }
  return this;
}

// ~ALiveLinkDataPreview @ 14d015cf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALiveLinkDataPreview::~ALiveLinkDataPreview(ALiveLinkDataPreview *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7ALiveLinkDataPreview__6B_;
  pFVar1 = (this->CachedSubjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<ULiveLinkDataPreviewComponent,int>
            ((ULiveLinkDataPreviewComponent *)(this->Visualizers).AllocatorInstance.Data,
             (this->Visualizers).ArrayNum);
  pFVar1 = (this->Visualizers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SpriteTexture).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->LocatorMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->CameraMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->TransformMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->AxisMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->JointMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->BoneMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->Subjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14d051a70

UClass * __cdecl ALiveLinkDataPreview::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALiveLinkDataPreview.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkDataPreview",
               &Z_Registration_Info_UClass_ALiveLinkDataPreview.InnerSingleton,
               StaticRegisterNativesALiveLinkDataPreview,0x418,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALiveLinkDataPreview>,
               InternalVTableHelperCtorCaller<ALiveLinkDataPreview>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALiveLinkDataPreview.InnerSingleton;
}

// InitializeSubjects @ 14d05cbf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALiveLinkDataPreview::InitializeSubjects(ALiveLinkDataPreview *this)

{
  int *piVar1;
  TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  code *pcVar7;
  uint uVar8;
  FName *pFVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  UWorld *pUVar13;
  IModularFeatures *pIVar14;
  longlong lVar15;
  ULiveLinkDataPreviewComponent *pUVar16;
  UClass *pUVar17;
  UObject *pUVar18;
  UStaticMesh *pUVar19;
  ulonglong uVar20;
  void *pvVar21;
  ForAnyElementType FVar22;
  longlong *plVar23;
  FName *pFVar24;
  FUObjectCppClassStaticFunctions local_res10;
  uint local_res18;
  UClass *local_res20;
  TArray<ULiveLinkDataPreviewComponent_*,TSizedDefaultAllocator<32>_> local_98;
  void *local_88;
  uint local_80;
  UClass *local_78;
  UClass *local_70;
  UClass *local_68;
  UClass *local_60;
  FName *local_58;
  undefined8 local_40;
  
  pUVar13 = AActor::GetWorld((AActor *)this);
  if (pUVar13 != (UWorld *)0x0) {
    pUVar13 = AActor::GetWorld((AActor *)this);
    bVar10 = UWorld::IsPreviewWorld(pUVar13);
    if (!bVar10) {
      pIVar14 = IModularFeatures::Get();
      iVar12 = (**(code **)((longlong)*pIVar14 + 0x18))(pIVar14,ILiveLinkClient::ModularFeatureName)
      ;
      if (0 < iVar12) {
        pIVar14 = IModularFeatures::Get();
        lVar15 = (**(code **)((longlong)*pIVar14 + 0x20))
                           (pIVar14,ILiveLinkClient::ModularFeatureName);
        plVar23 = (longlong *)(lVar15 + -8);
        if (lVar15 == 0) {
          plVar23 = (longlong *)0x0;
        }
        (**(code **)(*plVar23 + 0x100))(plVar23,&local_88,0,0);
        pTVar2 = &this->Subjects;
        piVar1 = &(this->Subjects).ArrayMax;
        (this->Subjects).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
        uVar8 = local_80;
        uVar20 = (ulonglong)(int)local_80;
        pvVar4 = (void *)((longlong)local_88 + uVar20 * 0x18);
        pvVar21 = local_88;
        while( true ) {
          if ((uint)uVar20 != uVar8) {
            local_res10.AddReferencedObjects = local_res10.AddReferencedObjects & 0xffffffffffffff00
            ;
            `TCheckedPointerIterator<FLiveLinkSubjectKey,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_res10);
          }
          if (pvVar21 == pvVar4) break;
          local_40 = *(undefined8 *)((longlong)pvVar21 + 0x10);
          iVar12 = (this->Subjects).ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&pTVar2->AllocatorInstance,piVar1);
          }
          pvVar21 = (void *)((longlong)pvVar21 + 0x18);
          (this->Subjects).ArrayNum = iVar12 + 1;
          *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_40;
          uVar20 = (ulonglong)local_80;
        }
        local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.ArrayNum = 0;
        local_98.ArrayMax = 0;
        AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>
                  ((AActor *)this,&local_98,false);
        iVar12 = local_98.ArrayNum;
        uVar20 = (ulonglong)local_98.ArrayNum;
        pFVar5 = local_98.AllocatorInstance.Data + uVar20 * 8;
        FVar22.Data = local_98.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar20 != iVar12) {
            local_res10.AddReferencedObjects = local_res10.AddReferencedObjects & 0xffffffffffffff00
            ;
            `TCheckedPointerIterator<ULiveLinkDataPreviewComponent_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_res10);
          }
          if (FVar22.Data == pFVar5) break;
          (**(code **)(**(longlong **)FVar22.Data + 0x4a0))(*(longlong **)FVar22.Data,0);
          uVar20 = local_98._8_8_ & 0xffffffff;
          FVar22.Data = FVar22.Data + 8;
        }
        local_res18 = (this->Subjects).ArrayNum;
        uVar20 = (ulonglong)(int)local_res18;
        pFVar24 = (FName *)(pTVar2->AllocatorInstance).Data;
        local_58 = pFVar24 + uVar20;
        while( true ) {
          pFVar9 = local_58;
          if ((this->Subjects).ArrayNum != (int)uVar20) {
            local_res10.AddReferencedObjects = local_res10.AddReferencedObjects & 0xffffffffffffff00
            ;
            `TCheckedPointerIterator<FLiveLinkSubjectName,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_res10);
          }
          if (pFVar24 == pFVar9) break;
          FVar6 = *pFVar24;
          cVar11 = (**(code **)(*plVar23 + 0x118))(plVar23,FVar6);
          if (cVar11 != '\0') {
            if (Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton ==
                (UClass *)0x0) {
              local_res10.AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
              GetPrivateStaticClassBody
                        (L"/Script/LiveLink",L"LiveLinkDataPreviewComponent",
                         &Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton,
                         ULiveLinkDataPreviewComponent::
                         StaticRegisterNativesULiveLinkDataPreviewComponent,0xb20,0x10,
                         CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
                         InternalConstructor<ULiveLinkDataPreviewComponent>,
                         InternalVTableHelperCtorCaller<ULiveLinkDataPreviewComponent>,&local_res10,
                         UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
            }
            local_res20 = Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton !=
                (UClass *)0x0)) {
              UE::GC::MarkAsReachable
                        ((UObject *)
                         Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton);
            }
            pUVar16 = (ULiveLinkDataPreviewComponent *)
                      AActor::AddComponentByClass
                                ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res20,false,
                                 &UE::Math::TTransform<double>::Identity,false);
            if (pUVar16 == (ULiveLinkDataPreviewComponent *)0x0) {
LAB_14d05cefb:
              pUVar16 = (ULiveLinkDataPreviewComponent *)0x0;
            }
            else {
              pUVar17 = ULiveLinkDataPreviewComponent::StaticClass();
              iVar12 = (int)pUVar17->_padding_;
              if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar12) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar12 * 8)
                  != &pUVar17->_padding_)) goto LAB_14d05cefb;
            }
            (pUVar16->SubjectName).Name = FVar6;
            pUVar16->bEvaluateLiveLink = this->bEvaluateLiveLink;
            pUVar16->bDrawLabels = this->bDrawLabels;
            pcVar7 = *(code **)(*plVar23 + 0xe8);
            local_78 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)local_78);
            }
            cVar11 = (*pcVar7)(plVar23);
            if (cVar11 == '\0') {
              pcVar7 = *(code **)(*plVar23 + 0xe8);
              local_70 = Z_Construct_UClass_ULiveLinkLocatorRole_NoRegister();
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_70 != (UClass *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_70);
              }
              cVar11 = (*pcVar7)(plVar23);
              if (cVar11 == '\0') {
                pcVar7 = *(code **)(*plVar23 + 0xe8);
                local_68 = Z_Construct_UClass_ULiveLinkCameraRole_NoRegister();
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_68 != (UClass *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_68);
                }
                cVar11 = (*pcVar7)(plVar23,FVar6);
                if (cVar11 == '\0') {
                  pcVar7 = *(code **)(*plVar23 + 0xe8);
                  local_60 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_60 != (UClass *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)local_60);
                  }
                  cVar11 = (*pcVar7)(plVar23,FVar6);
                  if ((cVar11 != '\0') &&
                     (pUVar19 = TSoftObjectPtr<UStaticMesh>::LoadSynchronous(&this->TransformMesh),
                     pUVar19 != (UStaticMesh *)0x0)) {
                    (**(code **)(pUVar16->_padding_ + 0xb28))(pUVar16,pUVar19);
                  }
                }
                else {
                  pUVar19 = TSoftObjectPtr<UStaticMesh>::LoadSynchronous(&this->CameraMesh);
                  if (pUVar19 != (UStaticMesh *)0x0) {
                    (**(code **)(pUVar16->_padding_ + 0xb28))(pUVar16,pUVar19);
                    SetMaterialInstance(this,pUVar16);
                  }
                }
              }
              else {
                pUVar18 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                    ((TPersistentObjectPtr<FSoftObjectPath> *)&this->LocatorMesh);
                if (pUVar18 == (UObject *)0x0) {
                  puVar3 = &(this->LocatorMesh).SoftObjectPtr.field_0x8;
                  if (*(longlong *)puVar3 == 0) goto LAB_14d05d184;
                  FSoftObjectPath::TryLoad
                            ((FSoftObjectPath *)puVar3,(FUObjectSerializeContext *)0x0);
                  pUVar18 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->LocatorMesh);
                }
                if (pUVar18 != (UObject *)0x0) {
                  pUVar17 = Z_Construct_UClass_UStaticMesh_NoRegister();
                  iVar12 = (int)pUVar17->_padding_;
                  if ((iVar12 <= *(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) +
                       (longlong)iVar12 * 8) == &pUVar17->_padding_)) {
                    (**(code **)(pUVar16->_padding_ + 0xb28))(pUVar16,pUVar18);
                    SetMaterialInstance(this,pUVar16);
                  }
                }
              }
            }
            else {
              pUVar18 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                  ((TPersistentObjectPtr<FSoftObjectPath> *)&this->BoneMesh);
              if (pUVar18 == (UObject *)0x0) {
                puVar3 = &(this->BoneMesh).SoftObjectPtr.field_0x8;
                if (*(longlong *)puVar3 != 0) {
                  FSoftObjectPath::TryLoad
                            ((FSoftObjectPath *)puVar3,(FUObjectSerializeContext *)0x0);
                  pUVar18 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->BoneMesh);
                  goto LAB_14d05cf94;
                }
              }
              else {
LAB_14d05cf94:
                if (pUVar18 != (UObject *)0x0) {
                  pUVar17 = Z_Construct_UClass_UStaticMesh_NoRegister();
                  iVar12 = (int)pUVar17->_padding_;
                  if ((iVar12 <= *(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) +
                       (longlong)iVar12 * 8) == &pUVar17->_padding_)) {
                    (**(code **)(pUVar16->_padding_ + 0xb28))(pUVar16,pUVar18);
                    SetMaterialInstance(this,pUVar16);
                  }
                }
              }
              pUVar16->BoneVisualType = Bone;
            }
          }
LAB_14d05d184:
          uVar20 = (ulonglong)local_res18;
          pFVar24 = pFVar24 + 1;
        }
        if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
        }
        if (local_88 != (void *)0x0) {
          FMemory::Free(local_88);
        }
      }
    }
  }
  return;
}

// OnConstruction @ 14d063010

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ALiveLinkDataPreview::OnConstruction(ALiveLinkDataPreview *this,TTransform<double> *param_1)

{
  int *piVar1;
  TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  code *pcVar7;
  uint uVar8;
  FName *pFVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  UWorld *pUVar13;
  IModularFeatures *pIVar14;
  longlong lVar15;
  ULiveLinkDataPreviewComponent *pUVar16;
  UClass *pUVar17;
  UObject *pUVar18;
  UStaticMesh *pUVar19;
  ulonglong uVar20;
  void *pvVar21;
  ForAnyElementType FVar22;
  longlong *plVar23;
  FName *pFVar24;
  FUObjectCppClassStaticFunctions FStackX_10;
  uint uStackX_18;
  UClass *pUStackX_20;
  TArray<ULiveLinkDataPreviewComponent_*,TSizedDefaultAllocator<32>_> TStack_98;
  void *pvStack_88;
  uint uStack_80;
  UClass *pUStack_78;
  UClass *pUStack_70;
  UClass *pUStack_68;
  UClass *pUStack_60;
  FName *pFStack_58;
  undefined8 uStack_40;
  
  pUVar13 = AActor::GetWorld((AActor *)this);
  if (pUVar13 != (UWorld *)0x0) {
    pUVar13 = AActor::GetWorld((AActor *)this);
    bVar10 = UWorld::IsPreviewWorld(pUVar13);
    if (!bVar10) {
      pIVar14 = IModularFeatures::Get();
      iVar12 = (**(code **)((longlong)*pIVar14 + 0x18))(pIVar14,ILiveLinkClient::ModularFeatureName)
      ;
      if (0 < iVar12) {
        pIVar14 = IModularFeatures::Get();
        lVar15 = (**(code **)((longlong)*pIVar14 + 0x20))
                           (pIVar14,ILiveLinkClient::ModularFeatureName);
        plVar23 = (longlong *)(lVar15 + -8);
        if (lVar15 == 0) {
          plVar23 = (longlong *)0x0;
        }
        (**(code **)(*plVar23 + 0x100))(plVar23,&pvStack_88,0,0);
        pTVar2 = &this->Subjects;
        piVar1 = &(this->Subjects).ArrayMax;
        (this->Subjects).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
        uVar8 = uStack_80;
        uVar20 = (ulonglong)(int)uStack_80;
        pvVar4 = (void *)((longlong)pvStack_88 + uVar20 * 0x18);
        pvVar21 = pvStack_88;
        while( true ) {
          if ((uint)uVar20 != uVar8) {
            FStackX_10.AddReferencedObjects = FStackX_10.AddReferencedObjects & 0xffffffffffffff00;
            `TCheckedPointerIterator<FLiveLinkSubjectKey,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&FStackX_10);
          }
          if (pvVar21 == pvVar4) break;
          uStack_40 = *(undefined8 *)((longlong)pvVar21 + 0x10);
          iVar12 = (this->Subjects).ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&pTVar2->AllocatorInstance,piVar1);
          }
          pvVar21 = (void *)((longlong)pvVar21 + 0x18);
          (this->Subjects).ArrayNum = iVar12 + 1;
          *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = uStack_40;
          uVar20 = (ulonglong)uStack_80;
        }
        TStack_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_98.ArrayNum = 0;
        TStack_98.ArrayMax = 0;
        AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>
                  ((AActor *)this,&TStack_98,false);
        iVar12 = TStack_98.ArrayNum;
        uVar20 = (ulonglong)TStack_98.ArrayNum;
        pFVar5 = TStack_98.AllocatorInstance.Data + uVar20 * 8;
        FVar22.Data = TStack_98.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar20 != iVar12) {
            FStackX_10.AddReferencedObjects = FStackX_10.AddReferencedObjects & 0xffffffffffffff00;
            `TCheckedPointerIterator<ULiveLinkDataPreviewComponent_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&FStackX_10);
          }
          if (FVar22.Data == pFVar5) break;
          (**(code **)(**(longlong **)FVar22.Data + 0x4a0))(*(longlong **)FVar22.Data,0);
          uVar20 = TStack_98._8_8_ & 0xffffffff;
          FVar22.Data = FVar22.Data + 8;
        }
        uStackX_18 = (this->Subjects).ArrayNum;
        uVar20 = (ulonglong)(int)uStackX_18;
        pFVar24 = (FName *)(pTVar2->AllocatorInstance).Data;
        pFStack_58 = pFVar24 + uVar20;
        while( true ) {
          pFVar9 = pFStack_58;
          if ((this->Subjects).ArrayNum != (int)uVar20) {
            FStackX_10.AddReferencedObjects = FStackX_10.AddReferencedObjects & 0xffffffffffffff00;
            `TCheckedPointerIterator<FLiveLinkSubjectName,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&FStackX_10);
          }
          if (pFVar24 == pFVar9) break;
          FVar6 = *pFVar24;
          cVar11 = (**(code **)(*plVar23 + 0x118))(plVar23,FVar6);
          if (cVar11 != '\0') {
            if (Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton ==
                (UClass *)0x0) {
              FStackX_10.AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
              GetPrivateStaticClassBody
                        (L"/Script/LiveLink",L"LiveLinkDataPreviewComponent",
                         &Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton,
                         ULiveLinkDataPreviewComponent::
                         StaticRegisterNativesULiveLinkDataPreviewComponent,0xb20,0x10,
                         CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
                         InternalConstructor<ULiveLinkDataPreviewComponent>,
                         InternalVTableHelperCtorCaller<ULiveLinkDataPreviewComponent>,&FStackX_10,
                         UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
            }
            pUStackX_20 = Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton !=
                (UClass *)0x0)) {
              UE::GC::MarkAsReachable
                        ((UObject *)
                         Z_Registration_Info_UClass_ULiveLinkDataPreviewComponent.InnerSingleton);
            }
            pUVar16 = (ULiveLinkDataPreviewComponent *)
                      AActor::AddComponentByClass
                                ((AActor *)this,(TSubclassOf<UActorComponent>)&pUStackX_20,false,
                                 &UE::Math::TTransform<double>::Identity,false);
            if (pUVar16 == (ULiveLinkDataPreviewComponent *)0x0) {
LAB_14d05cefb:
              pUVar16 = (ULiveLinkDataPreviewComponent *)0x0;
            }
            else {
              pUVar17 = ULiveLinkDataPreviewComponent::StaticClass();
              iVar12 = (int)pUVar17->_padding_;
              if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar12) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar12 * 8)
                  != &pUVar17->_padding_)) goto LAB_14d05cefb;
            }
            (pUVar16->SubjectName).Name = FVar6;
            pUVar16->bEvaluateLiveLink = this->bEvaluateLiveLink;
            pUVar16->bDrawLabels = this->bDrawLabels;
            pcVar7 = *(code **)(*plVar23 + 0xe8);
            pUStack_78 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUStack_78 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUStack_78);
            }
            cVar11 = (*pcVar7)(plVar23);
            if (cVar11 == '\0') {
              pcVar7 = *(code **)(*plVar23 + 0xe8);
              pUStack_70 = Z_Construct_UClass_ULiveLinkLocatorRole_NoRegister();
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUStack_70 != (UClass *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUStack_70);
              }
              cVar11 = (*pcVar7)(plVar23);
              if (cVar11 == '\0') {
                pcVar7 = *(code **)(*plVar23 + 0xe8);
                pUStack_68 = Z_Construct_UClass_ULiveLinkCameraRole_NoRegister();
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUStack_68 != (UClass *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUStack_68);
                }
                cVar11 = (*pcVar7)(plVar23,FVar6);
                if (cVar11 == '\0') {
                  pcVar7 = *(code **)(*plVar23 + 0xe8);
                  pUStack_60 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUStack_60 != (UClass *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUStack_60);
                  }
                  cVar11 = (*pcVar7)(plVar23,FVar6);
                  if ((cVar11 != '\0') &&
                     (pUVar19 = TSoftObjectPtr<UStaticMesh>::LoadSynchronous(&this->TransformMesh),
                     pUVar19 != (UStaticMesh *)0x0)) {
                    (**(code **)(pUVar16->_padding_ + 0xb28))(pUVar16,pUVar19);
                  }
                }
                else {
                  pUVar19 = TSoftObjectPtr<UStaticMesh>::LoadSynchronous(&this->CameraMesh);
                  if (pUVar19 != (UStaticMesh *)0x0) {
                    (**(code **)(pUVar16->_padding_ + 0xb28))(pUVar16,pUVar19);
                    SetMaterialInstance(this,pUVar16);
                  }
                }
              }
              else {
                pUVar18 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                    ((TPersistentObjectPtr<FSoftObjectPath> *)&this->LocatorMesh);
                if (pUVar18 == (UObject *)0x0) {
                  puVar3 = &(this->LocatorMesh).SoftObjectPtr.field_0x8;
                  if (*(longlong *)puVar3 == 0) goto LAB_14d05d184;
                  FSoftObjectPath::TryLoad
                            ((FSoftObjectPath *)puVar3,(FUObjectSerializeContext *)0x0);
                  pUVar18 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->LocatorMesh);
                }
                if (pUVar18 != (UObject *)0x0) {
                  pUVar17 = Z_Construct_UClass_UStaticMesh_NoRegister();
                  iVar12 = (int)pUVar17->_padding_;
                  if ((iVar12 <= *(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) +
                       (longlong)iVar12 * 8) == &pUVar17->_padding_)) {
                    (**(code **)(pUVar16->_padding_ + 0xb28))(pUVar16,pUVar18);
                    SetMaterialInstance(this,pUVar16);
                  }
                }
              }
            }
            else {
              pUVar18 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                  ((TPersistentObjectPtr<FSoftObjectPath> *)&this->BoneMesh);
              if (pUVar18 == (UObject *)0x0) {
                puVar3 = &(this->BoneMesh).SoftObjectPtr.field_0x8;
                if (*(longlong *)puVar3 != 0) {
                  FSoftObjectPath::TryLoad
                            ((FSoftObjectPath *)puVar3,(FUObjectSerializeContext *)0x0);
                  pUVar18 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->BoneMesh);
                  goto LAB_14d05cf94;
                }
              }
              else {
LAB_14d05cf94:
                if (pUVar18 != (UObject *)0x0) {
                  pUVar17 = Z_Construct_UClass_UStaticMesh_NoRegister();
                  iVar12 = (int)pUVar17->_padding_;
                  if ((iVar12 <= *(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) +
                       (longlong)iVar12 * 8) == &pUVar17->_padding_)) {
                    (**(code **)(pUVar16->_padding_ + 0xb28))(pUVar16,pUVar18);
                    SetMaterialInstance(this,pUVar16);
                  }
                }
              }
              pUVar16->BoneVisualType = Bone;
            }
          }
LAB_14d05d184:
          uVar20 = (ulonglong)uStackX_18;
          pFVar24 = pFVar24 + 1;
        }
        if (TStack_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_98.AllocatorInstance.Data);
        }
        if (pvStack_88 != (void *)0x0) {
          FMemory::Free(pvStack_88);
        }
      }
    }
  }
  return;
}

// SetEnableLiveLinkData @ 14d07e460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALiveLinkDataPreview::SetEnableLiveLinkData(ALiveLinkDataPreview *this,bool param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  longlong *plVar9;
  UClass *pUVar10;
  UClass *local_res8;
  undefined1 local_res10 [8];
  longlong *local_28;
  ulonglong local_20;
  
  pUVar7 = (UClass *)0x0;
  pUVar10 = (UClass *)0x0;
  this->bEvaluateLiveLink = param_1;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  pUVar5 = ULiveLinkDataPreviewComponent::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 == (UClass *)0x0) goto LAB_14d07e4d7;
  }
  else {
    pUVar10 = pUVar7;
    if (pUVar5 == (UClass *)0x0) goto LAB_14d07e4d7;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar10 = pUVar7;
  if (pUVar6 != (UClass *)0x0) {
    iVar2 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar10 = pUVar5;
    }
  }
LAB_14d07e4d7:
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res8 = pUVar5;
  if (pUVar10 == pUVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<ULiveLinkDataPreviewComponent,1,0,_AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<ULiveLinkDataPreviewComponent_*,TSizedDefaultAllocator<32>_> *)&local_28);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<ULiveLinkDataPreviewComponent,0,0,_AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<ULiveLinkDataPreviewComponent_*,TSizedDefaultAllocator<32>_> *)&local_28);
  }
  iVar2 = (int)local_20;
  uVar8 = (ulonglong)(int)local_20;
  plVar1 = local_28 + uVar8;
  plVar9 = local_28;
  while( true ) {
    if ((int)uVar8 != iVar2) {
      `TCheckedPointerIterator<ULiveLinkDataPreviewComponent_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (plVar9 == plVar1) break;
    lVar3 = *plVar9;
    plVar9 = plVar9 + 1;
    *(bool *)(lVar3 + 0xa08) = this->bEvaluateLiveLink;
    uVar8 = local_20 & 0xffffffff;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// SetMaterialInstance @ 14d07ea50

void __thiscall
ALiveLinkDataPreview::SetMaterialInstance
          (ALiveLinkDataPreview *this,ULiveLinkDataPreviewComponent *param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  UMaterialInterface *pUVar5;
  UMaterialInstanceDynamic *this_00;
  FName *pFVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FName local_res18 [2];
  FLinearColor_u_0 local_68 [6];
  
  pUVar5 = UStaticMeshComponent::GetMaterial((UStaticMeshComponent *)param_1,0);
  if (pUVar5 != (UMaterialInterface *)0x0) {
    local_res18[0].ComparisonIndex.Value = 0;
    local_res18[0].Number = 0;
    this_00 = (UMaterialInstanceDynamic *)
              (**(code **)(param_1->_padding_ + 0x6d8))(param_1,0,pUVar5,0);
    (**(code **)(param_1->_padding_ + 0x6b8))(param_1,0,this_00);
    UMaterialInstanceDynamic::ClearParameterValues(this_00);
    uVar3 = rand();
    dVar2 = __real_3fde147ae147ae15;
    fVar10 = __real_38000100;
    dVar1 = __real_3fd51eb851eb851f;
    fVar11 = (float)((double)((float)(uVar3 & 0x7fff) * __real_38000100) * __real_3fde147ae147ae15 +
                    __real_3fd51eb851eb851f);
    uVar3 = rand();
    fVar12 = (float)((double)((float)(uVar3 & 0x7fff) * fVar10) * dVar2 + dVar1);
    uVar3 = rand();
    fVar10 = (float)((double)((float)(uVar3 & 0x7fff) * fVar10) * dVar2 + dVar1);
    uVar3 = rand();
    iVar4 = (int)((float)(uVar3 & 0x7fff) * __real_38800100);
    iVar7 = 1;
    if (iVar4 < 1) {
      iVar7 = iVar4;
    }
    fVar9 = fVar10;
    if (iVar7 != 1) {
      fVar9 = fVar12 - fVar11;
    }
    uVar3 = rand();
    iVar4 = (int)((float)(uVar3 & 0x7fff) * __real_38800100);
    iVar7 = 1;
    if (iVar4 < 1) {
      iVar7 = iVar4;
    }
    fVar8 = fVar12;
    if (iVar7 != 1) {
      fVar8 = fVar12 - fVar10;
    }
    uVar3 = rand();
    iVar4 = (int)((float)(uVar3 & 0x7fff) * __real_38800100);
    iVar7 = 1;
    if (iVar4 < 1) {
      iVar7 = iVar4;
    }
    if (iVar7 != 1) {
      fVar11 = fVar11 - fVar12;
    }
    pFVar6 = ::FName::FName(local_res18,L"Color");
    local_68[0]._s_0.A = 1.0;
    local_68[0]._0_4_ = fVar11;
    local_68[0]._4_4_ = fVar8;
    local_68[0]._8_4_ = fVar9;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (this_00,*pFVar6,(FLinearColor *)&local_68[0]._s_0);
  }
  return;
}

// StaticRegisterNativesALiveLinkDataPreview @ 14d0805e0

void __cdecl ALiveLinkDataPreview::StaticRegisterNativesALiveLinkDataPreview(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ALiveLinkDataPreview_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14d0813c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALiveLinkDataPreview::Tick(ALiveLinkDataPreview *this,float param_1)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  TArray<FLiveLinkSubjectKey,TSizedDefaultAllocator<32>_> *pTVar7;
  void *local_18;
  int local_10;
  
  AActor::Tick((AActor *)this,param_1);
  pIVar4 = IModularFeatures::Get();
  iVar3 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar3) {
    pIVar4 = IModularFeatures::Get();
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,ILiveLinkClient::ModularFeatureName,0);
    plVar6 = (longlong *)(lVar5 + -8);
    if (lVar5 == 0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(*plVar6 + 0x100))(plVar6,&local_18,0,0);
    iVar3 = local_10;
    if (local_10 != (this->CachedSubjects).ArrayNum) {
      InitializeSubjects(this);
      iVar3 = local_10;
    }
    _Src = local_18;
    pTVar7 = &this->CachedSubjects;
    if (pTVar7 != (TArray<FLiveLinkSubjectKey,TSizedDefaultAllocator<32>_> *)&local_18) {
      iVar2 = (this->CachedSubjects).ArrayMax;
      piVar1 = &(this->CachedSubjects).ArrayMax;
      (this->CachedSubjects).ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,iVar3,iVar2,&pTVar7->AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar7->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x18);
        }
      }
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}

// execInitializeSubjects @ 14d08ef20

void __cdecl
ALiveLinkDataPreview::execInitializeSubjects(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  InitializeSubjects((ALiveLinkDataPreview *)param_1);
  return;
}

// execSetEnableLiveLinkData @ 14d08f720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ALiveLinkDataPreview::execSetEnableLiveLinkData(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  longlong *plVar10;
  UClass *pUVar11;
  UClass *local_res8;
  int local_res10 [2];
  longlong *local_28;
  ulonglong local_20;
  
  pUVar8 = (UClass *)0x0;
  pUVar11 = (UClass *)0x0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (longlong *)0x0;
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x19].field_0x1 = local_res10[0] != 0;
  pUVar6 = ULiveLinkDataPreviewComponent::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UClass *)0x0) goto LAB_14d08f7f3;
  }
  else {
    pUVar11 = pUVar8;
    if (pUVar6 == (UClass *)0x0) goto LAB_14d08f7f3;
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar11 = pUVar8;
  if (pUVar7 != (UClass *)0x0) {
    iVar2 = (int)pUVar7->_padding_;
    if (((int)pUVar6->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar11 = pUVar6;
    }
  }
LAB_14d08f7f3:
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res8 = pUVar6;
  if (pUVar11 == pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<ULiveLinkDataPreviewComponent,1,0,_AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)param_1,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<ULiveLinkDataPreviewComponent_*,TSizedDefaultAllocator<32>_> *)&local_28);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<ULiveLinkDataPreviewComponent,0,0,_AActor::GetComponents<ULiveLinkDataPreviewComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)param_1,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<ULiveLinkDataPreviewComponent_*,TSizedDefaultAllocator<32>_> *)&local_28);
  }
  iVar2 = (int)local_20;
  uVar9 = (ulonglong)(int)local_20;
  plVar1 = local_28 + uVar9;
  plVar10 = local_28;
  while( true ) {
    if ((int)uVar9 != iVar2) {
      `TCheckedPointerIterator<ULiveLinkDataPreviewComponent_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (plVar10 == plVar1) break;
    lVar4 = *plVar10;
    plVar10 = plVar10 + 1;
    *(undefined1 *)(lVar4 + 0xa08) = param_1[0x19].field_0x1;
    uVar9 = local_20 & 0xffffffff;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

