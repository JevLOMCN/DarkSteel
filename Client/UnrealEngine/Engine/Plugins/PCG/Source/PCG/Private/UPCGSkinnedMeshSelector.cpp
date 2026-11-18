// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149d72d20

UClass * __cdecl UPCGSkinnedMeshSelector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshSelector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshSelector",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshSelector.InnerSingleton,
               StaticRegisterNativesUPCGSkinnedMeshSelector,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSkinnedMeshSelector>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshSelector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshSelector.InnerSingleton;
}

// UPCGSkinnedMeshSelector @ 149e36470

UPCGSkinnedMeshSelector * __thiscall
UPCGSkinnedMeshSelector::UPCGSkinnedMeshSelector
          (UPCGSkinnedMeshSelector *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSkinnedMeshSelector__6B_;
  *(undefined8 *)&(this->MeshAttribute).field_0x8 = 0;
  *(undefined8 *)&(this->MeshAttribute).field_0x10 = 0;
  *(undefined8 *)&(this->MeshAttribute).field_0x18 = 0;
  *(undefined4 *)&(this->MeshAttribute).field_0x20 = 0;
  *(undefined8 *)&(this->MeshAttribute).field_0x28 = 0;
  *(undefined8 *)&(this->MeshAttribute).field_0x30 = 0;
  (this->MeshAttribute).field_0x38 = 0;
  *(undefined ***)&this->MeshAttribute = &___7FPCGAttributePropertyInputSelector__6B_;
  uVar1 = PCGMetadataAttributeConstants::LastAttributeName.Number;
  *(uint *)&(this->MeshAttribute).field_0x14 =
       PCGMetadataAttributeConstants::LastAttributeName.ComparisonIndex.Value;
  *(uint *)&(this->MeshAttribute).field_0x18 = uVar1;
  FPCGSoftSkinnedMeshComponentDescriptor::FPCGSoftSkinnedMeshComponentDescriptor
            (&this->TemplateDescriptor);
  this->bUseAttributeMaterialOverrides = false;
  (this->MaterialOverrideAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialOverrideAttributes).ArrayNum = 0;
  (this->MaterialOverrideAttributes).ArrayMax = 0;
  return this;
}

// UPCGSkinnedMeshSelector @ 149e36500

UPCGSkinnedMeshSelector * __thiscall
UPCGSkinnedMeshSelector::UPCGSkinnedMeshSelector
          (UPCGSkinnedMeshSelector *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSkinnedMeshSelector__6B_;
  *(undefined8 *)&(this->MeshAttribute).field_0x8 = 0;
  *(undefined8 *)&(this->MeshAttribute).field_0x10 = 0;
  *(undefined8 *)&(this->MeshAttribute).field_0x18 = 0;
  *(undefined4 *)&(this->MeshAttribute).field_0x20 = 0;
  *(undefined8 *)&(this->MeshAttribute).field_0x28 = 0;
  *(undefined8 *)&(this->MeshAttribute).field_0x30 = 0;
  (this->MeshAttribute).field_0x38 = 0;
  *(undefined ***)&this->MeshAttribute = &___7FPCGAttributePropertyInputSelector__6B_;
  uVar1 = PCGMetadataAttributeConstants::LastAttributeName.Number;
  *(uint *)&(this->MeshAttribute).field_0x14 =
       PCGMetadataAttributeConstants::LastAttributeName.ComparisonIndex.Value;
  *(uint *)&(this->MeshAttribute).field_0x18 = uVar1;
  FPCGSoftSkinnedMeshComponentDescriptor::FPCGSoftSkinnedMeshComponentDescriptor
            (&this->TemplateDescriptor);
  this->bUseAttributeMaterialOverrides = false;
  (this->MaterialOverrideAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialOverrideAttributes).ArrayNum = 0;
  (this->MaterialOverrideAttributes).ArrayMax = 0;
  return this;
}

// ~UPCGSkinnedMeshSelector @ 149e377b0

