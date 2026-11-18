// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 62

// Find @ 14475b7b0

TRefCountPtr<FRHIUniformBuffer> * __thiscall
TMapBase<int,TRefCountPtr<FRHIUniformBuffer>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>_>
::Find(TMapBase<int,TRefCountPtr<FRHIUniformBuffer>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>_>
       *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  TRefCountPtr<FRHIUniformBuffer> *pTVar4;
  ForElementType<FSetElementId> *pFVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    pFVar5 = (ForElementType<FSetElementId> *)(this->Pairs).Hash.SecondaryData.SecondaryData.Data;
    if (pFVar5 == (ForElementType<FSetElementId> *)0x0) {
      pFVar5 = (ForElementType<FSetElementId> *)&(this->Pairs).Hash.SecondaryData;
    }
    if (pFVar5 == (ForElementType<FSetElementId> *)0x0) {
      pFVar5 = &(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)pFVar5->InlineData +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pTVar4 = (TRefCountPtr<FRHIUniformBuffer> *)0x0;
          if (lVar1 != 0) {
            pTVar4 = (TRefCountPtr<FRHIUniformBuffer> *)(lVar1 + 8);
          }
          return pTVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (TRefCountPtr<FRHIUniformBuffer> *)0x0;
}

// Emplace<FString_const_&,FRDGTexture_*_const_&> @ 1447ee5f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTexture ** __thiscall
TMapBase<FString,FRDGTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRDGTexture_*,0>_>
::Emplace<FString_const_&,FRDGTexture_*_const_&>
          (TMapBase<FString,FRDGTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRDGTexture_*,0>_>
           *this,FString *param_1,FRDGTexture **param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FString,FRDGTexture_*>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar7);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar8 = (TSparseSetElement<TTuple<FString,FRDGTexture_*>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FRDGTexture_*>_> *)0x0) {
    ::FString::FString(local_28.Pointer,param_1);
    *(FRDGTexture **)((longlong)local_28.Pointer + 0x10) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar5 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar8;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,FRDGTexture_*>,TDefaultMapHashableKeyFuncs<FString,FRDGTexture_*,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FRDGTexture_*>,TDefaultMapHashableKeyFuncs<FString,FRDGTexture_*,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar8,local_res8[0]);
  }
  return (FRDGTexture **)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar7 * 0x20);
}

// Emplace<FString,FRDGTexture_*_const_&> @ 1447ef4a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTexture ** __thiscall
TMapBase<FString,FRDGTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRDGTexture_*,0>_>
::Emplace<FString,FRDGTexture_*_const_&>
          (TMapBase<FString,FRDGTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRDGTexture_*,0>_>
           *this,FString *param_1,FRDGTexture **param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TSparseSetElement<TTuple<FString,FRDGTexture_*>_> *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar8);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar7 = (TSparseSetElement<TTuple<FString,FRDGTexture_*>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FRDGTexture_*>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = 0;
    *(FScriptContainerElement **)local_28.Pointer = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    *(FRDGTexture **)((longlong)local_28.Pointer + 0x10) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
    pTVar7 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar5 = *(int *)&pTVar7->field_0x8 + -1;
  if (*(int *)&pTVar7->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar7;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,FRDGTexture_*>,TDefaultMapHashableKeyFuncs<FString,FRDGTexture_*,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FRDGTexture_*>,TDefaultMapHashableKeyFuncs<FString,FRDGTexture_*,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar7,local_res8[0]);
  }
  return (FRDGTexture **)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar8 * 0x20);
}

// Find @ 144812e60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTexture ** __thiscall
TMapBase<FString,FRDGTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRDGTexture_*,0>_>
::Find(TMapBase<FString,FRDGTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRDGTexture_*,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FRDGTexture **ppFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,FRDGTexture_*>,TDefaultMapHashableKeyFuncs<FString,FRDGTexture_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    ppFVar6 = (FRDGTexture **)0x0;
    if (lVar4 != 0) {
      ppFVar6 = (FRDGTexture **)(lVar4 + 0x10);
    }
    return ppFVar6;
  }
  return (FRDGTexture **)0x0;
}

// EmplaceByHash<FViewInfo_const_*> @ 144856b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

DistanceFieldShadowViewGPUData * __thiscall
TMapBase<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,0>_>
::EmplaceByHash<FViewInfo_const_*>
          (TMapBase<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,0>_>
           *this,uint param_1,FViewInfo **param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData>_>
  *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x38 + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData>_>
       *)0x0) {
    *(FViewInfo **)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x28) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x30) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData>,TDefaultMapHashableKeyFuncs<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData>,TDefaultMapHashableKeyFuncs<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (DistanceFieldShadowViewGPUData *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x38 + 8)
  ;
}

// Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity_const_&,FText_const_&> @ 1448e33c0

FText * __thiscall
TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity_const_&,FText_const_&>
          (void *this,EOnScreenMessageSeverity *param_1,FText *param_2)

