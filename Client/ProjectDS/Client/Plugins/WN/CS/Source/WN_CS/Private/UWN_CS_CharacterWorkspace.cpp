// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 11

// StaticClass @ 14a69ce20

UClass * __cdecl UWN_CS_CharacterWorkspace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_CharacterWorkspace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_CharacterWorkspace",
               &Z_Registration_Info_UClass_UWN_CS_CharacterWorkspace.InnerSingleton,
               StaticRegisterNativesUWN_CS_CharacterWorkspace,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_CS_CharacterWorkspace>,
               InternalVTableHelperCtorCaller<UWN_CS_CharacterWorkspace>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterWorkspace.InnerSingleton;
}

// UWN_CS_CharacterWorkspace @ 14a6a2670

/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

UWN_CS_CharacterWorkspace * __thiscall
UWN_CS_CharacterWorkspace::UWN_CS_CharacterWorkspace
          (UWN_CS_CharacterWorkspace *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->Version = Initial;
  this->_padding_ = (longlong)&___7UWN_CS_CharacterWorkspace__6B_;
  (this->CharacterDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterDescs).ArrayNum = 0;
  (this->CharacterDescs).ArrayMax = 0;
  return this;
}

// UWN_CS_CharacterWorkspace @ 14a6a26b0

/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

UWN_CS_CharacterWorkspace * __thiscall
UWN_CS_CharacterWorkspace::UWN_CS_CharacterWorkspace
          (UWN_CS_CharacterWorkspace *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->Version = Initial;
  this->_padding_ = (longlong)&___7UWN_CS_CharacterWorkspace__6B_;
  (this->CharacterDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterDescs).ArrayNum = 0;
  (this->CharacterDescs).ArrayMax = 0;
  return this;
}

// ~UWN_CS_CharacterWorkspace @ 14a6a2cb0