void __thiscall UPCGSkinnedMeshSelector::~UPCGSkinnedMeshSelector(UPCGSkinnedMeshSelector *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGSkinnedMeshSelector__6B_;
  pFVar1 = (this->MaterialOverrideAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TemplateDescriptor).ComponentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoftSkinnedMeshComponentDescriptor::~FSoftSkinnedMeshComponentDescriptor
            ((FSoftSkinnedMeshComponentDescriptor *)&this->TemplateDescriptor);
  DestructItems<FString,int>
            (*(FString **)&(this->MeshAttribute).field_0x28,
             *(int *)&(this->MeshAttribute).field_0x30);
  pvVar2 = *(void **)&(this->MeshAttribute).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 149e40220

void __thiscall
`UPCGSkinnedMeshSelector::SelectInstances'::__l96::<lambda_2>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  UPCGPointData *pUVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar14;
  FPCGSkinnedMeshInstanceList *pFVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  uint uVar23;
  TArray<FPCGSkinnedMeshInstance,TSizedDefaultAllocator<32>_> *pTVar24;
  TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [40];
  undefined1 local_100 [40];
  undefined1 local_d8 [144];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x32) == '\0') {
    iVar11 = *(int *)((longlong)this + 0x28);
    pUVar4 = *(UPCGPointData **)((longlong)this + 0x30);
    local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100._0_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x78);
    local_198.ArrayNum = 0;
    local_198.ArrayMax = 0;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_100 + 8),
               (FSoftObjectPath *)(*(longlong *)((longlong)this + 8) + 0x80));
    pFVar15 = PCGSkinnedMeshSelector::GetInstanceList
                        (*(TArray<FPCGSkinnedMeshInstanceList,TSizedDefaultAllocator<32>_> **)this,
                         *(FPCGSoftSkinnedMeshComponentDescriptor **)((longlong)this + 8),
                         (TSoftObjectPtr<USkinnedAsset> *)local_100,&local_198,param_2,pUVar4,iVar11
                        );
    piVar1 = &(pFVar15->Instances).ArrayNum;
    if ((*piVar1 != (pFVar15->InstancePointIndices).ArrayNum) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceList.Instances.Num() == InstanceList.InstancePointIndices.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGSkinnedMeshSelector.cpp"
                           ,0x121,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar11 = *piVar1;
    pTVar24 = &pFVar15->Instances;
    iVar13 = param_1->ArrayNum;
    uVar23 = iVar13 + iVar11;
    if (iVar11 < (int)uVar23) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x70,0x10,iVar13,&pTVar24->AllocatorInstance,piVar1,
                          &(pFVar15->Instances).ArrayMax);
      DefaultConstructItems<FPCGSkinnedMeshInstance,int>
                ((pTVar24->AllocatorInstance).Data + (longlong)iVar12 * 0x70,iVar13);
    }
    else {
      if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
      }
      if ((int)uVar23 < iVar11) {
        uVar20 = iVar11 - uVar23;
        if (((int)(uVar23 | uVar20) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar20 != 0) {
          pFVar21 = (pTVar24->AllocatorInstance).Data + (longlong)(int)uVar23 * 0x70;
          iVar13 = ((pFVar15->Instances).ArrayNum - uVar20) - uVar23;
          if (iVar13 != 0) {
            memmove(pFVar21,pFVar21 + (longlong)(int)uVar20 * 0x70,(longlong)iVar13 * 0x70);
          }
          piVar1 = &(pFVar15->Instances).ArrayNum;
          *piVar1 = *piVar1 - uVar20;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x70,0x10,&pTVar24->AllocatorInstance,(pFVar15->Instances).ArrayNum,
                     &(pFVar15->Instances).ArrayMax);
        }
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
              (&pFVar15->InstancePointIndices,param_1);
    uVar23 = 0;
    FVar19.Data = (FScriptContainerElement *)0x0;
    if (0 < param_1->ArrayNum) {
      lVar22 = 0;
      lVar16 = (longlong)iVar11 * 0x70;
      do {
        uVar20 = 0;
        if ((int)(uVar23 + iVar11) < (pFVar15->Instances).ArrayNum) {
          uVar20 = ~(uVar23 + iVar11) >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar21 = (pTVar24->AllocatorInstance).Data + lVar16;
        uVar20 = 0;
        if ((int)uVar23 < param_1->ArrayNum) {
          uVar20 = ~uVar23 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar20 = *(uint *)((param_1->AllocatorInstance).Data + lVar22);
        FSoftAnimBankItem::FSoftAnimBankItem((FSoftAnimBankItem *)local_d8);
        *(undefined4 *)(pFVar21 + 0x60) = 0xffffffff;
        plVar3 = *(longlong **)((longlong)this + 0x20);
        uVar10 = 0;
        if ((int)uVar20 < (int)plVar3[1]) {
          uVar10 = ~uVar20 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar17 = (longlong)(int)uVar20 * 0xd0;
        lVar6 = *plVar3;
        uVar8 = ((undefined8 *)(lVar17 + lVar6))[1];
        *(undefined8 *)pFVar21 = *(undefined8 *)(lVar17 + lVar6);
        *(undefined8 *)(pFVar21 + 8) = uVar8;
        puVar2 = (undefined8 *)(lVar17 + 0x10 + lVar6);
        uVar8 = puVar2[1];
        *(undefined8 *)(pFVar21 + 0x10) = *puVar2;
        *(undefined8 *)(pFVar21 + 0x18) = uVar8;
        puVar2 = (undefined8 *)(lVar17 + 0x20 + lVar6);
        uVar8 = puVar2[1];
        *(undefined8 *)(pFVar21 + 0x20) = *puVar2;
        *(undefined8 *)(pFVar21 + 0x28) = uVar8;
        puVar2 = (undefined8 *)(lVar17 + 0x30 + lVar6);
        uVar8 = puVar2[1];
        *(undefined8 *)(pFVar21 + 0x30) = *puVar2;
        *(undefined8 *)(pFVar21 + 0x38) = uVar8;
        puVar2 = (undefined8 *)(lVar17 + 0x40 + lVar6);
        uVar8 = puVar2[1];
        *(undefined8 *)(pFVar21 + 0x40) = *puVar2;
        *(undefined8 *)(pFVar21 + 0x48) = uVar8;
        puVar2 = (undefined8 *)(lVar17 + 0x50 + lVar6);
        uVar8 = puVar2[1];
        *(undefined8 *)(pFVar21 + 0x50) = *puVar2;
        *(undefined8 *)(pFVar21 + 0x58) = uVar8;
        if ((void *)local_d8._24_8_ != (void *)0x0) {
          FMemory::Free((void *)local_d8._24_8_);
        }
        uVar23 = uVar23 + 1;
        lVar16 = lVar16 + 0x70;
        lVar22 = lVar22 + 4;
        FVar19.Data = local_198.AllocatorInstance.Data;
      } while ((int)uVar23 < param_1->ArrayNum);
    }
    DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
              ((TSoftObjectPtr<UMaterialInterface> *)FVar19.Data,local_198.ArrayNum);
    if (FVar19.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar19.Data);
    }
  }
  else {
    iVar11 = param_1->ArrayNum;
    uVar23 = 0;
    if (0 < iVar11) {
      lVar22 = 0;
      do {
        uVar20 = 0;
        if ((int)uVar23 < iVar11) {
          uVar20 = ~uVar23 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar3 = *(longlong **)((longlong)this + 0x20);
        uVar20 = *(uint *)((param_1->AllocatorInstance).Data + lVar22);
        uVar10 = 0;
        if ((int)uVar20 < (int)plVar3[1]) {
          uVar10 = ~uVar20 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar4 = *(UPCGPointData **)((longlong)this + 0x30);
        puVar18 = (undefined4 *)((longlong)(int)uVar20 * 0xd0 + *plVar3);
        iVar11 = *(int *)((longlong)this + 0x28);
        pTVar14 = FPCGMeshMaterialOverrideHelper::GetMaterialOverrides
                            (*(FPCGMeshMaterialOverrideHelper **)((longlong)this + 0x18),
                             *(long64 *)(puVar18 + 0x32));
        local_128._0_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x78);
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_128 + 8),
                   (FSoftObjectPath *)(*(longlong *)((longlong)this + 8) + 0x80));
        pFVar15 = PCGSkinnedMeshSelector::GetInstanceList
                            (*(TArray<FPCGSkinnedMeshInstanceList,TSizedDefaultAllocator<32>_> **)
                              this,*(FPCGSoftSkinnedMeshComponentDescriptor **)((longlong)this + 8),
                             (TSoftObjectPtr<USkinnedAsset> *)local_128,pTVar14,param_2,pUVar4,
                             iVar11);
        local_188 = *puVar18;
        uStack_184 = puVar18[1];
        uStack_180 = puVar18[2];
        uStack_17c = puVar18[3];
        local_48 = 0xffffffff;
        local_178 = puVar18[4];
        uStack_174 = puVar18[5];
        uStack_170 = puVar18[6];
        uStack_16c = puVar18[7];
        piVar1 = &(pFVar15->Instances).ArrayMax;
        iVar11 = (pFVar15->Instances).ArrayNum;
        local_168 = puVar18[8];
        uStack_164 = puVar18[9];
        uStack_160 = puVar18[10];
        uStack_15c = puVar18[0xb];
        local_158 = puVar18[0xc];
        uStack_154 = puVar18[0xd];
        uStack_150 = puVar18[0xe];
        uStack_14c = puVar18[0xf];
        local_148 = puVar18[0x10];
        uStack_144 = puVar18[0x11];
        uStack_140 = puVar18[0x12];
        uStack_13c = puVar18[0x13];
        local_138 = puVar18[0x14];
        uStack_134 = puVar18[0x15];
        uStack_130 = puVar18[0x16];
        uStack_12c = puVar18[0x17];
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1070,&(pFVar15->Instances).AllocatorInstance,piVar1);
        }
        (pFVar15->Instances).ArrayNum = iVar11 + 1;
        piVar1 = &(pFVar15->InstancePointIndices).ArrayMax;
        lVar16 = (longlong)iVar11 * 0x70;
        pFVar5 = (pFVar15->Instances).AllocatorInstance.Data;
        pFVar21 = pFVar5 + lVar16;
        *(undefined4 *)pFVar21 = local_188;
        *(undefined4 *)(pFVar21 + 4) = uStack_184;
        *(undefined4 *)(pFVar21 + 8) = uStack_180;
        *(undefined4 *)(pFVar21 + 0xc) = uStack_17c;
        pFVar21 = pFVar5 + lVar16 + 0x10;
        *(undefined4 *)pFVar21 = local_178;
        *(undefined4 *)(pFVar21 + 4) = uStack_174;
        *(undefined4 *)(pFVar21 + 8) = uStack_170;
        *(undefined4 *)(pFVar21 + 0xc) = uStack_16c;
        pFVar21 = pFVar5 + lVar16 + 0x20;
        *(undefined4 *)pFVar21 = local_168;
        *(undefined4 *)(pFVar21 + 4) = uStack_164;
        *(undefined4 *)(pFVar21 + 8) = uStack_160;
        *(undefined4 *)(pFVar21 + 0xc) = uStack_15c;
        pFVar21 = pFVar5 + lVar16 + 0x30;
        *(undefined4 *)pFVar21 = local_158;
        *(undefined4 *)(pFVar21 + 4) = uStack_154;
        *(undefined4 *)(pFVar21 + 8) = uStack_150;
        *(undefined4 *)(pFVar21 + 0xc) = uStack_14c;
        pFVar21 = pFVar5 + lVar16 + 0x40;
        *(undefined4 *)pFVar21 = local_148;
        *(undefined4 *)(pFVar21 + 4) = uStack_144;
        *(undefined4 *)(pFVar21 + 8) = uStack_140;
        *(undefined4 *)(pFVar21 + 0xc) = uStack_13c;
        pFVar21 = pFVar5 + lVar16 + 0x50;
        *(undefined4 *)pFVar21 = local_138;
        *(undefined4 *)(pFVar21 + 4) = uStack_134;
        *(undefined4 *)(pFVar21 + 8) = uStack_130;
        *(undefined4 *)(pFVar21 + 0xc) = uStack_12c;
        *(ulonglong *)(pFVar5 + lVar16 + 0x60) = CONCAT44(uStack_44,local_48);
        *(undefined8 *)(pFVar5 + lVar16 + 0x60 + 8) = uStack_40;
        iVar11 = (pFVar15->InstancePointIndices).ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(pFVar15->InstancePointIndices).AllocatorInstance,piVar1);
        }
        lVar22 = lVar22 + 4;
        (pFVar15->InstancePointIndices).ArrayNum = iVar11 + 1;
        *(uint *)((pFVar15->InstancePointIndices).AllocatorInstance.Data + (longlong)iVar11 * 4) =
             uVar23;
        uVar23 = uVar23 + 1;
        iVar11 = param_1->ArrayNum;
      } while ((int)uVar23 < iVar11);
    }
  }
  return;
}

// GetPrivateStaticClass @ 149e5dad0

UClass * __cdecl UPCGSkinnedMeshSelector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshSelector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshSelector",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshSelector.InnerSingleton,
               StaticRegisterNativesUPCGSkinnedMeshSelector,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSkinnedMeshSelector>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshSelector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshSelector.InnerSingleton;
}

// PostLoad @ 149e7a470

void __thiscall UPCGSkinnedMeshSelector::PostLoad(UPCGSkinnedMeshSelector *this)

{
  UObject::PostLoad((UObject *)this);
  FSoftSkinnedMeshComponentDescriptor::PostLoadFixup
            ((FSoftSkinnedMeshComponentDescriptor *)&this->TemplateDescriptor,(UObject *)this);
  return;
}

// SelectInstances @ 149e86750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UPCGSkinnedMeshSelector::SelectInstances
          (UPCGSkinnedMeshSelector *this,FPCGSkinnedMeshSpawnerContext *param_1,
          UPCGSkinnedMeshSpawnerSettings *param_2,UPCGPointData *param_3,
          TArray<FPCGSkinnedMeshInstanceList,TSizedDefaultAllocator<32>_> *param_4,
          UPCGPointData *param_5)

{
  FPCGAttributePropertyInputSelector *this_00;
  FPCGAttributePropertySelector *pFVar1;
  int *piVar2;
  EPCGAttributePropertySelection EVar3;
  undefined4 uVar4;
  FSoftObjectPath *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FPCGSoftSkinnedMeshComponentDescriptor *pFVar8;
  FPCGMetadataDomainID FVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FString *pFVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  FPCGMetadataAttributeBase *pFVar19;
  FName *pFVar20;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar21;
  FPCGSoftSkinnedMeshComponentDescriptor *pFVar22;
  FPCGObjectSingleOverride *pFVar23;
  longlong lVar24;
  TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  TArray<int,TSizedDefaultAllocator<32>_> *this_02;
  FText *pFVar25;
  UClass *pUVar26;
  ulonglong uVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  FPCGAttributePropertySelector *this_03;
  ForAnyElementType FVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  FPCGObjectPropertyOverrideDescription *pFVar35;
  FPCGObjectSingleOverride *pFVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  undefined1 local_314;
  undefined1 local_313 [3];
  int local_310;
  TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> local_308;
  uint local_2f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2f0;
  uint local_2e0;
  FPCGSoftSkinnedMeshComponentDescriptor *local_2d8;
  FScriptContainerElement *local_2d0;
  TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> local_2c8;
  longlong local_2b8;
  FString local_2b0;
  FPCGObjectOverrides<FPCGSoftSkinnedMeshComponentDescriptor> local_298;
  FPCGObjectSingleOverride *local_258;
  FName local_250;
  FPCGMeshMaterialOverrideHelper *local_248;
  longlong local_240;
  TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_238;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_228;
  TArray<FPCGSkinnedMeshInstanceList,TSizedDefaultAllocator<32>_> *local_218;
  FScriptContainerElement *local_210;
  FPCGSkinnedMeshSpawnerContext *local_208;
  FPCGMeshMaterialOverrideHelper *local_200;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_1f8;
  uint local_1f0;
  UPCGPointData *local_1e8;
  TArrayView<FPCGAttributePropertySelector_const_,int> local_1e0;
  FString local_1d0;
  FText local_1c0;
  FString local_1b0;
  FString local_1a0;
  FText local_190;
  FText local_180;
  FString local_170;
  FString local_160;
  FText local_150;
  FName local_140;
  FName local_138;
  FPCGMetadataDomainID FStack_130;
  FText local_120;
  FName local_110;
  FPCGMetadataDomainID FStack_108;
  FPCGAttributeIdentifier local_f8;
  FPCGAttributeIdentifier local_d8;
  undefined8 local_b8;
  FSoftObjectPath local_b0;
  FTextFormat local_90;
  FText local_80;
  FTextFormat local_70 [3];
  
  local_2e0 = 0;
  bVar37 = -1 < CpuChannel->Enabled;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId72,"UPCGMeshSelector::SelectInstances",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGSkinnedMeshSelector.cpp"
               ,0x48);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId72);
  }
  if (param_3 == (UPCGPointData *)0x0) {
    PCGLog::InputOutput::LogInvalidInputDataError((FPCGContext *)param_1);
  }
  else if ((UPCGMetadata *)param_3->_padding_ == (UPCGMetadata *)0x0) {
    PCGLog::Metadata::LogInvalidMetadata((FPCGContext *)param_1);
  }
  else {
    local_138.ComparisonIndex.Value = *(uint *)&(this->MeshAttribute).field_0x14;
    local_138.Number = *(uint *)&(this->MeshAttribute).field_0x18;
    this_00 = &this->MeshAttribute;
    FStack_130 = PCGMetadataDomainID::Default;
    FVar9 = FStack_130;
    FStack_130._0_8_ = PCGMetadataDomainID::Default._0_8_;
    local_d8.MetadataDomain.Flag = FStack_130.Flag;
    local_d8.MetadataDomain._1_3_ = FStack_130._1_3_;
    local_d8.MetadataDomain.CustomFlag = FStack_130.CustomFlag;
    local_d8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    FStack_130 = FVar9;
    local_d8.Name = local_138;
    bVar10 = UPCGMetadata::HasAttribute((UPCGMetadata *)param_3->_padding_,&local_d8);
    if (bVar10) {
      local_110.ComparisonIndex.Value = *(uint *)&(this->MeshAttribute).field_0x14;
      local_110.Number = *(uint *)&(this->MeshAttribute).field_0x18;
      FStack_108 = PCGMetadataDomainID::Default;
      FVar9 = FStack_108;
      FStack_108._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_f8.MetadataDomain.Flag = FStack_108.Flag;
      local_f8.MetadataDomain._1_3_ = FStack_108._1_3_;
      local_f8.MetadataDomain.CustomFlag = FStack_108.CustomFlag;
      local_f8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      FStack_108 = FVar9;
      local_f8.Name = local_110;
      pFVar19 = UPCGMetadata::GetConstAttribute((UPCGMetadata *)param_3->_padding_,&local_f8);
      if ((pFVar19 == (FPCGMetadataAttributeBase *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("MeshAttributeBase",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGSkinnedMeshSelector.cpp"
                              ,0x5d,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      if (((ushort)pFVar19->TypeId < 0xff) && ((pFVar19->TypeId - 9U & 0xfffb) == 0)) {
        local_248 = &param_1->MaterialOverrideHelper;
        if ((param_1->MaterialOverrideHelper).bIsInitialized == false) {
          local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238.ArrayNum = 0;
          local_238.ArrayMax = 0;
          FPCGMeshMaterialOverrideHelper::Initialize
                    (local_248,(FPCGContext *)param_1,this->bUseAttributeMaterialOverrides,
                     &local_238,&this->MaterialOverrideAttributes,(UPCGMetadata *)param_3->_padding_
                    );
          DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
                    ((TSoftObjectPtr<UMaterialInterface> *)0x0,0);
        }
        if ((param_1->MaterialOverrideHelper).bIsValid != false) {
          if ((param_1->CurrentPointIndex == 0) && (param_5 != (UPCGPointData *)0x0)) {
            if (CpuChannel->Enabled < 0) {
              UPCGPointData::SetPoints(param_5,&param_3->Points);
            }
            else {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId116,"UPCGMeshSelector::SetupOutPointData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGSkinnedMeshSelector.cpp"
                         ,0x74);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId116);
              UPCGPointData::SetPoints(param_5,&param_3->Points);
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
          bVar10 = -1 < CpuChannel->Enabled;
          if (bVar10) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId120,"UPCGSkinnedMeshSelector::SelectEntries",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGSkinnedMeshSelector.cpp"
                       ,0x78);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId120);
          }
          if (param_1->bPartitionDone == false) {
            bVar38 = -1 < CpuChannel->Enabled;
            if (bVar38) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId124,
                         "UPCGSkinnedMeshSelector::SelectEntries::BuildingPartition",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGSkinnedMeshSelector.cpp"
                         ,0x7c);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId124);
            }
            local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            uVar15 = (param_2->SkinnedMeshComponentPropertyOverrides).ArrayNum;
            pFVar35 = (FPCGObjectPropertyOverrideDescription *)
                      (param_2->SkinnedMeshComponentPropertyOverrides).AllocatorInstance.Data;
            local_308.ArrayNum = uVar15;
            if (uVar15 == 0) {
              local_308.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x50,8,uVar15,0,&local_308.AllocatorInstance,uVar15,&local_308.ArrayMax);
              ConstructItems<FPCGObjectPropertyOverrideDescription,FPCGObjectPropertyOverrideDescription,int>
                        (local_308.AllocatorInstance.Data,pFVar35,uVar15);
            }
            pFVar20 = ::FName::FName(&local_140,0xc,L"SkinnedAsset",FNAME_Add);
            local_250 = *pFVar20;
            ::FName::ToString(&local_250,&local_2b0);
            iVar14 = local_308.ArrayNum;
            uVar27 = (ulonglong)local_308.ArrayNum;
            pFVar29 = local_308.AllocatorInstance.Data + 0x40;
            pFVar35 = (FPCGObjectPropertyOverrideDescription *)
                      (local_308.AllocatorInstance.Data + uVar27 * 0x50);
            while( true ) {
              if ((uint)uVar27 != iVar14) {
                local_314 = 0;
                `TCheckedPointerIterator<FPCGObjectPropertyOverrideDescription_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_314);
                uVar27 = (ulonglong)(uint)local_308.ArrayNum;
              }
              iVar13 = (int)uVar27;
              if ((FPCGObjectPropertyOverrideDescription *)(pFVar29 + -0x40) == pFVar35) break;
              EVar3 = *(EPCGAttributePropertySelection *)(pFVar29 + 8);
              if (EVar3 == local_2b0.Data.ArrayNum) {
                if ((int)EVar3 < 2) goto LAB_149e86d92;
                iVar13 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)pFVar29,
                                    (wchar_t *)local_2b0.Data.AllocatorInstance.Data);
                uVar27 = (ulonglong)(uint)local_308.ArrayNum;
                bVar39 = iVar13 == 0;
              }
              else {
                bVar39 = EVar3 + local_2b0.Data.ArrayNum == 1;
              }
              if (bVar39) goto LAB_149e86d92;
              pFVar29 = pFVar29 + 0x50;
            }
            if (iVar13 == local_308.ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,&local_308.AllocatorInstance,&local_308.ArrayMax);
            }
            local_308.ArrayNum = iVar13 + 1;
            this_03 = (FPCGAttributePropertySelector *)
                      (local_308.AllocatorInstance.Data + (longlong)iVar13 * 0x50);
            FPCGAttributePropertySelector::FPCGAttributePropertySelector
                      (this_03,(FPCGAttributePropertySelector *)this_00);
            FVar30.Data = local_2b0.Data.AllocatorInstance.Data;
            pFVar1 = this_03 + 1;
            this_03->_padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
            pFVar1->_padding_ = 0;
            this_03[1].Selection = local_2b0.Data.ArrayNum;
            if (local_2b0.Data.ArrayNum == Attribute) {
              this_03[1].DomainName.ComparisonIndex.Value = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_2b0.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,
                         local_2b0.Data.ArrayNum,(int *)&this_03[1].DomainName);
              memcpy((FScriptContainerElement *)pFVar1->_padding_,FVar30.Data,
                     (longlong)local_2b0.Data.ArrayNum * 2);
            }