{
  int iVar1;
  int iVar2;
  ITextData *pIVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FSparseArrayAllocationInfo local_28;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_28,iVar4);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FCoreDelegates::EOnScreenMessageSeverity,FText>_> *)0x0) {
    *(EOnScreenMessageSeverity *)local_28.Pointer = *param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = 0;
    pIVar3 = (param_2->TextData).Reference;
    *(ITextData **)((longlong)local_28.Pointer + 8) = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    *(uint *)((longlong)local_28.Pointer + 0x10) = param_2->Flags;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
  ::RehashOrLink(this,(uint)*(byte *)local_28.Pointer,local_28.Pointer,local_28.Index);
  return (FText *)(*(longlong *)this + 8 + (longlong)local_28.Index * 0x20);
}

// FindOrAddImpl<FHeightfieldComponentTextures> @ 1448e4c60

TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FHeightfieldComponentTextures>
          (TMapBase<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FHeightfieldComponentTextures *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FHeightfieldComponentTextures *local_res20;
  
  iVar1 = TSet<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FHeightfieldComponentTextures>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FHeightfieldComponentTextures_&&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<FHeightfieldComponentTextures_&&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// FindOrAddImpl<int_const_&> @ 144a563b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters> ** __thiscall
TMapBase<int,TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>_*,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>_*,0>_>
           *this,uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_144a56442;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>_*>,TDefaultMapHashableKeyFuncs<int,TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_144a56442:
  return (TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters> **)(lVar3 + 8);
}

// FindOrAddImpl<int_const_&> @ 144a56460

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters> ** __thiscall
TMapBase<int,TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters>_*,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters>_*,0>_>
           *this,uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_144a564f2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters>_*>,TDefaultMapHashableKeyFuncs<int,TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters>_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_144a564f2:
  return (TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters> **)(lVar3 + 8);
}

// FindChecked @ 144b20110

FIndirectLightingCacheBlock * __thiscall
TMapBase<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>_>
::FindChecked(TMapBase<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>_>
              *this,TIntVector3<int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FIndirectLightingCacheBlock *pFVar5;
  longlong lVar6;
  
  uVar3 = FCrc::MemCrc_DEPRECATED(param_1,0xc,0);
  iVar4 = TSet<TTuple<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Math::TIntVector3<int>_>(&this->Pairs,uVar3,param_1);
  if ((iVar4 != -1) &&
     (lVar6 = (longlong)iVar4 * 0x60 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FIndirectLightingCacheBlock *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FIndirectLightingCacheBlock *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FIndirectLightingCacheBlock *)(*pcVar1)();
  return pFVar5;
}

// FindOrAddImpl<int_const_&,int> @ 144b902c0

int * __thiscall
TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
FindOrAddImpl<int_const_&,int>
          (TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this,
          uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [8];
  int *local_18;
  int *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return piVar2 + 1;
          }
          break;
        }
        iVar1 = piVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TPairInitializer<int_const_&,int_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<int_const_&,int_&&> *)(ulonglong)param_1,(bool *)&local_18);
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x10 + 4);
}

// FindOrAddImpl<FLumenCardId_const_&> @ 144d396c0

TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator> * __thiscall
TMapBase<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>_>
::FindOrAddImpl<FLumenCardId_const_&>
          (TMapBase<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>_>
           *this,uint param_1,FLumenCardId *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FLumenCardId *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x48;
        if (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x48) == param_2->PackedValue) {
          if (lVar3 != 0) goto LAB_144d39752;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x40);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FLumenCardId_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FLumenCardId_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x48;
LAB_144d39752:
  return (TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator> *)(lVar3 + 8);
}

// Find @ 144d79d70

TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator> * __thiscall
TMapBase<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>_>
::Find(TMapBase<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>_>
       *this,FLumenCardId param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    param_1._s_1.CustomId * 0x17 + (int)param_1.PackedValue) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x48;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x48) == param_1.PackedValue) {
          pTVar4 = (TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator> *)0x0;
          if (lVar1 != 0) {
            pTVar4 = (TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator> *)(lVar1 + 8)
            ;
          }
          return pTVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x40);
      } while (iVar3 != -1);
    }
  }
  return (TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator> *)0x0;
}

// FindOrAddImpl<FGuid_const_&> @ 144e6d6f0

FMaterialCachePrimitiveCachedTagCommands * __thiscall
TMapBase<FGuid,FMaterialCachePrimitiveCachedTagCommands,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCachePrimitiveCachedTagCommands,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,FMaterialCachePrimitiveCachedTagCommands,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCachePrimitiveCachedTagCommands,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCachePrimitiveCachedTagCommands,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FMaterialCachePrimitiveCachedTagCommands *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCachePrimitiveCachedTagCommands,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FMaterialCachePrimitiveCachedTagCommands *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// FindOrAddImpl<int_const_&> @ 144ee41b0

FStatCollection * __thiscall
TMapBase<int,FMeshDrawCommandStatsManager::FStatCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FMeshDrawCommandStatsManager::FStatCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x148 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FStatCollection *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x50];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,FMeshDrawCommandStatsManager::FStatCollection>,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FStatCollection *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x148 + 8);
}

// FindOrAddImpl<FName_const_&> @ 144ee4260

