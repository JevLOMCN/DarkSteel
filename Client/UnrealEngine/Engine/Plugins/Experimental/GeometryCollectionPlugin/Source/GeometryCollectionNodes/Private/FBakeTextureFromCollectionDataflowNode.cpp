// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e834060

UScriptStruct * __cdecl FBakeTextureFromCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBakeTextureFromCollectionDataflowNode,
                         (UObject *)pUVar1,L"BakeTextureFromCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e834690

FName __thiscall
FBakeTextureFromCollectionDataflowNode::GetType(FBakeTextureFromCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBakeTextureFromCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e8348c0

bool __thiscall
FBakeTextureFromCollectionDataflowNode::IsA
          (FBakeTextureFromCollectionDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FBakeTextureFromCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e834928;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e834928:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e834946;
      }
    }
  }
  bVar5 = true;
LAB_14e834946:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8349c0

FStructOnScope * __thiscall
FBakeTextureFromCollectionDataflowNode::NewStructOnScope
          (FBakeTextureFromCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBakeTextureFromCollectionDataflowNode,
                           (UObject *)pUVar2,L"BakeTextureFromCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e834b70

void __thiscall
FBakeTextureFromCollectionDataflowNode::SerializeInternal
          (FBakeTextureFromCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBakeTextureFromCollectionDataflowNode,
                         (UObject *)pUVar1,L"BakeTextureFromCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e834bed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e834c70

FName __thiscall
FBakeTextureFromCollectionDataflowNode::GetDisplayName(FBakeTextureFromCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BakeTextureFromCollection");
  return in_RDX;
}

// GetCategory @ 14e834cd0

FName __thiscall
FBakeTextureFromCollectionDataflowNode::GetCategory(FBakeTextureFromCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Texture");
  return in_RDX;
}

// GetTags @ 14e834d40

FString * __thiscall
FBakeTextureFromCollectionDataflowNode::GetTags
          (FBakeTextureFromCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e834dc0

UScriptStruct * __thiscall
FBakeTextureFromCollectionDataflowNode::TypedScriptStruct
          (FBakeTextureFromCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBakeTextureFromCollectionDataflowNode,
                         (UObject *)pUVar1,L"BakeTextureFromCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e834e50

/* WARNING: Removing unreachable block (ram,0x00014e835088) */
/* WARNING: Removing unreachable block (ram,0x00014e835096) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FBakeTextureFromCollectionDataflowNode::GetRenderParametersImpl
          (FBakeTextureFromCollectionDataflowNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FString *pFVar5;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FName local_88;
  FName FStack_80;
  FString local_78;
  FString local_68;
  FName local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FName local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar4 = ::FName::FName(local_res18,"3DView");
  ::FName::FName(&local_88,"Collection");
  ::FName::FName(&FStack_80,"UVChannel");
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&local_98,2,&local_8c);
  *(FName *)local_98.Data = local_88;
  *(FName *)(local_98.Data + 8) = FStack_80;
  ::FName::FName(&local_res10,"FGeometryCollection");
  pFVar5 = ::FString::FString(&local_78,"SurfaceRender");
  ::FString::FString(&local_68,pFVar5);
  _Src.Data = local_98.Data;
  local_58 = local_res10;
  lVar8 = (longlong)local_90;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = CONCAT44(local_48._4_4_,local_90);
  if (local_90 == 0) {
    local_48 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_90,0,&local_50,local_90,(int *)((longlong)&local_48 + 4));
    memcpy(local_50.Data,_Src.Data,lVar8 << 3);
  }
  local_40 = *pFVar4;
  pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar6;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x30;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_68.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_68.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_68.Data.ArrayMax;
  *(FName *)(pFVar7 + 0x10) = local_58;
  *(undefined8 *)(pFVar7 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar7 + 0x18) = local_50.Data;
  *(undefined4 *)(pFVar7 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar7 + 0x24) = local_48._4_4_;
  *(FName *)(pFVar7 + 0x28) = local_40;
  local_48 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((FName *)local_98.Data != (FName *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 14e835760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBakeTextureFromCollectionDataflowNode::Evaluate
          (FBakeTextureFromCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  int iVar1;
  EDataflowImageResolution EVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  FScriptContainerElement FVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  FDataflowInput *pFVar12;
  FManagedArrayCollection *pFVar13;
  int *piVar14;
  EDataflowImageResolution *pEVar15;
  FGeometryCollection *this_00;
  float *pfVar16;
  FImageDimensions *pFVar17;
  FDataflowSelection *this_01;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulong64 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auStackY_408 [32];
  TArray<bool,TSizedDefaultAllocator<32>_> local_3a8;
  TImageBuilder<UE::Math::TVector4<float>_> local_398;
  ECollectionBakeTextureAttribute local_368;
  ECollectionBakeTextureAttribute EStack_364;
  ECollectionBakeTextureAttribute EStack_360;
  ECollectionBakeTextureAttribute EStack_35c;
  FDataflowImage local_358;
  FDataflowOutput *local_330;
  FName local_328;
  FConnectionReference local_320;
  FConnectionReference local_308;
  FDataflowImage local_2f0;
  FConnectionReference local_2c8;
  FConnectionReference local_2b0;
  FConnectionReference local_298;
  FScriptContainerElement *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  FString local_268;
  undefined8 local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  TArrayView<UE::Math::TVector4<float>,__int64> local_248;
  FString local_238;
  FConnectionReference local_228;
  FConnectionReference local_210;
  FTextureAttributeSettings local_1f8;
  FImageDimensions local_178 [2];
  TArrayView<bool,int> local_168;
  FIndex4i_u_0 local_158;
  TArrayView<int,int> local_148;
  FIndex4i_u_0 local_138;
  FString local_128;
  FLinearColor_u_0 local_118;
  FManagedArrayCollection local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_408;
  pFVar13 = &this->Collection;
  local_330 = param_2;
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar11 == pFVar13) {
    local_320.ContainerReference = (void *)0x0;
    local_320.Index = -1;
    local_320.Reference = pFVar13;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_320);
    if (pFVar12->Connection == (FDataflowOutput *)0x0) {
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,local_320.Reference,pFVar13);
    }
    else {
      local_228.Index = -1;
      local_228.ContainerReference = (void *)0x0;
      local_228.Reference = pFVar13;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_320,&local_228);
    }
  }
  else {
    piVar14 = &this->UVChannel;
    puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((int *)puVar11 == piVar14) {
      local_308.ContainerReference = (void *)0x0;
      local_308.Index = -1;
      local_308.Reference = piVar14;
      pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_308);
      if (pFVar12->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<int_const_&,int>
                  ((FDataflowNode *)this,param_1,local_308.Reference,piVar14);
      }
      else {
        local_210.Index = -1;
        local_210.ContainerReference = (void *)0x0;
        local_210.Reference = piVar14;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_308,&local_210);
      }
    }
    else {
      puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
      if ((FDataflowImage *)puVar11 == &this->Image) {
        pFVar13 = FDataflowNode::GetValue<FManagedArrayCollection>
                            ((FDataflowNode *)this,param_1,pFVar13);
        FManagedArrayCollection::FManagedArrayCollection(&local_108,pFVar13);
        uVar19 = 0;
        local_2c8.ContainerReference = (void *)0x0;
        local_2c8.Index = -1;
        local_2c8.Reference = piVar14;
        pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2c8);
        piVar14 = FDataflowInput::GetValue<int>(pFVar12,param_1,local_2c8.Reference);
        local_2b0.Index = -1;
        local_2b0.ContainerReference = (void *)0x0;
        iVar1 = *piVar14;
        local_2b0.Reference = &this->Resolution;
        pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2b0);
        pEVar15 = FDataflowInput::GetValue<enum_EDataflowImageResolution>
                            (pFVar12,param_1,local_2b0.Reference);
        local_298.Index = -1;
        local_298.ContainerReference = (void *)0x0;
        EVar2 = *pEVar15;
        local_298.Reference = &this->GutterSize;
        pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_298);
        piVar14 = FDataflowInput::GetValue<int>(pFVar12,param_1,local_298.Reference);
        iVar3 = *piVar14;
        this_00 = FManagedArrayCollection::NewCopy<FGeometryCollection>(&local_108);
        if ((this_00 == (FGeometryCollection *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GeomCollection.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionTextureNodes.cpp"
                               ,0x3d,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((iVar1 < 0) || (iVar9 = FGeometryCollection::NumUVLayers(this_00), iVar9 <= iVar1)) {
          if (1 < (byte)LogChaosDataflow._0_1_) {
            FGeometryCollection::NumUVLayers(this_00);
            local_328 = *(FName *)((longlong)&this->_padding_ + 4);
            ::FName::ToString(&local_328,&local_128);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
          }
          FGeometryCollection::NumUVLayers(this_00);
          ::FString::PrintfImpl
                    (&local_238,L"Invalid UV channel [%d] - The collection has %d UV channels");
          UE::Dataflow::FContext::Warning(param_1,&local_238,(FDataflowNode *)this,param_2);
          local_2f0.Image._padding_ = 0;
          local_2f0.Image._padding_._0_4_ = 0;
          local_118 = FLinearColor::Red.field0_0x0;
          local_2f0.Image._padding_._4_2_ = 0x201;
          local_2f0.Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f0.Image.RawData.ArrayNum = 0;
          local_2f0.Image.RawData.ArrayMax = 0;
          FDataflowImage::CreateFromColor(&local_2f0,Resolution16,(FLinearColor *)&local_118._s_0);
          FDataflowNode::SetValue<FDataflowImage,FDataflowImage>
                    ((FDataflowNode *)this,param_1,&local_2f0,&this->Image);
          if (local_2f0.Image.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.Image.RawData.AllocatorInstance.Data);
          }
        }
        else {
          local_368 = this->RedChannel;
          EStack_364 = this->GreenChannel;
          EStack_360 = this->BlueChannel;
          local_1f8.AO_BiasAngleDeg = __real_402e000000000000;
          local_1f8.AO_MaxDistance = 0.0;
          EStack_35c = this->AlphaChannel;
          local_1f8.Curvature_Winding = __real_3fe0000000000000;
          local_1f8.Curvature_SmoothingPerStep = __real_3fe999999999999a;
          local_1f8.bAO_Blur = true;
          local_1f8.bCurvature_Blur = true;
          pfVar16 = FDataflowNode::GetValue<float>((FDataflowNode *)this,param_1,&this->MaxDistance)
          ;
          local_1f8.ToExternal_MaxDistance = (double)*pfVar16;
          piVar14 = FDataflowNode::GetValue<int>((FDataflowNode *)this,param_1,&this->OcclusionRays)
          ;
          local_1f8.AO_Rays = *piVar14;
          pfVar16 = FDataflowNode::GetValue<float>
                              ((FDataflowNode *)this,param_1,&this->OcclusionBlurRadius);
          local_1f8.AO_BlurRadius = (double)*pfVar16;
          pfVar16 = FDataflowNode::GetValue<float>
                              ((FDataflowNode *)this,param_1,&this->CurvatureBlurRadius);
          local_1f8.Curvature_BlurRadius = (double)*pfVar16;
          piVar14 = FDataflowNode::GetValue<int>
                              ((FDataflowNode *)this,param_1,&this->SmoothingIterations);
          local_1f8.Curvature_SmoothingSteps = *piVar14;
          piVar14 = FDataflowNode::GetValue<int>
                              ((FDataflowNode *)this,param_1,&this->VoxelResolution);
          local_1f8.Curvature_VoxelRes = *piVar14;
          pfVar16 = FDataflowNode::GetValue<float>
                              ((FDataflowNode *)this,param_1,&this->ThicknessFactor);
          local_1f8.Curvature_ThicknessFactor = (double)*pfVar16;
          pfVar16 = FDataflowNode::GetValue<float>
                              ((FDataflowNode *)this,param_1,&this->MaxCurvature);
          local_1f8.Curvature_MaxValue = (double)*pfVar16;
          local_1f8.ClearGutterChannel = 3;
          local_398.Image.Buffer.ArrayMax = 0;
          local_398.Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_398.Image.Buffer.ArrayNum = 0;
          pFVar17 = UE::Geometry::FImageDimensions::FImageDimensions(local_178,EVar2,EVar2);
          local_398.Dimensions = *pFVar17;
          local_398.Image.DimensionX = (long64)local_398.Dimensions.Width;
          local_398.Image.DimensionY = (long64)local_398.Dimensions.Height;
          uVar21 = local_398.Image.DimensionY * local_398.Image.DimensionX;
          if (uVar21 - local_398.Image.Buffer.ArrayNum == 0 ||
              (longlong)uVar21 < local_398.Image.Buffer.ArrayNum) {
            if ((longlong)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum(uVar21);
            }
            if ((longlong)uVar21 < local_398.Image.Buffer.ArrayNum) {
              lVar24 = local_398.Image.Buffer.ArrayNum - uVar21;
              if (((((uint)(uVar21 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar24 >> 0x3f) ^ 1)) == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (lVar24 != 0) {
                lVar23 = (local_398.Image.Buffer.ArrayNum - lVar24) - uVar21;
                if (lVar23 != 0) {
                  memmove(local_398.Image.Buffer.AllocatorInstance.Data + uVar21 * 0x10,
                          local_398.Image.Buffer.AllocatorInstance.Data + uVar21 * 0x10 +
                          lVar24 * 0x10,lVar23 * 0x10);
                }
                local_398.Image.Buffer.ArrayNum = local_398.Image.Buffer.ArrayNum - lVar24;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                          (0x10,0x10,(ForAnyElementType *)&local_398.Image,
                           local_398.Image.Buffer.ArrayNum,&local_398.Image.Buffer.ArrayMax);
              }
            }
          }
          else {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (0x10,0x10,uVar21 - local_398.Image.Buffer.ArrayNum,
                       (ForAnyElementType *)&local_398.Image,&local_398.Image.Buffer.ArrayNum,
                       &local_398.Image.Buffer.ArrayMax);
          }
          uVar6 = _UNK_1506894f8;
          uVar5 = ___xmm_0000000000000000000000003f800000;
          lVar24 = local_398.Image.DimensionY * local_398.Image.DimensionX;
          uVar22 = uVar19;
          uVar25 = uVar19;
          if (0 < lVar24) {
            do {
              if ((local_398.Image.Buffer.ArrayNum <= (longlong)uVar22) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar22 = uVar22 + 1;
              *(undefined8 *)(local_398.Image.Buffer.AllocatorInstance.Data + uVar25) = uVar5;
              *(undefined8 *)(local_398.Image.Buffer.AllocatorInstance.Data + uVar25 + 8) = uVar6;
              uVar25 = uVar25 + 0x10;
            } while ((longlong)uVar22 < lVar24);
          }
          bVar7 = FDataflowNode::IsConnected<FDataflowFaceSelection>
                            ((FDataflowNode *)this,&this->FaceSelection);
          if (bVar7) {
            this_01 = (FDataflowSelection *)
                      FDataflowNode::GetValue<FDataflowFaceSelection>
                                ((FDataflowNode *)this,param_1,&this->FaceSelection);
            iVar9 = (this_01->SelectionArray).NumBits;
            iVar10 = FManagedArrayCollection::NumElements
                               ((FManagedArrayCollection *)this_00,FGeometryCollection::FacesGroup);
            if (iVar9 == iVar10) {
              local_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_3a8.ArrayNum = 0;
              local_3a8.ArrayMax = 0;
              TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                        (&local_3a8,(this_01->SelectionArray).NumBits,Default);
              uVar22 = uVar19;
              if (0 < (this_01->SelectionArray).NumBits) {
                do {
                  uVar20 = (uint)uVar19;
                  FVar8 = (FScriptContainerElement)FDataflowSelection::IsSelected(this_01,uVar20);
                  uVar18 = 0;
                  if ((int)uVar20 < local_3a8.ArrayNum) {
                    uVar18 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uVar19 = (ulonglong)(uVar20 + 1);
                  local_3a8.AllocatorInstance.Data[uVar22] = FVar8;
                  uVar22 = uVar22 + 1;
                } while ((int)(uVar20 + 1) < (this_01->SelectionArray).NumBits);
              }
              iVar9 = local_3a8.ArrayNum;
              local_278 = local_3a8.AllocatorInstance.Data;
              if ((local_3a8.ArrayNum < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_158._0_8_ = CONCAT44(EStack_364,local_368);
              local_158._8_8_ = CONCAT44(EStack_35c,EStack_360);
              iStack_270 = iVar9;
              local_168._12_4_ = uStack_26c;
              local_168.ArrayNum = iVar9;
              local_168.DataPtr = (bool *)local_278;
              UE::PlanarCut::TextureSpecifiedFaces
                        (iVar1,this_00,iVar3,(FIndex4i *)&local_158._s_0,&local_1f8,&local_398,
                         &local_168,(FProgressCancel *)0x0);
              if (local_3a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3a8.AllocatorInstance.Data);
              }
            }
            else {
              ::FString::FString(&local_268,
                                 L"Selection does not match the collection, the collection may have changed since the selection was generated from it"
                                );
              UE::Dataflow::FContext::Warning(param_1,&local_268,(FDataflowNode *)this,local_330);
              if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_268.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            local_138._0_8_ = CONCAT44(EStack_364,local_368);
            local_138._8_8_ = CONCAT44(EStack_35c,EStack_360);
            local_258 = 0;
            uStack_250 = 0;
            local_148._8_8_ = (ulonglong)uStack_24c << 0x20;
            local_148.DataPtr = (int *)0x0;
            UE::PlanarCut::TextureSpecifiedFaces
                      (iVar1,this_00,iVar3,(FIndex4i *)&local_138._s_0,&local_1f8,&local_398,
                       AllFaces,&local_148,(FProgressCancel *)0x0);
          }
          local_358.Image._padding_ = 0;
          local_358.Image._padding_._0_4_ = 0;
          local_358.Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_358.Image.RawData.ArrayNum = 0;
          local_358.Image._padding_._4_2_ = 0x201;
          local_358.Image.RawData.ArrayMax = 0;
          FDataflowImage::CreateRGBA32F(&local_358,EVar2,EVar2);
          local_248.ArrayNum = local_398.Image.Buffer.ArrayNum;
          local_248.DataPtr = (TVector4<float> *)local_398.Image.Buffer.AllocatorInstance.Data;
          if ((local_398.Image.Buffer.ArrayNum < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FDataflowImage::CopyRGBAPixels(&local_358,&local_248);
          FDataflowNode::SetValue<FDataflowImage,FDataflowImage>
                    ((FDataflowNode *)this,param_1,&local_358,&this->Image);
          local_238.Data.AllocatorInstance.Data = local_398.Image.Buffer.AllocatorInstance.Data;
          if (local_358.Image.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Image.RawData.AllocatorInstance.Data);
            local_238.Data.AllocatorInstance.Data = local_398.Image.Buffer.AllocatorInstance.Data;
          }
        }
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
        if (this_00 != (FGeometryCollection *)0x0) {
          (**(code **)this_00->_padding_)(this_00,1);
        }
        FManagedArrayCollection::~FManagedArrayCollection(&local_108);
      }
    }
  }
  return;
}

// FBakeTextureFromCollectionDataflowNode @ 14e9116b0

FBakeTextureFromCollectionDataflowNode * __thiscall
FBakeTextureFromCollectionDataflowNode::FBakeTextureFromCollectionDataflowNode
          (FBakeTextureFromCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FName *pFVar2;
  EDataflowImageResolution *pEVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  FName this_00;
  FDataflowInput *pFVar9;
  FDataflowOutput *pFVar10;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  this->_padding_ = (longlong)&___7FBakeTextureFromCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_78.Index = -1;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  (((FDataflowImage *)((longlong)local_res8 + 0x2f8))->Image)._padding_ = 0;
  pFVar2 = (FName *)((longlong)local_res8 + 800);
  *(undefined4 *)((longlong)local_res8 + 0x300) = 0;
  pEVar3 = (EDataflowImageResolution *)((longlong)local_res8 + 0x348);
  (((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)((longlong)local_res8 + 0x308))->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar4 = (int *)((longlong)local_res8 + 0x34c);
  *(long64 *)((longlong)local_res8 + 0x310) = 0;
  pfVar5 = (float *)((longlong)local_res8 + 0x364);
  *(long64 *)((longlong)local_res8 + 0x318) = 0;
  piVar6 = (int *)((longlong)local_res8 + 0x368);
  *(undefined2 *)((longlong)local_res8 + 0x304) = 0x201;
  pfVar7 = (float *)((longlong)local_res8 + 0x36c);
  pfVar8 = (float *)((longlong)local_res8 + 0x370);
  *pFVar2 = FDataflowFaceSelection::FacesGroupName;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(undefined8 *)((longlong)local_res8 + 0x338) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x340) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x344) = 0x80;
  *(int *)((longlong)local_res8 + 0x350) = 0;
  *pEVar3 = Resolution512;
  *piVar4 = 1;
  *(ECollectionBakeTextureAttribute *)((longlong)local_res8 + 0x354) = DistanceToExternal;
  *(ECollectionBakeTextureAttribute *)((longlong)local_res8 + 0x358) = AmbientOcclusion;
  *(undefined8 *)((longlong)local_res8 + 0x35c) = 3;
  *pfVar5 = 100.0;
  *piVar6 = 0x10;
  *pfVar7 = 2.25;
  *pfVar8 = 2.25;
  *(int *)((longlong)local_res8 + 0x374) = 0x80;
  *(int *)((longlong)local_res8 + 0x378) = 10;
  *(float *)((longlong)local_res8 + 0x37c) = 4.0;
  *(float *)((longlong)local_res8 + 0x380) = 0.1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pFVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)((longlong)this_00 + 0x350);
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Index = -1;
  local_78.Reference = piVar4;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pEVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar5;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar6;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar7;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar8;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x374);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x378);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x37c);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x380);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x248);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  pFVar10 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar10,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x2f8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar10,&local_78);
  }
  local_78.Reference = (void *)((longlong)this_00 + 0x350);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  pFVar10 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (int *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar10,&local_78);
  }
  return (FBakeTextureFromCollectionDataflowNode *)this_00;
}

// FBakeTextureFromCollectionDataflowNode @ 14e911b00

FBakeTextureFromCollectionDataflowNode * __thiscall
FBakeTextureFromCollectionDataflowNode::FBakeTextureFromCollectionDataflowNode
          (FBakeTextureFromCollectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FBakeTextureFromCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  *(undefined2 *)((longlong)&(this->Image).Image._padding_ + 4) = 0x201;
  (this->Image).Image._padding_ = 0;
  *(undefined4 *)&(this->Image).Image._padding_ = 0;
  (this->Image).Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Image).Image.RawData.ArrayNum = 0;
  (this->Image).Image.RawData.ArrayMax = 0;
  uVar1 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&(this->FaceSelection).field_0x0 =
       FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->FaceSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  this->Resolution = Resolution512;
  this->GutterSize = 1;
  this->UVChannel = 0;
  this->RedChannel = DistanceToExternal;
  this->GreenChannel = AmbientOcclusion;
  this->BlueChannel = Curvature;
  this->AlphaChannel = None;
  this->MaxDistance = 100.0;
  this->OcclusionRays = 0x10;
  this->OcclusionBlurRadius = 2.25;
  this->CurvatureBlurRadius = 2.25;
  this->VoxelResolution = 0x80;
  this->SmoothingIterations = 10;
  this->ThicknessFactor = 4.0;
  this->MaxCurvature = 0.1;
  return this;
}

