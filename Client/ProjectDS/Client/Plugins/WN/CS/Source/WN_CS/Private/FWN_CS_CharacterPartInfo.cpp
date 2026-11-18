// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 4

// StaticStruct @ 14a69d8a0

UScriptStruct * __cdecl FWN_CS_CharacterPartInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPartInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPartInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_CS_CharacterPartInfo,(UObject *)pUVar1,
                         L"WN_CS_CharacterPartInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPartInfo.OuterSingleton;
}

// FWN_CS_CharacterPartInfo @ 14a6a19d0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

FWN_CS_CharacterPartInfo * __thiscall
FWN_CS_CharacterPartInfo::FWN_CS_CharacterPartInfo
          (FWN_CS_CharacterPartInfo *this,FWN_CS_CharacterPartInfo *param_1)

{
  TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FWN_CS_CharacterPresetSlotMaterialDesc *pFVar8;
  FName FVar9;
  
  this->bIsTickable = param_1->bIsTickable;
  this->bIsHidden = param_1->bIsHidden;
  this->Scale = param_1->Scale;
  this->SlotName = param_1->SlotName;
  this->SocketName = param_1->SocketName;
  this->ResourceType = param_1->ResourceType;
  FVar9 = (param_1->ResourcePath).AssetPath.AssetName;
  (this->ResourcePath).AssetPath.PackageName = (param_1->ResourcePath).AssetPath.PackageName;
  (this->ResourcePath).AssetPath.AssetName = FVar9;
  FUtf8String::FUtf8String
            (&(this->ResourcePath).SubPathString,&(param_1->ResourcePath).SubPathString);
  pTVar1 = &this->HitSphereInfoArray;
  this->bUseLeaderPose = param_1->bUseLeaderPose;
  this->CollisionProfileName = param_1->CollisionProfileName;
  piVar2 = &(this->HitSphereInfoArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->HitSphereInfoArray).ArrayNum;
  pFVar7 = (param_1->HitSphereInfoArray).AllocatorInstance.Data;
  (this->HitSphereInfoArray).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar6,0,&pTVar1->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x50);
  }
  pTVar3 = &this->ServerHitCapsuleInfoArray;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ServerHitCapsuleInfoArray).ArrayMax;
  iVar6 = (param_1->ServerHitCapsuleInfoArray).ArrayNum;
  pFVar7 = (param_1->ServerHitCapsuleInfoArray).AllocatorInstance.Data;
  (this->ServerHitCapsuleInfoArray).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x50);
  }
  pTVar4 = &this->ColliderInfoArray;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ColliderInfoArray).ArrayMax;
  iVar6 = (param_1->ColliderInfoArray).ArrayNum;
  pFVar7 = (param_1->ColliderInfoArray).AllocatorInstance.Data;
  (this->ColliderInfoArray).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x60);
  }
  pTVar5 = &this->MaterialDescs;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MaterialDescs).ArrayMax;
  iVar6 = (param_1->MaterialDescs).ArrayNum;
  pFVar8 = (FWN_CS_CharacterPresetSlotMaterialDesc *)(param_1->MaterialDescs).AllocatorInstance.Data
  ;
  (this->MaterialDescs).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar2);
    ConstructItems<FWN_CS_CharacterPresetSlotMaterialDesc,FWN_CS_CharacterPresetSlotMaterialDesc,int>
              ((pTVar5->AllocatorInstance).Data,pFVar8,iVar6);
  }
  return this;
}

// ~FWN_CS_CharacterPartInfo @ 14a6a2a40

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall FWN_CS_CharacterPartInfo::~FWN_CS_CharacterPartInfo(FWN_CS_CharacterPartInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
            ((FWN_CS_CharacterPresetSlotMaterialDesc *)(this->MaterialDescs).AllocatorInstance.Data,
             (this->MaterialDescs).ArrayNum);
  pFVar1 = (this->MaterialDescs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ColliderInfoArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ServerHitCapsuleInfoArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HitSphereInfoArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ResourcePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14a6a3070

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

FWN_CS_CharacterPartInfo * __thiscall
FWN_CS_CharacterPartInfo::operator=
          (FWN_CS_CharacterPartInfo *this,FWN_CS_CharacterPartInfo *param_1)

{
  FName FVar1;
  
  this->bIsTickable = param_1->bIsTickable;
  this->bIsHidden = param_1->bIsHidden;
  this->Scale = param_1->Scale;
  this->SlotName = param_1->SlotName;
  this->SocketName = param_1->SocketName;
  this->ResourceType = param_1->ResourceType;
  FVar1 = (param_1->ResourcePath).AssetPath.AssetName;
  (this->ResourcePath).AssetPath.PackageName = (param_1->ResourcePath).AssetPath.PackageName;
  (this->ResourcePath).AssetPath.AssetName = FVar1;
  FUtf8String::operator=(&(this->ResourcePath).SubPathString,&(param_1->ResourcePath).SubPathString)
  ;
  this->bUseLeaderPose = param_1->bUseLeaderPose;
  this->CollisionProfileName = param_1->CollisionProfileName;
  TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_>::operator=
            (&this->HitSphereInfoArray,&param_1->HitSphereInfoArray);
  TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_>::operator=
            (&this->ServerHitCapsuleInfoArray,&param_1->ServerHitCapsuleInfoArray);
  TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_>::operator=
            (&this->ColliderInfoArray,&param_1->ColliderInfoArray);
  TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_>::operator=
            (&this->MaterialDescs,&param_1->MaterialDescs);
  return this;
}