FDrawData * __thiscall
TMapBase<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FDrawData *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FMeshDrawCommandStatsManager::FDrawData>,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FDrawData *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName_const_&> @ 144ee4310

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName> @ 144ee43c0

TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
* __thiscall
TMapBase<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>,0>_>
::FindOrAddImpl<FName>
          (TMapBase<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
                    *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// Find @ 144f0caa0

FStatCollection * __thiscall
TMapBase<int,FMeshDrawCommandStatsManager::FStatCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>_>
::Find(TMapBase<int,FMeshDrawCommandStatsManager::FStatCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshDrawCommandStatsManager::FStatCollection,0>_>
       *this,int param_1)

{
  int iVar1;
  int *piVar2;
  FStatCollection *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x148 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_1) {
          pFVar3 = (FStatCollection *)0x0;
          if (piVar2 != (int *)0x0) {
            pFVar3 = (FStatCollection *)(piVar2 + 2);
          }
          return pFVar3;
        }
        iVar1 = piVar2[0x50];
      } while (iVar1 != -1);
    }
  }
  return (FStatCollection *)0x0;
}

// FindOrAddImpl<FNaniteRasterMaterialCacheKey_const_&> @ 144f61b20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNaniteRasterMaterialCache * __thiscall
TMapBase<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache,0>_>
::FindOrAddImpl<FNaniteRasterMaterialCacheKey_const_&>
          (TMapBase<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache,0>_>
           *this,uint param_1,FNaniteRasterMaterialCacheKey *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FNaniteRasterMaterialCacheKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0xb8 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == (param_2->field0_0x0).Packed) {
          if (puVar2 != (uint *)0x0) {
            return (FNaniteRasterMaterialCache *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0x2c];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache>,TDefaultMapHashableKeyFuncs<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FNaniteRasterMaterialCacheKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FNaniteRasterMaterialCacheKey_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FNaniteRasterMaterialCache *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xb8 + 8);
}

// Emplace<FString_const_&,Nanite::FFeedbackManager::FMaterialWarningItem_const_&> @ 14502f170

FMaterialWarningItem * __thiscall
TMapBase<FString,Nanite::FFeedbackManager::FMaterialWarningItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>_>
::Emplace<FString_const_&,Nanite::FFeedbackManager::FMaterialWarningItem_const_&>
          (TMapBase<FString,Nanite::FFeedbackManager::FMaterialWarningItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>_>
           *this,FString *param_1,FMaterialWarningItem *param_2)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_> *pTVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar8 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  pTVar9 = (TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_> *)0x0
  ;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_> *)0x0) {
    ::FString::FString(local_28.Pointer,param_1);
    dVar2 = param_2->LastTimeLogged;
    *(double *)((longlong)local_28.Pointer + 0x10) = param_2->LastTimeSeen;
    *(double *)((longlong)local_28.Pointer + 0x18) = dVar2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
    pTVar9 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar6 = *(int *)&pTVar9->field_0x8 + -1;
  if (*(int *)&pTVar9->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)pTVar9;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar3 = TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,pTVar9,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,pTVar9,local_res8[0]);
  }
  return (FMaterialWarningItem *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x28 + 0x10);
}

// EmplaceByHash<FString_const_&> @ 14502f640

FMaterialWarningItem * __thiscall
TMapBase<FString,Nanite::FFeedbackManager::FMaterialWarningItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>_>
::EmplaceByHash<FString_const_&>
          (TMapBase<FString,Nanite::FFeedbackManager::FMaterialWarningItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar5 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_> *)0x0) {
    ::FString::FString(local_18.Pointer,param_2);
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0xffefffffffffffff;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (FMaterialWarningItem *)(*(longlong *)&(this->Pairs).Elements + lVar5 * 0x28 + 0x10);
}

// FindOrAddImpl<int_const_&> @ 1450acfa0

FIndividualOcclusionHistory * __thiscall
TMapBase<int,FIndividualOcclusionHistory,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FIndividualOcclusionHistory,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FIndividualOcclusionHistory,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FIndividualOcclusionHistory,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FIndividualOcclusionHistory *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,FIndividualOcclusionHistory>,TDefaultMapHashableKeyFuncs<int,FIndividualOcclusionHistory,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FIndividualOcclusionHistory *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// Find @ 1450cd550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

int * __thiscall
TMapBase<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
::Find(TMapBase<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
       *this,FLightSceneInfo *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1->Id) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(FLightSceneInfo **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          piVar4 = (int *)0x0;
          if (lVar1 != 0) {
            piVar4 = (int *)(lVar1 + 8);
          }
          return piVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (int *)0x0;
}

// FindChecked @ 1450cd650

TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>
* __thiscall
TMapBase<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>,0>_>
::FindChecked(TMapBase<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>
  *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TUniquePtr<UE::Renderer::Private::IPathTracingDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingDenoiser>_>
          *)(lVar8 + 0x10);
}

// FindChecked @ 1450cd6f0

TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>
* __thiscall
TMapBase<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>,0>_>
::FindChecked(TMapBase<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>
  *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TUniquePtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser,TDefaultDelete<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser>_>
          *)(lVar8 + 0x10);
}

// Find @ 145249b00