LAB_149e86d92:
            uVar27 = 0;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              FSoftSkinnedMeshComponentDescriptor::FSoftSkinnedMeshComponentDescriptor
                        ((FSoftSkinnedMeshComponentDescriptor *)&DummyDescriptor);
              DummyDescriptor.ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              DummyDescriptor._padding_ = (longlong)&___7FPCGSoftSkinnedMeshComponentDescriptor__6B_
              ;
              DummyDescriptor.ComponentTags.ArrayNum = 0;
              DummyDescriptor.ComponentTags.ArrayMax = 0;
              pUVar26 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar26 != (UClass *)0x0)
                 ) {
                UE::GC::MarkAsReachable((UObject *)pUVar26);
              }
              DummyDescriptor._padding_._4_1_ = 0;
              DummyDescriptor._padding_ = (longlong)pUVar26;
              atexit(`UPCGSkinnedMeshSelector::SelectInstances'::__l69::
                     _dynamic_atexit_destructor_for__DummyDescriptor__);
              _Init_thread_footer(&::_TSS0);
            }
            local_298.OutputKey._padding_ =
                 (longlong)
                 &
                 ___7__FPCGAttributeAccessorKeysSingleObjectPtr_UFPCGSoftSkinnedMeshComponentDescriptor__X__6B_
            ;
            local_298.bPropagateEditChangeEvent = false;
            local_298.CachedOutputObject = (UObject *)0x0;
            local_298.OutputKey._padding_._0_1_ = 0;
            local_298.OutputKey.Ptr = &DummyDescriptor;
            local_298.ObjectSingleOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_298.ObjectSingleOverrides.ArrayNum = 0;
            local_298.ObjectSingleOverrides.ArrayMax = 0;
            local_298.bInitialized = false;
            FPCGObjectOverrides<FPCGSoftSkinnedMeshComponentDescriptor>::Initialize
                      (&local_298,&local_308,&DummyDescriptor,(UPCGData *)param_3,
                       (FPCGContext *)param_1,false);
            FPCGObjectOverrides<FPCGSoftSkinnedMeshComponentDescriptor>::GetAllInputSelectors
                      (&local_298,&local_2c8);
            iVar14 = local_2c8.ArrayNum;
            if (local_2c8.ArrayNum != 0) {
              local_1e0.DataPtr = (FPCGAttributePropertySelector *)local_2c8.AllocatorInstance.Data;
              bVar39 = param_2->bSilenceOverrideAttributeNotFoundErrors;
              if ((local_2c8.ArrayNum < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar12)) {
                pcVar7 = (code *)swi(3);
                uVar11 = (*pcVar7)();
                return (bool)uVar11;
              }
              local_1e0.ArrayNum = iVar14;
              pTVar21 = PCGMetadataPartitionCommon::AttributeGenericPartition
                                  (&local_228,(UPCGData *)param_3,&local_1e0,(FPCGContext *)param_1,
                                   bVar39);
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
                        (&param_1->AttributeOverridePartition,pTVar21);
              DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)local_228.AllocatorInstance.Data
                         ,local_228.ArrayNum);
              if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_228.AllocatorInstance.Data !=
                  (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_228.AllocatorInstance.Data);
              }
            }
            uVar15 = (param_1->AttributeOverridePartition).ArrayNum;
            local_2d0 = (FScriptContainerElement *)&param_1->OverriddenDescriptors;
            if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
            }
            pFVar29 = (FScriptContainerElement *)&(param_1->OverriddenDescriptors).ArrayMax;
            if ((param_1->OverriddenDescriptors).ArrayMax < (int)uVar15) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xd8,8,uVar15,(ForAnyElementType *)local_2d0,
                         (param_1->OverriddenDescriptors).ArrayNum,(int *)pFVar29);
            }
            pFVar6 = local_2d0;
            if (0 < (param_1->AttributeOverridePartition).ArrayNum) {
              local_2d8 = &this->TemplateDescriptor;
              uVar31 = uVar27;
              do {
                pFVar8 = local_2d8;
                pFVar22 = (FPCGSoftSkinnedMeshComponentDescriptor *)
                          ((ForAnyElementType *)&pFVar6->field_0x0)->Data;
                if (((pFVar22 <= local_2d8) && (local_2d8 < pFVar22 + *(int *)(pFVar6 + 0xc))) &&
                   (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar39)) {
                  pcVar7 = (code *)swi(3);
                  uVar11 = (*pcVar7)();
                  return (bool)uVar11;
                }
                iVar14 = *(int *)(pFVar6 + 8);
                if (iVar14 == *(int *)pFVar29) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x8d8,(ForAnyElementType *)pFVar6,(int *)pFVar29);
                }
                *(int *)(pFVar6 + 8) = iVar14 + 1;
                pFVar22 = FPCGSoftSkinnedMeshComponentDescriptor::
                          FPCGSoftSkinnedMeshComponentDescriptor
                                    ((FPCGSoftSkinnedMeshComponentDescriptor *)
                                     (((ForAnyElementType *)&pFVar6->field_0x0)->Data +
                                     (longlong)iVar14 * 0xd8),pFVar8);
                uVar34 = (uint)uVar31;
                uVar28 = ~uVar34 >> 0x1f;
                uVar32 = 0;
                uVar15 = uVar32;
                if ((int)uVar34 < (param_1->AttributeOverridePartition).ArrayNum) {
                  uVar15 = uVar28;
                }
                if ((uVar15 == 0) &&
                   (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar39)) {
                  pcVar7 = (code *)swi(3);
                  uVar11 = (*pcVar7)();
                  return (bool)uVar11;
                }
                if (*(int *)((param_1->AttributeOverridePartition).AllocatorInstance.Data +
                            uVar27 + 8) != 0) {
                  if ((local_298.bInitialized != false) &&
                     (local_298.ObjectSingleOverrides.ArrayNum != 0)) {
                    local_298.OutputKey._padding_._0_1_ = 0;
                    local_298.OutputKey.Ptr = pFVar22;
                  }
                  uVar15 = uVar32;
                  if ((int)uVar34 < (param_1->AttributeOverridePartition).ArrayNum) {
                    uVar15 = uVar28;
                  }
                  if ((uVar15 == 0) &&
                     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar39)) {
                    pcVar7 = (code *)swi(3);
                    uVar11 = (*pcVar7)();
                    return (bool)uVar11;
                  }
                  if ((*(int *)((param_1->AttributeOverridePartition).AllocatorInstance.Data +
                               uVar27 + 8) == 0) &&
                     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!Context.AttributeOverridePartition[I].IsEmpty()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGSkinnedMeshSelector.cpp"
                                          ,0xa6,L""), bVar39)) {
                    pcVar7 = (code *)swi(3);
                    uVar11 = (*pcVar7)();
                    return (bool)uVar11;
                  }
                  if ((int)uVar34 < (param_1->AttributeOverridePartition).ArrayNum) {
                    uVar32 = uVar28;
                  }
                  if ((uVar32 == 0) &&
                     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar39)) {
                    pcVar7 = (code *)swi(3);
                    uVar11 = (*pcVar7)();
                    return (bool)uVar11;
                  }
                  pFVar29 = (param_1->AttributeOverridePartition).AllocatorInstance.Data;
                  if ((*(int *)(pFVar29 + uVar27 + 8) < 1) &&
                     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar39)) {
                    pcVar7 = (code *)swi(3);
                    uVar11 = (*pcVar7)();
                    return (bool)uVar11;
                  }
                  iVar14 = local_298.ObjectSingleOverrides.ArrayNum;
                  uVar4 = **(undefined4 **)(pFVar29 + uVar27);
                  pFVar36 = (FPCGObjectSingleOverride *)
                            (local_298.ObjectSingleOverrides.AllocatorInstance.Data +
                            (longlong)local_298.ObjectSingleOverrides.ArrayNum * 0x68);
                  FVar30.Data = local_298.ObjectSingleOverrides.AllocatorInstance.Data;
                  while( true ) {
                    if (local_298.ObjectSingleOverrides.ArrayNum != iVar14) {
                      local_313[0] = 0;
                      `TCheckedPointerIterator<FPCGObjectSingleOverride,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(local_313);
                    }
                    if ((FPCGObjectSingleOverride *)FVar30.Data == pFVar36) break;
                    local_258 = (FPCGObjectSingleOverride *)FVar30.Data;
                    pFVar23 = UE::Core::Private::
                              DereferenceIfNecessary<FPCGObjectSingleOverride,FPCGObjectSingleOverride_*>
                                        (&local_258);
                    (*(code *)((FPCGObjectSingleOverride *)FVar30.Data)->ObjectOverrideFunction)
                              (pFVar23,uVar4);
                    FVar30.Data = FVar30.Data + 0x68;
                  }
                  pFVar29 = pFVar6 + 0xc;
                }
                uVar31 = (ulonglong)(uVar34 + 1);
                uVar27 = uVar27 + 0x10;
              } while ((int)(uVar34 + 1) < (param_1->AttributeOverridePartition).ArrayNum);
            }
            piVar2 = &(param_1->PointProviderValues).ArrayMax;
            pFVar5 = (FSoftObjectPath *)(param_1->PointProviderValues).AllocatorInstance.Data;
            iVar14 = (param_1->PointProviderValues).ArrayNum;
            if ((param_1->PointProviderValues).ArrayMax < 0) {
              DestructItems<FSoftObjectPath,int>(pFVar5,iVar14);
              (param_1->PointProviderValues).ArrayNum = 0;
              if (*piVar2 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,0,&(param_1->PointProviderValues).AllocatorInstance,0,piVar2);
              }
            }
            else {
              DestructItems<FSoftObjectPath,int>(pFVar5,iVar14);
              (param_1->PointProviderValues).ArrayNum = 0;
            }
            (param_1->PointAnimationValues).ArrayNum = 0;
            if ((param_1->PointAnimationValues).ArrayMax < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&(param_1->PointAnimationValues).AllocatorInstance,0,
                         &(param_1->PointAnimationValues).ArrayMax);
            }
            param_1->bPartitionDone = true;
            bVar39 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_);
            if (!bVar39) {
              DestructItems<FPCGAttributePropertySelector,int>
                        ((FPCGAttributePropertySelector *)local_2c8.AllocatorInstance.Data,
                         local_2c8.ArrayNum);
              if ((FPCGAttributePropertySelector *)local_2c8.AllocatorInstance.Data !=
                  (FPCGAttributePropertySelector *)0x0) {
                FMemory::Free(local_2c8.AllocatorInstance.Data);
              }
              DestructItems<FPCGObjectSingleOverride,int>
                        ((FPCGObjectSingleOverride *)
                         local_298.ObjectSingleOverrides.AllocatorInstance.Data,
                         local_298.ObjectSingleOverrides.ArrayNum);
              if ((FPCGObjectSingleOverride *)local_298.ObjectSingleOverrides.AllocatorInstance.Data
                  != (FPCGObjectSingleOverride *)0x0) {
                FMemory::Free(local_298.ObjectSingleOverrides.AllocatorInstance.Data);
              }
              if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
              }
              DestructItems<FPCGObjectPropertyOverrideDescription,int>
                        ((FPCGObjectPropertyOverrideDescription *)local_308.AllocatorInstance.Data,
                         local_308.ArrayNum);
              if ((FPCGObjectPropertyOverrideDescription *)local_308.AllocatorInstance.Data !=
                  (FPCGObjectPropertyOverrideDescription *)0x0) {
                FMemory::Free(local_308.AllocatorInstance.Data);
              }
              if (bVar38) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              goto LAB_149e87357;
            }
            DestructItems<FPCGAttributePropertySelector,int>
                      ((FPCGAttributePropertySelector *)local_2c8.AllocatorInstance.Data,
                       local_2c8.ArrayNum);
            if ((FPCGAttributePropertySelector *)local_2c8.AllocatorInstance.Data !=
                (FPCGAttributePropertySelector *)0x0) {
              FMemory::Free(local_2c8.AllocatorInstance.Data);
            }
            DestructItems<FPCGObjectSingleOverride,int>
                      ((FPCGObjectSingleOverride *)
                       local_298.ObjectSingleOverrides.AllocatorInstance.Data,
                       local_298.ObjectSingleOverrides.ArrayNum);
            if ((FPCGObjectSingleOverride *)local_298.ObjectSingleOverrides.AllocatorInstance.Data
                != (FPCGObjectSingleOverride *)0x0) {
              FMemory::Free(local_298.ObjectSingleOverrides.AllocatorInstance.Data);
            }
            if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
            }
            DestructItems<FPCGObjectPropertyOverrideDescription,int>
                      ((FPCGObjectPropertyOverrideDescription *)local_308.AllocatorInstance.Data,
                       local_308.ArrayNum);
            if ((FPCGObjectPropertyOverrideDescription *)local_308.AllocatorInstance.Data !=
                (FPCGObjectPropertyOverrideDescription *)0x0) {
              FMemory::Free(local_308.AllocatorInstance.Data);
            }
            if (bVar38) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            bVar38 = false;
          }
          else {
LAB_149e87357:
            local_2f8 = param_1->CurrentPointIndex;
            bVar38 = -1 < CpuChannel->Enabled;
            if (bVar38) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId187,
                         "UPCGSkinnedMeshSelector::SelectEntries::PushingPointsToInstanceLists",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGSkinnedMeshSelector.cpp"
                         ,0xbb);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId187);
            }
            if ((int)local_2f8 < (param_1->AttributeOverridePartition).ArrayNum) {
              lVar24 = (longlong)(int)local_2f8;
              uVar15 = local_2f8;
              do {
                local_240 = lVar24 + 1;
                local_2f8 = uVar15 + 1;
                uVar32 = 0;
                if ((int)uVar15 < (param_1->AttributeOverridePartition).ArrayNum) {
                  uVar32 = ~uVar15 >> 0x1f;
                }
                local_2e0 = uVar15;
                if ((uVar32 == 0) &&
                   (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar39)) {
                  pcVar7 = (code *)swi(3);
                  uVar11 = (*pcVar7)();
                  return (bool)uVar11;
                }
                pFVar22 = (FPCGSoftSkinnedMeshComponentDescriptor *)
                          ((param_1->AttributeOverridePartition).AllocatorInstance.Data +
                          lVar24 * 0x10);
                uVar32 = 0;
                if ((int)uVar15 < (param_1->OverriddenDescriptors).ArrayNum) {
                  uVar32 = ~uVar15 >> 0x1f;
                }
                local_2d8 = pFVar22;
                if ((uVar32 == 0) &&
                   (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar39)) {
                  pcVar7 = (code *)swi(3);
                  uVar11 = (*pcVar7)();
                  return (bool)uVar11;
                }
                local_2d0 = (param_1->OverriddenDescriptors).AllocatorInstance.Data + lVar24 * 0xd8;
                if (((int)pFVar22->_padding_ != 0) &&
                   (pFVar5 = (FSoftObjectPath *)(local_2d0 + 0x80),
                   (pFVar5->AssetPath).PackageName != (FName)0x0)) {
                  if ((param_5 != (UPCGPointData *)0x0) &&
                     (param_2->bApplyMeshBoundsToPoints != false)) {
                    bVar39 = -1 < CpuChannel->Enabled;
                    if (bVar39) {
                      FCpuProfilerTrace::GetOrCreateSpecId
                                (&__CpuProfilerEventSpecId212,
                                 "UPCGSkinnedMeshSelector::SelectEntries::PushPointsToApplyMeshBounds"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGSkinnedMeshSelector.cpp"
                                 ,0xd4);
                      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId212);
                    }
                    pFVar29 = local_2d0;
                    local_b8 = *(undefined8 *)(local_2d0 + 0x78);
                    FSoftObjectPath::FSoftObjectPath(&local_b0,pFVar5);
                    uVar15 = ::GetTypeHash(&local_b0);
                    if (local_b0.SubPathString.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b0.SubPathString.Data.AllocatorInstance.Data);
                    }
                    this_01 = TMapBase<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                              ::FindOrAddImpl<TSoftObjectPtr<USkinnedAsset>_const_&>
                                        ((TMapBase<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                                          *)&param_1->MeshToOutPoints,uVar15,
                                         (TSoftObjectPtr<USkinnedAsset> *)(pFVar29 + 0x78));
                    uVar15 = ((uint)((ulonglong)param_5 >> 0x14) & 0xffff ^
                             (uint)((ulonglong)param_5 >> 4)) * -0x7a143595;
                    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
                    this_02 = TMapBase<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                              ::FindOrAddImpl<UPCGPointData_*_const_&>
                                        ((TMapBase<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                          *)this_01,uVar15 >> 0x10 ^ uVar15,&param_5);
                    TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                              (this_02,(TArray<int,TSizedDefaultAllocator<32>_> *)pFVar22);
                    if (bVar39) {
                      FCpuProfilerTrace::OutputEndEvent();
                    }
                  }
                  uVar27 = 0;
                  local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_2f0.ArrayNum = 0;
                  local_2f0.ArrayMax = 0;
                  bVar39 = -1 < CpuChannel->Enabled;
                  if (bVar39) {
                    FCpuProfilerTrace::GetOrCreateSpecId
                              (&__CpuProfilerEventSpecId220,
                               "UPCGSkinnedMeshSelector::SelectEntries::BuildReverseInstances",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGSkinnedMeshSelector.cpp"
                               ,0xdc);
                    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId220);
                  }
                  iVar14 = (int)pFVar22->_padding_;
                  iVar13 = 0;
                  if (0 < iVar14) {
                    local_2b8 = 0;
                    uVar31 = uVar27;
                    uVar33 = uVar27;
                    do {
                      uVar32 = (uint)uVar33;
                      uVar28 = ~uVar32 >> 0x1f;
                      uVar15 = 0;
                      if ((int)uVar32 < iVar14) {
                        uVar15 = uVar28;
                      }
                      if ((uVar15 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar7 = (code *)swi(3);
                        uVar11 = (*pcVar7)();
                        return (bool)uVar11;
                      }
                      uVar15 = *(uint *)(((ForAnyElementType *)&pFVar22->_padding_)->Data + uVar27);
                      uVar34 = 0;
                      if ((int)uVar15 < (param_3->Points).ArrayNum) {
                        uVar34 = ~uVar15 >> 0x1f;
                      }
                      if ((uVar34 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar7 = (code *)swi(3);
                        uVar11 = (*pcVar7)();
                        return (bool)uVar11;
                      }
                      pFVar6 = (param_3->Points).AllocatorInstance.Data;
                      pFVar29 = pFVar6 + (longlong)(int)uVar15 * 0xd0 + 0x40;
                      if (0.0 <= *(double *)pFVar29 * *(double *)(pFVar29 + 8) *
                                 *(double *)(pFVar6 + (longlong)(int)uVar15 * 0xd0 + 0x50)) {
                        uVar15 = (uint)uVar31;
                        if (uVar15 != uVar32) {
                          uVar34 = 0;
                          if ((int)uVar32 < (int)pFVar22->_padding_) {
                            uVar34 = uVar28;
                          }
                          if ((uVar34 == 0) &&
                             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar12)) {
                            pcVar7 = (code *)swi(3);
                            uVar11 = (*pcVar7)();
                            return (bool)uVar11;
                          }
                          uVar4 = *(undefined4 *)
                                   (((ForAnyElementType *)&pFVar22->_padding_)->Data + uVar27);
                          uVar28 = 0;
                          if ((int)uVar15 < (int)pFVar22->_padding_) {
                            uVar28 = ~uVar15 >> 0x1f;
                          }
                          if ((uVar28 == 0) &&
                             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar12)) {
                            pcVar7 = (code *)swi(3);
                            uVar11 = (*pcVar7)();
                            return (bool)uVar11;
                          }
                          *(undefined4 *)
                           (((ForAnyElementType *)&pFVar22->_padding_)->Data + local_2b8) = uVar4;
                        }
                        uVar31 = (ulonglong)(uVar15 + 1);
                        local_2b8 = local_2b8 + 4;
                      }
                      else {
                        uVar15 = 0;
                        if ((int)uVar32 < (int)pFVar22->_padding_) {
                          uVar15 = uVar28;
                        }
                        if ((uVar15 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar7 = (code *)swi(3);
                          uVar11 = (*pcVar7)();
                          return (bool)uVar11;
                        }
                        pFVar29 = ((ForAnyElementType *)&pFVar22->_padding_)->Data + uVar27;
                        if (((local_2f0.AllocatorInstance.Data <= pFVar29) &&
                            (pFVar29 < local_2f0.AllocatorInstance.Data +
                                       (longlong)local_2f0.ArrayMax * 4)) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar12)) {
                          pcVar7 = (code *)swi(3);
                          uVar11 = (*pcVar7)();
                          return (bool)uVar11;
                        }
                        iVar14 = local_2f0.ArrayNum;
                        if (local_2f0.ArrayNum == local_2f0.ArrayMax) {
                          iVar14 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,&local_2f0.AllocatorInstance,&local_2f0.ArrayMax
                                             );
                        }
                        local_2f0.ArrayNum = iVar14 + 1;
                        *(undefined4 *)(local_2f0.AllocatorInstance.Data + (longlong)iVar14 * 4) =
                             *(undefined4 *)pFVar29;
                      }
                      iVar14 = (int)pFVar22->_padding_;
                      uVar33 = (ulonglong)(uVar32 + 1);
                      uVar27 = uVar27 + 4;
                    } while ((int)(uVar32 + 1) < iVar14);
                    iVar13 = (int)uVar31;
                    pFVar22 = local_2d8;
                    local_310 = iVar13;
                  }
                  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                            ((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar22,iVar13,Default);
                  if (bVar39) {
                    FCpuProfilerTrace::OutputEndEvent();
                  }
                  local_218 = param_4;
                  local_210 = local_2d0;
                  local_200 = local_248;
                  local_1f8 = &param_3->Points;
                  local_1f0 = local_2e0;
                  local_208 = param_1;
                  local_1e8 = param_3;
                  if (CpuChannel->Enabled < 0) {
                    `UPCGSkinnedMeshSelector::SelectInstances'::__l96::<lambda_2>::operator()
                              (&local_218,(TArray<int,TSizedDefaultAllocator<32>_> *)pFVar22,false);
                    `UPCGSkinnedMeshSelector::SelectInstances'::__l96::<lambda_2>::operator()
                              (&local_218,&local_2f0,true);
                  }
                  else {
                    FCpuProfilerTrace::GetOrCreateSpecId
                              (&__CpuProfilerEventSpecId314,
                               "UPCGSkinnedMeshSelector::SelectEntries::AddPointsToInstanceList",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGSkinnedMeshSelector.cpp"
                               ,0x13a);
                    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId314);
                    `UPCGSkinnedMeshSelector::SelectInstances'::__l96::<lambda_2>::operator()
                              (&local_218,(TArray<int,TSizedDefaultAllocator<32>_> *)pFVar22,false);
                    `UPCGSkinnedMeshSelector::SelectInstances'::__l96::<lambda_2>::operator()
                              (&local_218,&local_2f0,true);
                    FCpuProfilerTrace::OutputEndEvent();
                  }
                  bVar39 = FPCGAsyncState::ShouldStop((FPCGAsyncState *)&param_1->_padding_);
                  if (bVar39) {
                    if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2f0.AllocatorInstance.Data);
                    }
                    break;
                  }
                  if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2f0.AllocatorInstance.Data);
                  }
                }
                lVar24 = local_240;
                uVar15 = local_2f8;
              } while ((int)local_2f8 < (param_1->AttributeOverridePartition).ArrayNum);
            }
            if (bVar38) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            bVar38 = local_2f8 == (param_1->AttributeOverridePartition).ArrayNum;
            param_1->CurrentPointIndex = local_2f8;
          }
          if (bVar10) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          goto LAB_149e87ba0;
        }
      }
      else if (1 < (byte)LogPCG._0_1_) {
        pFVar17 = FPCGAttributePropertySelector::GetDisplayText
                            ((FPCGAttributePropertySelector *)this_00,&local_80,false);
        pFVar25 = FText::AsLocalizable_Advanced_LocText
                            (&local_120,L"PCGSkinnedMeshSelector",L"MeshAttributeInvalidType",
                             L"Mesh Attribute \'{0}\' is not of valid type (must be FString or FSoftObjectPath)."
                            );
        pFVar18 = FTextFormat::FTextFormat(local_70,pFVar25,Default);
        pFVar17 = FText::Format<FText>(&local_150,pFVar18,pFVar17);
        FText::ToString(pFVar17);
        bVar10 = param_1 != (FPCGSkinnedMeshSpawnerContext *)0x0;
        if (bVar10) {
          FPCGContext::GetTaskName((FPCGContext *)param_1,&local_160);
          FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_170);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((bVar10) && (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        if ((bVar10) && (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        if (local_150.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
        }
        goto LAB_149e87b93;
      }
    }
    else if (1 < (byte)LogPCG._0_1_) {
      pFVar16 = FPCGAttributePropertySelector::ToString
                          ((FPCGAttributePropertySelector *)this_00,&local_1d0,false);
      FText::FromString(&local_1c0,pFVar16);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      pFVar17 = FText::AsLocalizable_Advanced_LocText
                          (&local_180,L"PCGSkinnedMeshSelector",L"MeshAttributeNotInMetadata",
                           L"Mesh Attribute \'{0}\' is not in the metadata.");
      pFVar18 = FTextFormat::FTextFormat(&local_90,pFVar17,Default);
      pFVar17 = FText::Format<FText>(&local_190,pFVar18,&local_1c0);
      FText::ToString(pFVar17);
      bVar10 = param_1 != (FPCGSkinnedMeshSpawnerContext *)0x0;
      if (bVar10) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_1a0);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_1b0);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar10) && (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      if ((bVar10) && (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      local_120.TextData.Reference = local_180.TextData.Reference;
      if (local_190.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
        local_120.TextData.Reference = local_180.TextData.Reference;
      }
LAB_149e87b93:
      if (local_120.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
      }
    }
  }
  bVar38 = true;
LAB_149e87ba0:
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar38;
}

// StaticRegisterNativesUPCGSkinnedMeshSelector @ 149ec1e90

void __cdecl UPCGSkinnedMeshSelector::StaticRegisterNativesUPCGSkinnedMeshSelector(void)

{
  return;
}

