// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 3

// CreateSceneComponent @ 14e712af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USceneComponent * __thiscall
UE::Interchange::Private::FComponentProcessHelper::CreateSceneComponent
          (FComponentProcessHelper *this,UClass *param_1,USceneComponent *param_2,FString *param_3)

{
  FScriptContainerElement *_Src;
  AActor *pAVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  USceneComponent *pUVar7;
  FName *pFVar8;
  UClass *pUVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  int iVar15;
  undefined1 auStackY_178 [32];
  FString local_138;
  undefined8 local_128;
  FString local_120;
  TPairInitializer<FString_const_&,unsigned___int64_&&> local_110;
  FString local_100;
  FString *local_f0;
  ulong64 **local_e8;
  FName local_e0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_138.Data.ArrayNum = (param_3->Data).ArrayNum;
  lVar12 = (longlong)local_138.Data.ArrayNum;
  lVar13 = 0;
  _Src = (param_3->Data).AllocatorInstance.Data;
  iVar15 = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_138.Data.ArrayNum == 0) {
    local_138.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_138.Data.ArrayNum,0,(ForAnyElementType *)&local_138,local_138.Data.ArrayNum
               ,&local_138.Data.ArrayMax);
    memcpy(local_138.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
  }
  pwVar11 = L"";
  iVar6 = iVar15;
  if (local_138.Data.ArrayNum != 0) {
    pwVar11 = (wchar_t *)local_138.Data.AllocatorInstance.Data;
    iVar6 = local_138.Data.ArrayNum + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar11);
  iVar6 = TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
                      *)&this->NameUniquenessTracker,uVar5,&local_138);
  if (iVar6 == -1) {
    local_f0 = &local_138;
    local_110.Value = (ulong64 *)0x0;
    local_e8 = &local_110.Value;
    TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,unsigned___int64_&&>_>
              ((TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
                *)&this->NameUniquenessTracker,&local_110,(bool *)&local_f0);
  }
  else {
    iVar6 = local_138.Data.ArrayNum + -1;
    FVar14.Data = local_138.Data.AllocatorInstance.Data;
    if (local_138.Data.ArrayNum == 0) {
      iVar6 = iVar15;
      FVar14.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar14.Data);
    iVar6 = TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
                        *)&this->NameUniquenessTracker,uVar5,&local_138);
    if (((iVar6 == -1) ||
        (lVar13 = (longlong)iVar6 * 0x20 + *(longlong *)&this->NameUniquenessTracker, lVar13 == 0))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (USceneComponent *)(*pcVar3)();
      return pUVar7;
    }
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 1;
    local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.Data.ArrayNum = 0;
    local_120.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_120,(int)*(undefined8 *)(lVar13 + 0x10));
    ::FString::ConcatCF(&local_100,L"_",&local_120);
    iVar6 = local_100.Data.ArrayNum + -1;
    if (local_100.Data.ArrayNum == 0) {
      iVar6 = iVar15;
    }
    ::FString::AppendChars(&local_138,(wchar_t *)local_100.Data.AllocatorInstance.Data,iVar6);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_138.Data.ArrayNum != 0) {
    FVar14.Data = local_138.Data.AllocatorInstance.Data;
  }
  pFVar8 = ::FName::FName(&local_e0,(wchar_t *)FVar14.Data);
  pAVar1 = this->Owner;
  FVar2 = *pFVar8;
  if (FVar2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pAVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar9 = Z_Construct_UClass_USceneComponent_NoRegister();
  CheckIsClassChildOf_Internal(pUVar9,param_1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d8,param_1);
  local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_d8._56_8_ = (UPackage *)0x0;
  local_d8._24_4_ = RF_NoFlags;
  local_d8._40_8_ = (UObject *)0x0;
  local_d8[0x20] = false;
  local_d8._8_8_ = pAVar1;
  local_d8._16_8_ = FVar2;
  pUVar7 = (USceneComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
  if (local_d8._64_8_ != 0) {
    plVar10 = (longlong *)(local_d8 + 0x50);
    if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_d8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  local_128 = 0;
  USceneComponent::SetupAttachment(pUVar7,param_2,(FName)0x0);
  UActorComponent::RegisterComponent((UActorComponent *)pUVar7);
  AActor::AddInstanceComponent(this->Owner,(UActorComponent *)pUVar7);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return pUVar7;
}

// ProcessComponents @ 14e725610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UE::Interchange::Private::FComponentProcessHelper::ProcessComponents
          (FComponentProcessHelper *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          USceneComponent *param_2,Type param_3)

{
  int iVar1;
  Type TVar2;
  bool bVar3;
  UInterchangeSceneComponentFactoryNode *this_00;
  UClass *pUVar4;
  USceneComponent *this_01;
  UInterchangeInstancedStaticMeshComponentFactoryNode *this_02;
  UInterchangeFactoryBaseNode *this_03;
  UObject *pUVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_178 [32];
  bool local_148;
  undefined1 local_147 [3];
  Type local_144;
  uint local_140;
  FComponentProcessHelper *local_138;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_130;
  TArray<FString,TSizedDefaultAllocator<32>_> local_120;
  USceneComponent *local_110;
  FString local_108;
  FSoftObjectPath local_f8;
  UInterchangeInstancedStaticMeshComponentFactoryNode *local_d8;
  FScriptContainerElement *local_d0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_c8;
  FString local_c0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar8 = (param_1->AllocatorInstance).Data;
  local_140 = param_1->ArrayNum;
  uVar6 = (ulonglong)(int)local_140;
  local_d0 = pFVar8 + uVar6 * 0x10;
  local_144 = param_3;
  local_138 = this;
  local_110 = param_2;
  local_c8 = param_1;
  do {
    while( true ) {
      pFVar9 = local_d0;
      if (local_c8->ArrayNum != (int)uVar6) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_147);
      }
      if (pFVar8 == pFVar9) {
        return;
      }
      this_00 = (UInterchangeSceneComponentFactoryNode *)
                UInterchangeBaseNodeContainer::GetNode(this->NodeContainer,(FString *)pFVar8);
      if (this_00 != (UInterchangeSceneComponentFactoryNode *)0x0) break;
LAB_14e7259fe:
      `UE::Interchange::Private::FComponentProcessHelper::ProcessComponents'::__l31::<lambda_1>::
      operator()(local_147);
LAB_14e725a08:
      pFVar8 = pFVar8 + 0x10;
      uVar6 = (ulonglong)local_140;
    }
    pUVar4 = Z_Construct_UClass_UInterchangeSceneComponentFactoryNode_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_14e7259fe;
    pUVar4 = (UClass *)(**(code **)(this_00->_padding_ + 0x2f8))(this_00);
    UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)this_00,&local_c0);
    this_01 = CreateSceneComponent(this,pUVar4,param_2,&local_c0);
    this_02 = (UInterchangeInstancedStaticMeshComponentFactoryNode *)
              UInterchangeBaseNodeContainer::GetNode(this->NodeContainer,(FString *)pFVar8);
    local_d8 = this_02;
    if (this_02 != (UInterchangeInstancedStaticMeshComponentFactoryNode *)0x0) {
      pUVar4 = Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if (((iVar1 <= *(int *)(this_02->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_)) && (this_01 != (USceneComponent *)0x0)) {
        pUVar4 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_130.ArrayNum = 0;
          local_130.ArrayMax = 0;
          UInterchangeInstancedStaticMeshComponentFactoryNode::GetInstanceTransforms
                    (this_02,&local_130);
          iVar1 = local_130.ArrayNum;
          uVar6 = (ulonglong)local_130.ArrayNum;
          pFVar9 = local_130.AllocatorInstance.Data + uVar6 * 0x60;
          FVar7.Data = local_130.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar6 != iVar1) {
              `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_147);
            }
            if (FVar7.Data == pFVar9) break;
            (**(code **)(this_01->_padding_ + 0xbb0))(this_01,FVar7.Data);
            uVar6 = local_130._8_8_ & 0xffffffff;
            FVar7.Data = FVar7.Data + 0x60;
          }
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
          UInterchangeInstancedStaticMeshComponentFactoryNode::GetCustomInstancedAssetUid
                    (local_d8,&local_108);
          this_03 = (UInterchangeFactoryBaseNode *)
                    UInterchangeBaseNodeContainer::GetNode(local_138->NodeContainer,&local_108);
          if (this_03 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e72583a:
            this_03 = (UInterchangeFactoryBaseNode *)0x0;
          }
          else {
            pUVar4 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
            iVar1 = (int)pUVar4->_padding_;
            if ((*(int *)(this_03->_padding_ + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar4->_padding_)) goto LAB_14e72583a;
          }
          if (this_03 != (UInterchangeFactoryBaseNode *)0x0) {
            local_f8.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_f8.AssetPath.PackageName.Number = 0;
            local_f8.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_f8.AssetPath.AssetName.Number = 0;
            local_f8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_f8.SubPathString.Data.ArrayNum = 0;
            local_f8.SubPathString.Data.ArrayMax = 0;
            UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_03,&local_f8);
            pUVar5 = FSoftObjectPath::TryLoad(&local_f8,(FUObjectSerializeContext *)0x0);
            if (pUVar5 != (UObject *)0x0) {
              pUVar4 = Z_Construct_UClass_UStaticMesh_NoRegister();
              iVar1 = (int)pUVar4->_padding_;
              if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                  &pUVar4->_padding_)) {
                (**(code **)(this_01->_padding_ + 0xb28))(this_01,pUVar5);
              }
            }
            if (local_f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_f8.SubPathString.Data.AllocatorInstance.Data);
            }
          }
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          this = local_138;
          param_2 = local_110;
          if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.AllocatorInstance.Data);
            this = local_138;
            param_2 = local_110;
          }
        }
      }
    }
    local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_a8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_a8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UInterchangeSceneComponentFactoryNode::GetCustomLocalTransform(this_00,&local_a8);
    (**(code **)(this_01->_padding_ + 0x5f8))(this_01,2);
    USceneComponent::SetRelativeTransform(this_01,&local_a8,false,(FHitResult *)0x0,None);
    TVar2 = local_144;
    (**(code **)(this_01->_padding_ + 0x5f8))(this_01,local_144);
    local_148 = true;
    bVar3 = UInterchangeSceneComponentFactoryNode::GetCustomComponentVisibility(this_00,&local_148);
    if (bVar3) {
      USceneComponent::SetVisibility(this_01,local_148,DirtyOnly);
    }
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.ArrayNum = 0;
    local_120.ArrayMax = 0;
    UInterchangeSceneComponentFactoryNode::GetComponentUids(this_00,&local_120);
    ProcessComponents(this,&local_120,this_01,TVar2);
    DestructItems<FString,int>((FString *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14e725a08;
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    pFVar8 = pFVar8 + 0x10;
    uVar6 = (ulonglong)local_140;
  } while( true );
}

// operator() @ 150598e50

bool __thiscall
`UE::Interchange::Private::FComponentProcessHelper::ProcessComponents'::__l31::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8603616661292974265>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8603616661292974265>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Interchange::Private::FComponentProcessHelper::ProcessComponents(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,USceneComponent*___ptr64,EComponentMobility::Type)___ptr64'::`31'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