TSharedPtr<FImagePixelPipe,1> * __thiscall
TMapBase<FName,TSharedPtr<FImagePixelPipe,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>_>
::Find(TMapBase<FName,TSharedPtr<FImagePixelPipe,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<FImagePixelPipe,1> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TSharedPtr<FImagePixelPipe,1> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TSharedPtr<FImagePixelPipe,1> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSharedPtr<FImagePixelPipe,1> *)0x0;
}

// FindOrAddImpl<FName> @ 145290d80

TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FName>
          (TMapBase<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 1452c2d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAttachmentGroupSceneInfo * __thiscall
TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
::Find(TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
       *this,FPrimitiveComponentId *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FAttachmentGroupSceneInfo *pFVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1->PrimIDValue) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x28;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x28) == param_1->PrimIDValue) {
          pFVar5 = (FAttachmentGroupSceneInfo *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FAttachmentGroupSceneInfo *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x20);
      } while (iVar3 != -1);
    }
  }
  return (FAttachmentGroupSceneInfo *)0x0;
}

// EmplaceByHash<FRHIUniformBuffer_*_const_&> @ 1452f90d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FRHIUniformBuffer_*_const_&>
          (TMapBase<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FRHIUniformBuffer **param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar5);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar5) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer ==
      (TSparseSetElement<TTuple<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    local_18.Pointer =
         (TSparseSetElement<TTuple<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>_>_>
          *)0x0;
  }
  else {
    *(FRHIUniformBuffer **)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    DestructItems<FMeshComputeDispatchCommand,int>((FMeshComputeDispatchCommand *)0x0,0);
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar5 * 0x20);
}

// FindChecked @ 145320b80

FRHIUniformBuffer ** __thiscall
TMapBase<FRHIUniformBuffer_*,FRHIUniformBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,FRHIUniformBuffer_*,0>_>
::FindChecked(TMapBase<FRHIUniformBuffer_*,FRHIUniformBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,FRHIUniformBuffer_*,0>_>
              *this,FRHIUniformBuffer *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRHIUniformBuffer **ppFVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(FRHIUniformBuffer **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FRHIUniformBuffer **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FRHIUniformBuffer **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppFVar6 = (FRHIUniformBuffer **)(*pcVar3)();
  return ppFVar6;
}

// FindChecked @ 145320c50

TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>_>
              *this,FRHIUniformBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FRHIUniformBuffer *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// Emplace<FGuid_const_&,FReflectionCaptureCacheEntry_const_&> @ 14535bf00

FReflectionCaptureCacheEntry * __thiscall
TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
::Emplace<FGuid_const_&,FReflectionCaptureCacheEntry_const_&>
          (TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
           *this,FGuid *param_1,FReflectionCaptureCacheEntry *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x24,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x24);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x24) = 0xffffffff;
    }
  }
  TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,FReflectionCaptureCacheEntry>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = *(undefined8 *)param_2;
    *(float *)((longlong)local_18.Pointer + 0x18) = (param_2->SceneState).AverageBrightness;
    *(undefined4 *)((longlong)local_18.Pointer + 0x1c) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64(local_18.Pointer,0x10);
  bVar4 = TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FReflectionCaptureCacheEntry *)
         (*(longlong *)&(this->Pairs).Elements + lVar7 * 0x24 + 0x10);
}

// Emplace<FGuid_const_&,FReflectionCaptureCacheEntry> @ 14535c040

FReflectionCaptureCacheEntry * __thiscall
TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
::Emplace<FGuid_const_&,FReflectionCaptureCacheEntry>
          (TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
           *this,FGuid *param_1,FReflectionCaptureCacheEntry *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x24,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x24);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x24) = 0xffffffff;
    }
  }
  TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FGuid,FReflectionCaptureCacheEntry>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = *(undefined8 *)param_2;
    *(float *)((longlong)local_18.Pointer + 0x18) = (param_2->SceneState).AverageBrightness;
    *(undefined4 *)((longlong)local_18.Pointer + 0x1c) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = CityHash64(local_18.Pointer,0x10);
  bVar4 = TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,(uint)uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FReflectionCaptureCacheEntry *)
         (*(longlong *)&(this->Pairs).Elements + lVar7 * 0x24 + 0x10);
}

// GetKeys<DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> @ 14535fb30