/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterWorkspace::~UWN_CS_CharacterWorkspace(UWN_CS_CharacterWorkspace *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWN_CS_CharacterWorkspace__6B_;
  DestructItems<FWN_CS_CharacterDesc,int>
            ((FWN_CS_CharacterDesc *)(this->CharacterDescs).AllocatorInstance.Data,
             (this->CharacterDescs).ArrayNum);
  pFVar1 = (this->CharacterDescs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// FillInfosByPreset @ 14a6a7c30

/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

bool __thiscall
UWN_CS_CharacterWorkspace::FillInfosByPreset
          (UWN_CS_CharacterWorkspace *this,int param_1,int param_2,FWN_CS_CharacterSoulInfo *param_3
          ,TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> *param_4,
          FWN_CS_CharacterNonePartInfo *param_5)

{
  bool bVar1;
  FWN_CS_CharacterDesc *pFVar2;
  FWN_CS_CharacterPresetDesc *pFVar3;
  FWN_CS_CharacterDesc *pFVar4;
  FWN_CS_CharacterPresetDesc *pFVar5;
  undefined8 local_res8;
  
  pFVar4 = (FWN_CS_CharacterDesc *)(this->CharacterDescs).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (this->CharacterDescs).ArrayNum;
  do {
    if (pFVar4 == pFVar2) {
LAB_14a6a7c6e:
      local_res8 = 0;
      FSoftObjectPtr::operator=(&(param_3->SkeletalMesh).SoftObjectPtr,(FObjectPtr)&local_res8);
      (param_3->AnimPath).AssetPath.AssetName.ComparisonIndex = 0;
      (param_3->AnimPath).AssetPath.AssetName.Number = 0;
      (param_3->AnimPath).AssetPath.PackageName.ComparisonIndex = 0;
      (param_3->AnimPath).AssetPath.PackageName.Number = 0;
      FUtf8String::Reset(&(param_3->AnimPath).SubPathString,0);
      param_3->AnimType = AnimBP;
      DestructItems<FWN_CS_CharacterPartInfo,int>
                ((FWN_CS_CharacterPartInfo *)(param_4->AllocatorInstance).Data,param_4->ArrayNum);
      param_4->ArrayNum = 0;
      if (param_4->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
      }
      return false;
    }
    if (param_1 == pFVar4->ID) {
      if (pFVar4 != (FWN_CS_CharacterDesc *)0x0) {
        pFVar5 = (FWN_CS_CharacterPresetDesc *)(pFVar4->CharacterPresetDescs).AllocatorInstance.Data
        ;
        pFVar3 = pFVar5 + (pFVar4->CharacterPresetDescs).ArrayNum;
        for (; pFVar5 != pFVar3; pFVar5 = pFVar5 + 1) {
          if (pFVar5->ID == param_2) {
            bVar1 = FillInfosByPreset(this,pFVar4,pFVar5,param_3,param_4,param_5);
            return bVar1;
          }
        }
      }
      goto LAB_14a6a7c6e;
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// FillInfosByPreset @ 14a6a7d40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

bool __thiscall
UWN_CS_CharacterWorkspace::FillInfosByPreset
          (UWN_CS_CharacterWorkspace *this,FWN_CS_CharacterDesc *param_1,
          FWN_CS_CharacterPresetDesc *param_2,FWN_CS_CharacterSoulInfo *param_3,
          TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> *param_4,
          FWN_CS_CharacterNonePartInfo *param_5)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement FVar4;
  EWN_CS_ResourceType EVar5;
  uint uVar6;
  FName FVar7;
  FWN_CS_CharacterPresetSlotMaterialDesc *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FName FVar12;
  FName FVar13;
  ForAnyElementType FVar14;
  FWN_CS_CharacterPresetSlotDesc *pFVar15;
  int iVar16;
  int iVar17;
  FWN_CS_CharacterPartDesc *pFVar18;
  ulonglong uVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  size_t _Size;
  longlong lVar22;
  FWN_CS_CharacterDesc *pFVar23;
  FWN_CS_CharacterPresetSlotDesc *pFVar24;
  FScriptContainerElement *pFVar25;
  TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *pTVar26;
  FWN_CS_CharacterDesc *local_res10;
  FWN_CS_CharacterPresetDesc *local_res18;
  undefined8 local_res20;
  FUtf8String local_200;
  FScriptContainerElement local_1f0;
  FName local_1ec;
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  uint local_198;
  FWN_CS_CharacterPresetSlotDesc *local_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FWN_CS_CharacterPresetSlotDesc local_128;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  FWN_CS_CharacterPresetSlotDesc local_88 [2];
  
  local_res20 = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  FSoftObjectPtr::operator=(&(param_3->SkeletalMesh).SoftObjectPtr,(FObjectPtr)&local_res20);
  (param_3->AnimPath).AssetPath.AssetName.ComparisonIndex = 0;
  (param_3->AnimPath).AssetPath.AssetName.Number = 0;
  (param_3->AnimPath).AssetPath.PackageName.ComparisonIndex = 0;
  (param_3->AnimPath).AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&(param_3->AnimPath).SubPathString,0);
  param_3->AnimType = AnimBP;
  DestructItems<FWN_CS_CharacterPartInfo,int>
            ((FWN_CS_CharacterPartInfo *)(param_4->AllocatorInstance).Data,param_4->ArrayNum);
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  if ((param_1 != (FWN_CS_CharacterDesc *)0x0) && (param_2 != (FWN_CS_CharacterPresetDesc *)0x0)) {
    *(undefined8 *)&(param_3->SkeletalMesh).SoftObjectPtr =
         *(undefined8 *)&(param_2->SoulSKM).SoftObjectPtr;
    uVar10 = *(undefined8 *)&(param_2->SoulSKM).SoftObjectPtr.field_0x10;
    *(undefined8 *)&(param_3->SkeletalMesh).SoftObjectPtr.field_0x8 =
         *(undefined8 *)&(param_2->SoulSKM).SoftObjectPtr.field_0x8;
    *(undefined8 *)&(param_3->SkeletalMesh).SoftObjectPtr.field_0x10 = uVar10;
    FUtf8String::operator=
              ((FUtf8String *)&(param_3->SkeletalMesh).SoftObjectPtr.field_0x18,
               (FUtf8String *)&(param_2->SoulSKM).SoftObjectPtr.field_0x18);
    pFVar23 = local_res10;
    FVar7 = (local_res10->AnimationPath).AssetPath.AssetName;
    (param_3->AnimPath).AssetPath.PackageName = (local_res10->AnimationPath).AssetPath.PackageName;
    (param_3->AnimPath).AssetPath.AssetName = FVar7;
    FUtf8String::operator=
              (&(param_3->AnimPath).SubPathString,&(local_res10->AnimationPath).SubPathString);
    param_3->AnimType = pFVar23->AnimationType;
    param_3->bIsSoulVisible = pFVar23->bIsSoulVisible;
    param_3->bIsHidden = pFVar23->bIsHidden;
    param_3->WorkspaceVersion = this->Version;
    if (*(longlong *)&(param_3->SkeletalMesh).SoftObjectPtr.field_0x8 != 0) {
      local_198 = (param_2->CharacterPresetSlotDescs).ArrayNum;
      uVar19 = (ulonglong)(int)local_198;
      pFVar24 = (FWN_CS_CharacterPresetSlotDesc *)
                (param_2->CharacterPresetSlotDescs).AllocatorInstance.Data;
      local_190 = pFVar24 + uVar19;
      pTVar26 = &pFVar24->MaterialDescs;
      while( true ) {
        pFVar15 = local_190;
        if ((param_2->CharacterPresetSlotDescs).ArrayNum != (int)uVar19) {
          `TCheckedPointerIterator<FWN_CS_CharacterPresetSlotDesc_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res20);
        }
        if (pFVar24 == pFVar15) break;
        FWN_CS_CharacterPresetSlotDesc::FWN_CS_CharacterPresetSlotDesc(&local_128,pFVar24);
        FWN_CS_CharacterPresetSlotDesc::FWN_CS_CharacterPresetSlotDesc(local_88,&local_128);
        pFVar18 = TArray<FWN_CS_CharacterPartDesc,TSizedDefaultAllocator<32>_>::
                  FindByPredicate<_UWN_CS_CharacterWorkspace::FillInfosByPreset_::__l12::<lambda_1>_>
                            (&pFVar23->CharacterPartDescs,(<lambda_1> *)local_88);
        DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
                  ((FWN_CS_CharacterPresetSlotMaterialDesc *)
                   local_128.MaterialDescs.AllocatorInstance.Data,local_128.MaterialDescs.ArrayNum);
        if ((FWN_CS_CharacterPresetSlotMaterialDesc *)local_128.MaterialDescs.AllocatorInstance.Data
            != (FWN_CS_CharacterPresetSlotMaterialDesc *)0x0) {
          FMemory::Free(local_128.MaterialDescs.AllocatorInstance.Data);
        }
        if (pFVar18 != (FWN_CS_CharacterPartDesc *)0x0) {
          local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_200.Data.ArrayNum = 0;
          local_200.Data.ArrayMax = 0;
          local_1ec.ComparisonIndex.Value = 0;
          local_1ec.Number = 0;
          local_1e0.Data = (FScriptContainerElement *)0x0;
          local_1d8 = 0;
          local_1d0.Data = (FScriptContainerElement *)0x0;
          local_1c8 = 0;
          local_1c0.Data = (FScriptContainerElement *)0x0;
          local_1b8 = 0;
          local_1b0.Data = (FScriptContainerElement *)0x0;
          local_1a8 = 0;
          local_1f0 = (FScriptContainerElement)0x1;
          FVar3 = (FScriptContainerElement)pFVar18->bIsTickable;
          FVar4 = *(FScriptContainerElement *)
                   ((longlong)&(&pTVar26[-2].AllocatorInstance)[1].Data + 4);
          EVar5 = pFVar18->ResourceType;
          FVar7 = pFVar18->Socket;
          FVar12 = (pFVar18->ResourcePath).AssetPath.PackageName;
          FVar13 = (pFVar18->ResourcePath).AssetPath.AssetName;
          FUtf8String::operator=(&local_200,&(pFVar18->ResourcePath).SubPathString);
          local_1f0 = (FScriptContainerElement)pFVar18->bUseLeaderPose;
          if ((TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_> *)&local_1e0 !=
              &pFVar18->HitSphereInfoArray) {
            iVar16 = (pFVar18->HitSphereInfoArray).ArrayNum;
            pFVar21 = (pFVar18->HitSphereInfoArray).AllocatorInstance.Data;
            local_1d8 = CONCAT44(local_1d8._4_4_,iVar16);
            if ((iVar16 == 0) && (local_1d8._4_4_ == 0)) {
              local_1d8 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x50,8,iVar16,local_1d8._4_4_,&local_1e0,iVar16,
                         (int *)((longlong)&local_1d8 + 4));
              if (iVar16 != 0) {
                memcpy(local_1e0.Data,pFVar21,(longlong)iVar16 * 0x50);
              }
            }
          }
          if ((TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *)&local_1d0 !=
              &pFVar18->ServerHitCapsuleInfoArray) {
            iVar16 = (pFVar18->ServerHitCapsuleInfoArray).ArrayNum;
            pFVar21 = (pFVar18->ServerHitCapsuleInfoArray).AllocatorInstance.Data;
            local_1c8 = CONCAT44(local_1c8._4_4_,iVar16);
            if ((iVar16 == 0) && (local_1c8._4_4_ == 0)) {
              local_1c8 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x50,8,iVar16,local_1c8._4_4_,&local_1d0,iVar16,
                         (int *)((longlong)&local_1c8 + 4));
              if (iVar16 != 0) {
                memcpy(local_1d0.Data,pFVar21,(longlong)iVar16 * 0x50);
              }
            }
          }
          local_1ec = pFVar18->CollisionProfileName;
          if ((TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_> *)&local_1c0 !=
              &pFVar18->ColliderInfoArray) {
            iVar16 = (pFVar18->ColliderInfoArray).ArrayNum;
            pFVar21 = (pFVar18->ColliderInfoArray).AllocatorInstance.Data;
            local_1b8 = CONCAT44(local_1b8._4_4_,iVar16);
            if ((iVar16 == 0) && (local_1b8._4_4_ == 0)) {
              local_1b8 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x60,8,iVar16,local_1b8._4_4_,&local_1c0,iVar16,
                         (int *)((longlong)&local_1b8 + 4));
              if (iVar16 != 0) {
                memcpy(local_1c0.Data,pFVar21,(longlong)iVar16 * 0x60);
              }
            }
          }
          if ((TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *)
              &local_1b0 != pTVar26) {
            DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
                      ((FWN_CS_CharacterPresetSlotMaterialDesc *)local_1b0.Data,(int)local_1a8);
            iVar16 = pTVar26->ArrayNum;
            pFVar8 = (FWN_CS_CharacterPresetSlotMaterialDesc *)(pTVar26->AllocatorInstance).Data;
            local_1a8 = CONCAT44(local_1a8._4_4_,iVar16);
            if ((iVar16 == 0) && (local_1a8._4_4_ == 0)) {
              local_1a8 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xa8,8,iVar16,local_1a8._4_4_,&local_1b0,iVar16,
                         (int *)((longlong)&local_1a8 + 4));
              ConstructItems<FWN_CS_CharacterPresetSlotMaterialDesc,FWN_CS_CharacterPresetSlotMaterialDesc,int>
                        (local_1b0.Data,pFVar8,iVar16);
            }
          }
          fVar2 = *(float *)((longlong)(pTVar26 + -1) + 0xc);
          iVar16 = param_4->ArrayNum;
          if (iVar16 == param_4->ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x888,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          FVar14.Data = local_200.Data.AllocatorInstance.Data;
          lVar20 = (longlong)iVar16 * 0x88;
          param_4->ArrayNum = iVar16 + 1;
          pFVar21 = (param_4->AllocatorInstance).Data;
          pFVar21[lVar20] = FVar3;
          pFVar25 = pFVar21 + lVar20 + 0x28;
          pFVar21[lVar20 + 1] = (FScriptContainerElement)0x0;
          *(float *)(pFVar21 + lVar20 + 4) = fVar2;
          pFVar21[lVar20 + 8] = FVar4;
          *(FName *)(pFVar21 + lVar20 + 0xc) = FVar7;
          *(EWN_CS_ResourceType *)(pFVar21 + lVar20 + 0x14) = EVar5;
          *(FName *)(pFVar21 + lVar20 + 0x18) = FVar12;
          ((FName *)(pFVar21 + lVar20 + 0x18))[1] = FVar13;
          *(FScriptContainerElement **)&pFVar25->field_0x0 = (FScriptContainerElement *)0x0;
          _Size = (size_t)local_200.Data.ArrayNum;
          *(int *)&pFVar25[8].field_0x0 = local_200.Data.ArrayNum;
          if (local_200.Data.ArrayNum == 0) {
            *(int *)(pFVar21 + lVar20 + 0x34) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_200.Data.ArrayNum,0,(ForAnyElementType *)pFVar25,
                       local_200.Data.ArrayNum,(int *)(pFVar21 + lVar20 + 0x34));
            memcpy(*(FScriptContainerElement **)&pFVar25->field_0x0,FVar14.Data,_Size);
          }
          FVar14.Data = local_1e0.Data;
          pFVar21[lVar20 + 0x38] = local_1f0;
          pFVar25 = pFVar21 + lVar20 + 0x48;
          *(FName *)(pFVar21 + lVar20 + 0x3c) = local_1ec;
          *(FScriptContainerElement **)&pFVar25->field_0x0 = (FScriptContainerElement *)0x0;
          lVar22 = (longlong)(int)local_1d8;
          *(int *)&pFVar25[8].field_0x0 = (int)local_1d8;
          if ((int)local_1d8 == 0) {
            *(int *)(pFVar21 + lVar20 + 0x54) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,(int)local_1d8,0,(ForAnyElementType *)pFVar25,(int)local_1d8,
                       (int *)(pFVar21 + lVar20 + 0x54));
            memcpy(*(FScriptContainerElement **)&pFVar25->field_0x0,FVar14.Data,lVar22 * 0x50);
          }
          FVar14.Data = local_1d0.Data;
          pFVar25 = pFVar21 + lVar20 + 0x58;
          *(FScriptContainerElement **)&pFVar25->field_0x0 = (FScriptContainerElement *)0x0;
          lVar22 = (longlong)(int)local_1c8;
          *(int *)&pFVar25[8].field_0x0 = (int)local_1c8;
          if ((int)local_1c8 == 0) {
            *(int *)(pFVar21 + lVar20 + 100) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,(int)local_1c8,0,(ForAnyElementType *)pFVar25,(int)local_1c8,
                       (int *)(pFVar21 + lVar20 + 100));
            memcpy(*(FScriptContainerElement **)&pFVar25->field_0x0,FVar14.Data,lVar22 * 0x50);
          }
          FVar14.Data = local_1c0.Data;
          pFVar25 = pFVar21 + lVar20 + 0x68;
          *(FScriptContainerElement **)&pFVar25->field_0x0 = (FScriptContainerElement *)0x0;
          lVar22 = (longlong)(int)local_1b8;
          *(int *)&pFVar25[8].field_0x0 = (int)local_1b8;
          if ((int)local_1b8 == 0) {
            *(int *)(pFVar21 + lVar20 + 0x74) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,(int)local_1b8,0,(ForAnyElementType *)pFVar25,(int)local_1b8,
                       (int *)(pFVar21 + lVar20 + 0x74));
            memcpy(*(FScriptContainerElement **)&pFVar25->field_0x0,FVar14.Data,lVar22 * 0x60);
          }
          FVar14.Data = local_1b0.Data;
          pFVar25 = pFVar21 + lVar20 + 0x78;
          *(FScriptContainerElement **)&pFVar25->field_0x0 = (FScriptContainerElement *)0x0;
          iVar16 = (int)local_1a8;
          *(int *)&pFVar25[8].field_0x0 = (int)local_1a8;
          if ((int)local_1a8 == 0) {
            *(int *)(pFVar21 + lVar20 + 0x84) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa8,8,(int)local_1a8,0,(ForAnyElementType *)pFVar25,(int)local_1a8,
                       (int *)(pFVar21 + lVar20 + 0x84));
            ConstructItems<FWN_CS_CharacterPresetSlotMaterialDesc,FWN_CS_CharacterPresetSlotMaterialDesc,int>
                      (*(FScriptContainerElement **)&pFVar25->field_0x0,
                       (FWN_CS_CharacterPresetSlotMaterialDesc *)FVar14.Data,iVar16);
          }
          DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
                    ((FWN_CS_CharacterPresetSlotMaterialDesc *)local_1b0.Data,(int)local_1a8);
          if ((FWN_CS_CharacterPresetSlotMaterialDesc *)local_1b0.Data !=
              (FWN_CS_CharacterPresetSlotMaterialDesc *)0x0) {
            FMemory::Free(local_1b0.Data);
          }
          if (local_1c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data);
          }
          if (local_1d0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data);
          }
          if (local_1e0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data);
          }
          pFVar23 = local_res10;
          param_2 = local_res18;
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
            pFVar23 = local_res10;
            param_2 = local_res18;
          }
        }
        uVar19 = (ulonglong)local_198;
        pFVar24 = pFVar24 + 1;
        pTVar26 = (TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *)
                  (&pTVar26[2].AllocatorInstance + 1);
      }
      uVar6 = (param_2->CharacterLightDescs).ArrayNum;
      if (-1 < (int)uVar6) {
        piVar1 = &(param_5->LightInfoArray).ArrayMax;
        if ((param_5->LightInfoArray).ArrayMax < (int)uVar6) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,8,uVar6,(ForAnyElementType *)param_5,(param_5->LightInfoArray).ArrayNum,
                     piVar1);
        }
        iVar16 = (param_2->CharacterLightDescs).ArrayNum;
        pFVar21 = (param_2->CharacterLightDescs).AllocatorInstance.Data;
        pFVar25 = pFVar21 + (longlong)iVar16 * 0x68;
        while( true ) {
          if ((param_2->CharacterLightDescs).ArrayNum != iVar16) {
            `TCheckedPointerIterator<FWN_CS_CharacterLightDesc_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_res10);
          }
          if (pFVar21 == pFVar25) break;
          uStack_16c = *(undefined4 *)(pFVar21 + 0x20);
          local_168 = *(undefined4 *)(pFVar21 + 0x24);
          uStack_164 = *(undefined4 *)(pFVar21 + 0x28);
          uVar10 = *(undefined8 *)(pFVar21 + 0x50);
          local_138 = *(undefined8 *)(pFVar21 + 0x58);
          uStack_130 = (undefined4)*(undefined8 *)(pFVar21 + 0x60);
          uStack_12c = (undefined4)((ulonglong)*(undefined8 *)(pFVar21 + 0x60) >> 0x20);
          uStack_150 = *(undefined8 *)(pFVar21 + 0x40);
          uVar11 = *(undefined8 *)(pFVar21 + 0x48);
          uStack_160 = *(undefined8 *)(pFVar21 + 0x30);
          uStack_158 = *(undefined8 *)(pFVar21 + 0x38);
          local_f8 = (undefined4)*(undefined8 *)pFVar21;
          uStack_f4 = (undefined4)((ulonglong)*(undefined8 *)pFVar21 >> 0x20);
          uStack_f0 = (undefined4)*(undefined8 *)(pFVar21 + 8);
          uStack_ec = (undefined4)((ulonglong)*(undefined8 *)(pFVar21 + 8) >> 0x20);
          local_188 = CONCAT44(uStack_f0,uStack_f4);
          uStack_180 = (undefined4)((ulonglong)*(undefined8 *)(pFVar21 + 8) >> 0x20);
          iVar17 = (param_5->LightInfoArray).ArrayNum;
          uStack_17c = (undefined4)*(undefined8 *)(pFVar21 + 0x10);
          uStack_178 = (undefined4)((ulonglong)*(undefined8 *)(pFVar21 + 0x10) >> 0x20);
          uStack_174 = (undefined4)*(undefined8 *)(pFVar21 + 0x18);
          uStack_170 = (undefined4)((ulonglong)*(undefined8 *)(pFVar21 + 0x18) >> 0x20);
          local_b8 = uStack_150;
          uStack_b0 = uVar11;
          local_a8 = uVar10;
          uStack_a0 = local_138;
          if (iVar17 == *piVar1) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x860,(ForAnyElementType *)param_5,piVar1);
          }
          (param_5->LightInfoArray).ArrayNum = iVar17 + 1;
          pFVar9 = (param_5->LightInfoArray).AllocatorInstance.Data;
          lVar20 = (longlong)iVar17 * 0x60;
          pFVar21 = pFVar21 + 0x68;
          *(undefined8 *)(pFVar9 + lVar20) = local_188;
          *(ulonglong *)(pFVar9 + lVar20 + 8) = CONCAT44(uStack_17c,uStack_180);
          *(ulonglong *)(pFVar9 + lVar20 + 0x10) = CONCAT44(uStack_174,uStack_178);
          *(ulonglong *)(pFVar9 + lVar20 + 0x10 + 8) = CONCAT44(uStack_16c,uStack_170);
          *(ulonglong *)(pFVar9 + lVar20 + 0x20) = CONCAT44(uStack_164,local_168);
          *(undefined8 *)(pFVar9 + lVar20 + 0x20 + 8) = uStack_160;
          *(undefined8 *)(pFVar9 + lVar20 + 0x30) = uStack_158;
          *(undefined8 *)(pFVar9 + lVar20 + 0x30 + 8) = uStack_150;
          *(undefined8 *)(pFVar9 + lVar20 + 0x40) = uVar11;
          *(undefined8 *)(pFVar9 + lVar20 + 0x40 + 8) = uVar10;
          *(undefined8 *)(pFVar9 + lVar20 + 0x50) = local_138;
          *(ulonglong *)(pFVar9 + lVar20 + 0x50 + 8) = CONCAT44(uStack_12c,uStack_130);
        }
        return true;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
  }
  return false;
}

// FindCharacterDesc @ 14a6a85c0

/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */

FWN_CS_CharacterDesc * __thiscall
UWN_CS_CharacterWorkspace::FindCharacterDesc(UWN_CS_CharacterWorkspace *this,int param_1)

{
  FWN_CS_CharacterDesc *pFVar1;
  FWN_CS_CharacterDesc *pFVar2;
  
  pFVar1 = (FWN_CS_CharacterDesc *)(this->CharacterDescs).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->CharacterDescs).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FWN_CS_CharacterDesc *)0x0;
    }
    if (param_1 == pFVar1->ID) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindCharacterPresetDesc @ 14a6a8620

/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

FWN_CS_CharacterPresetDesc * __thiscall
UWN_CS_CharacterWorkspace::FindCharacterPresetDesc
          (UWN_CS_CharacterWorkspace *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FWN_CS_CharacterPresetDesc *pFVar2;
  FWN_CS_CharacterPresetDesc *pFVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->CharacterDescs).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->CharacterDescs).ArrayNum * 0x80;
  if (pFVar4 != pFVar1) {
    while (param_1 != *(int *)pFVar4) {
      pFVar4 = pFVar4 + 0x80;
      if (pFVar4 == pFVar1) {
        return (FWN_CS_CharacterPresetDesc *)0x0;
      }
    }
    pFVar2 = *(FWN_CS_CharacterPresetDesc **)(pFVar4 + 0x70);
    pFVar3 = pFVar2 + *(int *)(pFVar4 + 0x78);
    for (; pFVar2 != pFVar3; pFVar2 = pFVar2 + 1) {
      if (pFVar2->ID == param_2) {
        return pFVar2;
      }
    }
  }
  return (FWN_CS_CharacterPresetDesc *)0x0;
}

// GetPrivateStaticClass @ 14a6a8c70

UClass * __cdecl UWN_CS_CharacterWorkspace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_CharacterWorkspace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_CharacterWorkspace",
               &Z_Registration_Info_UClass_UWN_CS_CharacterWorkspace.InnerSingleton,
               StaticRegisterNativesUWN_CS_CharacterWorkspace,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_CS_CharacterWorkspace>,
               InternalVTableHelperCtorCaller<UWN_CS_CharacterWorkspace>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterWorkspace.InnerSingleton;
}

// PostDuplicate @ 14a6a9ae0

/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall
UWN_CS_CharacterWorkspace::PostDuplicate(UWN_CS_CharacterWorkspace *this,Type param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014a6a9ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xf8))(this,param_1 == PIE);
  return;
}

// StaticRegisterNativesUWN_CS_CharacterWorkspace @ 14a6aad50

void __cdecl UWN_CS_CharacterWorkspace::StaticRegisterNativesUWN_CS_CharacterWorkspace(void)

{
  return;
}