int __thiscall
TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
::GetKeys<DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>
          (TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
           *this,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar5 = 0;
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::UnhashElements(param_1);
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  }
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Reserve
            (param_1,*(int *)&(this->Pairs).Elements.field_0x8 -
                     *(int *)&(this->Pairs).Elements.field_0x34);
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar6 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)TStack_70.Array;
    }
    uVar3 = *puVar6;
    while (uVar3 == 0) {
      lVar4 = (longlong)iVar5;
      local_30 = local_30 + 0x20;
      iVar5 = iVar5 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_14535fc19;
      uVar3 = puVar6[lVar4 + 1];
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar4;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_14535fc19:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this;
  iStack_48 = iVar5;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iVar5;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (param_1,(FGuid *)&stack0x00000008,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_70.CurrentBitIndex * 0x24));
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14535fce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
           *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  char *pcVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  ForElementType<unsigned_int> FVar21;
  uint *puVar22;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar20;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar20 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar14 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar18 = 0;
  if (uVar14 == 0) goto LAB_14535ffa1;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar14);
  uVar15 = 1;
  if (3 < uVar14) {
    uVar13 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_120 = (undefined4)lVar4;
    uVar15 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar15 <= (int)local_50)) goto LAB_14535ffa1;
  local_50 = uVar15;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar15 != 0) {
    uVar14 = uVar15;
    if (uVar15 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_14535fdfc;
      }
    }
    else {
LAB_14535fdfc:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar14,4);
    }
    if (0 < (int)uVar15) {
      uVar19 = (ulonglong)uVar15;
      uVar13 = uVar20;
      do {
        FVar12.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_58.Data;
        }
        uVar9 = uVar13 & (longlong)(int)uVar15 - 1U;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(FVar12.Data + uVar9 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar13 = uVar20;
    if (local_70 != 0) {
      FVar21 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_78;
      }
      uVar14 = *(uint *)FVar21;
      uVar19 = uVar20;
      while (uVar14 == 0) {
        uStack_150 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_150;
        iVar8 = (int)uVar13;
        local_168 = iVar8 + 1;
        uVar13 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14535ff00;
        uVar14 = ((uint *)((longlong)FVar21 + 4))[iVar8];
      }
      uStack_164 = -uVar14 & uVar14;
      uVar13 = (ulonglong)uStack_164 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_11c = (int)lVar4;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar13 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14535ff00:
        uVar13 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar13 < (int)local_70) {
      do {
        pcVar2 = (char *)(*(longlong *)local_114._4_8_ + (longlong)(int)uVar13 * 0x18);
        uVar10 = CityHash64(pcVar2,0x10);
        uVar14 = local_50 - 1 & (uint)uVar10;
        *(uint *)(pcVar2 + 0x14) = uVar14;
        FVar12.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_58.Data;
        }
        uVar19 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(pcVar2 + 0x10) = *(undefined4 *)(FVar12.Data + uVar19 * 4);
        *(int *)(FVar12.Data + uVar19 * 4) = (int)uVar13;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar13 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14535ffa1:
  uVar14 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (*piVar1 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar14,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar14 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar13 = uVar20;
  local_c8 = uVar18;
  uStack_dc = 1;
  if (uVar14 != 0) {
    puVar22 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar13 = (ulonglong)uVar14;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)TStack_140.Array;
    }
    uVar15 = *puVar22;
    uVar19 = uVar20;
    local_c8 = 0;
    uVar18 = 0;
    while (uVar15 == 0) {
      iVar8 = (int)uVar20;
      local_c8 = (int)uVar19 + 0x20;
      uVar19 = (ulonglong)local_c8;
      uVar18 = iVar8 + 1;
      uVar20 = (ulonglong)uVar18;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_14536004e;
      uVar15 = puVar22[(longlong)iVar8 + 1];
    }
    uStack_dc = -uVar15 & uVar15;
    uVar20 = (ulonglong)uStack_dc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_118 = (int)lVar4;
    uVar15 = (local_c8 - 1) + local_118;
    if ((int)uVar14 < (int)uVar15) {
      uVar15 = uVar14;
    }
    uVar13 = (ulonglong)uVar15;
  }
LAB_14536004e:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar13;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar18);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar18;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar14) {
    do {
      lVar4 = (longlong)(int)uVar13 * 0x24;
      piVar16 = (int *)(*(longlong *)&(this->Pairs).Elements + lVar4);
      uVar10 = CityHash64((char *)piVar16,0x10);
      if (local_98._8_4_ != local_64) {
        FVar12.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_58.Data;
        }
        iVar8 = *(int *)(FVar12.Data + ((ulonglong)(local_50 - 1) & uVar10 & 0xffffffff) * 4);
        if (iVar8 != -1) {
          do {
            lVar11 = (longlong)iVar8;
            if (((piVar16[3] == *(int *)(local_98._0_8_ + lVar11 * 0x18 + 0xc) &&
                 piVar16[2] == *(int *)(local_98._0_8_ + lVar11 * 0x18 + 8)) &&
                piVar16[1] == *(int *)(local_98._0_8_ + lVar11 * 0x18 + 4)) &&
                *piVar16 == *(int *)(local_98._0_8_ + lVar11 * 0x18)) goto LAB_1453601ff;
            iVar8 = *(int *)(local_98._0_8_ + lVar11 * 0x18 + 0x10);
          } while (iVar8 != -1);
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar17 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar4);
      if (((pFVar3 <= pFVar17) && (pFVar17 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar8 + 1;
      uVar6 = *(undefined8 *)(pFVar17 + 8);
      pFVar3 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar17;
      *(undefined8 *)(pFVar3 + 8) = uVar6;
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_98,
                 (FGuid *)local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x24));
LAB_1453601ff:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar13 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar8 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar8;
}

// Find @ 1453867d0

FGuid * __thiscall
TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
::Find(TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
       *this,UReflectionCaptureComponent *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FGuid *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UReflectionCaptureComponent *)*plVar2 == param_1) {
          pFVar4 = (FGuid *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FGuid *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FGuid *)0x0;
}

// Find @ 145386870

FReflectionCaptureCacheEntry * __thiscall
TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
::Find(TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
       *this,FGuid *param_1)

{
  longlong lVar1;
  int iVar2;
  ulong64 uVar3;
  FReflectionCaptureCacheEntry *pFVar4;
  
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar3,param_1);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x24;
    pFVar4 = (FReflectionCaptureCacheEntry *)0x0;
    if (lVar1 != 0) {
      pFVar4 = (FReflectionCaptureCacheEntry *)(lVar1 + 0x10);
    }
    return pFVar4;
  }
  return (FReflectionCaptureCacheEntry *)0x0;
}

// FindChecked @ 145386aa0

int * __thiscall
TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::
FindChecked(TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
            *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (int *)(puVar5 + 1);
          }
          break;
        }
        uVar3 = puVar5[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (int *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  piVar4 = (int *)(*pcVar1)();
  return piVar4;
}

// Remove @ 1453a01b0

int __thiscall
TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
::Remove(TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
         *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar2 = CityHash64((char *)param_1,0x10);
    iVar1 = TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
            ::RemoveImpl<FGuid>(&this->Pairs,(uint)uVar2,param_1);
    return iVar1;
  }
  return 0;
}

// FindOrAddImpl<FPrimitiveComponentId_const_&> @ 1453ee400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FComponentVelocityData * __thiscall
TMapBase<FPrimitiveComponentId,FComponentVelocityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>_>
::FindOrAddImpl<FPrimitiveComponentId_const_&>
          (TMapBase<FPrimitiveComponentId,FComponentVelocityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>_>
           *this,uint param_1,FPrimitiveComponentId *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FPrimitiveComponentId *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x150 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_2->PrimIDValue) {
          if (puVar2 != (uint *)0x0) {
            return (FComponentVelocityData *)(puVar2 + 4);
          }
          break;
        }
        uVar1 = puVar2[0x50];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FPrimitiveComponentId,FComponentVelocityData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPrimitiveComponentId_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FPrimitiveComponentId_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FComponentVelocityData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x150 + 0x10);
}

// Find @ 145433130

UStaticMesh ** __thiscall
TMapBase<FVertexFactory_*,UStaticMesh_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexFactory_*,UStaticMesh_const_*,0>_>
::Find(TMapBase<FVertexFactory_*,UStaticMesh_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexFactory_*,UStaticMesh_const_*,0>_>
       *this,FVertexFactory *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  UStaticMesh **ppUVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(FVertexFactory **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppUVar5 = (UStaticMesh **)0x0;
          if (lVar1 != 0) {
            ppUVar5 = (UStaticMesh **)(lVar1 + 8);
          }
          return ppUVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (UStaticMesh **)0x0;
}

// Find @ 1454331e0

FSpeedTreeWindComputation ** __thiscall
TMapBase<UStaticMesh_const_*,FSpeedTreeWindComputation_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>_>
::Find(TMapBase<UStaticMesh_const_*,FSpeedTreeWindComputation_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>_>
       *this,UStaticMesh *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FSpeedTreeWindComputation **ppFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UStaticMesh **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar5 = (FSpeedTreeWindComputation **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FSpeedTreeWindComputation **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FSpeedTreeWindComputation **)0x0;
}

// Find @ 145433290

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenSceneData ** __thiscall
TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
::Find(TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
       *this,FLumenSceneDataKey param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  FLumenSceneData **ppFVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = param_1.GPUIndex;
  uVar8 = param_1.ViewUniqueId - uVar10 ^ uVar10 >> 0xd;
  uVar6 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
  uVar5 = (uVar10 - uVar8) - uVar6 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 << 0x10;
  uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar5 - uVar6) - uVar8 ^ uVar6 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        uVar3 = *(undefined8 *)(lVar2 + (longlong)iVar9 * 0x18);
        lVar1 = lVar2 + (longlong)iVar9 * 0x18;
        if (((uint)uVar3 == param_1.ViewUniqueId) && ((uint)((ulonglong)uVar3 >> 0x20) == uVar10)) {
          if (iVar9 == -1) {
            return (FLumenSceneData **)0x0;
          }
          ppFVar4 = (FLumenSceneData **)0x0;
          if (lVar1 != 0) {
            ppFVar4 = (FLumenSceneData **)(lVar1 + 8);
          }
          return ppFVar4;
        }
        iVar9 = *(int *)(lVar1 + 0x10);
      } while (iVar9 != -1);
    }
  }
  return (FLumenSceneData **)0x0;
}

// Find @ 1454333b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FComponentVelocityData * __thiscall
TMapBase<FPrimitiveComponentId,FComponentVelocityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>_>
::Find(TMapBase<FPrimitiveComponentId,FComponentVelocityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>_>
       *this,FPrimitiveComponentId *param_1)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  FComponentVelocityData *pFVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1->PrimIDValue) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x150 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1->PrimIDValue) {
          pFVar4 = (FComponentVelocityData *)0x0;
          if (puVar2 != (uint *)0x0) {
            pFVar4 = (FComponentVelocityData *)(puVar2 + 4);
          }
          return pFVar4;
        }
        uVar1 = puVar2[0x50];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FComponentVelocityData *)0x0;
}

// FindChecked @ 145433420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLightPrimitiveInteraction ** __thiscall
TMapBase<FPrimitiveSceneInfo_*,FLightPrimitiveInteraction_*,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,FLightPrimitiveInteraction_*,0>_>
::FindChecked(TMapBase<FPrimitiveSceneInfo_*,FLightPrimitiveInteraction_*,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,FLightPrimitiveInteraction_*,0>_>
              *this,FPrimitiveSceneInfo *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLightPrimitiveInteraction **ppFVar6;
  ForElementType<FSetElementId> *pFVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    pFVar7 = (ForElementType<FSetElementId> *)(this->Pairs).Hash.SecondaryData.SecondaryData.Data;
    if (pFVar7 == (ForElementType<FSetElementId> *)0x0) {
      pFVar7 = (ForElementType<FSetElementId> *)&(this->Pairs).Hash.SecondaryData;
    }
    if (pFVar7 == (ForElementType<FSetElementId> *)0x0) {
      pFVar7 = &(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)pFVar7->InlineData +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(FPrimitiveSceneInfo **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FLightPrimitiveInteraction **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FLightPrimitiveInteraction **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppFVar6 = (FLightPrimitiveInteraction **)(*pcVar3)();
  return ppFVar6;
}

// Find @ 1454a5b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FRHIPooledRenderQuery * __thiscall
TMapBase<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>
::Find(TMapBase<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>
       *this,FProjectedShadowKey *param_1)

{
  int iVar1;
  FRHIPooledRenderQuery *pFVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = ((uint)((ulonglong)param_1->Light >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Light >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  iVar1 = TSet<TTuple<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSceneViewState::FProjectedShadowKey>
                    (&this->Pairs,
                     (param_1->PrimitiveId).PrimIDValue + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^
                     uVar4,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements;
    pFVar2 = (FRHIPooledRenderQuery *)0x0;
    if (lVar3 != 0) {
      pFVar2 = (FRHIPooledRenderQuery *)(lVar3 + 0x18);
    }
    return pFVar2;
  }
  return (FRHIPooledRenderQuery *)0x0;
}

// Find @ 1454eecd0

TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_> *)0x0;
}

// FindOrAddImpl<int_const_&> @ 145517040

TRefCountPtr<FRHIUniformBuffer> * __thiscall
TMapBase<int,TRefCountPtr<FRHIUniformBuffer>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TRefCountPtr<FRHIUniformBuffer>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>_>
           *this,uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> *pFVar4;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    pFVar4 = (ForElementType<FSetElementId> *)(this->Pairs).Hash.SecondaryData.SecondaryData.Data;
    if (pFVar4 == (ForElementType<FSetElementId> *)0x0) {
      pFVar4 = (ForElementType<FSetElementId> *)&(this->Pairs).Hash.SecondaryData;
    }
    if (pFVar4 == (ForElementType<FSetElementId> *)0x0) {
      pFVar4 = &(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)pFVar4->InlineData +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_1455170e2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_1455170e2:
  return (TRefCountPtr<FRHIUniformBuffer> *)(lVar3 + 8);
}

// FindOrAddImpl<FPrimitiveComponentId_const_&> @ 145517100

FHLODSceneNodeVisibilityState * __thiscall
TMapBase<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,0>_>
::FindOrAddImpl<FPrimitiveComponentId_const_&>
          (TMapBase<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,0>_>
           *this,uint param_1,FPrimitiveComponentId *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FPrimitiveComponentId *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_2->PrimIDValue) {
          if (puVar2 != (uint *)0x0) {
            return (FHLODSceneNodeVisibilityState *)(puVar2 + 1);
          }
          break;
        }
        uVar1 = puVar2[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FPrimitiveComponentId,FHLODSceneNodeVisibilityState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPrimitiveComponentId_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FPrimitiveComponentId_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FHLODSceneNodeVisibilityState *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x10 + 4);
}

// FindOrAddImpl<FPrimitiveComponentId_const_&> @ 1455171b0

FPrimitiveFadingState * __thiscall
TMapBase<FPrimitiveComponentId,FPrimitiveFadingState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>_>
::FindOrAddImpl<FPrimitiveComponentId_const_&>
          (TMapBase<FPrimitiveComponentId,FPrimitiveFadingState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>_>
           *this,uint param_1,FPrimitiveComponentId *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FPrimitiveComponentId *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_2->PrimIDValue) {
          if (puVar2 != (uint *)0x0) {
            return (FPrimitiveFadingState *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0xc];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPrimitiveComponentId_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FPrimitiveComponentId_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FPrimitiveFadingState *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// Find @ 145597f90

TRefCountPtr<FRHIUniformBuffer> * __thiscall
TMapBase<FGuid,TRefCountPtr<FRHIUniformBuffer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FRHIUniformBuffer>,0>_>
::Find(TMapBase<FGuid,TRefCountPtr<FRHIUniformBuffer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FRHIUniformBuffer>,0>_>
       *this,FGuid *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  TRefCountPtr<FRHIUniformBuffer> *pTVar3;
  uint *puVar4;
  ForElementType<FSetElementId> FVar5;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar5 +
                     ((ulonglong)((this->Pairs).HashSize - 1) & uVar2 & 0xffffffff) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (((param_1->D == puVar4[3] && param_1->C == puVar4[2]) && param_1->B == puVar4[1]) &&
            param_1->A == *puVar4) {
          pTVar3 = (TRefCountPtr<FRHIUniformBuffer> *)0x0;
          if (puVar4 != (uint *)0x0) {
            pTVar3 = (TRefCountPtr<FRHIUniformBuffer> *)(puVar4 + 4);
          }
          return pTVar3;
        }
        uVar1 = puVar4[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TRefCountPtr<FRHIUniformBuffer> *)0x0;
}

// FindChecked @ 145598050

TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 145632020

TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 1456320c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAttachmentGroupSceneInfo * __thiscall
TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
::FindChecked(TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
              *this,FPrimitiveComponentId *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAttachmentGroupSceneInfo *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1->PrimIDValue) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x28;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x28) == param_1->PrimIDValue) {
          if (lVar1 != 0) {
            return (FAttachmentGroupSceneInfo *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FAttachmentGroupSceneInfo *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FAttachmentGroupSceneInfo *)(*pcVar3)();
  return pFVar6;
}

// FindOrAddImpl<FViewInfo_const_*_const_&> @ 145662810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

DistanceFieldShadowViewGPUData * __thiscall
TMapBase<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,0>_>
::FindOrAddImpl<FViewInfo_const_*_const_&>
          (TMapBase<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,0>_>
           *this,uint param_1,FViewInfo **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FViewInfo **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if ((FViewInfo *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (DistanceFieldShadowViewGPUData *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData>,TDefaultMapHashableKeyFuncs<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FViewInfo_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FViewInfo_const_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (DistanceFieldShadowViewGPUData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// Emplace<unsigned_int_const_&,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem_const_&> @ 1457be720

FLargePageAreaItem * __thiscall
TMapBase<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>_>
::Emplace<unsigned_int_const_&,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem_const_&>
          (TMapBase<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>_>
           *this,uint *param_1,FLargePageAreaItem *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar5 * 0x14);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>_>
       *)0x0) {
    *(uint *)local_28.Pointer = *param_1;
    *(FLargePageAreaItem *)((longlong)local_28.Pointer + 4) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0xc) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (FLargePageAreaItem *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x14 + 4);
}

// Emplace<unsigned_int_const_&,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem> @ 1457be840

FLargePageAreaItem * __thiscall
TMapBase<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>_>
::Emplace<unsigned_int_const_&,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>
          (TMapBase<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>_>
           *this,uint *param_1,FLargePageAreaItem *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar5 * 0x14);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>_>
       *)0x0) {
    *(uint *)local_28.Pointer = *param_1;
    *(FLargePageAreaItem *)((longlong)local_28.Pointer + 4) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0xc) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem>,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualShadowMapArrayCacheManager::FLargePageAreaItem,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (FLargePageAreaItem *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x14 + 4);
}

// FindOrAddImpl<unsigned_int_const_&> @ 1457bf800

uchar * __thiscall
TMapBase<unsigned_int,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (uchar *)(puVar2 + 1);
          }
          break;
        }
        uVar1 = puVar2[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (uchar *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x10 + 4);
}

// FindChecked @ 1458700f0

FString * __thiscall
TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>::FindChecked
          (TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FString *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FString *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FString *)(*pcVar1)();
  return pFVar4;
}

// FindOrAddImpl<void_*_const_&> @ 1458c77d0

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<void_*_const_&>
          (TMapBase<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,void **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  void **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((void *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<void_*,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<void_*_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<void_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FAllocatedVTDescription_const_&> @ 1458c7880

FAllocatedVirtualTexture ** __thiscall
TMapBase<FAllocatedVTDescription,FAllocatedVirtualTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAllocatedVTDescription,FAllocatedVirtualTexture_*,0>_>
::FindOrAddImpl<FAllocatedVTDescription_const_&>
          (TMapBase<FAllocatedVTDescription,FAllocatedVirtualTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAllocatedVTDescription,FAllocatedVirtualTexture_*,0>_>
           *this,uint param_1,FAllocatedVTDescription *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FAllocatedVTDescription *local_res20;
  
  iVar1 = TSet<TTuple<FAllocatedVTDescription,FAllocatedVirtualTexture_*>,TDefaultMapHashableKeyFuncs<FAllocatedVTDescription,FAllocatedVirtualTexture_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAllocatedVTDescription>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FAllocatedVirtualTexture **)(lVar2 + 0x48);
  }
  local_res20 = param_2;
  TSet<TTuple<FAllocatedVTDescription,FAllocatedVirtualTexture_*>,TDefaultMapHashableKeyFuncs<FAllocatedVTDescription,FAllocatedVirtualTexture_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FAllocatedVTDescription_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FAllocatedVTDescription_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FAllocatedVirtualTexture **)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x58 + 0x48);
}

