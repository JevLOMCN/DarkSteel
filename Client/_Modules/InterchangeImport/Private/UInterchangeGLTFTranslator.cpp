// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 32

// StaticClass @ 14e6abfc0

UClass * __cdecl UInterchangeGLTFTranslator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGLTFTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeGLTFTranslator",
               &Z_Registration_Info_UClass_UInterchangeGLTFTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeGLTFTranslator,0x2b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGLTFTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeGLTFTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGLTFTranslator.InnerSingleton;
}

// UInterchangeGLTFTranslator @ 14e6b56e0

UInterchangeGLTFTranslator * __thiscall
UInterchangeGLTFTranslator::UInterchangeGLTFTranslator
          (UInterchangeGLTFTranslator *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  this->_padding_ = (longlong)&_vftable__for__UInterchangeTranslatorBase__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeMeshPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTexturePayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeAnimationPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeVariantSetPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTextureLightProfilePayloadInterface__;
  GLTF::FAsset::FAsset(&this->GltfAsset);
  *(undefined8 *)&this->NodeUidMap = 0;
  *(undefined8 *)&(this->NodeUidMap).field_0x8 = 0;
  *(undefined8 *)&(this->NodeUidMap).field_0x20 = 0;
  *(undefined4 *)&(this->NodeUidMap).field_0x28 = 0;
  *(undefined4 *)&(this->NodeUidMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeUidMap).field_0x34 = 0;
  *(undefined4 *)&(this->NodeUidMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NodeUidMap).field_0x40 = 0;
  *(undefined4 *)&(this->NodeUidMap).field_0x48 = 0;
  this->bRenderSettingsClearCoatEnableSecondNormal = false;
  return this;
}

// UInterchangeGLTFTranslator @ 14e6b57a0

UInterchangeGLTFTranslator * __thiscall
UInterchangeGLTFTranslator::UInterchangeGLTFTranslator(UInterchangeGLTFTranslator *this)

{
  FObjectInitializer *pFVar1;
  UClass *this_00;
  
  pFVar1 = FObjectInitializer::Get();
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UInterchangeTranslatorBase__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeMeshPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTexturePayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeAnimationPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeVariantSetPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTextureLightProfilePayloadInterface__;
  GLTF::FAsset::FAsset(&this->GltfAsset);
  *(undefined8 *)&this->NodeUidMap = 0;
  *(undefined8 *)&(this->NodeUidMap).field_0x8 = 0;
  *(undefined8 *)&(this->NodeUidMap).field_0x20 = 0;
  *(undefined4 *)&(this->NodeUidMap).field_0x28 = 0;
  *(undefined4 *)&(this->NodeUidMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeUidMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeUidMap).field_0x34 = 0;
  *(undefined8 *)&(this->NodeUidMap).field_0x40 = 0;
  *(undefined4 *)&(this->NodeUidMap).field_0x48 = 0;
  this->bRenderSettingsClearCoatEnableSecondNormal = false;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = Z_Construct_UClass_URendererSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    this->bRenderSettingsClearCoatEnableSecondNormal =
         (bool)((byte)(*(uint *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x20 >>
                      1) & 1);
  }
  return this;
}

// ~UInterchangeGLTFTranslator @ 14e6b9aa0

void __thiscall
UInterchangeGLTFTranslator::~UInterchangeGLTFTranslator(UInterchangeGLTFTranslator *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UInterchangeTranslatorBase__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeMeshPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTexturePayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeAnimationPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeVariantSetPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTextureLightProfilePayloadInterface__;
  *(undefined4 *)&(this->NodeUidMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NodeUidMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<GLTF::FNode_const_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<GLTF::FNode_const_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<GLTF::FNode_const_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeUidMap);
  GLTF::FAsset::~FAsset(&this->GltfAsset);
  this->_padding_ = (longlong)&___7IInterchangeTextureLightProfilePayloadInterface__6B_;
  this->_padding_ = (longlong)&___7IInterchangeVariantSetPayloadInterface__6B_;
  this->_padding_ = (longlong)&___7IInterchangeAnimationPayloadInterface__6B_;
  this->_padding_ = (longlong)&___7IInterchangeTexturePayloadInterface__6B_;
  this->_padding_ = (longlong)&___7IInterchangeMeshPayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// operator() @ 14e6ba3e0

void __thiscall
`UInterchangeGLTFTranslator::GetVariantSetPayloadData'::__l2::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint *puVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType _Src;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TTuple<wchar_t_const_*,UE::Interchange::FVariant_*> *pTVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  atomic<unsigned_char> *paVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  uint *puVar19;
  FString *pFVar20;
  FScriptContainerElement *pFVar21;
  FNode *pFVar22;
  uint *puVar23;
  int *piVar24;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  char *pcVar25;
  undefined1 local_138;
  undefined1 local_137 [7];
  longlong local_130;
  uint *local_128;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  int *local_110;
  FString local_108;
  undefined2 local_f8;
  TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_u_0 local_f0;
  FString local_e0;
  uint *local_d0;
  uint *local_c8;
  longlong local_c0;
  FScriptContainerElement *local_b8;
  FString *local_b0;
  uint *local_a8;
  int *local_a0;
  longlong local_98;
  longlong local_90;
  FNode *local_88;
  FScriptContainerElement *local_80;
  FString local_78;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  
  local_130 = *(longlong *)this;
  pFVar21 = (param_1->AllocatorInstance).Data;
  local_114 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)local_114;
  local_80 = pFVar21 + uVar12 * 4;
  do {
    pFVar6 = local_80;
    local_b8 = pFVar21;
    if (param_1->ArrayNum != (int)uVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar21 == pFVar6) {
      return;
    }
    uVar1 = *(uint *)pFVar21;
    if (((int)uVar1 < 0) || (lVar18 = *(longlong *)this, *(int *)(lVar18 + 0xd8) <= (int)uVar1)) {
      pcVar25 = "this->GltfAsset.Nodes.IsValidIndex(NodeIndex)";
      paVar13 = &bGEnsureHasExecuted<5163310495276467453>;
      iVar9 = 0x4fd;
LAB_14e6bac1f:
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (paVar13,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfTranslator.cpp"
                         ,iVar9,pcVar25);
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      uVar8 = 0;
      if ((int)uVar1 < *(int *)(lVar18 + 0xd8)) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar22 = (FNode *)((longlong)(int)uVar1 * 0x260 + *(longlong *)(lVar18 + 0xd0));
      local_88 = pFVar22;
      if (pFVar22->Type == Mesh) {
        uVar1 = pFVar22->MeshIndex;
        if ((-1 < (int)uVar1) && (lVar18 = *(longlong *)this, (int)uVar1 < *(int *)(lVar18 + 0xb8)))
        {
          uVar8 = 0;
          if ((int)uVar1 < *(int *)(lVar18 + 0xb8)) {
            uVar8 = ~uVar1 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar18 = (longlong)(int)uVar1 * 0xa8 + *(longlong *)(lVar18 + 0xb0);
          local_98 = lVar18;
          local_b0 = TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                     ::Find((TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                             *)(*(longlong *)this + 0x260),pFVar22);
          if (local_b0 == (FString *)0x0) {
            pcVar25 = "NodeUidPtr";
            paVar13 = &bGEnsureHasExecuted<5163310495276467464>;
            iVar9 = 0x508;
            goto LAB_14e6bac1f;
          }
          local_118 = *(uint *)(lVar18 + 0x18);
          uVar12 = (ulonglong)(int)local_118;
          lVar15 = *(longlong *)(lVar18 + 0x10);
          local_128 = (uint *)(lVar15 + 0x28);
          local_90 = uVar12 * 0xa0 + lVar15;
          while( true ) {
            lVar16 = local_90;
            local_c0 = lVar15;
            if (*(int *)(lVar18 + 0x18) != (int)uVar12) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<GLTF::FPrimitive_const_,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_res20);
            }
            pFVar21 = local_b8;
            if (lVar15 == lVar16) break;
            local_11c = *local_128;
            uVar12 = (ulonglong)(int)local_11c;
            piVar24 = *(int **)(local_128 + -2);
            local_a0 = piVar24 + uVar12 * 6;
            puVar23 = (uint *)(piVar24 + 4);
            while( true ) {
              piVar5 = local_a0;
              local_110 = piVar24;
              local_c8 = puVar23;
              if (*local_128 != (uint)uVar12) {
                local_138 = 0;
                `TCheckedPointerIterator<GLTF::FVariantMapping_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_138);
              }
              lVar18 = local_130;
              if (piVar24 == piVar5) break;
              iVar9 = *piVar24;
              if ((iVar9 < 0) || (*(int *)(local_130 + 0x168) <= iVar9)) {
                bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<5163310495276467473>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfTranslator.cpp"
                                   ,0x511,"Materials.IsValidIndex(VariantMapping.MaterialIndex)");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              else {
                if ((iVar9 < 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                lVar15 = (longlong)iVar9 * 0x370 + *(longlong *)(lVar18 + 0x160);
                local_68 = *(wchar_t **)(lVar15 + 0x360);
                iVar9 = *(int *)(lVar15 + 0x368);
                iStack_60 = iVar9 + -1;
                if (iVar9 == 0) {
                  iStack_60 = 0;
                }
                local_58._12_4_ = uStack_5c;
                local_58.Size = iStack_60;
                local_58.DataPtr = local_68;
                UInterchangeShaderGraphNode::MakeNodeUid(&local_78,&local_58);
                local_120 = *puVar23;
                uVar12 = (ulonglong)(int)local_120;
                puVar19 = *(uint **)(puVar23 + -2);
                local_a8 = puVar19 + uVar12;
                while( true ) {
                  puVar4 = local_a8;
                  local_d0 = puVar19;
                  if (*puVar23 != (uint)uVar12) {
                    local_137[0] = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_137);
                  }
                  if (puVar19 == puVar4) break;
                  uVar1 = *puVar19;
                  lVar15 = (longlong)(int)uVar1;
                  uVar8 = 0;
                  if ((int)uVar1 < *(int *)(lVar18 + 0x178)) {
                    uVar8 = ~uVar1 >> 0x1f;
                  }
                  if ((uVar8 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if (*(int *)(*(longlong *)(lVar18 + 0x170) + 8 + lVar15 * 0x10) == 0) {
                    pwVar17 = L"";
                  }
                  else {
                    pwVar17 = *(wchar_t **)(*(longlong *)(lVar18 + 0x170) + lVar15 * 0x10);
                  }
                  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(pwVar17);
                  _Src.Data = local_78.Data.AllocatorInstance.Data;
                  if (*(int *)((longlong)this + 0x10) != *(int *)((longlong)this + 0x3c)) {
                    lVar16 = (longlong)this + 0x40;
                    if (*(longlong *)((longlong)this + 0x48) != 0) {
                      lVar16 = *(longlong *)((longlong)this + 0x48);
                    }
                    iVar9 = *(int *)(lVar16 + (ulonglong)
                                              (*(int *)((longlong)this + 0x50) - 1U & uVar8) * 4);
                    if (iVar9 != -1) {
                      do {
                        if (*(wchar_t **)
                             (*(longlong *)((longlong)this + 8) + (longlong)iVar9 * 0x18) == pwVar17
                           ) {
                          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_108.Data.ArrayNum = 0;
                          local_108.Data.ArrayMax = 0;
                          local_f0.TypedValue.AllocatorInstance.Data =
                               (ForAnyElementType)(FScriptContainerElement *)0x0;
                          local_f0.TypedValue.ArrayNum = 0;
                          local_f0.TypedValue.ArrayMax = -1;
                          local_e0.Data.ArrayMax = -1;
                          local_f8 = 0x20;
                          local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          iVar9 = local_78.Data.ArrayNum;
                          local_e0.Data.ArrayNum = iVar9;
                          if (iVar9 == 0) {
                            local_e0.Data.ArrayMax = 0;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (2,2,iVar9,0,(ForAnyElementType *)&local_e0,iVar9,
                                       &local_e0.Data.ArrayMax);
                            memcpy(local_e0.Data.AllocatorInstance.Data,_Src.Data,
                                   (longlong)iVar9 * 2);
                          }
                          if ((local_e0.Data.ArrayMax == -1) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("IsSet()",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                                 ,0x171,
                                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                                ), bVar7)) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                          lVar18 = local_130;
                          uVar8 = 0;
                          if ((int)uVar1 < *(int *)(local_130 + 0x178)) {
                            uVar8 = ~uVar1 >> 0x1f;
                          }
                          if ((uVar8 == 0) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar7)) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                          lVar16 = *(longlong *)(lVar18 + 0x170);
                          if (*(int *)(lVar16 + 8 + lVar15 * 0x10) == 0) {
                            pwVar17 = L"";
                          }
                          else {
                            pwVar17 = *(wchar_t **)(lVar16 + lVar15 * 0x10);
                          }
                          pTVar10 = TSet<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>,FDefaultSetAllocator>
                                    ::Find((TSet<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>,FDefaultSetAllocator>
                                            *)((longlong)this + 8),pwVar17);
                          if ((pTVar10 == (TTuple<wchar_t_const_*,UE::Interchange::FVariant_*> *)0x0
                              ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                      ("Pair != nullptr",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                                  ,0x27b,L""), bVar7)) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                          lVar15 = *(longlong *)&pTVar10->field_0x8;
                          iVar9 = *(int *)(lVar15 + 0x18);
                          if (iVar9 == *(int *)(lVar15 + 0x1c)) {
                            iVar9 = UE::Core::Private::
                                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                              (0x820,(ForAnyElementType *)(lVar15 + 0x10),
                                               (int *)(lVar15 + 0x1c));
                          }
                          *(int *)(lVar15 + 0x18) = iVar9 + 1;
                          pFVar20 = (FString *)
                                    (*(longlong *)(lVar15 + 0x10) + (longlong)iVar9 * 0x20);
                          DefaultConstructItems<UE::Interchange::FVariantBinding,int>(pFVar20,1);
                          if (pFVar20 != local_b0) {
                            iVar9 = (local_b0->Data).ArrayNum;
                            piVar24 = &(pFVar20->Data).ArrayMax;
                            pFVar21 = (local_b0->Data).AllocatorInstance.Data;
                            (pFVar20->Data).ArrayNum = iVar9;
                            if ((iVar9 == 0) && (*piVar24 == 0)) {
                              *piVar24 = 0;
                              lVar18 = local_130;
                            }
                            else {
                              UE::Core::Private::
                              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (2,2,iVar9,*piVar24,(ForAnyElementType *)pFVar20,iVar9,
                                         piVar24);
                              lVar18 = local_130;
                              if (iVar9 != 0) {
                                memcpy((pFVar20->Data).AllocatorInstance.Data,pFVar21,
                                       (longlong)iVar9 * 2);
                                lVar18 = local_130;
                              }
                            }
                          }
                          pFVar21 = pFVar20[1].Data.AllocatorInstance.Data;
                          if (((pFVar21 <= (FScriptContainerElement *)&local_108) &&
                              ((FScriptContainerElement *)&local_108 <
                               pFVar21 + (longlong)pFVar20[1].Data.ArrayMax * 0x38)) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar7)) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                          iVar9 = pFVar20[1].Data.ArrayNum;
                          piVar24 = &pFVar20[1].Data.ArrayMax;
                          if (iVar9 == *piVar24) {
                            iVar9 = UE::Core::Private::
                                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                              (0x838,(ForAnyElementType *)(pFVar20 + 1),piVar24);
                          }
                          pFVar20[1].Data.ArrayNum = iVar9 + 1;
                          pFVar21 = pFVar20[1].Data.AllocatorInstance.Data + (longlong)iVar9 * 0x38;
                          ::FString::FString((FString *)pFVar21,&local_108);
                          *(undefined2 *)&pFVar21[0x10].field_0x0 = local_f8;
                          TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
                          TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                                    ((TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                                      *)(pFVar21 + 0x18),
                                     (TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                                      *)&local_f0.TypedValue);
                          *(undefined4 *)&pFVar21[0x30].field_0x0 = 0;
                          *(undefined8 *)(pFVar21 + 0x28) = 0;
                          *(undefined4 *)(pFVar21 + 0x34) = 0xffffffff;
                          if (((local_e0.Data.ArrayMax != -1) &&
                              (::FString::FString((FString *)(pFVar21 + 0x28),&local_e0),
                              local_e0.Data.ArrayMax != -1)) &&
                             (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             )) {
                            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                          }
                          if ((local_f0.TypedValue.ArrayMax != -1) &&
                             (local_f0.TypedValue.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0)) {
                            FMemory::Free((void *)local_f0.TypedValue.AllocatorInstance.Data);
                          }
                          if (local_108.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_108.Data.AllocatorInstance.Data);
                          }
                          goto LAB_14e6ba806;
                        }
                        iVar9 = *(int *)(*(longlong *)((longlong)this + 8) + 0x10 +
                                        (longlong)iVar9 * 0x18);
                      } while (iVar9 != -1);
                    }
                  }
                  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<5163310495276467483>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfTranslator.cpp"
                                     ,0x51b,"VariantMap.Contains(*VariantNames[VariantIndex])");
                  if (bVar7) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
LAB_14e6ba806:
                  uVar12 = (ulonglong)local_120;
                  puVar19 = local_d0 + 1;
                  puVar23 = local_c8;
                }
                piVar24 = local_110;
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                  piVar24 = local_110;
                }
              }
              piVar24 = piVar24 + 6;
              uVar12 = (ulonglong)local_11c;
              puVar23 = puVar23 + 6;
            }
            lVar15 = local_c0 + 0xa0;
            local_128 = local_128 + 0x28;
            uVar12 = (ulonglong)local_118;
            lVar18 = local_98;
          }
        }
      }
      pFVar22 = local_88;
      if (0 < (local_88->Children).ArrayNum) {
        puVar2 = *(undefined8 **)((longlong)this + 0x58);
        UE::Core::Private::Function::CheckCallable((void *)*puVar2);
        pcVar3 = (code *)*puVar2;
        plVar14 = (longlong *)puVar2[5];
        if ((longlong *)puVar2[5] == (longlong *)0x0) {
          plVar14 = puVar2 + 2;
        }
        uVar11 = (**(code **)(*plVar14 + 8))();
        (*pcVar3)(uVar11,&pFVar22->Children);
      }
    }
    pFVar21 = pFVar21 + 4;
    uVar12 = (ulonglong)local_114;
  } while( true );
}

// operator() @ 14e6bac70

void __thiscall
`UInterchangeGLTFTranslator::HandleGltfVariants'::__l2::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  FString *pFVar12;
  undefined8 uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  FNode *pFVar19;
  longlong lVar20;
  int *piVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_6c;
  FString local_68;
  TStringView<wchar_t> local_58;
  
  lVar7 = *(longlong *)this;
  pFVar23 = (param_1->AllocatorInstance).Data;
  uVar3 = param_1->ArrayNum;
  uVar15 = (ulonglong)(int)uVar3;
  pFVar1 = pFVar23 + uVar15 * 4;
  local_res10 = param_1;
  do {
    if (local_res10->ArrayNum != (int)uVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar23 == pFVar1) {
      return;
    }
    uVar4 = *(uint *)pFVar23;
    if ((-1 < (int)uVar4) && (lVar22 = *(longlong *)this, (int)uVar4 < *(int *)(lVar22 + 0xd8))) {
      uVar11 = 0;
      if ((int)uVar4 < *(int *)(lVar22 + 0xd8)) {
        uVar11 = ~uVar4 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar19 = (FNode *)((longlong)(int)uVar4 * 0x260 + *(longlong *)(lVar22 + 0xd0));
      if (pFVar19->Type == Mesh) {
        uVar4 = pFVar19->MeshIndex;
        if ((-1 < (int)uVar4) && (lVar22 = *(longlong *)this, (int)uVar4 < *(int *)(lVar22 + 0xb8)))
        {
          uVar11 = 0;
          if ((int)uVar4 < *(int *)(lVar22 + 0xb8)) {
            uVar11 = ~uVar4 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar22 = (longlong)(int)uVar4 * 0xa8 + *(longlong *)(lVar22 + 0xb0);
          pFVar12 = TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                    ::Find((TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                            *)(*(longlong *)this + 0x260),pFVar19);
          if (pFVar12 == (FString *)0x0) {
            bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5163310495276467379>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfTranslator.cpp"
                                ,0x4b3,"NodeUidPtr");
            if (bVar10) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            goto LAB_14e6bb02b;
          }
          UInterchangeVariantSetNode::AddCustomDependencyUid
                    (*(UInterchangeVariantSetNode **)((longlong)this + 8),pFVar12);
          uVar4 = *(uint *)(lVar22 + 0x18);
          uVar15 = (ulonglong)(int)uVar4;
          lVar20 = *(longlong *)(lVar22 + 0x10);
          lVar18 = uVar15 * 0xa0 + lVar20;
          while( true ) {
            if (*(int *)(lVar22 + 0x18) != (int)uVar15) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<GLTF::FPrimitive_const_,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_res18);
            }
            if (lVar20 == lVar18) break;
            iVar5 = *(int *)(lVar20 + 0x28);
            if (0 < iVar5) {
              piVar21 = *(int **)(lVar20 + 0x20);
              piVar2 = piVar21 + (longlong)iVar5 * 6;
              while( true ) {
                if (*(int *)(lVar20 + 0x28) != iVar5) {
                  local_res20[0] = 0;
                  `TCheckedPointerIterator<GLTF::FVariantMapping_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_res20);
                }
                if (piVar21 == piVar2) break;
                iVar14 = *piVar21;
                if ((iVar14 < 0) || (*(int *)(lVar7 + 0x168) <= iVar14)) {
                  bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<5163310495276467392>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfTranslator.cpp"
                                      ,0x4c0,"Materials.IsValidIndex(VariantMapping.MaterialIndex)")
                  ;
                  if (bVar10) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
LAB_14e6bafc3:
                  piVar21 = piVar21 + 6;
                }
                else {
                  if ((iVar14 < 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  lVar17 = (longlong)iVar14 * 0x370 + *(longlong *)(lVar7 + 0x160);
                  local_58.DataPtr = *(wchar_t **)(lVar17 + 0x360);
                  iVar6 = *(int *)(lVar17 + 0x368);
                  iVar14 = iVar6 + -1;
                  if (iVar6 == 0) {
                    iVar14 = 0;
                  }
                  local_58._12_4_ = uStack_6c;
                  local_58.Size = iVar14;
                  UInterchangeShaderGraphNode::MakeNodeUid(&local_68,&local_58);
                  UInterchangeVariantSetNode::AddCustomDependencyUid
                            (*(UInterchangeVariantSetNode **)((longlong)this + 8),&local_68);
                  if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
                  goto LAB_14e6bafc3;
                  FMemory::Free(local_68.Data.AllocatorInstance.Data);
                  piVar21 = piVar21 + 6;
                }
              }
            }
            uVar15 = (ulonglong)uVar4;
            lVar20 = lVar20 + 0xa0;
          }
        }
      }
      if (0 < (pFVar19->Children).ArrayNum) {
        puVar8 = *(undefined8 **)((longlong)this + 0x10);
        UE::Core::Private::Function::CheckCallable((void *)*puVar8);
        pcVar9 = (code *)*puVar8;
        plVar16 = (longlong *)puVar8[5];
        if ((longlong *)puVar8[5] == (longlong *)0x0) {
          plVar16 = puVar8 + 2;
        }
        uVar13 = (**(code **)(*plVar16 + 8))();
        (*pcVar9)(uVar13,&pFVar19->Children);
      }
    }
LAB_14e6bb02b:
    pFVar23 = pFVar23 + 4;
    uVar15 = (ulonglong)uVar3;
  } while( true );
}

// operator() @ 14e6bb330

void __thiscall
`UInterchangeGLTFTranslator::GetAnimationPayloadData'::__l5::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  UInterchangeGLTFTranslator *this_00;
  code *pcVar2;
  bool bVar3;
  TOptional<UE::Interchange::FAnimationPayloadData> *pTVar4;
  uint uVar5;
  TOptional<UE::Interchange::FAnimationPayloadData> *this_01;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  TOptional<UE::Interchange::FAnimationPayloadData> local_d8;
  
  uVar9 = **(int **)this * param_1;
  if ((int)uVar9 < (int)(**(int **)this + uVar9)) {
    lVar6 = (longlong)(int)uVar9 * 0xa0;
    lVar8 = (longlong)(int)uVar9 * 0x50;
    uVar7 = uVar9;
    do {
      if ((-1 < (int)uVar7) &&
         (plVar1 = *(longlong **)((longlong)this + 8), (int)uVar7 < (int)plVar1[1])) {
        this_00 = *(UInterchangeGLTFTranslator **)((longlong)this + 0x18);
        if (((int)uVar7 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar4 = UInterchangeGLTFTranslator::GetAnimationPayloadData
                           (this_00,&local_d8,(FAnimationPayloadQuery *)(*plVar1 + lVar8));
        plVar1 = *(longlong **)((longlong)this + 0x10);
        uVar5 = 0;
        if ((int)uVar7 < (int)plVar1[1]) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_01 = (TOptional<UE::Interchange::FAnimationPayloadData> *)(*plVar1 + lVar6);
        if (pTVar4 != this_01) {
          if (pTVar4->bIsSet == false) {
            if (this_01->bIsSet != false) {
              UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData
                        ((FAnimationPayloadData *)this_01);
              this_01->bIsSet = false;
            }
          }
          else {
            if (this_01->bIsSet != false) {
              UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData
                        ((FAnimationPayloadData *)this_01);
            }
            UE::Interchange::FAnimationPayloadData::FAnimationPayloadData
                      ((FAnimationPayloadData *)this_01,&pTVar4->TypedValue);
            this_01->bIsSet = true;
          }
        }
        if (local_d8.bIsSet != false) {
          UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData(&local_d8.TypedValue);
        }
      }
      lVar8 = lVar8 + 0x50;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0xa0;
    } while ((int)uVar7 < (int)(**(int **)this + uVar9));
  }
  return;
}

// operator() @ 14e6bb6b0

void __thiscall
`UInterchangeGLTFTranslator::HandleGltfNode'::__l115::<lambda_1>::operator()
          (void *this,UInterchangeLightNode *param_1,FString *param_2,FString *param_3,
          EInterchangeNodeContainerType *param_4)

{
  UInterchangeBaseNodeContainer *this_00;
  FLinearColor *pFVar1;
  bool local_res8 [8];
  FLinearColor_u_0 local_28;
  
  this_00 = *(UInterchangeBaseNodeContainer **)((longlong)this + 0x10);
  ::FString::FString((FString *)&local_28._s_0,L"");
  UInterchangeBaseNodeContainer::SetupNode
            (this_00,(UInterchangeBaseNode *)param_1,param_2,param_3,*param_4,
             (FString *)&local_28._s_0);
  if ((void *)local_28._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  if (*(char *)(*(longlong *)this + 0xc0) != '\0') {
    pFVar1 = FLinearColor::FLinearColor
                       ((FLinearColor *)&local_28._s_0,(TVector<double> *)(*(longlong *)this + 0xa8)
                       );
    UInterchangeBaseLightNode::SetCustomLightColor((UInterchangeBaseLightNode *)param_1,pFVar1);
  }
  if (*(char *)(*(longlong *)this + 0xa0) != '\0') {
    local_res8[0] = true;
    UInterchangeLightNode::SetCustomUseIESBrightness(param_1,local_res8,true);
    UInterchangeLightNode::SetCustomIESBrightnessScale
              (param_1,(float *)(*(longlong *)this + 0x9c),true);
  }
  UInterchangeLightNode::SetCustomIESTexture(param_1,*(FString **)((longlong)this + 8));
  return;
}

// GetAnimationPayloadData @ 14e6c2820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<UE::Interchange::FAnimationPayloadData> * __thiscall
UInterchangeGLTFTranslator::GetAnimationPayloadData
          (UInterchangeGLTFTranslator *this,
          TOptional<UE::Interchange::FAnimationPayloadData> *__return_storage_ptr__,
          FAnimationPayloadQuery *param_1)

{
  TArray<FRichCurve,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FInterchangeStepCurve,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  EInterchangeAnimationPayLoadType EVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  int iVar10;
  bool bVar11;
  longlong lVar12;
  TOptional<UE::Interchange::FAnimationPayloadData> local_b8;
  
  ::FString::FString((FString *)&local_b8,&param_1->SceneNodeUniqueID);
  local_b8.TypedValue.BakeFrequency = ___xmm_0000000000000000403e000000000000;
  local_b8.TypedValue.RangeStartTime = _UNK_151444f58;
  local_b8.TypedValue.RangeEndTime = __real_3fa1111111111111;
  local_b8.TypedValue.Curves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.TypedValue.Curves.ArrayNum = 0;
  local_b8.TypedValue.Curves.ArrayMax = 0;
  local_b8.TypedValue.InbetweenCurveNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.TypedValue.InbetweenCurveNames.ArrayNum = 0;
  local_b8.TypedValue.InbetweenCurveNames.ArrayMax = 0;
  local_b8.TypedValue.InbetweenFullWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.TypedValue.InbetweenFullWeights.ArrayNum = 0;
  local_b8.TypedValue.InbetweenFullWeights.ArrayMax = 0;
  local_b8.TypedValue.StepCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.TypedValue.StepCurves.ArrayNum = 0;
  local_b8.TypedValue.StepCurves.ArrayMax = 0;
  local_b8.TypedValue.Transforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.TypedValue.Transforms.ArrayNum = 0;
  local_b8.TypedValue.Transforms.ArrayMax = 0;
  ::FString::FString(&local_b8.TypedValue.PayloadKey.UniqueId,&(param_1->PayloadKey).UniqueId);
  local_b8.TypedValue.PayloadKey.Type = (param_1->PayloadKey).Type;
  __return_storage_ptr__->bIsSet = false;
  EVar7 = (param_1->PayloadKey).Type;
  local_b8.TypedValue.AdditionalSupportedType = NONE;
  if (EVar7 == CURVE) {
    bVar11 = UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData
                       (&(param_1->PayloadKey).UniqueId,&this->GltfAsset,&local_b8.TypedValue);
    if ((!bVar11) || (&local_b8 == __return_storage_ptr__)) goto LAB_14e6c2bc9;
    if (__return_storage_ptr__->bIsSet != false) {
      UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData
                (&__return_storage_ptr__->TypedValue);
    }
  }
  else {
    if (EVar7 == MORPHTARGETCURVE) {
      bVar11 = UE::Interchange::Gltf::Private::GetMorphTargetAnimationPayloadData
                         (&(param_1->PayloadKey).UniqueId,&this->GltfAsset,&local_b8.TypedValue);
    }
    else {
      if (EVar7 != BAKED) goto LAB_14e6c2bc9;
      local_b8.TypedValue.BakeFrequency = (param_1->TimeDescription).BakeFrequency;
      local_b8.TypedValue.RangeStartTime = (param_1->TimeDescription).RangeStartSecond;
      local_b8.TypedValue.RangeEndTime = (param_1->TimeDescription).RangeStopSecond;
      bVar11 = UE::Interchange::Gltf::Private::GetBakedAnimationTransformPayloadData
                         (&(param_1->PayloadKey).UniqueId,&this->GltfAsset,&local_b8.TypedValue);
    }
    if ((bVar11 == false) || (&local_b8 == __return_storage_ptr__)) goto LAB_14e6c2bc9;
    if (__return_storage_ptr__->bIsSet != false) {
      pFVar8 = (__return_storage_ptr__->TypedValue).PayloadKey.UniqueId.Data.AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      pFVar8 = (__return_storage_ptr__->TypedValue).Transforms.AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      DestructItems<FInterchangeStepCurve,int>
                ((FInterchangeStepCurve *)
                 (__return_storage_ptr__->TypedValue).StepCurves.AllocatorInstance.Data,
                 (__return_storage_ptr__->TypedValue).StepCurves.ArrayNum);
      pFVar8 = (__return_storage_ptr__->TypedValue).StepCurves.AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      pFVar8 = (__return_storage_ptr__->TypedValue).InbetweenFullWeights.AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      DestructItems<FString,int>
                ((FString *)
                 (__return_storage_ptr__->TypedValue).InbetweenCurveNames.AllocatorInstance.Data,
                 (__return_storage_ptr__->TypedValue).InbetweenCurveNames.ArrayNum);
      pFVar8 = (__return_storage_ptr__->TypedValue).InbetweenCurveNames.AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      DestructItems<FRichCurve,int>
                ((FRichCurve *)(__return_storage_ptr__->TypedValue).Curves.AllocatorInstance.Data,
                 (__return_storage_ptr__->TypedValue).Curves.ArrayNum);
      pFVar8 = (__return_storage_ptr__->TypedValue).Curves.AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      pFVar8 = (__return_storage_ptr__->TypedValue).SceneNodeUniqueID.Data.AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
    }
  }
  ::FString::FString((FString *)__return_storage_ptr__,(FString *)&local_b8);
  FVar9.Data = local_b8.TypedValue.Curves.AllocatorInstance.Data;
  iVar10 = local_b8.TypedValue.Curves.ArrayNum;
  pTVar1 = &(__return_storage_ptr__->TypedValue).Curves;
  piVar2 = &(__return_storage_ptr__->TypedValue).Curves.ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TypedValue).Curves.ArrayNum = local_b8.TypedValue.Curves.ArrayNum;
  if (local_b8.TypedValue.Curves.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,local_b8.TypedValue.Curves.ArrayNum,0,&pTVar1->AllocatorInstance,
               local_b8.TypedValue.Curves.ArrayNum,piVar2);
    ConstructItems<FRichCurve,FRichCurve,int>
              ((pTVar1->AllocatorInstance).Data,(FRichCurve *)FVar9.Data,iVar10);
  }
  FVar9.Data = local_b8.TypedValue.InbetweenCurveNames.AllocatorInstance.Data;
  iVar10 = local_b8.TypedValue.InbetweenCurveNames.ArrayNum;
  pTVar3 = &(__return_storage_ptr__->TypedValue).InbetweenCurveNames;
  piVar2 = &(__return_storage_ptr__->TypedValue).InbetweenCurveNames.ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TypedValue).InbetweenCurveNames.ArrayNum =
       local_b8.TypedValue.InbetweenCurveNames.ArrayNum;
  if (local_b8.TypedValue.InbetweenCurveNames.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_b8.TypedValue.InbetweenCurveNames.ArrayNum,0,&pTVar3->AllocatorInstance,
               local_b8.TypedValue.InbetweenCurveNames.ArrayNum,piVar2);
    ConstructItems<FString,FString,int>
              ((pTVar3->AllocatorInstance).Data,(FString *)FVar9.Data,iVar10);
  }
  FVar9.Data = local_b8.TypedValue.InbetweenFullWeights.AllocatorInstance.Data;
  lVar12 = (longlong)local_b8.TypedValue.InbetweenFullWeights.ArrayNum;
  pTVar4 = &(__return_storage_ptr__->TypedValue).InbetweenFullWeights;
  piVar2 = &(__return_storage_ptr__->TypedValue).InbetweenFullWeights.ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TypedValue).InbetweenFullWeights.ArrayNum =
       local_b8.TypedValue.InbetweenFullWeights.ArrayNum;
  if (local_b8.TypedValue.InbetweenFullWeights.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_b8.TypedValue.InbetweenFullWeights.ArrayNum,0,&pTVar4->AllocatorInstance,
               local_b8.TypedValue.InbetweenFullWeights.ArrayNum,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,FVar9.Data,lVar12 << 2);
  }
  FVar9.Data = local_b8.TypedValue.StepCurves.AllocatorInstance.Data;
  iVar10 = local_b8.TypedValue.StepCurves.ArrayNum;
  pTVar5 = &(__return_storage_ptr__->TypedValue).StepCurves;
  piVar2 = &(__return_storage_ptr__->TypedValue).StepCurves.ArrayMax;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TypedValue).StepCurves.ArrayNum = local_b8.TypedValue.StepCurves.ArrayNum
  ;
  if (local_b8.TypedValue.StepCurves.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,local_b8.TypedValue.StepCurves.ArrayNum,0,&pTVar5->AllocatorInstance,
               local_b8.TypedValue.StepCurves.ArrayNum,piVar2);
    ConstructItems<FInterchangeStepCurve,FInterchangeStepCurve,int>
              ((pTVar5->AllocatorInstance).Data,(FInterchangeStepCurve *)FVar9.Data,iVar10);
  }
  FVar9.Data = local_b8.TypedValue.Transforms.AllocatorInstance.Data;
  pTVar6 = &(__return_storage_ptr__->TypedValue).Transforms;
  lVar12 = (longlong)local_b8.TypedValue.Transforms.ArrayNum;
  piVar2 = &(__return_storage_ptr__->TypedValue).Transforms.ArrayMax;
  (__return_storage_ptr__->TypedValue).BakeFrequency = local_b8.TypedValue.BakeFrequency;
  (__return_storage_ptr__->TypedValue).RangeStartTime = local_b8.TypedValue.RangeStartTime;
  (__return_storage_ptr__->TypedValue).RangeEndTime = local_b8.TypedValue.RangeEndTime;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TypedValue).Transforms.ArrayNum = local_b8.TypedValue.Transforms.ArrayNum
  ;
  if (local_b8.TypedValue.Transforms.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_b8.TypedValue.Transforms.ArrayNum,0,&pTVar6->AllocatorInstance,
               local_b8.TypedValue.Transforms.ArrayNum,piVar2);
    memcpy((pTVar6->AllocatorInstance).Data,FVar9.Data,lVar12 * 0x60);
  }
  ::FString::FString(&(__return_storage_ptr__->TypedValue).PayloadKey.UniqueId,
                     &local_b8.TypedValue.PayloadKey.UniqueId);
  (__return_storage_ptr__->TypedValue).PayloadKey.Type = local_b8.TypedValue.PayloadKey.Type;
  (__return_storage_ptr__->TypedValue).AdditionalSupportedType =
       local_b8.TypedValue.AdditionalSupportedType;
  __return_storage_ptr__->bIsSet = true;
LAB_14e6c2bc9:
  if (local_b8.TypedValue.PayloadKey.UniqueId.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.TypedValue.PayloadKey.UniqueId.Data.AllocatorInstance.Data);
  }
  if (local_b8.TypedValue.Transforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.TypedValue.Transforms.AllocatorInstance.Data);
  }
  DestructItems<FInterchangeStepCurve,int>
            ((FInterchangeStepCurve *)local_b8.TypedValue.StepCurves.AllocatorInstance.Data,
             local_b8.TypedValue.StepCurves.ArrayNum);
  if ((FInterchangeStepCurve *)local_b8.TypedValue.StepCurves.AllocatorInstance.Data !=
      (FInterchangeStepCurve *)0x0) {
    FMemory::Free(local_b8.TypedValue.StepCurves.AllocatorInstance.Data);
  }
  if (local_b8.TypedValue.InbetweenFullWeights.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.TypedValue.InbetweenFullWeights.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_b8.TypedValue.InbetweenCurveNames.AllocatorInstance.Data,
             local_b8.TypedValue.InbetweenCurveNames.ArrayNum);
  if (local_b8.TypedValue.InbetweenCurveNames.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.TypedValue.InbetweenCurveNames.AllocatorInstance.Data);
  }
  DestructItems<FRichCurve,int>
            ((FRichCurve *)local_b8.TypedValue.Curves.AllocatorInstance.Data,
             local_b8.TypedValue.Curves.ArrayNum);
  if ((FRichCurve *)local_b8.TypedValue.Curves.AllocatorInstance.Data != (FRichCurve *)0x0) {
    FMemory::Free(local_b8.TypedValue.Curves.AllocatorInstance.Data);
  }
  if (local_b8.TypedValue.SceneNodeUniqueID.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.TypedValue.SceneNodeUniqueID.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAnimationPayloadData @ 14e6c2c80

TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeGLTFTranslator::GetAnimationPayloadData
          (UInterchangeGLTFTranslator *this,
          TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TArray<UE::Interchange::FAnimationPayloadQuery,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  TOptional<UE::Interchange::FAnimationPayloadData> *pTVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  TOptional<UE::Interchange::FAnimationPayloadData> *pTVar14;
  ulonglong uVar15;
  <lambda_1> local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_148;
  int local_140 [2];
  longlong local_138;
  undefined4 local_130 [2];
  TArrayView<std::nullptr_t,int> local_128;
  code *local_118;
  undefined4 **local_110;
  undefined4 *local_108;
  TArray<UE::Interchange::FAnimationPayloadQuery,TSizedDefaultAllocator<32>_> *local_100;
  ForAnyElementType *local_f8;
  TMap<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
  *local_f0;
  TOptional<UE::Interchange::FAnimationPayloadData> local_e8;
  
  iVar1 = param_1->ArrayNum;
  lVar7 = (longlong)iVar1;
  uVar11 = 0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140[0] = 0;
  local_140[1] = 0;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xa0,8,iVar1,&local_148,local_140,local_140 + 1);
  DefaultConstructItems<TOptional<UE::Interchange::FAnimationPayloadData>,int>
            (local_148.Data + (longlong)iVar4 * 0xa0,iVar1);
  local_130[0] = 10;
  if (param_1->ArrayNum < 0xb) {
    uVar12 = uVar11;
    uVar13 = uVar11;
    uVar15 = uVar11;
    local_138 = lVar7;
    if (0 < iVar1) {
      do {
        uVar10 = (uint)uVar11;
        if ((-1 < (int)uVar10) && (lVar7 = local_138, (int)uVar10 < param_1->ArrayNum)) {
          if (((int)uVar10 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar6;
          }
          pTVar14 = GetAnimationPayloadData
                              ((UInterchangeGLTFTranslator *)&this[-1].NodeUidMap,&local_e8,
                               (FAnimationPayloadQuery *)
                               ((param_1->AllocatorInstance).Data + uVar12));
          uVar5 = 0;
          if ((int)uVar10 < local_140[0]) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar6;
          }
          pTVar8 = (TOptional<UE::Interchange::FAnimationPayloadData> *)(local_148.Data + uVar13);
          if (pTVar14 != pTVar8) {
            if (pTVar14->bIsSet == false) {
              if (pTVar8->bIsSet != false) {
                UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData
                          ((FAnimationPayloadData *)pTVar8);
                pTVar8->bIsSet = false;
              }
            }
            else {
              if (pTVar8->bIsSet != false) {
                UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData
                          ((FAnimationPayloadData *)pTVar8);
              }
              UE::Interchange::FAnimationPayloadData::FAnimationPayloadData
                        ((FAnimationPayloadData *)pTVar8,&pTVar14->TypedValue);
              pTVar8->bIsSet = true;
            }
          }
          lVar7 = local_138;
          if (local_e8.bIsSet != false) {
            UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData(&local_e8.TypedValue);
            lVar7 = local_138;
          }
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar15 = uVar15 + 1;
        uVar12 = uVar12 + 0x50;
        uVar13 = uVar13 + 0xa0;
      } while ((longlong)uVar15 < lVar7);
    }
  }
  else {
    local_108 = local_130;
    local_f8 = &local_148;
    local_128.DataPtr = (void **)0x0;
    local_f0 = &this[-1].NodeUidMap;
    local_128.ArrayNum = 0;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<`UInterchangeGLTFTranslator::GetAnimationPayloadData'::__l5::<lambda_1>,void,int>
                ::Call;
    local_110 = &local_108;
    local_res18 = SUB81(param_1,0);
    local_100 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar1 / 10 + 1,1,(TFunctionRef<void___cdecl(int)> *)&local_118,
               local_res18,BackgroundPriority,&local_128);
  }
  iVar1 = local_140[0];
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar14 = (TOptional<UE::Interchange::FAnimationPayloadData> *)
            (local_148.Data + (longlong)local_140[0] * 0xa0);
  FVar9.Data = local_148.Data;
  while( true ) {
    if (local_140[0] != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TOptional<UE::Interchange::FAnimationPayloadData>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((TOptional<UE::Interchange::FAnimationPayloadData> *)FVar9.Data == pTVar14) break;
    if (((TOptional<UE::Interchange::FAnimationPayloadData> *)FVar9.Data)->bIsSet != false) {
      pTVar8 = (TOptional<UE::Interchange::FAnimationPayloadData> *)
               (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pTVar8 <= FVar9.Data) &&
          (FVar9.Data <
           (TOptional<UE::Interchange::FAnimationPayloadData> *)
           (&pTVar8->TypedValue + __return_storage_ptr__->ArrayMax))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar6;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x898,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      UE::Interchange::FAnimationPayloadData::FAnimationPayloadData
                ((FAnimationPayloadData *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x98),
                 (FAnimationPayloadData *)FVar9.Data);
    }
    FVar9.Data = FVar9.Data + 0xa0;
  }
  DestructItems<TOptional<UE::Interchange::FAnimationPayloadData>,int>
            ((TOptional<UE::Interchange::FAnimationPayloadData> *)local_148.Data,local_140[0]);
  if ((TOptional<UE::Interchange::FAnimationPayloadData> *)local_148.Data !=
      (TOptional<UE::Interchange::FAnimationPayloadData> *)0x0) {
    FMemory::Free(local_148.Data);
  }
  return __return_storage_ptr__;
}

// GetLightProfilePayloadData @ 14e6c3b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TOptional<UE::Interchange::FImportLightProfile> * __thiscall
UInterchangeGLTFTranslator::GetLightProfilePayloadData
          (UInterchangeGLTFTranslator *this,
          TOptional<UE::Interchange::FImportLightProfile> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  UInterchangeResultsContainer *pUVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  TOptional<UE::Interchange::FImportLightProfile> *pTVar11;
  FString *pFVar12;
  UInterchangeSourceData *pUVar13;
  FUObjectItem *pFVar14;
  UInterchangeManager *this_00;
  UInterchangeTranslatorBase *this_01;
  UClass *pUVar15;
  longlong *plVar16;
  FImportImage *pFVar17;
  uint uVar18;
  wchar_t *_Str;
  longlong lVar19;
  FString local_1d8;
  FGCObject local_1c8;
  UInterchangeSourceData *local_1b8;
  FGCObject local_1b0;
  UInterchangeTranslatorBase *local_1a0;
  longlong local_198;
  FString local_190;
  FString local_180;
  undefined1 local_170 [8];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_168 [6];
  void *local_138;
  void *local_128;
  void *local_118;
  char local_108;
  void *local_f8;
  char local_e0;
  undefined1 local_d8 [8];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_d0 [6];
  void *local_a0;
  void *local_90;
  void *local_80;
  char local_70;
  void *local_60;
  char local_48;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar9 = _wtoi(_Str);
  if (((int)uVar9 < 0) ||
     (*(int *)&(this->GltfAsset).Accessors.AllocatorInstance.Data <= (int)uVar9)) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  uVar18 = ~uVar9 >> 0x1f;
  uVar10 = 0;
  if ((int)uVar9 < *(int *)&(this->GltfAsset).Accessors.AllocatorInstance.Data) {
    uVar10 = uVar18;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TOptional<UE::Interchange::FImportLightProfile> *)(*pcVar6)();
    return pTVar11;
  }
  lVar19 = (longlong)(int)uVar9 * 0x68;
  iVar2 = *(int *)(*(longlong *)&(this->GltfAsset).BufferViews.ArrayNum + 0x28 + lVar19);
  local_198 = lVar19;
  if (iVar2 == -1) {
    uVar10 = 0;
    if ((int)uVar9 < *(int *)&(this->GltfAsset).Accessors.AllocatorInstance.Data) {
      uVar10 = uVar18;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TOptional<UE::Interchange::FImportLightProfile> *)(*pcVar6)();
      return pTVar11;
    }
    pFVar12 = FPaths::ConvertRelativePathToFull
                        (&local_190,
                         (FString *)
                         (*(longlong *)&(this->GltfAsset).BufferViews.ArrayNum + 0x18 + lVar19));
    bVar7 = false;
    bVar8 = true;
  }
  else {
    pFVar12 = ::FString::FString(&local_180,L"FakeFor_glTF_IES_Buffer_Import.ies");
    bVar7 = true;
    bVar8 = false;
  }
  local_1d8.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Data.ArrayNum = (pFVar12->Data).ArrayNum;
  local_1d8.Data.ArrayMax = (pFVar12->Data).ArrayMax;
  (pFVar12->Data).ArrayNum = 0;
  (pFVar12->Data).ArrayMax = 0;
  if ((bVar8) && (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  if ((bVar7) && (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  UInterchangeManager::GetInterchangeManager();
  pUVar13 = UInterchangeManager::CreateSourceData(&local_1d8);
  local_1c8.bCanMakeInitialReferences = false;
  local_1c8.bReferenceAdded = false;
  local_1c8._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject(&local_1c8);
  local_1c8._padding_ = (longlong)&___7__TGCObjectScopeGuard___CBVUObject____6B_;
  local_1b8 = pUVar13;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar13 == (UInterchangeSourceData *)0x0) goto LAB_14e6c3f23;
  }
  else {
    if (pUVar13 == (UInterchangeSourceData *)0x0) {
LAB_14e6c3f23:
      __return_storage_ptr__->bIsSet = false;
      local_1c8._padding_ = (longlong)&___7FGCObject__6B_;
      FGCObject::UnregisterGCObject(&local_1c8);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  pFVar14 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar13->_padding_ + 4))
  ;
  FUObjectItem::ClearRootFlags(pFVar14,Async);
  this_00 = UInterchangeManager::GetInterchangeManager();
  this_01 = UInterchangeManager::GetTranslatorForSourceData(this_00,pUVar13);
  local_1b0._padding_ = (longlong)&___7FGCObject__6B_;
  local_1b0.bCanMakeInitialReferences = false;
  local_1b0.bReferenceAdded = false;
  FGCObject::RegisterGCObject(&local_1b0);
  local_1b0._padding_ = (longlong)&___7__TGCObjectScopeGuard___CBVUObject____6B_;
  local_1a0 = this_01;
  if (this_01 != (UInterchangeTranslatorBase *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    pUVar15 = Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister();
    plVar16 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar15);
    if (plVar16 != (longlong *)0x0) {
      pFVar14 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this_01->_padding_ + 4));
      FUObjectItem::ClearRootFlags(pFVar14,Async);
      pUVar5 = *(UInterchangeResultsContainer **)&this[-1].NodeUidMap.field_0x18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UInterchangeResultsContainer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this_01->Results).field0_0x0.DebugPtr = pUVar5;
      if (iVar2 == -1) {
        pFVar17 = (FImportImage *)
                  (**(code **)(*plVar16 + 0x18))(plVar16,local_170,&local_1d8,param_2);
        bVar7 = false;
        bVar8 = true;
      }
      else {
        pcVar6 = *(code **)(*plVar16 + 0x10);
        uVar10 = 0;
        if ((int)uVar9 < *(int *)&(this->GltfAsset).Accessors.AllocatorInstance.Data) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TOptional<UE::Interchange::FImportLightProfile> *)(*pcVar6)();
          return pTVar11;
        }
        uVar3 = *(undefined4 *)
                 (*(longlong *)&(this->GltfAsset).BufferViews.ArrayNum + 0x2c + local_198);
        uVar10 = 0;
        if ((int)uVar9 < *(int *)&(this->GltfAsset).Accessors.AllocatorInstance.Data) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TOptional<UE::Interchange::FImportLightProfile> *)(*pcVar6)();
          return pTVar11;
        }
        pFVar17 = (FImportImage *)
                  (*pcVar6)(plVar16,local_d8,
                            *(undefined8 *)
                             (*(longlong *)&(this->GltfAsset).BufferViews.ArrayNum + 0x30 +
                             local_198),uVar3);
        bVar7 = true;
        bVar8 = false;
      }
      __return_storage_ptr__->bIsSet = false;
      bVar1 = SUB41(pFVar17[1].SizeX,0);
      __return_storage_ptr__->bIsSet = bVar1;
      if (bVar1 != false) {
        UE::Interchange::FImportImage::FImportImage((FImportImage *)__return_storage_ptr__,pFVar17);
        (__return_storage_ptr__->TypedValue)._padding_ =
             (longlong)&___7FImportLightProfile_Interchange_UE__6B_;
        (__return_storage_ptr__->TypedValue).Brightness = *(float *)&pFVar17[1]._padding_;
        fVar4 = *(float *)((longlong)&pFVar17[1]._padding_ + 4);
        (__return_storage_ptr__->TypedValue).SourceDataBuffer.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->TypedValue).TextureMultiplier = fVar4;
        (__return_storage_ptr__->TypedValue).SourceDataBuffer.AllocatorInstance.Data =
             (FScriptContainerElement *)pFVar17[1].RawData.Owner.Owner;
        pFVar17[1].RawData.Owner.Owner = (FBufferOwner *)0x0;
        (__return_storage_ptr__->TypedValue).SourceDataBuffer.ArrayNum =
             *(long64 *)&pFVar17[1].RawDataCompressionFormat;
        (__return_storage_ptr__->TypedValue).SourceDataBuffer.ArrayMax =
             *(long64 *)&pFVar17[1].CompressionSettings;
        pFVar17[1].RawDataCompressionFormat = TSCF_None;
        pFVar17[1].Format = TSF_Invalid;
        pFVar17[1].CompressionSettings = TC_Default;
        pFVar17[1].NumMips = 0;
      }
      if ((bVar8) && (local_e0 != '\0')) {
        if (local_f8 != (void *)0x0) {
          FMemory::Free(local_f8);
        }
        if (local_108 != '\0') {
          if (local_118 != (void *)0x0) {
            FMemory::Free(local_118);
          }
          if (local_128 != (void *)0x0) {
            FMemory::Free(local_128);
          }
          if (local_138 != (void *)0x0) {
            FMemory::Free(local_138);
          }
        }
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_168);
      }
      if ((bVar7) && (local_48 != '\0')) {
        if (local_60 != (void *)0x0) {
          FMemory::Free(local_60);
        }
        if (local_70 != '\0') {
          if (local_80 != (void *)0x0) {
            FMemory::Free(local_80);
          }
          if (local_90 != (void *)0x0) {
            FMemory::Free(local_90);
          }
          if (local_a0 != (void *)0x0) {
            FMemory::Free(local_a0);
          }
        }
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_d0);
      }
      local_1b0._padding_ = (longlong)&___7FGCObject__6B_;
      FGCObject::UnregisterGCObject(&local_1b0);
      goto LAB_14e6c4108;
    }
  }
  bVar8 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5163310495276467814>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfTranslator.cpp"
                     ,0x666,"TextureTranslator");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TOptional<UE::Interchange::FImportLightProfile> *)(*pcVar6)();
    return pTVar11;
  }
  __return_storage_ptr__->bIsSet = false;
  local_1b0._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject(&local_1b0);
LAB_14e6c4108:
  local_1c8._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject(&local_1c8);
  if (local_1d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// GetMeshPayloadData @ 14e6c4370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::Interchange::FMeshPayloadData> * __thiscall
UInterchangeGLTFTranslator::GetMeshPayloadData
          (UInterchangeGLTFTranslator *this,
          TOptional<UE::Interchange::FMeshPayloadData> *__return_storage_ptr__,
          FInterchangeMeshPayLoadKey *param_1,TTransform<double> *param_2)

{
  ForAnyElementType _Src;
  int iVar1;
  undefined1 auStackY_148 [32];
  FAttributeKey local_108;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  ForAnyElementType local_a8;
  long64 lStack_a0;
  long64 local_98;
  ulong64 local_90;
  undefined8 local_88;
  _RTL_CRITICAL_SECTION local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_cc = 0x80;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c4 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  lStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_c8 = 0xffffffff;
  local_88._0_4_ = 0.1;
  local_88._4_4_ = 0;
  InitializeCriticalSectionAndSpinCount(&local_80,4000);
  _Src = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.AllocatorInstance;
  local_108.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Key.Data.ArrayMax = 0;
  iVar1 = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.ArrayNum;
  local_108.Key.Data.ArrayNum = iVar1;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_108,iVar1,&local_108.Key.Data.ArrayMax);
    memcpy(local_108.Key.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar1 * 2);
  }
  UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TTransform<double>,void>
            ((FAttributeStorage *)local_f8,&local_108,param_2,None);
  if (local_108.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Key.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x10))(this,__return_storage_ptr__,param_1,local_f8);
  DeleteCriticalSection(&local_80);
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_f8,0,local_f8._8_4_);
  iVar1 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  return __return_storage_ptr__;
}

// GetMeshPayloadData @ 14e6c4580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::Interchange::FMeshPayloadData> * __thiscall
UInterchangeGLTFTranslator::GetMeshPayloadData
          (UInterchangeGLTFTranslator *this,
          TOptional<UE::Interchange::FMeshPayloadData> *__return_storage_ptr__,
          FInterchangeMeshPayLoadKey *param_1,FAttributeStorage *param_2)

{
  longlong *plVar1;
  EInterchangeMeshPayLoadType EVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  void *_Src;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  UInterchangeResultError_Generic *pUVar9;
  FText *pFVar10;
  ForAnyElementType *pFVar11;
  uint uVar12;
  undefined1 auStackY_478 [32];
  FText local_438;
  ForAnyElementType local_428;
  int local_420;
  int iStack_41c;
  FScriptContainerElement *local_418;
  ForAnyElementType local_410;
  undefined8 local_408;
  TTransform<double> local_3f8;
  FMeshDescription local_398;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  int local_c8;
  FScriptContainerElement *local_c0;
  undefined8 local_b8;
  FScriptContainerElement *local_b0;
  undefined8 local_a8;
  FScriptContainerElement *local_a0;
  undefined8 local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_90;
  undefined8 local_88;
  FScriptContainerElement *local_80;
  undefined8 local_78;
  FScriptContainerElement *local_70;
  undefined8 local_68;
  bool local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_478;
  bVar7 = false;
  bVar6 = true;
  local_438.TextData.Reference = (ITextData *)0x0;
  local_438._12_4_ = 0;
  local_418 = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.AllocatorInstance.
              Data;
  uVar12 = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.ArrayNum;
  local_3f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_3f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_3f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_3f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_3f8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_3f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_3f8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_3f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_3f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_3f8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_3f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_3f8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_3f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_3f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_438.Flags = uVar12;
  if (uVar12 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar12,0,(ForAnyElementType *)&local_438,uVar12,(int *)&local_438.field_0xc);
    memcpy(local_438.TextData.Reference,local_418,(longlong)(int)uVar12 * 2);
  }
  UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TTransform<double>,void>
            (param_2,(FAttributeKey *)&local_438,&local_3f8);
  if (local_438.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_438.TextData.Reference);
  }
  FMeshDescription::FMeshDescription(&local_398);
  EVar2 = param_1->Type;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_c0 = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  local_60 = false;
  if (EVar2 == STATIC) {
LAB_14e6c46da:
    bVar8 = UE::Interchange::Gltf::Private::GetStaticMeshPayloadDataForPayLoadKey
                      ((FAsset *)&this->_padding_,&param_1->UniqueId,&local_3f8,&local_398);
LAB_14e6c46ee:
    if (bVar8 != false) {
      bVar8 = FStaticMeshOperations::ValidateAndFixData(&local_398,&param_1->UniqueId);
      if (!bVar8) {
        pUVar9 = UInterchangeTranslatorBase::AddMessage<UInterchangeResultError_Generic>
                           ((UInterchangeTranslatorBase *)&this[-1].NodeUidMap.field_0x10);
        lVar5 = *(longlong *)&this[-1].NodeUidMap.field_0x40;
        if (lVar5 == 0) {
          local_410.Data = (FScriptContainerElement *)0x0;
          local_408 = 0;
          pFVar11 = &local_410;
        }
        else {
          local_428.Data = (FScriptContainerElement *)0x0;
          iVar3 = *(int *)(lVar5 + 0x30);
          _Src = *(void **)(lVar5 + 0x28);
          local_420 = iVar3;
          if (iVar3 == 0) {
            pFVar11 = &local_428;
            iStack_41c = 0;
            bVar7 = true;
            bVar6 = false;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar3,0,&local_428,iVar3,&iStack_41c);
            memcpy(local_428.Data,_Src,(longlong)iVar3 * 2);
            pFVar11 = &local_428;
            bVar7 = true;
            bVar6 = false;
          }
        }
        plVar1 = &pUVar9->_padding_;
        if ((ForAnyElementType *)plVar1 != pFVar11) {
          if ((void *)*plVar1 != (void *)0x0) {
            FMemory::Free((void *)*plVar1);
          }
          *plVar1 = (longlong)pFVar11->Data;
          pFVar11->Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)&pUVar9->_padding_ = *(undefined4 *)&pFVar11[1].Data;
          uVar4 = *(undefined4 *)((longlong)&pFVar11[1].Data + 4);
          pFVar11[1].Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&pUVar9->_padding_ + 4) = uVar4;
        }
        if ((bVar6) && (local_410.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_410.Data);
        }
        if ((bVar7) && (local_428.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_428.Data);
        }
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_438,L"InterchangeGLTFTranslator",
                             L"GetMeshPayloadData_ValidateMeshDescriptionFail",
                             L"Invalid mesh data (NAN) was found and changed to zero. This may affect the mesh rendering."
                            );
        FText::operator=(&pUVar9->Text,pFVar10);
        if (local_438.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
        }
      }
      FMeshDescription::FMeshDescription((FMeshDescription *)__return_storage_ptr__,&local_398);
      (__return_storage_ptr__->TypedValue).JointNames.AllocatorInstance.Data =
           local_d8.AllocatorInstance.Data;
      (__return_storage_ptr__->TypedValue).JointNames.ArrayNum = local_d8.ArrayNum;
      (__return_storage_ptr__->TypedValue).JointNames.ArrayMax = local_d8.ArrayMax;
      (__return_storage_ptr__->TypedValue).VertexOffset = local_c8;
      (__return_storage_ptr__->TypedValue).MorphTargetName.Data.AllocatorInstance.Data = local_c0;
      (__return_storage_ptr__->TypedValue).MorphTargetName.Data.ArrayNum = (int)local_b8;
      (__return_storage_ptr__->TypedValue).MorphTargetName.Data.ArrayMax = local_b8._4_4_;
      (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.bIsSet = local_60;
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      local_c0 = (FScriptContainerElement *)0x0;
      local_b8 = 0;
      if (local_60 != false) {
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.Transforms.
        AllocatorInstance.Data = local_b0;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.Transforms.
        ArrayNum = (int)local_a8;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.Transforms.
        ArrayMax = local_a8._4_4_;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.PartIndices.
        AllocatorInstance.Data = local_a0;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.PartIndices.
        ArrayNum = (int)local_98;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.PartIndices.
        ArrayMax = local_98._4_4_;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.PartUids.
        AllocatorInstance.Data = (FScriptContainerElement *)local_90;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.PartUids.ArrayNum
             = (int)local_88;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.PartUids.ArrayMax
             = local_88._4_4_;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.BoneInfluences.
        AllocatorInstance.Data = local_80;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.BoneInfluences.
        ArrayNum = (int)local_78;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.BoneInfluences.
        ArrayMax = local_78._4_4_;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.
        NumInfluencesPerInstance.AllocatorInstance.Data = local_70;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.
        NumInfluencesPerInstance.ArrayNum = (int)local_68;
        (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue.
        NumInfluencesPerInstance.ArrayMax = local_68._4_4_;
        local_68 = 0;
        local_b0 = (FScriptContainerElement *)0x0;
        local_a8 = 0;
        local_a0 = (FScriptContainerElement *)0x0;
        local_98 = 0;
        local_90 = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
        local_88 = 0;
        local_80 = (FScriptContainerElement *)0x0;
        local_78 = 0;
        local_70 = (FScriptContainerElement *)0x0;
      }
      __return_storage_ptr__->bIsSet = true;
      if (local_60 != false) {
        if (local_70 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70);
        }
        if (local_80 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80);
        }
        DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>(local_90,(int)local_88);
        if (local_90 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_90);
        }
        if (local_a0 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0);
        }
        if (local_b0 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0);
        }
      }
      goto joined_r0x00014e6c4a9b;
    }
  }
  else {
    if (EVar2 == SKELETAL) {
      bVar8 = UE::Interchange::Gltf::Private::GetSkeletalMeshDescriptionForPayLoadKey
                        ((FAsset *)&this->_padding_,&param_1->UniqueId,&local_3f8,&local_398,
                         &local_d8);
      goto LAB_14e6c46ee;
    }
    if (EVar2 == MORPHTARGET) goto LAB_14e6c46da;
  }
  __return_storage_ptr__->bIsSet = false;
  if (local_60 != false) {
    if (local_70 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_80 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80);
    }
    DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>(local_90,(int)local_88);
    if (local_90 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_90);
    }
    if (local_a0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0);
    }
    if (local_b0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0);
    }
  }
joined_r0x00014e6c4a9b:
  if (local_c0 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0);
  }
  DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  FMeshDescription::~FMeshDescription(&local_398);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e6c4e00

UClass * __cdecl UInterchangeGLTFTranslator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGLTFTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeGLTFTranslator",
               &Z_Registration_Info_UClass_UInterchangeGLTFTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeGLTFTranslator,0x2b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGLTFTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeGLTFTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGLTFTranslator.InnerSingleton;
}

// GetSupportedAssetTypes @ 14e6c8d10

EInterchangeTranslatorAssetType __thiscall
UInterchangeGLTFTranslator::GetSupportedAssetTypes(UInterchangeGLTFTranslator *this)

{
  return Animations|Meshes|Materials;
}

// GetSupportedFormats @ 14e6c8d30

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeGLTFTranslator::GetSupportedFormats
          (UInterchangeGLTFTranslator *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  FString local_28;
  FString local_18;
  
  bVar4 = IsInGameThread();
  uVar5 = (ulonglong)_tls_index;
  if ((bVar4) &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) < ::_TSS0))
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      bVar4 = UE::Interchange::GLTFMaterials::AreRequiredPackagesLoaded();
      if (bVar4) {
        bRequiredPackageLoaded = true;
      }
      else {
        if (2 < (byte)LogInterchangeImport._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_UInterchangeGLT_152f2ced0,
                     (FLogCategoryBase *)&LogInterchangeImport);
        }
        bRequiredPackageLoaded = false;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FString::FString(&local_28,L"gltf;GL Transmission Format");
      ::FString::FString(&local_18,L"glb;GL Transmission Format (Binary)");
      lVar6 = 2;
      GltfExtensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      GltfExtensions.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,2,0,&GltfExtensions.AllocatorInstance,2,&GltfExtensions.ArrayMax);
      ConstructItems<FString,FString,int>(GltfExtensions.AllocatorInstance.Data,&local_28,2);
      puVar7 = &stack0xfffffffffffffff8;
      do {
        puVar1 = (undefined8 *)(puVar7 + -0x10);
        puVar7 = puVar7 + -0x10;
        lVar6 = lVar6 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar6 != 0);
      atexit(`UInterchangeGLTFTranslator::GetSupportedFormats'::__l2::
             _dynamic_atexit_destructor_for__GltfExtensions__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = GltfExtensions.ArrayNum;
  FVar2 = GltfExtensions.AllocatorInstance;
  __return_storage_ptr__->ArrayNum = GltfExtensions.ArrayNum;
  if (iVar3 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar3,0,&__return_storage_ptr__->AllocatorInstance,iVar3,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FString,FString,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,(FString *)FVar2.Data,iVar3);
  return __return_storage_ptr__;
}

// GetTexturePayloadData @ 14e6c8fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangeGLTFTranslator::GetTexturePayloadData
          (UInterchangeGLTFTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  int *piVar1;
  longlong lVar2;
  void *_Src;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TObjectPtr<UInterchangeTranslatorBase>_u_0 this_00;
  undefined8 _Src_00;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TOptional<UE::Interchange::FImportImage> *pTVar10;
  UPackage *pUVar11;
  UClass *pUVar12;
  UInterchangeImageWrapperTranslator *this_01;
  FUObjectItem *pFVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  ulonglong _Size;
  undefined1 auStackY_2f8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_2b8;
  TObjectPtr<UInterchangeTranslatorBase>_u_0 local_2a8;
  UObjectBaseUtility *pUStack_2a0;
  TOptional<FString>_u_0 local_298;
  undefined8 local_288;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_280;
  FString *local_268;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_260;
  TOptional<UE::Interchange::FImportImage> local_248;
  TOptional<UE::Interchange::FImportImage> local_1c8;
  undefined1 local_150 [8];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_148 [6];
  void *local_118;
  void *local_108;
  void *local_f8;
  char local_e8;
  char local_e0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax = 0;
  local_268 = param_1;
  ::FString::ParseIntoArray(param_1,&local_2b8,L":",true);
  if (local_2b8.ArrayNum == 0) {
    __return_storage_ptr__->bIsSet = false;
    DestructItems<FString,int>((FString *)local_2b8.AllocatorInstance.Data,0);
    if (local_2b8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_2b8.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  if ((local_2b8.ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar5)();
    return pTVar10;
  }
  if (*(int *)(local_2b8.AllocatorInstance.Data + 8) == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = *(wchar_t **)local_2b8.AllocatorInstance.Data;
  }
  uVar8 = _wtoi(pwVar15);
  if (((int)uVar8 < 0) || ((this->GltfAsset).LightsIES.ArrayNum <= (int)uVar8)) {
    __return_storage_ptr__->bIsSet = false;
    DestructItems<FString,int>((FString *)local_2b8.AllocatorInstance.Data,local_2b8.ArrayNum);
    if (local_2b8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_2b8.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  uVar9 = 0;
  if ((int)uVar8 < (this->GltfAsset).LightsIES.ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar5)();
    return pTVar10;
  }
  local_248.bIsSet = false;
  lVar2 = *(longlong *)
           ((this->GltfAsset).LightsIES.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x80);
  if (*(int *)(lVar2 + 0x30) < 2) {
    _Src = *(void **)(lVar2 + 0x40);
    _Size = (ulonglong)*(uint *)(lVar2 + 0x38);
    local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (((_Src == (void *)0x0) && (_Size != 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x2d3,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar5)();
      return pTVar10;
    }
    local_280.ArrayNum = _Size;
    if (_Size == 0) {
      local_280.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,_Size,0,&local_280.AllocatorInstance,_Size,&local_280.ArrayMax);
      memcpy(local_280.AllocatorInstance.Data,_Src,_Size);
    }
    local_288 = 0;
    pUVar11 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar11,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UInterchangeImageWrapperTranslator_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar12);
    local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_d8._56_8_ = (UPackage *)0x0;
    local_d8._16_4_ = 0;
    local_d8._20_4_ = 0;
    local_d8._24_4_ = RF_NoFlags;
    local_d8._40_8_ = (UObject *)0x0;
    local_d8[0x20] = false;
    local_d8._8_8_ = pUVar11;
    this_01 = (UInterchangeImageWrapperTranslator *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar14 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar14 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    pUVar3 = *(UObject **)&this[-1].NodeUidMap.field_0x30;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    this_01->_padding_ = (longlong)pUVar3;
    pTVar10 = UInterchangeImageWrapperTranslator::GetTexturePayloadDataFromBuffer
                        (this_01,&local_1c8,&local_280);
    TOptional<UE::Interchange::FImportImage>::operator=(&local_248,pTVar10);
    if (local_1c8.bIsSet != false) {
      if (local_1c8.TypedValue.TextureCreatorApplicationMetadata.bIsSet != false) {
        if (local_1c8.TypedValue.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.
            Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.TypedValue.TextureCreatorApplicationMetadata.TypedValue.
                        ApplicationVersion.Data.AllocatorInstance.Data);
        }
        if (local_1c8.TypedValue.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
            AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.TypedValue.TextureCreatorApplicationMetadata.TypedValue.
                        ApplicationName.Data.AllocatorInstance.Data);
        }
        if (local_1c8.TypedValue.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data
            .AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.TypedValue.TextureCreatorApplicationMetadata.TypedValue.
                        ApplicationVendor.Data.AllocatorInstance.Data);
        }
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1c8.TypedValue.RawData.Owner);
    }
    pFVar13 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&this_01->_padding_ + 4));
    FUObjectItem::ClearRootFlags(pFVar13,Async);
    local_298.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)local_280.AllocatorInstance.Data;
LAB_14e6c94d1:
    pwVar15 = L"";
    if (local_298.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_298.TypedValue.Data.AllocatorInstance.Data);
    }
    if ((local_2b8.ArrayNum == 2) && (local_248.bIsSet != false)) {
      if (*(int *)(local_2b8.AllocatorInstance.Data + 0x18) != 0) {
        pwVar15 = *(wchar_t **)(local_2b8.AllocatorInstance.Data + 0x10);
      }
      bVar6 = FToBoolHelper::FromCStringWide(pwVar15);
      if ((local_248.bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar5)();
        return pTVar10;
      }
      local_248.TypedValue.CompressionSettings = (TextureCompressionSettings)bVar6;
    }
    __return_storage_ptr__->bIsSet = local_248.bIsSet;
    if ((local_248.bIsSet != false) &&
       (UE::Interchange::FImportImage::FImportImage
                  (&__return_storage_ptr__->TypedValue,&local_248.TypedValue),
       local_248.bIsSet != false)) {
      if (local_248.TypedValue.TextureCreatorApplicationMetadata.bIsSet != false) {
        if (local_248.TypedValue.TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.
            Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.TypedValue.TextureCreatorApplicationMetadata.TypedValue.
                        ApplicationVersion.Data.AllocatorInstance.Data);
        }
        if (local_248.TypedValue.TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
            AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.TypedValue.TextureCreatorApplicationMetadata.TypedValue.
                        ApplicationName.Data.AllocatorInstance.Data);
        }
        if (local_248.TypedValue.TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.Data
            .AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.TypedValue.TextureCreatorApplicationMetadata.TypedValue.
                        ApplicationVendor.Data.AllocatorInstance.Data);
        }
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_248.TypedValue.RawData.Owner);
    }
  }
  else {
    FPaths::ConvertRelativePathToFull(&local_298.TypedValue,(FString *)(lVar2 + 0x28));
    local_260.Object = *(FAnalyticsHelper **)&this[-1].NodeUidMap.field_0x40;
    local_260.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&this[-1].NodeUidMap.field_0x48;
    if (local_260.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_260.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_260.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::Interchange::Private::FScopedTranslator::FScopedTranslator
              ((FScopedTranslator *)&local_2a8.ObjectPtr,&local_298.TypedValue,
               *(UInterchangeResultsContainer **)&this[-1].NodeUidMap.field_0x30,&local_260);
    this_00 = local_2a8;
    if (local_2a8.DebugPtr != (UInterchangeTranslatorBase *)0x0) {
      pUVar12 = Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
      plVar14 = UObjectBaseUtility::GetInterfaceAddress
                          ((UObjectBaseUtility *)this_00.DebugPtr,pUVar12);
      if (plVar14 != (longlong *)0x0) {
        if (&local_298 != &param_2->field0_0x0) {
          pFVar4 = (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          _Src_00 = local_298.TypedValue.Data.AllocatorInstance.Data;
          piVar1 = (int *)((longlong)&param_2->field0_0x0 + 0xc);
          (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(int *)((longlong)&param_2->field0_0x0 + 8) = local_298.TypedValue.Data.ArrayNum;
          if (local_298.TypedValue.Data.ArrayNum == 0) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_298.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_2,
                       local_298.TypedValue.Data.ArrayNum,piVar1);
            memcpy((param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src_00,
                   (longlong)local_298.TypedValue.Data.ArrayNum * 2);
          }
          if ((*piVar1 == -1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x171,
                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar5)();
            return pTVar10;
          }
        }
        pTVar10 = (TOptional<UE::Interchange::FImportImage> *)
                  (**(code **)(*plVar14 + 0x10))(plVar14,local_150,local_268,param_2);
        TOptional<UE::Interchange::FImportImage>::operator=(&local_248,pTVar10);
        if (local_e0 != '\0') {
          if (local_e8 != '\0') {
            if (local_f8 != (void *)0x0) {
              FMemory::Free(local_f8);
            }
            if (local_108 != (void *)0x0) {
              FMemory::Free(local_108);
            }
            if (local_118 != (void *)0x0) {
              FMemory::Free(local_118);
            }
          }
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_148);
        }
        if (pUStack_2a0 != (UObjectBaseUtility *)0x0) {
          pFVar13 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)(&pUStack_2a0->field_0x8 + 4));
          FUObjectItem::ClearRootFlags(pFVar13,Async);
        }
        if (this_00.DebugPtr != (UInterchangeTranslatorBase *)0x0) {
          pFVar13 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)((longlong)&(this_00.DebugPtr)->_padding_ + 4)
                              );
          FUObjectItem::ClearRootFlags(pFVar13,Async);
        }
        local_2a8.DebugPtr = (UInterchangeTranslatorBase *)0x0;
        pUStack_2a0 = (UObjectBaseUtility *)0x0;
        goto LAB_14e6c94d1;
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5163310495276467192>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfTranslator.cpp"
                       ,0x3f8,"TextureTranslator");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar5)();
      return pTVar10;
    }
    __return_storage_ptr__->bIsSet = local_248.bIsSet;
    if (local_248.bIsSet != false) {
      UE::Interchange::FImportImage::FImportImage
                (&__return_storage_ptr__->TypedValue,&local_248.TypedValue);
    }
    if (pUStack_2a0 != (UObjectBaseUtility *)0x0) {
      UObjectBaseUtility::ClearInternalFlags(pUStack_2a0,Async);
    }
    if (this_00.DebugPtr != (UInterchangeTranslatorBase *)0x0) {
      UObjectBaseUtility::ClearInternalFlags((UObjectBaseUtility *)this_00.DebugPtr,Async);
    }
    if (local_298.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_298.TypedValue.Data.AllocatorInstance.Data);
    }
    if (local_248.bIsSet != false) {
      UE::Interchange::FImportImage::~FImportImage(&local_248.TypedValue);
    }
  }
  DestructItems<FString,int>((FString *)local_2b8.AllocatorInstance.Data,local_2b8.ArrayNum);
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTranslatorType @ 14e6c9b00

EInterchangeTranslatorType __thiscall
UInterchangeGLTFTranslator::GetTranslatorType(UInterchangeGLTFTranslator *this)

{
  return Scenes;
}

// GetVariantSetPayloadData @ 14e6c9b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeGLTFTranslator::GetVariantSetPayloadData
          (UInterchangeGLTFTranslator *this,FVariantSetPayloadData *param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  void *_Src;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  int iVar16;
  ForAnyElementType FVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ForElementType<unsigned_int> FVar25;
  ulonglong uVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_248 [32];
  undefined1 local_208 [8];
  longlong local_200;
  UInterchangeGLTFTranslator *local_1f8;
  uint local_1f0;
  uint uStack_1ec;
  ForElementType<unsigned_int> FStack_1e8;
  undefined4 local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  int *local_1d0;
  FVariantSetPayloadData *local_1c8;
  longlong local_1c0;
  undefined4 local_1b8;
  int local_1b4;
  TPairInitializer<wchar_t_const_*_&&,UE::Interchange::FVariant_*_&&> local_1b0;
  FScriptContainerElement *local_1a0;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_190;
  FVariant ***local_170;
  FScriptContainerElement **local_168;
  undefined1 local_158 [32];
  ForElementType<unsigned_int> local_138;
  uint local_130;
  int local_12c;
  int local_128;
  int local_124;
  FScriptContainerElement local_120 [8];
  ForAnyElementType local_118;
  uint local_110;
  code *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong *plStack_e0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong *plStack_b0;
  UInterchangeGLTFTranslator *local_a8;
  undefined1 local_a0 [72];
  undefined4 local_58;
  code **local_50;
  ulonglong local_48;
  
  FVar2 = (ForElementType<unsigned_int>)((longlong)local_158 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  uVar19 = (this->GltfAsset).Variants.ArrayNum;
  piVar1 = &(param_1->Variants).ArrayNum;
  iVar16 = *piVar1;
  local_1f8 = this;
  local_1d0 = piVar1;
  local_1c8 = param_1;
  if (iVar16 < (int)uVar19) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,uVar19 - iVar16,(ForAnyElementType *)param_1,piVar1,
                        &(param_1->Variants).ArrayMax);
    DefaultConstructItems<UE::Interchange::FVariant,int>
              ((param_1->Variants).AllocatorInstance.Data + (longlong)iVar12 * 0x20,uVar19 - iVar16)
    ;
  }
  else {
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if ((int)uVar19 < iVar16) {
      uVar20 = iVar16 - uVar19;
      if (((int)(uVar20 | uVar19) < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      if (uVar20 != 0) {
        TArray<UE::Interchange::FVariant,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&param_1->Variants,uVar19,uVar20);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,(ForAnyElementType *)param_1,*piVar1,&(param_1->Variants).ArrayMax);
      }
    }
  }
  uVar19 = (this->GltfAsset).Variants.ArrayNum;
  uVar26 = 0;
  local_158._0_8_ = (FScriptContainerElement *)0x0;
  local_158._8_8_ = 0;
  local_138 = (ForElementType<unsigned_int>)0x0;
  local_130 = 0;
  local_12c = 0x80;
  local_128 = -1;
  local_124 = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  if (uVar19 == 0) goto LAB_14e6c9efd;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_158,uVar19);
  if (uVar19 < 4) {
    uVar19 = 1;
  }
  else {
    uVar23 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_1b8 = (undefined4)lVar21;
    uVar19 = 1 << ((byte)lVar21 & 0x1f);
  }
  if ((local_110 != 0) && ((int)uVar19 <= (int)local_110)) goto LAB_14e6c9efd;
  local_110 = uVar19;
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_118,0,0,4);
  }
  if (uVar19 != 0) {
    uVar20 = uVar19;
    if (uVar19 < 2) {
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        uVar20 = 0;
        goto LAB_14e6c9d54;
      }
    }
    else {
LAB_14e6c9d54:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_118,0,uVar20,4);
    }
    if (0 < (int)uVar19) {
      uVar24 = (ulonglong)uVar19;
      uVar23 = uVar26;
      do {
        FVar17.Data = local_120;
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_118.Data;
        }
        uVar13 = (longlong)(int)uVar19 - 1U & uVar23;
        uVar23 = uVar23 + 1;
        *(undefined4 *)(FVar17.Data + uVar13 * 4) = 0xffffffff;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  if (local_110 != 0) {
    local_1f0 = 0;
    uStack_1ec = 1;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uVar23 = uVar26;
    if (local_130 != 0) {
      FVar25 = FVar2;
      if (local_138 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = local_138;
      }
      uVar19 = *(uint *)FVar25;
      uVar24 = uVar26;
      while (uVar19 == 0) {
        uStack_1d8 = (int)uVar24 + 0x20;
        uVar24 = (ulonglong)uStack_1d8;
        iVar16 = (int)uVar23;
        local_1f0 = iVar16 + 1;
        uVar23 = (ulonglong)local_1f0;
        if ((int)((local_130 - 1) + ((int)(local_130 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1f0)
        goto LAB_14e6c9e60;
        uVar19 = ((uint *)((longlong)FVar25 + 4))[iVar16];
      }
      uStack_1ec = -uVar19 & uVar19;
      uVar23 = (ulonglong)uStack_1ec * 2 + 1;
      lVar21 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_1b4 = (int)lVar21;
      uStack_1dc = local_1b4 + -1 + uStack_1d8;
      uVar23 = (ulonglong)uStack_1dc;
      if ((int)local_130 < (int)uStack_1dc) {
LAB_14e6c9e60:
        uVar23 = (ulonglong)local_130;
        uStack_1dc = local_130;
      }
    }
    local_1e0 = 0xffffffff;
    local_198 = (longlong *)local_158;
    local_190._padding_ = CONCAT44(uStack_1ec,local_1f0);
    local_190.CurrentBitIndex = uStack_1dc;
    local_190.UnvisitedBitMask = 0xffffffff;
    local_190._28_4_ = uStack_1d4;
    local_190.BaseBitIndex = uStack_1d8;
    FStack_1e8 = FVar2;
    local_190.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
    if ((int)uVar23 < (int)local_130) {
      do {
        iVar16 = (int)uVar23;
        lVar21 = *local_198 + (longlong)iVar16 * 0x18;
        uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>
                           (*(wchar_t **)(*local_198 + (longlong)iVar16 * 0x18));
        uVar19 = local_110 - 1 & uVar19;
        *(uint *)(lVar21 + 0x14) = uVar19;
        FVar17.Data = local_120;
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_118.Data;
        }
        uVar23 = (longlong)(int)local_110 - 1U & (longlong)(int)uVar19;
        *(undefined4 *)(lVar21 + 0x10) = *(undefined4 *)(FVar17.Data + uVar23 * 4);
        *(int *)(FVar17.Data + uVar23 * 4) = iVar16;
        local_190.UnvisitedBitMask = local_190.UnvisitedBitMask & ~local_190._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_190);
        uVar23 = (ulonglong)(uint)local_190.CurrentBitIndex;
      } while (local_190.CurrentBitIndex < (int)*(uint *)((longlong)local_190.Array + 0x18));
    }
  }
LAB_14e6c9efd:
  iVar16 = (this->GltfAsset).Variants.ArrayNum;
  if (0 < iVar16) {
    local_200 = 0;
    local_1c0 = 0;
    uVar23 = uVar26;
    do {
      lVar5 = local_1c0;
      lVar21 = local_200;
      uVar27 = (uint)uVar23;
      uVar20 = ~uVar27 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar27 < iVar16) {
        uVar19 = uVar20;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      pFVar28 = (this->GltfAsset).Variants.AllocatorInstance.Data + lVar5;
      uVar19 = 0;
      if ((int)uVar27 < *local_1d0) {
        uVar19 = uVar20;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      pFVar22 = (local_1c8->Variants).AllocatorInstance.Data + uVar26;
      if (pFVar22 != pFVar28) {
        iVar16 = *(int *)&pFVar28[8].field_0x0;
        pFVar4 = pFVar22 + 0xc;
        _Src = *(void **)&pFVar28->field_0x0;
        iVar12 = *(int *)pFVar4;
        *(int *)&pFVar22[8].field_0x0 = iVar16;
        if ((iVar16 == 0) && (iVar12 == 0)) {
          *(int *)pFVar4 = 0;
          lVar21 = local_200;
          this = local_1f8;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar16,iVar12,(ForAnyElementType *)pFVar22,iVar16,(int *)pFVar4);
          lVar21 = local_200;
          this = local_1f8;
          if (iVar16 != 0) {
            memcpy(*(void **)&pFVar22->field_0x0,_Src,(longlong)iVar16 * 2);
            lVar21 = local_200;
            this = local_1f8;
          }
        }
      }
      uVar19 = 0;
      if ((int)uVar27 < *local_1d0) {
        uVar19 = uVar20;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      local_1a0 = (local_1c8->Variants).AllocatorInstance.Data + uVar26;
      if (*(int *)&pFVar28[8].field_0x0 == 0) {
        local_1b0.Value = (FVariant **)0x15060d16c;
      }
      else {
        local_1b0.Value = *(FVariant ***)&pFVar28->field_0x0;
      }
      local_170 = &local_1b0.Value;
      local_168 = &local_1a0;
      TSet<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<wchar_t_const_*_&&,UE::Interchange::FVariant_*_&&>_>
                ((TSet<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>,FDefaultSetAllocator>
                  *)local_158,&local_1b0,(bool *)&local_170);
      local_200 = lVar21 + 1;
      iVar16 = (this->GltfAsset).Variants.ArrayNum;
      local_1c0 = local_1c0 + 0x10;
      uVar23 = (ulonglong)(uVar27 + 1);
      uVar26 = uVar26 + 0x20;
    } while ((int)(uVar27 + 1) < iVar16);
  }
  local_108 = (code *)0x0;
  plStack_e0 = (longlong *)0x0;
  local_a8 = this;
  TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_>
  ::
  TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_>
            ((TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_>
              *)local_a0,
             (TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_>
              *)local_158);
  local_50 = &local_108;
  local_d8 = (code *)0x0;
  plVar14 = FMemory::Malloc(0x68,8);
  *plVar14 = (longlong)
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`UInterchangeGLTFTranslator::GetVariantSetPayloadData'::`2'::<lambda_1>,0,1>
              ::_vftable_;
  plVar14[1] = (longlong)local_a8;
  plStack_b0 = plVar14;
  TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_>
  ::
  TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_>
            ((TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_>
              *)(plVar14 + 2),
             (TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_>
              *)local_a0);
  plVar18 = plStack_e0;
  uVar9 = uStack_ec;
  uVar8 = uStack_f0;
  uVar7 = uStack_f4;
  uVar6 = local_f8;
  uVar15 = uStack_100;
  pcVar3 = local_108;
  plVar14[0xc] = (longlong)local_50;
  if (plVar14 + 1 != (longlong *)0x0) {
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGLTFTranslator::GetVariantSetPayloadData'::__l2::<lambda_1>,void,TArray<int,TSizedDefaultAllocator<32>_>_const_&>
               ::Call;
  }
  local_108 = local_d8;
  uStack_100 = uStack_d0;
  local_e8 = local_b8;
  uStack_e4 = uStack_b4;
  plStack_e0 = plStack_b0;
  local_f8 = local_c8;
  uStack_f4 = uStack_c4;
  uStack_f0 = uStack_c0;
  uStack_ec = uStack_bc;
  local_d8 = pcVar3;
  uStack_d0 = uVar15;
  local_c8 = uVar6;
  uStack_c4 = uVar7;
  uStack_c0 = uVar8;
  uStack_bc = uVar9;
  plStack_b0 = plVar18;
  if (pcVar3 != (code *)0x0) {
    plVar14 = (longlong *)&local_c8;
    if (plVar18 != (longlong *)0x0) {
      plVar14 = plVar18;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  local_58 = 0;
  if ((void *)local_a0._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a0._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a0);
  iVar16 = (this->GltfAsset).Scenes.ArrayNum;
  pFVar28 = (this->GltfAsset).Scenes.AllocatorInstance.Data;
  pFVar22 = pFVar28 + (longlong)iVar16 * 0x80;
  while( true ) {
    if ((this->GltfAsset).Scenes.ArrayNum != iVar16) {
      `TCheckedPointerIterator<GLTF::FScene_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_208);
    }
    if (pFVar28 == pFVar22) break;
    UE::Core::Private::Function::CheckCallable(local_108);
    pcVar3 = local_108;
    plVar18 = (longlong *)&local_f8;
    if (plStack_e0 != (longlong *)0x0) {
      plVar18 = plStack_e0;
    }
    uVar15 = (**(code **)(*plVar18 + 8))();
    (*pcVar3)(uVar15,pFVar28 + 0x10);
    pFVar28 = pFVar28 + 0x80;
  }
  if (local_108 != (code *)0x0) {
    plVar18 = (longlong *)&local_f8;
    if (plStack_e0 != (longlong *)0x0) {
      plVar18 = plStack_e0;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  local_110 = 0;
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_158);
  return true;
}

// GetVariantSetPayloadData @ 14e6ca300

TOptional<UE::Interchange::FVariantSetPayloadData> * __thiscall
UInterchangeGLTFTranslator::GetVariantSetPayloadData
          (UInterchangeGLTFTranslator *this,
          TOptional<UE::Interchange::FVariantSetPayloadData> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  TOptional<UE::Interchange::FVariantSetPayloadData> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FVariantSetPayloadData local_38;
  
  uVar8 = 0;
  __return_storage_ptr__->bIsSet = false;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  iVar3 = ::FString::ParseIntoArray(param_1,&local_48,L";",true);
  iVar5 = (this->GltfAsset).Skins.ArrayNum;
  if (iVar5 + 1 == iVar3) {
    uVar7 = 0;
    uVar10 = uVar8;
    if (0 < iVar5) {
      do {
        uVar9 = (uint)uVar8;
        uVar4 = uVar7;
        if ((int)uVar9 < iVar5) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TOptional<UE::Interchange::FVariantSetPayloadData> *)(*pcVar1)();
          return pTVar6;
        }
        pFVar11 = (this->GltfAsset).Skins.AllocatorInstance.Data + uVar10;
        uVar4 = uVar7;
        if ((int)(uVar9 + 1) < local_48.ArrayNum) {
          uVar4 = ~(uVar9 + 1) >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TOptional<UE::Interchange::FVariantSetPayloadData> *)(*pcVar1)();
          return pTVar6;
        }
        iVar5 = *(int *)(pFVar11 + 8);
        iVar3 = *(int *)(local_48.AllocatorInstance.Data + uVar10 + 0x10 + 8);
        if (iVar3 == iVar5) {
          if (1 < iVar3) {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(local_48.AllocatorInstance.Data + uVar10 + 0x10),
                               *(wchar_t **)pFVar11);
            bVar2 = iVar5 == 0;
            goto LAB_14e6ca468;
          }
        }
        else {
          bVar2 = iVar3 + iVar5 == 1;
LAB_14e6ca468:
          if (!bVar2) goto LAB_14e6ca506;
        }
        iVar5 = (this->GltfAsset).Skins.ArrayNum;
        uVar8 = (ulonglong)(uVar9 + 1);
        uVar10 = uVar10 + 0x10;
      } while ((int)(uVar9 + 1) < iVar5);
    }
    local_38.Variants.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Variants.ArrayNum = 0;
    local_38.Variants.ArrayMax = 0;
    bVar2 = GetVariantSetPayloadData
                      ((UInterchangeGLTFTranslator *)
                       &this[-1].GltfAsset.UncompressedDracoBinData.ArrayNum,&local_38);
    if ((bVar2) &&
       ((TOptional<UE::Interchange::FVariantSetPayloadData> *)&local_38 != __return_storage_ptr__))
    {
      if (__return_storage_ptr__->bIsSet != false) {
        DestructItems<UE::Interchange::FVariant,int>
                  ((FVariant *)(__return_storage_ptr__->TypedValue).Variants.AllocatorInstance.Data,
                   (__return_storage_ptr__->TypedValue).Variants.ArrayNum);
        pFVar11 = (__return_storage_ptr__->TypedValue).Variants.AllocatorInstance.Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
      }
      (__return_storage_ptr__->TypedValue).Variants.AllocatorInstance.Data =
           local_38.Variants.AllocatorInstance.Data;
      (__return_storage_ptr__->TypedValue).Variants.ArrayNum = local_38.Variants.ArrayNum;
      (__return_storage_ptr__->TypedValue).Variants.ArrayMax = local_38.Variants.ArrayMax;
      __return_storage_ptr__->bIsSet = true;
      local_38.Variants.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Variants.ArrayNum = 0;
      local_38.Variants.ArrayMax = 0;
    }
    else {
      uVar7 = local_38.Variants.ArrayNum;
    }
    DestructItems<UE::Interchange::FVariant,int>
              ((FVariant *)local_38.Variants.AllocatorInstance.Data,uVar7);
    if ((FVariant *)local_38.Variants.AllocatorInstance.Data != (FVariant *)0x0) {
      FMemory::Free(local_38.Variants.AllocatorInstance.Data);
    }
LAB_14e6ca506:
    DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// HandleGltfMesh @ 14e6ca5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeMeshNode * __thiscall
UInterchangeGLTFTranslator::HandleGltfMesh
          (UInterchangeGLTFTranslator *this,UInterchangeBaseNodeContainer *param_1,FMesh *param_2,
          int param_3,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4,
          FString *param_5,FString *param_6)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar1
  ;
  undefined1 *puVar2;
  FString *pFVar3;
  uint uVar4;
  undefined1 *puVar5;
  void *pvVar6;
  code *pcVar7;
  UInterchangeGLTFTranslator *pUVar8;
  UInterchangeBaseNodeContainer *this_00;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar9
  ;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  UInterchangeMeshNode *pUVar13;
  UClass *pUVar14;
  UInterchangeBaseNode *pUVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  undefined1 *puVar24;
  FScriptContainerElement *pFVar25;
  uint *puVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_3d8 [32];
  undefined1 local_398;
  undefined1 local_397;
  undefined1 local_396;
  undefined1 local_395;
  undefined1 local_394 [4];
  uint local_390;
  uint local_38c;
  UInterchangeMeshNode *local_388;
  FString local_380;
  ulonglong local_370;
  uint local_368 [2];
  FString local_360;
  UInterchangeGLTFTranslator *local_350;
  FString local_348;
  FString local_338;
  FScriptContainerElement *local_328;
  uint uStack_320;
  uint uStack_31c;
  TBitArray<FDefaultBitArrayAllocator> *local_318;
  undefined4 uStack_310;
  uint uStack_30c;
  uint local_308;
  undefined4 uStack_304;
  int iStack_300;
  undefined4 uStack_2fc;
  FString local_2f8;
  TOptional<FString>_u_0 local_2e8;
  TOptional<FString>_u_0 local_2d8;
  int local_2c8;
  int local_2c4;
  FMesh *local_2c0;
  FScriptContainerElement *local_2b8;
  undefined8 local_2b0;
  UInterchangeBaseNodeContainer *local_2a8;
  int local_2a0;
  FString local_298;
  int local_288;
  FScriptContainerElement *local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_278;
  undefined8 uStack_258;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_248;
  undefined8 uStack_228;
  FString local_220;
  FString local_210;
  FString local_200;
  wchar_t *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  wchar_t *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128 [2];
  undefined4 local_fc;
  undefined4 local_dc;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  iVar17 = (param_5->Data).ArrayNum;
  if ((iVar17 == 0) || (iVar17 == 1)) {
    param_5 = &param_2->Name;
  }
  local_338.Data.ArrayNum = (((FMesh *)param_5)->Name).Data.ArrayNum;
  lVar18 = (longlong)local_338.Data.ArrayNum;
  pFVar27 = (((FMesh *)param_5)->Name).Data.AllocatorInstance.Data;
  local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38c = param_3;
  local_350 = this;
  local_2c0 = param_2;
  local_2a8 = param_1;
  if (local_338.Data.ArrayNum == 0) {
    local_338.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_338.Data.ArrayNum,0,(ForAnyElementType *)&local_338,local_338.Data.ArrayNum
               ,&local_338.Data.ArrayMax);
    memcpy(local_338.Data.AllocatorInstance.Data,pFVar27,lVar18 * 2);
  }
  iVar17 = (param_6->Data).ArrayNum;
  if ((iVar17 == 0) || (iVar17 == 1)) {
    param_6 = &param_2->UniqueId;
  }
  ::FString::ConcatCF(&local_298,L"\\Mesh\\",param_6);
  pUVar13 = (UInterchangeMeshNode *)UInterchangeBaseNodeContainer::GetNode(param_1,&local_298);
  if (pUVar13 != (UInterchangeMeshNode *)0x0) {
    pUVar14 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
    iVar17 = (int)pUVar14->_padding_;
    if ((iVar17 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
        &pUVar14->_padding_)) goto LAB_14e6cb42a;
  }
  local_368[0] = local_38c;
  if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              (param_4,local_38c,(int *)local_368);
  }
  pUVar13 = NewObject<UInterchangeMeshNode>((UObject *)param_1);
  local_388 = pUVar13;
  ::FString::FString(&local_148,L"");
  UInterchangeBaseNodeContainer::SetupNode
            (param_1,(UInterchangeBaseNode *)pUVar13,&local_298,&local_338,TranslatedAsset,
             &local_148);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  iVar17 = (param_2->Primitives).ArrayNum;
  uVar22 = (ulonglong)iVar17;
  local_2b8 = (param_2->Primitives).AllocatorInstance.Data;
  local_390 = 0;
  local_370 = CONCAT44(local_370._4_4_,iVar17);
  local_2b0 = 1;
  pFVar27 = local_2b8 + 0x58;
  local_2b8 = local_2b8 + uVar22 * 0xa0;
  while( true ) {
    pFVar25 = local_2b8;
    uVar19 = 0;
    uVar11 = (uint)local_2b0;
    if ((param_2->Primitives).ArrayNum != (int)uVar22) {
      local_398 = 0;
      `TCheckedPointerIterator<GLTF::FPrimitive_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_398);
    }
    uVar21 = 0;
    if (pFVar27 + -0x58 == pFVar25) break;
    local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.Data.ArrayNum = 0;
    local_2f8.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_2f8,local_390);
    ::FString::ConcatCF(&local_220,L"Primitive[",&local_2f8);
    ::FString::ConcatFC(&local_200,&local_220,L"]_");
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    uVar12 = *(uint *)pFVar27;
    uStack_30c = uVar21;
    local_308 = uVar21;
    if (uVar12 != 0) {
      pFVar25 = *(FScriptContainerElement **)(pFVar27 + -8);
      if (pFVar25 == (FScriptContainerElement *)0x0) {
        pFVar25 = pFVar27 + -0x18;
      }
      uVar4 = *(uint *)pFVar25;
      uVar21 = uVar19;
      local_308 = uVar19;
      while (uVar4 == 0) {
        uVar21 = uVar21 + 1;
        local_308 = local_308 + 0x20;
        uStack_30c = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
        goto LAB_14e6ca8c0;
        uVar4 = *(uint *)(pFVar25 + (longlong)(int)uVar21 * 4);
      }
      uVar11 = -uVar4 & uVar4;
      uVar22 = (ulonglong)uVar11 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_2a0 = (int)lVar18;
      uStack_30c = (local_308 - 1) + local_2a0;
      if ((int)uVar12 < (int)uStack_30c) {
        uStack_30c = uVar12;
      }
    }
LAB_14e6ca8c0:
    local_328 = pFVar27 + -0x28;
    local_318 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar27 + -0x18);
    uStack_304 = local_fc;
    iStack_300 = *(uint *)(pFVar27 + -0x20) - *(uint *)(pFVar27 + 0xc);
    uVar19 = uVar12 & 0xffffffe0;
    TStack_278._padding_ = CONCAT44(uVar11,uVar21);
    uStack_310 = 0xffffffff;
    TStack_278.CurrentBitIndex = uStack_30c;
    TStack_278.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar12 >> 5;
    TStack_278._28_4_ = local_fc;
    TStack_278.BaseBitIndex = local_308;
    uStack_258 = CONCAT44(uStack_2fc,iStack_300);
    uStack_320 = uVar21;
    uStack_31c = uVar11;
    local_280 = local_328;
    TStack_278.Array = local_318;
    if (((int)uVar12 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pUVar13 = (UInterchangeMeshNode *)(*pcVar7)();
      return pUVar13;
    }
    pUVar13 = local_388;
    uVar11 = *(uint *)pFVar27;
    if (uVar12 != uVar11) {
      pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar27 + -0x18);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar27 + -8) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar27 + -8);
      }
      uVar21 = -1 << ((byte)uVar12 & 0x1f) &
               *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
      while (uVar21 == 0) {
        iVar17 = iVar17 + 1;
        uVar19 = uVar19 + 0x20;
        uVar12 = uVar11;
        if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar17)
        goto LAB_14e6ca9bb;
        uVar21 = *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
      }
      uVar22 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_288 = (int)lVar18;
      uVar12 = local_288 + -1 + uVar19;
      if ((int)uVar11 < (int)uVar12) {
        uVar12 = uVar11;
      }
    }
LAB_14e6ca9bb:
    while( true ) {
      pFVar25 = local_280;
      if (*(uint *)(local_280 + 8) - *(uint *)(local_280 + 0x34) != (int)uStack_258) {
        local_397 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_397);
      }
      if (((TStack_278.CurrentBitIndex == uVar12) &&
          (TStack_278.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar27 + -0x18))) &&
         (pFVar25 == pFVar27 + -0x28)) break;
      local_2e8.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_2e8.TypedValue.Data.ArrayNum = 0;
      local_2e8.TypedValue.Data.ArrayMax = -1;
      pFVar3 = (FString *)(*(longlong *)pFVar25 + (longlong)TStack_278.CurrentBitIndex * 0x28);
      ::FString::ConcatFF(&local_210,&local_200,pFVar3);
      UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FString>
                ((UInterchangeBaseNode *)pUVar13,&local_210,pFVar3 + 1,
                 (TOptional<FString> *)&local_2e8.TypedValue,false);
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      if ((local_2e8.TypedValue.Data.ArrayMax != -1) &&
         (local_2e8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_2e8.TypedValue.Data.AllocatorInstance.Data);
      }
      TStack_278.UnvisitedBitMask = TStack_278.UnvisitedBitMask & ~TStack_278._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_278);
    }
    local_390 = local_390 + 1;
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    pFVar27 = pFVar27 + 0xa0;
    uVar22 = local_370 & 0xffffffff;
    param_2 = local_2c0;
  }
  pTVar1 = &param_2->Extras;
  uVar12 = *(uint *)&(param_2->Extras).field_0x28;
  local_318 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Extras).field_0x10;
  uStack_30c = uVar21;
  local_308 = uVar19;
  if (uVar12 != 0) {
    puVar26 = *(uint **)&(param_2->Extras).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)local_318;
    }
    uVar4 = *puVar26;
    uVar21 = uVar19;
    while (uVar4 == 0) {
      uVar21 = uVar21 + 1;
      local_308 = local_308 + 0x20;
      uStack_30c = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
      goto LAB_14e6cab4f;
      uVar4 = puVar26[(int)uVar21];
    }
    uVar11 = ~(uVar4 - 1) & uVar4;
    uVar22 = (ulonglong)uVar11 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_2c8 = (int)lVar18;
    uStack_30c = (local_308 - 1) + local_2c8;
    if ((int)uVar12 < (int)uStack_30c) {
      uStack_30c = uVar12;
    }
  }
LAB_14e6cab4f:
  uVar19 = *(uint *)&(param_2->Extras).field_0x28;
  puVar2 = &(param_2->Extras).field_0x10;
  uStack_304 = local_dc;
  iStack_300 = *(int *)&(param_2->Extras).field_0x8 - *(int *)&(param_2->Extras).field_0x34;
  uVar12 = uVar19 & 0xffffffe0;
  uStack_310 = 0xffffffff;
  TStack_248._padding_ = CONCAT44(uVar11,uVar21);
  TStack_248.CurrentBitIndex = uStack_30c;
  TStack_248.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar19 >> 5;
  TStack_248._28_4_ = local_dc;
  TStack_248.BaseBitIndex = local_308;
  uStack_228 = CONCAT44(uStack_2fc,iStack_300);
  local_328 = (FScriptContainerElement *)pTVar1;
  uStack_320 = uVar21;
  uStack_31c = uVar11;
  local_250 = pTVar1;
  TStack_248.Array = local_318;
  if ((((int)uVar19 < 0) || (*(int *)&(param_2->Extras).field_0x28 < (int)uVar19)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pUVar13 = (UInterchangeMeshNode *)(*pcVar7)();
    return pUVar13;
  }
  pUVar13 = local_388;
  uVar11 = *(uint *)&(param_2->Extras).field_0x28;
  if (uVar19 != uVar11) {
    puVar5 = *(undefined1 **)&(param_2->Extras).field_0x20;
    puVar24 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar24 = puVar5;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar17 * 4);
    while (uVar19 == 0) {
      iVar17 = iVar17 + 1;
      uVar12 = uVar12 + 0x20;
      uVar19 = uVar11;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar17)
      goto LAB_14e6cac50;
      uVar19 = *(uint *)(puVar24 + (longlong)iVar17 * 4);
    }
    uVar22 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_2c4 = (int)lVar18;
    uVar19 = local_2c4 + -1 + uVar12;
    if ((int)uVar11 < (int)uVar19) {
      uVar19 = uVar11;
    }
  }
LAB_14e6cac50:
  uVar11 = 0;
  lVar18 = 0;
  while( true ) {
    pTVar9 = local_250;
    if (*(int *)&local_250->field_0x8 - *(int *)&local_250->field_0x34 != (int)uStack_228) {
      local_396 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_396);
    }
    if (((TStack_248.CurrentBitIndex == uVar19) &&
        (TStack_248.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar9 == pTVar1))
    break;
    local_2d8.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_2d8.TypedValue.Data.ArrayNum = 0;
    local_2d8.TypedValue.Data.ArrayMax = -1;
    pFVar3 = (FString *)(*(longlong *)pTVar9 + (longlong)TStack_248.CurrentBitIndex * 0x28);
    UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FString>
              ((UInterchangeBaseNode *)pUVar13,pFVar3,pFVar3 + 1,
               (TOptional<FString> *)&local_2d8.TypedValue,false);
    if ((local_2d8.TypedValue.Data.ArrayMax != -1) &&
       (local_2d8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_2d8.TypedValue.Data.AllocatorInstance.Data);
    }
    TStack_248.UnvisitedBitMask = TStack_248.UnvisitedBitMask & ~TStack_248._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_248);
  }
  ::FString::PrintfImpl(&local_158,L"%d");
  local_395 = 1;
  (**(code **)(pUVar13->_padding_ + 0x300))(pUVar13,&local_158,&local_395);
  if (0 < (param_2->Primitives).ArrayNum) {
    do {
      uVar19 = 0;
      if ((int)uVar11 < (param_2->Primitives).ArrayNum) {
        uVar19 = ~uVar11 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pUVar13 = (UInterchangeMeshNode *)(*pcVar7)();
        return pUVar13;
      }
      pUVar8 = local_350;
      pFVar27 = (param_2->Primitives).AllocatorInstance.Data;
      iVar17 = *(int *)(pFVar27 + lVar18 + 0x1c);
      if ((-1 < iVar17) && (pUVar13 = local_388, iVar17 < (local_350->GltfAsset).Materials.ArrayNum)
         ) {
        pFVar25 = (local_350->GltfAsset).Materials.AllocatorInstance.Data;
        local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_360.Data.ArrayNum = *(int *)(pFVar25 + (longlong)iVar17 * 0x370 + 8);
        lVar20 = (longlong)local_360.Data.ArrayNum;
        pvVar6 = *(void **)(pFVar25 + (longlong)iVar17 * 0x370);
        if (local_360.Data.ArrayNum == 0) {
          local_360.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_360.Data.ArrayNum,0,(ForAnyElementType *)&local_360,
                     local_360.Data.ArrayNum,&local_360.Data.ArrayMax);
          memcpy(local_360.Data.AllocatorInstance.Data,pvVar6,lVar20 * 2);
        }
        uVar19 = *(uint *)(pFVar27 + lVar18 + 0x1c);
        uVar21 = 0;
        if ((int)uVar19 < (pUVar8->GltfAsset).Materials.ArrayNum) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          pUVar13 = (UInterchangeMeshNode *)(*pcVar7)();
          return pUVar13;
        }
        pFVar27 = (pUVar8->GltfAsset).Materials.AllocatorInstance.Data;
        local_1e8 = *(wchar_t **)(pFVar27 + (longlong)(int)uVar19 * 0x370 + 0x360);
        iVar17 = *(int *)(pFVar27 + (longlong)(int)uVar19 * 0x370 + 0x368);
        iStack_1e0 = iVar17 + -1;
        if (iVar17 == 0) {
          iStack_1e0 = 0;
        }
        local_138._12_4_ = uStack_1dc;
        local_138.Size = iStack_1e0;
        local_138.DataPtr = local_1e8;
        UInterchangeShaderGraphNode::MakeNodeUid(&local_1d8,&local_138);
        pUVar13 = local_388;
        UInterchangeMeshNode::SetSlotMaterialDependencyUid(local_388,&local_360,&local_1d8);
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_360.Data.AllocatorInstance.Data);
        }
      }
      uVar11 = uVar11 + 1;
      lVar18 = lVar18 + 0xa0;
    } while ((int)uVar11 < (param_2->Primitives).ArrayNum);
  }
  if (0 < (param_2->MorphTargetNames).ArrayNum) {
    local_390 = 0;
    local_370 = 0;
    do {
      uVar22 = local_370;
      uVar11 = local_390;
      uVar19 = 0;
      if ((int)local_390 < (param_2->MorphTargetNames).ArrayNum) {
        uVar19 = ~local_390 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pUVar13 = (UInterchangeMeshNode *)(*pcVar7)();
        return pUVar13;
      }
      pFVar27 = (param_2->MorphTargetNames).AllocatorInstance.Data;
      local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.Data.ArrayNum = *(int *)(pFVar27 + uVar22 + 8);
      lVar18 = (longlong)local_380.Data.ArrayNum;
      pvVar6 = *(void **)(pFVar27 + uVar22);
      if (local_380.Data.ArrayNum == 0) {
        local_380.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_380.Data.ArrayNum,0,(ForAnyElementType *)&local_380,
                   local_380.Data.ArrayNum,&local_380.Data.ArrayMax);
        memcpy(local_380.Data.AllocatorInstance.Data,pvVar6,lVar18 * 2);
      }
      UInterchangeMeshNode::SetMorphTargetDependencyUid(pUVar13,&local_380);
      this_00 = local_2a8;
      pUVar15 = UInterchangeBaseNodeContainer::GetNode(local_2a8,&local_380);
      if (pUVar15 == (UInterchangeBaseNode *)0x0) {
LAB_14e6cb049:
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this_00,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar14 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_d8,pUVar14);
        local_d8._8_8_ = this_00;
        pUVar13 = (UInterchangeMeshNode *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
        if (local_d8._64_8_ != 0) {
          plVar16 = (longlong *)(local_d8 + 0x50);
          if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
            plVar16 = (longlong *)local_d8._104_8_;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        ::FString::FString(&local_1c8,L"");
        UInterchangeBaseNodeContainer::SetupNode
                  (this_00,(UInterchangeBaseNode *)pUVar13,&local_380,&local_380,TranslatedAsset,
                   &local_1c8);
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl(&local_198,L"%d");
        ::FString::PrintfImpl(&local_1a8,L"%d");
        ::FString::ConcatFC(&local_1b8,&local_1a8,L":");
        ::FString::ConcatFF(&local_168,&local_1b8,&local_198);
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        local_394[0] = 3;
        (**(code **)(pUVar13->_padding_ + 0x300))(pUVar13,&local_168,local_394);
        UInterchangeMeshNode::SetMorphTarget(pUVar13,true);
        UInterchangeMeshNode::SetMorphTargetName(pUVar13,&local_380);
        uVar19 = 0;
        if (0 < (param_2->Primitives).ArrayNum) {
          lVar18 = 0;
          do {
            uVar11 = 0;
            if ((int)uVar19 < (param_2->Primitives).ArrayNum) {
              uVar11 = ~uVar19 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              pUVar13 = (UInterchangeMeshNode *)(*pcVar7)();
              return pUVar13;
            }
            pUVar8 = local_350;
            pFVar27 = (param_2->Primitives).AllocatorInstance.Data;
            iVar17 = *(int *)(pFVar27 + lVar18 + 0x1c);
            if ((-1 < iVar17) && (iVar17 < (local_350->GltfAsset).Materials.ArrayNum)) {
              if (((local_350->GltfAsset).Materials.ArrayNum <= iVar17) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                pUVar13 = (UInterchangeMeshNode *)(*pcVar7)();
                return pUVar13;
              }
              pFVar25 = (pUVar8->GltfAsset).Materials.AllocatorInstance.Data;
              local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_348.Data.ArrayNum = *(int *)(pFVar25 + (longlong)iVar17 * 0x370 + 8);
              lVar20 = (longlong)local_348.Data.ArrayNum;
              pvVar6 = *(void **)(pFVar25 + (longlong)iVar17 * 0x370);
              if (local_348.Data.ArrayNum == 0) {
                local_348.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_348.Data.ArrayNum,0,(ForAnyElementType *)&local_348,
                           local_348.Data.ArrayNum,&local_348.Data.ArrayMax);
                memcpy(local_348.Data.AllocatorInstance.Data,pvVar6,lVar20 * 2);
              }
              pUVar8 = local_350;
              uVar11 = *(uint *)(pFVar27 + lVar18 + 0x1c);
              uVar21 = 0;
              if ((int)uVar11 < (local_350->GltfAsset).Materials.ArrayNum) {
                uVar21 = ~uVar11 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                pUVar13 = (UInterchangeMeshNode *)(*pcVar7)();
                return pUVar13;
              }
              pFVar27 = (pUVar8->GltfAsset).Materials.AllocatorInstance.Data;
              local_188 = *(wchar_t **)(pFVar27 + (longlong)(int)uVar11 * 0x370 + 0x360);
              iVar17 = *(int *)(pFVar27 + (longlong)(int)uVar11 * 0x370 + 0x368);
              iStack_180 = iVar17 + -1;
              if (iVar17 == 0) {
                iStack_180 = 0;
              }
              local_128[0]._12_4_ = uStack_17c;
              local_128[0].Size = iStack_180;
              local_128[0].DataPtr = local_188;
              UInterchangeShaderGraphNode::MakeNodeUid(&local_178,local_128);
              UInterchangeMeshNode::SetSlotMaterialDependencyUid(pUVar13,&local_348,&local_178);
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
              if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_348.Data.AllocatorInstance.Data);
              }
            }
            uVar19 = uVar19 + 1;
            lVar18 = lVar18 + 0xa0;
            uVar22 = local_370;
            uVar11 = local_390;
          } while ((int)uVar19 < (param_2->Primitives).ArrayNum);
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        pUVar13 = local_388;
        if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.Data.AllocatorInstance.Data);
          pUVar13 = local_388;
        }
      }
      else {
        pUVar14 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
        iVar17 = (int)pUVar14->_padding_;
        if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar17) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
            &pUVar14->_padding_)) goto LAB_14e6cb049;
        if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.Data.AllocatorInstance.Data);
        }
      }
      local_390 = uVar11 + 1;
      local_370 = uVar22 + 0x10;
    } while ((int)local_390 < (param_2->MorphTargetNames).ArrayNum);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
LAB_14e6cb42a:
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  return pUVar13;
}

// HandleGltfNode @ 14e6cb480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangeGLTFTranslator::HandleGltfNode
          (UInterchangeGLTFTranslator *this,UInterchangeBaseNodeContainer *param_1,FNode *param_2,
          FString *param_3,int param_4,bool *param_5,
          TArray<int,TSizedDefaultAllocator<32>_> *param_6,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_7,
          TMap<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
          *param_8,FString *param_9)

{
  FLightInstanceIES *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  EType EVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  UInterchangeBaseNodeContainer *pUVar18;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar19;
  undefined8 uVar20;
  bool bVar21;
  int iVar22;
  UInterchangeBaseNode *pUVar23;
  UInterchangeSceneNode *this_00;
  TQuat<double> *pTVar24;
  UInterchangeLightNode *this_01;
  FString *pFVar25;
  UInterchangePointLightNode *this_02;
  UInterchangeMeshNode *this_03;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  TTransform<double> *pTVar27;
  byte bVar28;
  undefined1 *puVar29;
  int iVar30;
  ulonglong uVar31;
  UInterchangeGLTFTranslator *this_04;
  uint uVar32;
  ulonglong uVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  uint uVar36;
  TBitArray<FDefaultBitArrayAllocator> *pTVar38;
  uint *puVar39;
  FScriptContainerElement *pFVar40;
  uint uVar41;
  longlong lVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStackY_588 [32];
  undefined1 local_534;
  EInterchangeNodeContainerType local_533 [2];
  EInterchangeLightUnits local_531 [9];
  TBitArray<FDefaultBitArrayAllocator> *local_528;
  UInterchangeBaseNodeContainer *local_520;
  FNode *local_518;
  bool *local_510;
  FScriptContainerElement *local_508;
  FString local_500;
  FScriptContainerElement *local_4f0;
  UInterchangeGLTFTranslator *local_4e8;
  FString local_4e0;
  FString local_4d0;
  TMap<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
  *local_4c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_4b8;
  undefined8 local_4b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_4a8;
  TOptional<FString>_u_0 local_4a0;
  TOptional<FString>_u_0 local_490;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_480;
  undefined8 uStack_460;
  int local_458;
  undefined4 uStack_454;
  FString local_450;
  FString local_440;
  FString local_430;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_420;
  TQuat<double> local_3f8;
  uint local_3d8;
  undefined4 uStack_3d4;
  int iStack_3d0;
  undefined4 uStack_3cc;
  int local_3c8;
  FNode *local_3c0;
  int local_3b8;
  undefined1 local_3b4 [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3a0;
  undefined8 uStack_380;
  FScriptContainerElement *local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_370;
  undefined8 uStack_350;
  FNode *local_348;
  FString *local_340;
  UInterchangeBaseNodeContainer *local_338;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FNode **local_280;
  FString *local_278;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  TRotator<double> local_210;
  TRotator<double> local_1f8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  undefined4 local_1ac;
  TQuat<double> local_1a8;
  FMD5Hash local_188;
  TTransform<double> local_168;
  FMD5 local_108;
  ulonglong local_a8;
  ulonglong uVar37;
  
  pFVar25 = param_9;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_588;
  local_510 = param_5;
  local_4a8 = param_6;
  local_4b8 = param_7;
  local_4c0 = param_8;
  local_3b4._4_8_ = param_9;
  local_520 = param_1;
  local_518 = param_2;
  local_4e8 = this;
  ::FString::ConcatFC(&local_290,param_3,L"\\");
  ::FString::ConcatFF(&local_430,&local_290,&param_2->UniqueId);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  pUVar23 = UInterchangeBaseNodeContainer::GetNode(param_1,param_3);
  if (pUVar23 != (UInterchangeBaseNode *)0x0) {
    Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
  }
  this_00 = NewObject<UInterchangeSceneNode>((UObject *)param_1);
  if (param_2->Type == MeshSkinned) {
    param_3 = pFVar25;
  }
  uVar31 = 0;
  uVar36 = 0;
  local_500.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500.Data.ArrayNum = (param_3->Data).ArrayNum;
  lVar42 = (longlong)local_500.Data.ArrayNum;
  pFVar40 = (param_3->Data).AllocatorInstance.Data;
  uVar32 = 0;
  if (local_500.Data.ArrayNum == 0) {
    local_500.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_500.Data.ArrayNum,0,(ForAnyElementType *)&local_500,local_500.Data.ArrayNum
               ,&local_500.Data.ArrayMax);
    memcpy(local_500.Data.AllocatorInstance.Data,pFVar40,lVar42 * 2);
  }
  UInterchangeBaseNodeContainer::SetupNode
            (param_1,(UInterchangeBaseNode *)this_00,&local_430,&param_2->Name,TranslatedScene,
             &local_500);
  (**(code **)(this_00->_padding_ + 0x2e0))(this_00,&param_2->UniqueId);
  local_3f8.X = (double)&param_2->Extras;
  uVar41 = *(uint *)&(param_2->Extras).field_0x28;
  local_528 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Extras).field_0x10;
  local_3f8.Y._4_4_ = 1;
  iVar22 = 0;
  local_3f8.Y._0_4_ = uVar32;
  local_3f8.W._4_4_ = uVar32;
  if (uVar41 != 0) {
    puVar39 = *(uint **)&(param_2->Extras).field_0x20;
    if (puVar39 == (uint *)0x0) {
      puVar39 = (uint *)local_528;
    }
    uVar35 = *puVar39;
    uVar33 = uVar31;
    uVar37 = uVar31;
    local_3f8.Y._0_4_ = 0;
    uVar36 = 0;
    while (uVar35 == 0) {
      local_3f8.Y._0_4_ = (int)uVar33 + 1;
      uVar33 = (ulonglong)local_3f8.Y._0_4_;
      uVar36 = (int)uVar37 + 0x20;
      uVar37 = (ulonglong)uVar36;
      local_3f8.W._4_4_ = uVar41;
      if ((int)((uVar41 - 1) + ((int)(uVar41 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_3f8.Y._0_4_)
      goto LAB_14e6cb692;
      uVar35 = puVar39[(int)local_3f8.Y._0_4_];
    }
    local_3f8.Y._4_4_ = -uVar35 & uVar35;
    uVar33 = (ulonglong)local_3f8.Y._4_4_ * 2 + 1;
    lVar42 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar42 == 0; lVar42 = lVar42 + -1) {
      }
    }
    local_3b8 = (int)lVar42;
    local_3f8.W._4_4_ = local_3b8 + -1 + uVar36;
    if ((int)uVar41 < (int)local_3f8.W._4_4_) {
      local_3f8.W._4_4_ = uVar41;
    }
LAB_14e6cb692:
    iVar22 = *(int *)&(param_2->Extras).field_0x28;
  }
  uStack_3d4 = local_1ac;
  iStack_3d0 = *(int *)&(param_2->Extras).field_0x8 - *(int *)&(param_2->Extras).field_0x34;
  local_3f8.W._0_4_ = 0xffffffff;
  uVar41 = *(uint *)&(param_2->Extras).field_0x28;
  TStack_3a0._padding_ = CONCAT44(local_3f8.Y._4_4_,local_3f8.Y._0_4_);
  TStack_3a0.CurrentBitIndex = local_3f8.W._4_4_;
  TStack_3a0.UnvisitedBitMask = 0xffffffff;
  uVar35 = uVar41 & 0xffffffe0;
  iVar30 = (int)uVar41 >> 5;
  TStack_3a0._28_4_ = local_1ac;
  TStack_3a0.BaseBitIndex = uVar36;
  uStack_380 = CONCAT44(uStack_3cc,iStack_3d0);
  local_3f8.Z = (double)local_528;
  local_3d8 = uVar36;
  local_3b4._12_8_ = local_3f8.X;
  TStack_3a0.Array = local_528;
  if ((((int)uVar41 < 0) || (iVar22 < (int)uVar41)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar21)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar26 = local_528;
  uVar36 = local_528->NumBits;
  if (uVar41 != uVar36) {
    pTVar5 = *(TBitArray<FDefaultBitArrayAllocator> **)
              &(local_528->AllocatorInstance).SecondaryData.field_0x0;
    pTVar38 = local_528;
    if (pTVar5 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar38 = pTVar5;
    }
    uVar41 = -1 << ((byte)uVar41 & 0x1f) &
             *(uint *)((longlong)(pTVar38->AllocatorInstance).InlineData + (longlong)iVar30 * 4);
    while (uVar41 == 0) {
      iVar30 = iVar30 + 1;
      uVar35 = uVar35 + 0x20;
      uVar41 = uVar36;
      if ((int)(((int)(uVar36 - 1) >> 0x1f & 0x1fU) + (uVar36 - 1)) >> 5 < iVar30)
      goto LAB_14e6cb7d7;
      uVar41 = *(uint *)((longlong)(pTVar38->AllocatorInstance).InlineData + (longlong)iVar30 * 4);
    }
    uVar33 = (ulonglong)(-uVar41 & uVar41) * 2 + 1;
    lVar42 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar42 == 0; lVar42 = lVar42 + -1) {
      }
    }
    local_3c8 = (int)lVar42;
    uVar41 = (uVar35 - 1) + local_3c8;
    if ((int)uVar36 < (int)uVar41) {
      uVar41 = uVar36;
    }
  }
LAB_14e6cb7d7:
  while( true ) {
    uVar20 = local_3b4._12_8_;
    if (*(int *)(local_3b4._12_8_ + 8) - *(int *)(local_3b4._12_8_ + 0x34) != (int)uStack_380) {
      local_534 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_534);
    }
    this_04 = local_4e8;
    if (((TStack_3a0.CurrentBitIndex == uVar41) && (TStack_3a0.Array == pTVar26)) &&
       ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
         *)uVar20 == &param_2->Extras)) break;
    local_4a0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_4a0.TypedValue.Data.ArrayNum = 0;
    local_4a0.TypedValue.Data.ArrayMax = -1;
    pFVar25 = (FString *)(*(longlong *)uVar20 + (longlong)TStack_3a0.CurrentBitIndex * 0x28);
    UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FString>
              ((UInterchangeBaseNode *)this_00,pFVar25,pFVar25 + 1,
               (TOptional<FString> *)&local_4a0.TypedValue,false);
    if ((local_4a0.TypedValue.Data.ArrayMax != -1) &&
       (local_4a0.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_4a0.TypedValue.Data.AllocatorInstance.Data);
    }
    TStack_3a0.UnvisitedBitMask = TStack_3a0.UnvisitedBitMask & ~TStack_3a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3a0);
  }
  local_280 = &local_3c0;
  local_278 = &local_430;
  local_3c0 = param_2;
  TSet<TTuple<GLTF::FNode_const_*,FString>,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<GLTF::FNode_const_*_&&,FString_const_&>_>
            ((TSet<TTuple<GLTF::FNode_const_*,FString>,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>,FDefaultSetAllocator>
              *)&local_4e8->NodeUidMap,
             (TPairInitializer<GLTF::FNode_const_*_&&,FString_const_&> *)local_3b4,
             (bool *)&local_280);
  pTVar19 = local_4a8;
  local_1d0 = (param_2->Transform).Translation.ZW.m128d_f64[0];
  EVar4 = param_2->Type;
  local_168.Rotation.XY.m128d_f64 = *&(param_2->Transform).Rotation.XY.m128d_f64;
  local_168.Scale3D.XY.m128d_f64[0] = (param_2->Transform).Scale3D.XY.m128d_f64[0];
  local_168.Scale3D.XY.m128d_f64[1] = (param_2->Transform).Scale3D.XY.m128d_f64[1];
  local_168.Rotation.ZW.m128d_f64 = *&(param_2->Transform).Rotation.ZW.m128d_f64;
  local_168.Translation.ZW.m128d_f64[1] = 0.0;
  local_1e0 = (param_2->Transform).Translation.XY.m128d_f64[0];
  dStack_1d8 = (param_2->Transform).Translation.XY.m128d_f64[1];
  local_168.Scale3D.ZW.m128d_f64[0] = (param_2->Transform).Scale3D.ZW.m128d_f64[0];
  local_168.Scale3D.ZW.m128d_f64[1] = (param_2->Transform).Scale3D.ZW.m128d_f64[1];
  local_168.Translation.XY.m128d_f64[0] = local_1e0;
  local_168.Translation.XY.m128d_f64[1] = dStack_1d8;
  local_168.Translation.ZW.m128d_f64[0] = local_1d0;
  if (EVar4 == Joint) {
    pFVar25 = UE::Interchange::FSceneNodeStaticData::GetJointSpecializeTypeString();
    UInterchangeSceneNode::AddSpecializedType(this_00,pFVar25);
    pUVar18 = local_520;
    if (param_2->bHasLocalBindPose != false) {
      UInterchangeSceneNode::SetCustomBindPoseLocalTransform
                (this_00,local_520,&param_2->LocalBindPose,true);
    }
    if (((this_04->GltfAsset).Animations.ArrayNum != 0) &&
       (uVar36 = param_2->Index, *(int *)&local_4c0->field_0x8 != *(int *)&local_4c0->field_0x34)) {
      puVar29 = *(undefined1 **)&local_4c0->field_0x40;
      if (*(undefined1 **)&local_4c0->field_0x40 == (undefined1 *)0x0) {
        puVar29 = &local_4c0->field_0x38;
      }
      iVar22 = *(int *)(puVar29 + (ulonglong)(*(int *)&local_4c0->field_0x48 - 1U & uVar36) * 4);
      if (iVar22 != -1) {
        do {
          if (*(uint *)((longlong)iVar22 * 0x80 + *(longlong *)local_4c0) == uVar36) {
            pTVar27 = TMapBase<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
                      ::FindChecked((TMapBase<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
                                     *)local_4c0,uVar36);
            goto LAB_14e6ccd9d;
          }
          iVar22 = *(int *)((longlong)iVar22 * 0x80 + 0x70 + *(longlong *)local_4c0);
        } while (iVar22 != -1);
      }
    }
    pTVar27 = &param_2->Transform;
LAB_14e6ccd9d:
    UInterchangeSceneNode::SetCustomTimeZeroLocalTransform(this_00,pUVar18,pTVar27,true);
  }
  else {
    uVar36 = 0;
    if (EVar4 == Mesh) {
      if ((-1 < param_2->MeshIndex) && (param_2->MeshIndex < (this_04->GltfAsset).Meshes.ArrayNum))
      {
        ::FString::FString(&local_2a0,"");
        ::FString::FString(&local_2b0,"");
        uVar32 = param_2->MeshIndex;
        uVar41 = uVar36;
        if ((int)uVar32 < (this_04->GltfAsset).Meshes.ArrayNum) {
          uVar41 = ~uVar32 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_03 = HandleGltfMesh(this_04,local_520,
                                 (FMesh *)((this_04->GltfAsset).Meshes.AllocatorInstance.Data +
                                          (longlong)(int)uVar32 * 0xa8),uVar32,local_4b8,&local_2b0,
                                 &local_2a0);
        if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
        }
        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
        }
        pFVar25 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_03,&local_230);
        UInterchangeSceneNode::SetCustomAssetInstanceUid(this_00,pFVar25);
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
        uVar32 = param_2->MeshIndex;
        uVar41 = uVar36;
        if ((int)uVar32 < (this_04->GltfAsset).Meshes.ArrayNum) {
          uVar41 = ~uVar32 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (0 < *(int *)((this_04->GltfAsset).Meshes.AllocatorInstance.Data +
                        (longlong)(int)uVar32 * 0xa8 + 0x38)) {
          uVar32 = param_2->MeshIndex;
          uVar41 = uVar36;
          if ((int)uVar32 < (this_04->GltfAsset).Meshes.ArrayNum) {
            uVar41 = ~uVar32 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_4f0 = (this_04->GltfAsset).Meshes.AllocatorInstance.Data;
          local_508 = (FScriptContainerElement *)((longlong)(int)uVar32 * 0xa8);
          iVar22 = *(int *)(local_508 + 0x38 + (longlong)local_4f0);
          if ((param_2->MorphTargetWeights).ArrayNum < 1) {
            uVar32 = param_2->MeshIndex;
            if ((int)uVar32 < (this_04->GltfAsset).Meshes.ArrayNum) {
              uVar36 = ~uVar32 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)
                      ((this_04->GltfAsset).Meshes.AllocatorInstance.Data +
                      (longlong)(int)uVar32 * 0xa8 + 0x20);
          }
          else {
            pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->MorphTargetWeights;
          }
          pFVar34 = local_4f0;
          pFVar40 = local_508;
          local_528 = pTVar26;
          if (*(int *)((longlong)(pTVar26->AllocatorInstance).InlineData + 8) == iVar22) {
            uVar33 = uVar31;
            uVar37 = uVar31;
            if (0 < iVar22) {
              do {
                iVar30 = (int)uVar31;
                if ((*(int *)((longlong)(pTVar26->AllocatorInstance).InlineData + 8) <= iVar30) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_4f0 = *(FScriptContainerElement **)(pTVar26->AllocatorInstance).InlineData +
                            uVar37 * 4;
                if ((*(int *)(pFVar40 + 0x38 + (longlong)pFVar34) <= iVar30) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                UInterchangeSceneNode::SetMorphTargetCurveWeight
                          (this_00,(FString *)
                                   (*(longlong *)(pFVar40 + 0x30 + (longlong)pFVar34) + uVar33),
                           (float *)local_4f0);
                uVar31 = (ulonglong)(iVar30 + 1U);
                this_04 = local_4e8;
                uVar33 = uVar33 + 0x10;
                param_2 = local_518;
                uVar37 = uVar37 + 1;
              } while ((int)(iVar30 + 1U) < iVar22);
            }
          }
          else if (2 < (byte)LogInterchangeImport._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
          }
        }
        if ((*local_510 == false) && (iVar22 = (this_04->GltfAsset).Variants.ArrayNum, 0 < iVar22))
        {
          iVar30 = (this_04->GltfAsset).Materials.ArrayNum;
          uVar36 = param_2->MeshIndex;
          uVar32 = 0;
          if ((int)uVar36 < (this_04->GltfAsset).Meshes.ArrayNum) {
            uVar32 = ~uVar36 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar21 = UE::Interchange::Gltf::Private::CheckForVariants
                             ((FMesh *)((this_04->GltfAsset).Meshes.AllocatorInstance.Data +
                                       (longlong)(int)uVar36 * 0xa8),iVar22,iVar30);
          *local_510 = bVar21;
        }
      }
    }
    else if (EVar4 == MeshSkinned) {
      pFVar40 = (local_4a8->AllocatorInstance).Data;
      if (((pFVar40 <= (FScriptContainerElement *)&param_4) &&
          ((FScriptContainerElement *)&param_4 < pFVar40 + (longlong)local_4a8->ArrayMax * 4)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar22 = pTVar19->ArrayNum;
      if (iVar22 == pTVar19->ArrayMax) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar19->AllocatorInstance,&pTVar19->ArrayMax);
      }
      pTVar19->ArrayNum = iVar22 + 1;
      *(int *)((pTVar19->AllocatorInstance).Data + (longlong)iVar22 * 4) = param_4;
      if ((param_2->ParentIndex != -1) && (2 < (byte)LogInterchangeImport._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
      }
      if ((*local_510 == false) && (iVar22 = (this_04->GltfAsset).Variants.ArrayNum, 0 < iVar22)) {
        uVar32 = param_2->MeshIndex;
        iVar30 = (this_04->GltfAsset).Materials.ArrayNum;
        uVar41 = uVar36;
        if ((int)uVar32 < (this_04->GltfAsset).Meshes.ArrayNum) {
          uVar41 = ~uVar32 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar21 = UE::Interchange::Gltf::Private::CheckForVariants
                           ((FMesh *)((this_04->GltfAsset).Meshes.AllocatorInstance.Data +
                                     (longlong)(int)uVar32 * 0xa8),iVar22,iVar30);
        *local_510 = bVar21;
      }
      uVar32 = param_2->MeshIndex;
      uVar41 = uVar36;
      if ((int)uVar32 < (this_04->GltfAsset).Meshes.ArrayNum) {
        uVar41 = ~uVar32 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_508 = (this_04->GltfAsset).Meshes.AllocatorInstance.Data;
      local_528 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)(int)uVar32 * 0xa8);
      iVar22 = *(int *)((longlong)&local_528[1].NumBits + (longlong)local_508);
      if ((param_2->MorphTargetWeights).ArrayNum < 1) {
        uVar32 = param_2->MeshIndex;
        if ((int)uVar32 < (this_04->GltfAsset).Meshes.ArrayNum) {
          uVar36 = ~uVar32 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar40 = (this_04->GltfAsset).Meshes.AllocatorInstance.Data +
                  (longlong)(int)uVar32 * 0xa8 + 0x20;
      }
      else {
        pFVar40 = (FScriptContainerElement *)&param_2->MorphTargetWeights;
      }
      pFVar34 = local_508;
      pTVar26 = local_528;
      if (*(int *)(pFVar40 + 8) == iVar22) {
        uVar33 = uVar31;
        uVar37 = uVar31;
        if (0 < iVar22) {
          do {
            iVar30 = (int)uVar33;
            if ((*(int *)(pFVar40 + 8) <= iVar30) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_508 = ((ForAnyElementType *)&pFVar40->field_0x0)->Data + uVar31 * 4;
            if ((*(int *)((longlong)&pTVar26[1].NumBits + (longlong)pFVar34) <= iVar30) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            UInterchangeSceneNode::SetMorphTargetCurveWeight
                      (this_00,(FString *)
                               (*(longlong *)
                                 (&pTVar26[1].AllocatorInstance.SecondaryData.field_0x0 +
                                 (longlong)pFVar34) + uVar37),(float *)local_508);
            uVar31 = uVar31 + 1;
            this_04 = local_4e8;
            uVar33 = (ulonglong)(iVar30 + 1U);
            param_2 = local_518;
            uVar37 = uVar37 + 0x10;
          } while ((int)(iVar30 + 1U) < iVar22);
        }
      }
      else if (2 < (byte)LogInterchangeImport._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
      }
    }
    else if (EVar4 == Camera) {
      local_1f8.Pitch = ___xmm_c0568000000000000000000000000000;
      local_1f8.Yaw = _UNK_152242e68;
      local_1f8.Roll = 0.0;
      pTVar24 = UE::Math::TRotator<double>::Quaternion(&local_1f8,&local_3f8);
      iVar22 = param_2->CameraIndex;
      dVar12 = pTVar24->Z;
      dVar13 = pTVar24->W;
      uVar2 = pTVar24->X;
      uVar3 = pTVar24->Y;
      dVar10 = local_168.Rotation.ZW.m128d_f64[1];
      auVar45._8_4_ = local_168.Rotation.ZW.m128d_f64[1]._0_4_;
      auVar45._0_8_ = dVar10;
      auVar45._12_4_ = local_168.Rotation.ZW.m128d_f64[1]._4_4_;
      dVar9 = local_168.Rotation.ZW.m128d_f64[0];
      dVar7 = dVar12 * local_168.Rotation.XY.m128d_f64[1];
      auVar46._8_4_ = (int)uVar2;
      auVar46._0_8_ = uVar3;
      auVar46._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
      dVar11 = (double)uVar2 * local_168.Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar10 * dVar13 +
               (double)uVar3 * local_168.Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar8 = dVar12 * local_168.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              auVar45._8_8_ * (double)uVar3 +
              dVar13 * local_168.Rotation.XY.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              auVar46._8_8_ * dVar9 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_168.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
      local_168.Rotation.ZW.m128d_f64[0] =
           (double)uVar3 * local_168.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar10 * dVar12 +
           (double)uVar2 * local_168.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar13 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_168.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
      local_168.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
      local_168.Rotation.XY.m128d_f64[0] =
           dVar13 * local_168.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar10 * (double)uVar2
           + dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           (double)uVar3 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_168.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
      if ((-1 < iVar22) && (iVar22 < (this_04->GltfAsset).Cameras.ArrayNum)) {
        if (((this_04->GltfAsset).Cameras.ArrayNum <= iVar22) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        ::FString::ConcatCF(&local_2c0,L"\\Camera\\",
                            (FString *)
                            ((this_04->GltfAsset).Cameras.AllocatorInstance.Data +
                            (longlong)iVar22 * 0x90 + 0x80));
        uVar32 = param_2->CameraIndex;
        uVar41 = uVar36;
        if ((int)uVar32 < (this_04->GltfAsset).Cameras.ArrayNum) {
          uVar41 = ~uVar32 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        ::FString::ConcatFC(&local_2d0,
                            (FString *)
                            ((this_04->GltfAsset).Cameras.AllocatorInstance.Data +
                            (longlong)(int)uVar32 * 0x90 + 8),L"_");
        UInterchangeSceneNode::SetCustomAssetInstanceUid(this_00,&local_2c0);
        uVar32 = param_2->CameraIndex;
        if ((int)uVar32 < (this_04->GltfAsset).Cameras.ArrayNum) {
          uVar36 = ~uVar32 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar40 = (this_04->GltfAsset).Cameras.AllocatorInstance.Data +
                  (longlong)(int)uVar32 * 0x90 + 0x30;
        local_420._padding_._0_4_ = 0;
        local_420._padding_._4_4_ = 1;
        local_420.UnvisitedBitMask = 0xffffffff;
        local_420.CurrentBitIndex = 0;
        local_420.BaseBitIndex = 0;
        pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar40 + 0x10);
        local_420.Array = pTVar26;
        if (*(int *)(pFVar40 + 0x28) != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_420);
        }
        iVar22 = *(int *)(pFVar40 + 0x28);
        TStack_370._padding_ = CONCAT44(local_420._padding_._4_4_,(undefined4)local_420._padding_);
        bVar28 = (byte)iVar22 & 0x1f;
        local_458 = *(int *)(pFVar40 + 8) - *(int *)(pFVar40 + 0x34);
        TStack_370.CurrentBitIndex = local_420.CurrentBitIndex;
        TStack_370.UnvisitedBitMask = local_420.UnvisitedBitMask;
        uStack_460._4_4_ = local_420._28_4_;
        uStack_460._0_4_ = local_420.BaseBitIndex;
        local_480._padding_ = CONCAT44(1 << bVar28,iVar22 >> 5);
        local_480.CurrentBitIndex = iVar22;
        local_480.UnvisitedBitMask = -1 << bVar28;
        local_480._24_8_ = CONCAT44(local_420.CurrentBitIndex,iVar22) & 0xffffffffffffffe0;
        uStack_350 = CONCAT44(uStack_454,local_458);
        TStack_370.Array = local_420.Array;
        local_480.Array = pTVar26;
        local_378 = pFVar40;
        TStack_370._24_8_ = uStack_460;
        if ((iVar22 < 0) || (iVar30 = *(int *)(pFVar40 + 0x28), iVar30 < iVar22)) {
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L"");
          if (bVar21) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar30 = *(int *)(pFVar40 + 0x28);
        }
        if (iVar22 != iVar30) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_480);
          pTVar26 = local_480.Array;
        }
        iVar22 = local_480.CurrentBitIndex;
        while( true ) {
          pFVar34 = local_378;
          if (*(int *)(local_378 + 8) - *(int *)(local_378 + 0x34) != (int)uStack_350) {
            local_531[1] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_531 + 1);
          }
          param_2 = local_518;
          if (((TStack_370.CurrentBitIndex == iVar22) && (TStack_370.Array == pTVar26)) &&
             (pFVar34 == pFVar40)) break;
          local_490.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_490.TypedValue.Data.ArrayNum = 0;
          local_490.TypedValue.Data.ArrayMax = -1;
          pFVar25 = (FString *)(*(longlong *)pFVar34 + (longlong)TStack_370.CurrentBitIndex * 0x28);
          ::FString::ConcatFF(&local_2e0,&local_2d0,pFVar25);
          UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FString>
                    ((UInterchangeBaseNode *)this_00,&local_2e0,pFVar25 + 1,
                     (TOptional<FString> *)&local_490.TypedValue,false);
          if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
          }
          if ((local_490.TypedValue.Data.ArrayMax != -1) &&
             (local_490.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_490.TypedValue.Data.AllocatorInstance.Data);
          }
          TStack_370.UnvisitedBitMask = TStack_370.UnvisitedBitMask & ~TStack_370._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_370);
        }
        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
        }
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (EVar4 == Light) {
      local_210.Pitch = ___xmm_c0568000000000000000000000000000;
      local_210.Yaw = _UNK_152242e68;
      local_210.Roll = 0.0;
      pTVar24 = UE::Math::TRotator<double>::Quaternion(&local_210,&local_1a8);
      pFVar1 = &param_2->LightIES;
      dVar14 = pTVar24->Z;
      dVar15 = pTVar24->W;
      dVar16 = pTVar24->X;
      dVar17 = pTVar24->Y;
      dVar13 = local_168.Rotation.ZW.m128d_f64[1];
      auVar43._8_4_ = local_168.Rotation.ZW.m128d_f64[1]._0_4_;
      auVar43._0_8_ = dVar13;
      auVar43._12_4_ = local_168.Rotation.ZW.m128d_f64[1]._4_4_;
      dVar12 = local_168.Rotation.ZW.m128d_f64[0];
      dVar10 = local_168.Rotation.XY.m128d_f64[0] * dVar17;
      auVar44._8_4_ = local_168.Rotation.ZW.m128d_f64[0]._0_4_;
      auVar44._0_8_ = dVar12;
      auVar44._12_4_ = local_168.Rotation.ZW.m128d_f64[0]._4_4_;
      dVar7 = dVar14 * local_168.Rotation.XY.m128d_f64[1];
      dVar9 = dVar16 * local_168.Rotation.XY.m128d_f64[1];
      dVar8 = dVar14 * local_168.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              auVar43._8_8_ * dVar17 +
              dVar15 * local_168.Rotation.XY.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              auVar44._8_8_ * dVar16 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar11 = local_168.Rotation.XY.m128d_f64[0] * dVar16 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar13 * dVar15 +
               dVar17 * local_168.Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar14 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_168.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
      local_168.Rotation.XY.m128d_f64[0] =
           dVar15 * local_168.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar13 * dVar16 +
           dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar12 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_168.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
      local_168.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
      local_168.Rotation.ZW.m128d_f64[0] =
           dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar13 * dVar14 + dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
           + dVar15 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_168.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
      if ((pFVar1->Index < 0) || ((this_04->GltfAsset).LightsIES.ArrayNum <= pFVar1->Index)) {
        iVar22 = param_2->LightIndex;
        if ((-1 < iVar22) && (iVar22 < (this_04->GltfAsset).Lights.ArrayNum)) {
          if (((this_04->GltfAsset).Lights.ArrayNum <= iVar22) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          ::FString::ConcatCF(&local_2f0,L"\\Light\\",
                              (FString *)
                              ((this_04->GltfAsset).Lights.AllocatorInstance.Data +
                              (longlong)iVar22 * 0x58 + 0x48));
          UInterchangeSceneNode::SetCustomAssetInstanceUid(this_00,&local_2f0);
          if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        if (((param_2->LightIES).bHasIntensityMultiplier == false) &&
           ((param_2->LightIES).bHasColor == false)) {
          ::FString::FString(&local_4d0,L"");
        }
        else {
          FMD5::FMD5(&local_108);
          FMD5::Update(&local_108,(uchar *)pFVar1,4);
          FMD5::Update(&local_108,(uchar *)&(param_2->LightIES).IntensityMultipler,4);
          FMD5::Update(&local_108,(uchar *)&(param_2->LightIES).Color,0x18);
          local_188.bIsValid = false;
          FMD5::Final(&local_108,local_188.Bytes);
          local_188.bIsValid = true;
          FMD5Hash::LexToString(&local_188,&local_4e0);
          local_4d0.Data.AllocatorInstance.Data = local_4e0.Data.AllocatorInstance.Data;
          local_4d0.Data.ArrayNum = local_4e0.Data.ArrayNum;
          local_4d0.Data.ArrayMax = local_4e0.Data.ArrayMax;
          local_4e0.Data.ArrayNum = 0;
          local_4e0.Data.ArrayMax = 0;
          local_4e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FMD5::~FMD5(&local_108);
        }
        uVar41 = pFVar1->Index;
        if ((int)uVar41 < (this_04->GltfAsset).LightsIES.ArrayNum) {
          uVar32 = ~uVar41 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar32 = pFVar1->Index;
        local_518 = (FNode *)((this_04->GltfAsset).LightsIES.AllocatorInstance.Data +
                             (longlong)(int)uVar41 * 0x68);
        uVar41 = uVar36;
        if ((int)uVar32 < (this_04->GltfAsset).LightsIES.ArrayNum) {
          uVar41 = ~uVar32 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        ::FString::ConcatCF(&local_300,L"\\LightIES\\",
                            (FString *)
                            ((this_04->GltfAsset).LightsIES.AllocatorInstance.Data +
                            (longlong)(int)uVar32 * 0x68 + 0x58));
        pUVar18 = local_520;
        iVar22 = param_2->LightIndex;
        local_340 = &local_300;
        local_338 = local_520;
        local_348 = param_2;
        if ((iVar22 < 0) || ((this_04->GltfAsset).Lights.ArrayNum <= iVar22)) {
          ::FString::ConcatCF(&local_310,L"\\LightIESInstance\\LightIES-",
                              (FString *)((local_518->Transform).Scale3D.XY.m128d_f64 + 1));
          ::FString::ConcatFC(&local_320,&local_310,L"\\");
          ::FString::ConcatFF(&local_440,&local_320,&local_4d0);
          if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_320.Data.AllocatorInstance.Data);
          }
          if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_310.Data.AllocatorInstance.Data);
          }
          pUVar23 = UInterchangeBaseNodeContainer::GetNode(pUVar18,&local_440);
          if (pUVar23 == (UInterchangeBaseNode *)0x0) {
            this_02 = NewObject<UInterchangePointLightNode>((UObject *)pUVar18);
            uVar32 = pFVar1->Index;
            local_533[1] = 2;
            if ((int)uVar32 < (this_04->GltfAsset).LightsIES.ArrayNum) {
              uVar36 = ~uVar32 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            `UInterchangeGLTFTranslator::HandleGltfNode'::__l115::<lambda_1>::operator()
                      (&local_348,(UInterchangeLightNode *)this_02,&local_440,
                       (FString *)
                       ((this_04->GltfAsset).LightsIES.AllocatorInstance.Data +
                       (longlong)(int)uVar32 * 0x68 + 0x48),local_533 + 1);
            local_531[0] = Candelas;
            UInterchangeLightNode::SetCustomIntensityUnits
                      ((UInterchangeLightNode *)this_02,local_531);
            UInterchangeBaseLightNode::SetCustomIntensity
                      ((UInterchangeBaseLightNode *)this_02,__real_3f800000);
          }
          UInterchangeSceneNode::SetCustomAssetInstanceUid(this_00,&local_440);
          local_450.Data.AllocatorInstance.Data = local_440.Data.AllocatorInstance.Data;
        }
        else {
          if (((this_04->GltfAsset).Lights.ArrayNum <= iVar22) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          ::FString::ConcatCF(&local_240,L"\\LightIESInstance\\Light-",
                              (FString *)
                              ((this_04->GltfAsset).Lights.AllocatorInstance.Data +
                              (longlong)iVar22 * 0x58 + 0x48));
          ::FString::ConcatFC(&local_250,&local_240,L"_LightIES-");
          ::FString::ConcatFF(&local_260,&local_250,
                              (FString *)((local_518->Transform).Scale3D.XY.m128d_f64 + 1));
          ::FString::ConcatFC(&local_270,&local_260,L"\\");
          ::FString::ConcatFF(&local_450,&local_270,&local_4d0);
          if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_270.Data.AllocatorInstance.Data);
          }
          if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_260.Data.AllocatorInstance.Data);
          }
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
          pUVar23 = UInterchangeBaseNodeContainer::GetNode(pUVar18,&local_450);
          if (pUVar23 == (UInterchangeBaseNode *)0x0) {
            uVar32 = param_2->LightIndex;
            if ((int)uVar32 < (this_04->GltfAsset).Lights.ArrayNum) {
              uVar36 = ~uVar32 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            ::FString::ConcatCF(&local_330,L"\\Light\\",
                                (FString *)
                                ((this_04->GltfAsset).Lights.AllocatorInstance.Data +
                                (longlong)(int)uVar32 * 0x58 + 0x48));
            pUVar23 = UInterchangeBaseNodeContainer::GetNode(pUVar18,&local_330);
            if ((pUVar23 != (UInterchangeBaseNode *)0x0) &&
               (bVar21 = UObjectBaseUtility::IsA<UInterchangeLightNode>
                                   ((UObjectBaseUtility *)pUVar23), bVar21)) {
              local_4b0 = 0;
              this_01 = (UInterchangeLightNode *)
                        StaticDuplicateObject
                                  ((UObject *)pUVar23,(UObject *)pUVar18,(FName)0x0,
                                   RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                                   RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                                   RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
                                   RF_DuplicateTransient|RF_InheritableComponentTemplate|
                                   RF_LoadCompleted|RF_TextExportTransient|RF_WasLoaded|
                                   RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                                   RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects
                                   |RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
                                   RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|
                                   RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|
                                   RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public,
                                   (UClass *)0x0,Normal,
                                   PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|
                                   Native|ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|
                                   LoaderImport|AutoRTFMConstructionAborted|ReachabilityFlag2|
                                   ReachabilityFlag1|ReachabilityFlag0);
              if ((this_01 != (UInterchangeLightNode *)0x0) &&
                 (bVar21 = UObjectBaseUtility::IsA<UInterchangeLightNode>
                                     ((UObjectBaseUtility *)this_01), bVar21)) {
                local_533[0] = UInterchangeBaseNode::GetNodeContainerType
                                         ((UInterchangeBaseNode *)this_01);
                pFVar25 = UInterchangeBaseNode::GetDisplayLabel
                                    ((UInterchangeBaseNode *)this_01,&local_220);
                `UInterchangeGLTFTranslator::HandleGltfNode'::__l115::<lambda_1>::operator()
                          (&local_348,this_01,&local_450,pFVar25,local_533);
                if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_220.Data.AllocatorInstance.Data);
                }
              }
            }
            if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_330.Data.AllocatorInstance.Data);
            }
          }
          UInterchangeSceneNode::SetCustomAssetInstanceUid(this_00,&local_450);
        }
        if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_450.Data.AllocatorInstance.Data);
        }
        if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_300.Data.AllocatorInstance.Data);
        }
        if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  UInterchangeSceneNode::SetCustomLocalTransform(this_00,local_520,&local_168,false);
  pTVar19 = local_4a8;
  pFVar34 = (param_2->Children).AllocatorInstance.Data;
  iVar22 = (param_2->Children).ArrayNum;
  pFVar40 = pFVar34 + (longlong)iVar22 * 4;
  while( true ) {
    if ((param_2->Children).ArrayNum != iVar22) {
      local_531[2] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_531 + 2);
    }
    if (pFVar34 == pFVar40) break;
    iVar30 = *(int *)pFVar34;
    if ((-1 < iVar30) && (iVar30 < (this_04->GltfAsset).Nodes.ArrayNum)) {
      if (((this_04->GltfAsset).Nodes.ArrayNum <= iVar30) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      HandleGltfNode(this_04,local_520,
                     (FNode *)((this_04->GltfAsset).Nodes.AllocatorInstance.Data +
                              (longlong)iVar30 * 0x260),&local_430,iVar30,local_510,pTVar19,
                     local_4b8,local_4c0,(FString *)local_3b4._4_8_);
    }
    pFVar34 = pFVar34 + 4;
  }
  if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.Data.AllocatorInstance.Data);
  }
  if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleGltfSkeletons @ 14e6ccf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeGLTFTranslator::HandleGltfSkeletons
          (UInterchangeGLTFTranslator *this,UInterchangeBaseNodeContainer *param_1,FString *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar12;
  UInterchangeMeshNode *pUVar13;
  UInterchangeSceneNode *this_01;
  UClass *pUVar14;
  FString *pFVar15;
  byte bVar16;
  undefined1 *puVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  longlong lVar27;
  undefined1 auStackY_468 [32];
  undefined1 local_410;
  undefined1 local_40f;
  undefined1 local_40e;
  undefined1 local_40d;
  undefined1 local_40c;
  undefined1 local_40b;
  undefined1 local_40a [2];
  uint local_408;
  uint local_404;
  uint local_400;
  FScriptContainerElement *local_3f8;
  undefined8 uStack_3f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3e8;
  uint uStack_3e0;
  uint uStack_3dc;
  int iStack_3d8;
  undefined4 uStack_3d4;
  int local_3d0;
  undefined4 uStack_3cc;
  TArray<int,TSizedDefaultAllocator<32>_> *local_3c8;
  FScriptContainerElement *local_3c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b8;
  undefined8 local_398;
  uint local_390 [2];
  UInterchangeMeshNode *local_388;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_380;
  uint local_360;
  undefined4 uStack_35c;
  int iStack_358;
  undefined4 uStack_354;
  TOptional<FString>_u_0 local_350;
  FString local_340;
  UInterchangeBaseNodeContainer *local_330;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_328;
  int local_308;
  int local_304;
  int local_300;
  int local_2fc;
  int local_2f8;
  FString local_2f0;
  uint *local_2e0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2d8;
  int local_2d0;
  FScriptContainerElement *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  FScriptContainerElement *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  FScriptContainerElement *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  int iStack_240;
  undefined4 uStack_23c;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FScriptContainerElement *local_1c8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  TBitArray<FDefaultBitArrayAllocator> *local_1b8;
  undefined8 uStack_1b0;
  int iStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  FScriptContainerElement *local_198;
  longlong lStack_190;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  uint uStack_180;
  int iStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_14c;
  undefined4 local_12c;
  undefined4 local_10c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  pFVar19 = (param_3->AllocatorInstance).Data;
  iVar24 = param_3->ArrayNum;
  pFVar25 = pFVar19 + (longlong)iVar24 * 4;
  local_2d8 = param_4;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_330 = param_1;
LAB_14e6ccff0:
  if (param_3->ArrayNum != iVar24) {
    local_410 = 0;
    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_410);
  }
  if (pFVar19 == pFVar25) {
    local_328.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_328._padding_._0_4_ = 0;
    local_328._padding_._4_4_ = 1;
    local_328.UnvisitedBitMask = 0xffffffff;
    local_328.CurrentBitIndex = 0;
    local_328.BaseBitIndex = 0;
    if (local_70 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_328);
    }
    TStack_3b8._padding_ = CONCAT44(local_328._padding_._4_4_,(undefined4)local_328._padding_);
    local_3c0 = (FScriptContainerElement *)local_98;
    TStack_3b8.CurrentBitIndex = local_328.CurrentBitIndex;
    TStack_3b8.UnvisitedBitMask = local_328.UnvisitedBitMask;
    TStack_3b8._28_4_ = local_328._28_4_;
    TStack_3b8.BaseBitIndex = local_328.BaseBitIndex;
    local_398._0_4_ = local_98._8_4_ - local_64;
    TStack_3b8.Array = local_328.Array;
    TStack_260.Array = local_328.Array;
    uStack_23c = local_398._4_4_;
    local_268 = local_3c0;
    TStack_260._padding_ = TStack_3b8._padding_;
    TStack_260._16_8_ = TStack_3b8._16_8_;
    TStack_260._24_8_ = TStack_3b8._24_8_;
    iStack_240 = (int)local_398;
    pTVar12 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_108,(TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),
                         local_70);
    local_3c0 = (FScriptContainerElement *)local_98;
    TStack_3b8._padding_ = pTVar12->_padding_;
    TStack_3b8.Array = pTVar12->Array;
    TStack_3b8.UnvisitedBitMask = pTVar12->UnvisitedBitMask;
    TStack_3b8.CurrentBitIndex = pTVar12->CurrentBitIndex;
    TStack_3b8.BaseBitIndex = pTVar12->BaseBitIndex;
    TStack_3b8._28_4_ = *(undefined4 *)&pTVar12->field_0x1c;
    local_398 = CONCAT44(local_398._4_4_,local_98._8_4_ - local_64);
    uStack_1a0 = local_398;
    local_1c8 = local_3c0;
    pTStack_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)TStack_3b8._padding_;
    local_1b8 = TStack_3b8.Array;
    uStack_1b0 = TStack_3b8._16_8_;
    local_1a8 = TStack_3b8._24_8_;
    do {
      pFVar25 = local_268;
      uVar21 = 0;
      if (*(int *)(local_268 + 8) - *(int *)(local_268 + 0x34) != iStack_240) {
        local_40f = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_40f);
      }
      if (((TStack_260.CurrentBitIndex == iStack_1ac) && (TStack_260.Array == local_1b8)) &&
         (pFVar25 == local_1c8)) {
        local_50 = 0;
        if (local_58 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_58);
        }
        TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_98);
        return;
      }
      puVar20 = (uint *)((longlong)TStack_260.CurrentBitIndex * 0x60 + *(longlong *)pFVar25);
      uVar22 = puVar20[0xc];
      TStack_3b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(puVar20 + 6);
      uVar9 = 1;
      uVar10 = *puVar20;
      pFVar25 = (FScriptContainerElement *)(puVar20 + 2);
      local_380._28_4_ = uVar21;
      local_360 = uVar21;
      if (uVar22 != 0) {
        pTVar26 = TStack_3b8.Array;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar20 + 10) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar20 + 10);
        }
        uVar18 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
        while (uVar18 == 0) {
          uVar21 = uVar21 + 1;
          local_360 = local_360 + 0x20;
          local_380._28_4_ = uVar22;
          if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
          goto LAB_14e6cd50f;
          uVar18 = *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)(int)uVar21 * 4);
        }
        uVar9 = ~(uVar18 - 1) & uVar18;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        local_308 = (int)lVar27;
        local_380._28_4_ = local_308 + -1 + local_360;
        if ((int)uVar22 < (int)local_380._28_4_) {
          local_380._28_4_ = uVar22;
        }
      }
LAB_14e6cd50f:
      uStack_35c = local_14c;
      iStack_358 = puVar20[4] - puVar20[0xf];
      uVar18 = puVar20[0xc];
      bVar16 = (byte)uVar18 & 0x1f;
      local_380.Array = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar9,uVar21);
      local_380._padding_ = CONCAT44(1 << bVar16,(int)uVar18 >> 5);
      TStack_3b8.CurrentBitIndex = local_380._28_4_;
      TStack_3b8.UnvisitedBitMask = 0xffffffff;
      local_380.BaseBitIndex = uVar18 & 0xffffffe0;
      local_380.CurrentBitIndex = uVar18;
      local_380.UnvisitedBitMask = -1 << bVar16;
      TStack_3b8._padding_ = (longlong)local_380.Array;
      TStack_3b8._28_4_ = local_14c;
      TStack_3b8.BaseBitIndex = local_360;
      local_398 = CONCAT44(uStack_354,iStack_358);
      local_400 = uVar10;
      local_3c0 = pFVar25;
      local_380.Array = TStack_3b8.Array;
      if ((((int)uVar18 < 0) || ((int)uVar22 < (int)uVar18)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar18 != puVar20[0xc]) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_380);
      }
      uStack_3d4 = local_380._28_4_;
      iStack_3d8 = local_380.BaseBitIndex;
      local_3d0 = puVar20[4] - puVar20[0xf];
      uStack_3f0 = local_380._padding_;
      pTStack_3e8 = local_380.Array;
      uStack_3e0 = local_380.UnvisitedBitMask;
      uStack_3dc = local_380.CurrentBitIndex;
      lStack_190 = local_380._padding_;
      uStack_170 = CONCAT44(uStack_3cc,local_3d0);
      local_188 = local_380.Array;
      uStack_180 = local_380.UnvisitedBitMask;
      iStack_17c = local_380.CurrentBitIndex;
      local_3f8 = pFVar25;
      local_198 = pFVar25;
      local_178 = _iStack_3d8;
      while( true ) {
        pFVar25 = local_3c0;
        if (*(int *)(local_3c0 + 8) - *(int *)(local_3c0 + 0x34) != (int)local_398) {
          local_40e = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_40e);
        }
        if (((TStack_3b8.CurrentBitIndex == iStack_17c) && (TStack_3b8.Array == local_188)) &&
           (pFVar25 == local_198)) break;
        local_2e0 = (uint *)(*(longlong *)pFVar25 + (longlong)TStack_3b8.CurrentBitIndex * 0x20);
        uVar21 = *local_2e0;
        uVar9 = ~uVar21 >> 0x1f;
        uVar22 = 0;
        if ((int)uVar21 < (this->GltfAsset).Nodes.ArrayNum) {
          uVar22 = uVar9;
        }
        if ((uVar22 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar27 = (longlong)(int)uVar21 * 0x260;
        local_408 = *(uint *)((this->GltfAsset).Nodes.AllocatorInstance.Data + lVar27 + 0xd8);
        uVar22 = 0;
        if ((int)uVar21 < (this->GltfAsset).Nodes.ArrayNum) {
          uVar22 = uVar9;
        }
        if ((uVar22 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar25 = (this->GltfAsset).Nodes.AllocatorInstance.Data;
        uVar18 = ~uVar10 >> 0x1f;
        uVar22 = 0;
        if ((int)uVar10 < (this->GltfAsset).Meshes.ArrayNum) {
          uVar22 = uVar18;
        }
        if ((uVar22 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_3c8 = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)(int)uVar10 * 0xa8);
        ::FString::ConcatFC(&local_238,
                            (FString *)
                            ((this->GltfAsset).Meshes.AllocatorInstance.Data + (longlong)local_3c8),
                            L"_");
        ::FString::ConcatFF(&local_1e8,&local_238,(FString *)(pFVar25 + lVar27));
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
        uVar22 = 0;
        if ((int)uVar21 < (this->GltfAsset).Nodes.ArrayNum) {
          uVar22 = uVar9;
        }
        if ((uVar22 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar21 = local_400;
        pFVar25 = (this->GltfAsset).Nodes.AllocatorInstance.Data;
        uVar22 = 0;
        if ((int)local_400 < (this->GltfAsset).Meshes.ArrayNum) {
          uVar22 = uVar18;
        }
        if ((uVar22 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar11 = local_3c8;
        ::FString::ConcatFC(&local_228,
                            (FString *)
                            ((this->GltfAsset).Meshes.AllocatorInstance.Data +
                            (longlong)local_3c8 + 0x90),L"_");
        ::FString::ConcatFF(&local_1f8,&local_228,(FString *)(pFVar25 + lVar27 + 0x250));
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
        uVar22 = 0;
        if ((int)uVar21 < (this->GltfAsset).Meshes.ArrayNum) {
          uVar22 = uVar18;
        }
        if ((uVar22 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar13 = HandleGltfMesh(this,local_330,
                                 (FMesh *)((this->GltfAsset).Meshes.AllocatorInstance.Data +
                                          (longlong)pTVar11),uVar21,local_2d8,&local_1e8,&local_1f8)
        ;
        local_388 = pUVar13;
        UInterchangeMeshNode::SetSkinnedMesh(pUVar13,true);
        lVar27 = (longlong)(int)local_408;
        iVar24 = 0;
        uVar21 = 0;
        if ((int)local_408 < (this->GltfAsset).Nodes.ArrayNum) {
          uVar21 = ~local_408 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar25 = (this->GltfAsset).Nodes.AllocatorInstance.Data + lVar27 * 0x260;
        uVar21 = ((uint)((ulonglong)pFVar25 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar25 >> 4)) *
                 -0x7a143595;
        uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
        if (*(int *)&(this->NodeUidMap).field_0x8 != *(int *)&(this->NodeUidMap).field_0x34) {
          puVar4 = *(undefined1 **)&(this->NodeUidMap).field_0x40;
          puVar17 = &(this->NodeUidMap).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar17 = puVar4;
          }
          iVar8 = *(int *)(puVar17 +
                          (ulonglong)
                          (*(int *)&(this->NodeUidMap).field_0x48 - 1U & (uVar21 >> 0x10 ^ uVar21))
                          * 4);
          if (iVar8 != -1) {
            lVar27 = *(longlong *)&this->NodeUidMap;
            do {
              if (*(FScriptContainerElement **)((longlong)iVar8 * 0x20 + lVar27) == pFVar25) {
                if (((iVar8 != -1) && (lVar27 = (longlong)iVar8 * 0x20 + lVar27, lVar27 != 0)) &&
                   (pFVar15 = (FString *)(lVar27 + 8), pFVar15 != (FString *)0x0)) {
                  UInterchangeMeshNode::SetSkeletonDependencyUid(pUVar13,pFVar15);
                  goto LAB_14e6cda69;
                }
                break;
              }
              iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar27);
            } while (iVar8 != -1);
          }
        }
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5163310495276467617>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfTranslator.cpp"
                           ,0x5a1,"SkeletonNodeUid");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_14e6cda69:
        local_e8._0_8_ = 0;
        local_e8._8_8_ = 0;
        local_c8 = (uint *)0x0;
        local_c0 = 0;
        local_bc = 0x80;
        local_b8 = 0xffffffff;
        local_b4 = 0;
        local_a8 = (ForElementType<FSetElementId>)0x0;
        local_a0 = 0;
        ::FString::FString(&local_340,L"");
        local_3c8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_2e0 + 2);
        pFVar19 = (local_3c8->AllocatorInstance).Data;
        uVar21 = local_2e0[4];
        pFVar25 = pFVar19 + (longlong)(int)uVar21 * 4;
        while( true ) {
          if (local_3c8->ArrayNum != uVar21) {
            local_40d = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_40d);
          }
          uVar22 = 0;
          if (pFVar19 == pFVar25) break;
          uVar10 = *(uint *)pFVar19;
          if ((int)uVar10 < (this->GltfAsset).Nodes.ArrayNum) {
            uVar22 = ~uVar10 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar2 = (this->GltfAsset).Nodes.AllocatorInstance.Data;
          if ((local_340.Data.ArrayNum != 0) && (0 < local_340.Data.ArrayNum + -1)) {
            ::FString::AppendChars(&local_340,L":",1);
          }
          ::FString::PrintfImpl(&local_2f0,L"%d");
          uVar22 = 0;
          if (local_2f0.Data.ArrayNum != 0) {
            uVar22 = local_2f0.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_340,(wchar_t *)local_2f0.Data.AllocatorInstance.Data,uVar22)
          ;
          if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,&local_304,
                     (bool *)(pFVar2 + (longlong)(int)uVar10 * 0x260 + 0x88));
          pFVar19 = pFVar19 + 4;
        }
        local_40c = 2;
        (**(code **)(pUVar13->_padding_ + 0x300))(pUVar13,&local_340,&local_40c);
        uVar21 = local_c0;
        uVar10 = 1;
        uStack_3dc = uVar22;
        if (local_c0 != 0) {
          puVar20 = (uint *)(local_e8 + 0x10);
          if (local_c8 != (uint *)0x0) {
            puVar20 = local_c8;
          }
          uVar9 = *puVar20;
          uVar22 = 0;
          while (uVar9 == 0) {
            uVar22 = uVar22 + 1;
            iVar24 = iVar24 + 0x20;
            uStack_3dc = local_c0;
            if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
            goto LAB_14e6cdcc0;
            uVar9 = puVar20[(int)uVar22];
          }
          uVar10 = ~(uVar9 - 1) & uVar9;
          uVar1 = (ulonglong)uVar10 * 2 + 1;
          lVar27 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          local_300 = (int)lVar27;
          uStack_3dc = iVar24 + -1 + local_300;
          if ((int)local_c0 < (int)uStack_3dc) {
            uStack_3dc = local_c0;
          }
        }
LAB_14e6cdcc0:
        local_3f8 = (FScriptContainerElement *)local_e8;
        pTStack_3e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
        uVar9 = local_c0 & 0xffffffe0;
        local_3d0 = local_e8._8_4_ - local_b4;
        uStack_3f0 = CONCAT44(uVar10,uVar22);
        uStack_3e0 = 0xffffffff;
        uStack_3d4 = local_12c;
        iStack_3d8 = iVar24;
        TStack_2c0._padding_ = uStack_3f0;
        iVar8 = (int)local_c0 >> 5;
        uStack_2a0 = CONCAT44(uStack_3cc,local_3d0);
        bVar16 = (byte)local_c0;
        local_408 = local_c0;
        TStack_2c0.BaseBitIndex = iVar24;
        TStack_2c0._28_4_ = local_12c;
        TStack_2c0.UnvisitedBitMask = 0xffffffff;
        TStack_2c0.CurrentBitIndex = uStack_3dc;
        local_2c8 = local_3f8;
        TStack_2c0.Array = pTStack_3e8;
        if (((int)local_c0 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar21 != local_c0) {
          puVar20 = (uint *)(local_e8 + 0x10);
          if (local_c8 != (uint *)0x0) {
            puVar20 = local_c8;
          }
          uVar21 = -1 << (bVar16 & 0x1f) & puVar20[iVar8];
          while (uVar21 == 0) {
            iVar8 = iVar8 + 1;
            uVar9 = uVar9 + 0x20;
            if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 < iVar8) {
              local_408 = local_c0;
              uVar21 = local_c0;
              goto LAB_14e6cde00;
            }
            uVar21 = puVar20[iVar8];
          }
          uVar1 = (ulonglong)(~(uVar21 - 1) & uVar21) * 2 + 1;
          lVar27 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          local_2fc = (int)lVar27;
          local_408 = (uVar9 - 1) + local_2fc;
          uVar21 = local_408;
          if ((int)local_c0 < (int)local_408) {
            uVar21 = local_c0;
            local_408 = local_c0;
          }
        }
LAB_14e6cde00:
        while( true ) {
          pFVar25 = local_2c8;
          if (*(int *)(local_2c8 + 8) - *(int *)(local_2c8 + 0x34) != (int)uStack_2a0) {
            local_40b = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_40b);
          }
          lVar27 = (longlong)TStack_2c0.CurrentBitIndex;
          if (((TStack_2c0.CurrentBitIndex == uVar21) &&
              (TStack_2c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
             (pFVar25 == (FScriptContainerElement *)local_e8)) break;
          lVar5 = *(longlong *)pFVar25;
          iVar24 = *(int *)(lVar5 + lVar27 * 0xc);
          if ((-1 < iVar24) && (iVar24 < (this->GltfAsset).Skins.ArrayNum)) {
            if (((this->GltfAsset).Skins.ArrayNum <= iVar24) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            ::FString::ConcatFC(&local_208,
                                (FString *)
                                ((this->GltfAsset).Skins.AllocatorInstance.Data +
                                (longlong)iVar24 * 0x98 + 8),L"_");
            uVar21 = *(uint *)(lVar5 + lVar27 * 0xc);
            uVar22 = 0;
            if ((int)uVar21 < (this->GltfAsset).Skins.ArrayNum) {
              uVar22 = ~uVar21 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = 0;
            iStack_3d8 = 0;
            uVar22 = 1;
            pFVar25 = (this->GltfAsset).Skins.AllocatorInstance.Data +
                      (longlong)(int)uVar21 * 0x98 + 0x30;
            iVar24 = *(int *)(pFVar25 + 0x28);
            pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar25 + 0x10);
            uStack_3dc = 0;
            if (iVar24 != 0) {
              pTVar23 = pTVar26;
              if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar25 + 0x20) !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar25 + 0x20);
              }
              uVar21 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
              while (uVar21 == 0) {
                iVar8 = iVar8 + 1;
                iStack_3d8 = iStack_3d8 + 0x20;
                uStack_3dc = iVar24;
                if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8)
                goto LAB_14e6cdfbb;
                uVar21 = *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
              }
              uVar22 = -uVar21 & uVar21;
              uVar1 = (ulonglong)uVar22 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              local_2f8 = (int)lVar27;
              uStack_3dc = iStack_3d8 + -1 + local_2f8;
              if (iVar24 < (int)uStack_3dc) {
                uStack_3dc = iVar24;
              }
            }
LAB_14e6cdfbb:
            uVar10 = *(uint *)(pFVar25 + 0x28);
            uVar21 = uVar10 & 0xffffffe0;
            local_3d0 = *(int *)(pFVar25 + 8) - *(int *)(pFVar25 + 0x34);
            uStack_3f0 = CONCAT44(uVar22,iVar8);
            uStack_3e0 = 0xffffffff;
            uStack_3d4 = local_10c;
            TStack_290._padding_ = uStack_3f0;
            iVar8 = (int)uVar10 >> 5;
            uStack_270 = CONCAT44(uStack_3cc,local_3d0);
            TStack_290.UnvisitedBitMask = 0xffffffff;
            TStack_290.CurrentBitIndex = uStack_3dc;
            TStack_290.BaseBitIndex = iStack_3d8;
            TStack_290._28_4_ = local_10c;
            local_3f8 = pFVar25;
            pTStack_3e8 = pTVar26;
            local_298 = pFVar25;
            TStack_290.Array = pTVar26;
            if ((((int)uVar10 < 0) || (iVar24 < (int)uVar10)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pUVar13 = local_388;
            uVar22 = *(uint *)(pFVar25 + 0x28);
            if (uVar10 != uVar22) {
              pTVar23 = pTVar26;
              if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar25 + 0x20) !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar25 + 0x20);
              }
              uVar10 = -1 << ((byte)uVar10 & 0x1f) &
                       *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
              while (uVar10 == 0) {
                iVar8 = iVar8 + 1;
                uVar21 = uVar21 + 0x20;
                uVar10 = uVar22;
                if ((int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 < iVar8)
                goto LAB_14e6ce0d2;
                uVar10 = *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
              }
              uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
              lVar27 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              local_2d0 = (int)lVar27;
              uVar10 = (uVar21 - 1) + local_2d0;
              if ((int)uVar22 < (int)uVar10) {
                uVar10 = uVar22;
              }
            }
LAB_14e6ce0d2:
            while( true ) {
              pFVar19 = local_298;
              if (*(int *)(local_298 + 8) - *(int *)(local_298 + 0x34) != (int)uStack_270) {
                local_40a[0] = 0;
                `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_40a);
              }
              uVar21 = local_408;
              if (((TStack_290.CurrentBitIndex == uVar10) && (TStack_290.Array == pTVar26)) &&
                 (pFVar19 == pFVar25)) break;
              local_350.TypedValue.Data.ArrayMax = -1;
              pFVar15 = (FString *)
                        (*(longlong *)pFVar19 + (longlong)TStack_290.CurrentBitIndex * 0x28);
              local_350.TypedValue.Data.AllocatorInstance.Data =
                   (ForAnyElementType)(FScriptContainerElement *)0x0;
              local_350.TypedValue.Data.ArrayNum = 0;
              ::FString::ConcatFF(&local_218,&local_208,pFVar15);
              UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FString>
                        ((UInterchangeBaseNode *)pUVar13,&local_218,pFVar15 + 1,
                         (TOptional<FString> *)&local_350.TypedValue,false);
              if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data.AllocatorInstance.Data);
              }
              if ((local_350.TypedValue.Data.ArrayMax != -1) &&
                 (local_350.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 )) {
                FMemory::Free((void *)local_350.TypedValue.Data.AllocatorInstance.Data);
              }
              TStack_290.UnvisitedBitMask =
                   TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
            }
            if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
            }
          }
          TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
        }
        uVar22 = UE::Interchange::Gltf::Private::GetRootNodeIndex(&this->GltfAsset,local_3c8);
        uVar21 = 0;
        if ((int)uVar22 < (this->GltfAsset).Nodes.ArrayNum) {
          uVar21 = ~uVar22 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar25 = (this->GltfAsset).Nodes.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x260;
        uVar21 = ((uint)((ulonglong)pFVar25 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar25 >> 4)) *
                 -0x7a143595;
        uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
        if (*(int *)&(this->NodeUidMap).field_0x8 != *(int *)&(this->NodeUidMap).field_0x34) {
          puVar4 = *(undefined1 **)&(this->NodeUidMap).field_0x40;
          puVar17 = &(this->NodeUidMap).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar17 = puVar4;
          }
          iVar24 = *(int *)(puVar17 +
                           (ulonglong)
                           (*(int *)&(this->NodeUidMap).field_0x48 - 1U & (uVar21 >> 0x10 ^ uVar21))
                           * 4);
          if (iVar24 != -1) {
            lVar27 = *(longlong *)&this->NodeUidMap;
            do {
              if (*(FScriptContainerElement **)((longlong)iVar24 * 0x20 + lVar27) == pFVar25) {
                if ((iVar24 != -1) &&
                   (lVar27 = (longlong)iVar24 * 0x20 + lVar27, pFVar15 = (FString *)(lVar27 + 8),
                   lVar27 != 0)) goto LAB_14e6ce303;
                break;
              }
              iVar24 = *(int *)((longlong)iVar24 * 0x20 + 0x18 + lVar27);
            } while (iVar24 != -1);
          }
        }
        pFVar15 = (FString *)0x0;
LAB_14e6ce303:
        this_01 = (UInterchangeSceneNode *)UInterchangeBaseNodeContainer::GetNode(local_330,pFVar15)
        ;
        if (this_01 != (UInterchangeSceneNode *)0x0) {
          pUVar14 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
          iVar24 = (int)pUVar14->_padding_;
          if ((iVar24 <= *(int *)(this_01->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar24 * 8) ==
              &pUVar14->_padding_)) {
            pFVar15 = UInterchangeBaseNode::GetUniqueID
                                ((UInterchangeBaseNode *)local_388,&local_1d8);
            UInterchangeSceneNode::SetCustomAssetInstanceUid(this_01,pFVar15);
            if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            }
          }
        }
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
        }
        local_a0 = 0;
        if (local_a8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_a8);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_e8);
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        TStack_3b8.UnvisitedBitMask = TStack_3b8.UnvisitedBitMask & ~TStack_3b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3b8);
        uVar10 = local_400;
      }
      TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
    } while( true );
  }
  uVar21 = *(uint *)pFVar19;
  uVar22 = 0;
  if ((int)uVar21 < (this->GltfAsset).Nodes.ArrayNum) {
    uVar22 = ~uVar21 >> 0x1f;
  }
  local_404 = uVar21;
  if ((uVar22 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = (this->GltfAsset).Nodes.AllocatorInstance.Data;
  this_00 = TMapBase<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
            ::FindOrAddImpl<int_const_&>
                      ((TMapBase<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                        *)local_98,*(uint *)(pFVar2 + (longlong)(int)uVar21 * 0x260 + 0x84),
                       (int *)(pFVar2 + (longlong)(int)uVar21 * 0x260 + 0x84));
  iVar8 = *(int *)(pFVar2 + (longlong)(int)uVar21 * 0x260 + 0x88);
  if (-1 < iVar8) {
    if ((this->GltfAsset).Skins.ArrayNum <= iVar8) {
      pFVar19 = pFVar19 + 4;
      goto LAB_14e6ccff0;
    }
    if (((this->GltfAsset).Skins.ArrayNum <= iVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(int *)((this->GltfAsset).Skins.AllocatorInstance.Data + (longlong)iVar8 * 0x98 + 0x20) < 1
       ) {
      pFVar19 = pFVar19 + 4;
      goto LAB_14e6ccff0;
    }
    uVar22 = *(uint *)(pFVar2 + (longlong)(int)uVar21 * 0x260 + 0x88);
    uVar10 = 0;
    if ((int)uVar22 < (this->GltfAsset).Skins.ArrayNum) {
      uVar10 = ~uVar22 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (this->GltfAsset).Skins.AllocatorInstance.Data;
    if ((*(int *)(pFVar3 + (longlong)(int)uVar22 * 0x98 + 0x20) < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = **(int **)(pFVar3 + (longlong)(int)uVar22 * 0x98 + 0x18);
    if ((-1 < iVar8) && (iVar8 < (this->GltfAsset).Nodes.ArrayNum)) {
      uVar21 = *(uint *)(pFVar2 + (longlong)(int)uVar21 * 0x260 + 0x88);
      uVar22 = 0;
      if ((int)uVar21 < (this->GltfAsset).Skins.ArrayNum) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_390[0] = UE::Interchange::Gltf::Private::GetRootNodeIndex
                               (&this->GltfAsset,
                                (TArray<int,TSizedDefaultAllocator<32>_> *)
                                ((this->GltfAsset).Skins.AllocatorInstance.Data +
                                (longlong)(int)uVar21 * 0x98 + 0x18));
      if (((int)local_390[0] < 0) || ((this->GltfAsset).Nodes.ArrayNum <= (int)local_390[0]))
      goto LAB_14e6cd324;
      pTVar11 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<int_const_&>
                          ((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                            *)this_00,local_390[0],(int *)local_390);
      pFVar2 = (pTVar11->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_404) &&
         (((FScriptContainerElement *)&local_404 < pFVar2 + (longlong)pTVar11->ArrayMax * 4 &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)))) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = pTVar11->ArrayNum;
      if (iVar8 == pTVar11->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
      }
      pTVar11->ArrayNum = iVar8 + 1;
      pFVar19 = pFVar19 + 4;
      *(uint *)((pTVar11->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_404;
      goto LAB_14e6ccff0;
    }
  }
LAB_14e6cd324:
  pFVar19 = pFVar19 + 4;
  goto LAB_14e6ccff0;
}

// HandleGltfVariants @ 14e6ce450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UInterchangeGLTFTranslator::HandleGltfVariants
          (UInterchangeGLTFTranslator *this,UInterchangeBaseNodeContainer *param_1,FString *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  UInterchangeVariantSetNode *this_00;
  longlong *plVar9;
  undefined8 uVar10;
  UInterchangeSceneVariantSetsNode *this_01;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_258 [32];
  undefined1 local_218 [8];
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  undefined1 local_1a8 [128];
  undefined1 local_128 [128];
  code *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong *plStack_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UInterchangeVariantSetNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1a8,pUVar8);
  local_1a8._8_8_ = param_1;
  this_00 = (UInterchangeVariantSetNode *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
  if (local_1a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_1a8 + 0x50);
    if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_1a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  ::FString::ConcatCF(&local_1f0,L"\\VariantSet\\",param_2);
  ::FString::FString(&local_1e0,L"");
  UInterchangeBaseNodeContainer::SetupNode
            (param_1,(UInterchangeBaseNode *)this_00,&local_1f0,param_2,TranslatedScene,&local_1e0);
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  UInterchangeVariantSetNode::SetCustomDisplayText(this_00,param_2);
  local_210.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar12 = (longlong)local_210.Data.ArrayNum;
  uVar11 = 0;
  pFVar13 = (param_2->Data).AllocatorInstance.Data;
  local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_210.Data.ArrayNum == 0) {
    local_210.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_210.Data.ArrayNum,0,(ForAnyElementType *)&local_210,local_210.Data.ArrayNum
               ,&local_210.Data.ArrayMax);
    memcpy(local_210.Data.AllocatorInstance.Data,pFVar13,lVar12 * 2);
  }
  iVar14 = (this->GltfAsset).Variants.ArrayNum;
  if (0 < iVar14) {
    do {
      uVar7 = 0;
      if ((int)uVar11 < iVar14) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      ::FString::ConcatCF(&local_200,L";",
                          (FString *)
                          ((this->GltfAsset).Variants.AllocatorInstance.Data +
                          (longlong)(int)uVar11 * 0x10));
      iVar14 = local_200.Data.ArrayNum + -1;
      if (local_200.Data.ArrayNum == 0) {
        iVar14 = 0;
      }
      ::FString::AppendChars(&local_210,(wchar_t *)local_200.Data.AllocatorInstance.Data,iVar14);
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      iVar14 = (this->GltfAsset).Variants.ArrayNum;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar14);
  }
  UInterchangeVariantSetNode::SetCustomVariantsPayloadKey(this_00,&local_210);
  local_a8 = (code *)0x0;
  plStack_80 = (longlong *)0x0;
  local_78 = (code *)0x0;
  plVar9 = FMemory::Malloc(0x20,8);
  plStack_50 = plStack_80;
  uVar5 = uStack_8c;
  uVar4 = uStack_90;
  uVar3 = uStack_94;
  uVar2 = local_98;
  uVar10 = uStack_a0;
  pcVar1 = local_a8;
  *plVar9 = (longlong)
            &UE::Core::Private::Function::
             TFunction_OwnedObject<`UInterchangeGLTFTranslator::HandleGltfVariants'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  plVar9[1] = (longlong)this;
  plVar9[2] = (longlong)this_00;
  plVar9[3] = (longlong)&local_a8;
  if (plVar9 + 1 != (longlong *)0x0) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGLTFTranslator::HandleGltfVariants'::__l2::<lambda_1>,void,TArray<int,TSizedDefaultAllocator<32>_>_const_&>
               ::Call;
  }
  local_a8 = local_78;
  uStack_a0 = uStack_70;
  local_88 = local_58;
  uStack_84 = uStack_54;
  plStack_80 = plVar9;
  local_98 = local_68;
  uStack_94 = uStack_64;
  uStack_90 = uStack_60;
  uStack_8c = uStack_5c;
  local_78 = pcVar1;
  uStack_70 = uVar10;
  local_68 = uVar2;
  uStack_64 = uVar3;
  uStack_60 = uVar4;
  uStack_5c = uVar5;
  if (pcVar1 != (code *)0x0) {
    plVar9 = (longlong *)&local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar9 = plStack_50;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  iVar14 = (this->GltfAsset).Scenes.ArrayNum;
  pFVar13 = (this->GltfAsset).Scenes.AllocatorInstance.Data;
  pFVar15 = pFVar13 + (longlong)iVar14 * 0x80;
  while( true ) {
    if ((this->GltfAsset).Scenes.ArrayNum != iVar14) {
      `TCheckedPointerIterator<GLTF::FScene_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_218);
    }
    if (pFVar13 == pFVar15) break;
    UE::Core::Private::Function::CheckCallable(local_a8);
    pcVar1 = local_a8;
    plVar9 = (longlong *)&local_98;
    if (plStack_80 != (longlong *)0x0) {
      plVar9 = plStack_80;
    }
    uVar10 = (**(code **)(*plVar9 + 8))();
    (*pcVar1)(uVar10,pFVar13 + 0x10);
    pFVar13 = pFVar13 + 0x80;
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UInterchangeSceneVariantSetsNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_128,pUVar8);
  local_128._8_8_ = param_1;
  this_01 = (UInterchangeSceneVariantSetsNode *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
  if (local_128._64_8_ != 0) {
    plVar9 = (longlong *)(local_128 + 0x50);
    if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_128._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  ::FString::ConcatCF(&local_1c0,L"\\SceneVariantSets\\",param_2);
  ::FString::FString(&local_1d0,L"");
  UInterchangeBaseNodeContainer::SetupNode
            (param_1,(UInterchangeBaseNode *)this_01,&local_1c0,param_2,TranslatedScene,&local_1d0);
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  UInterchangeSceneVariantSetsNode::AddCustomVariantSetUid(this_01,&local_1f0);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if (local_a8 != (code *)0x0) {
    plVar9 = (longlong *)&local_98;
    if (plStack_80 != (longlong *)0x0) {
      plVar9 = plStack_80;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTextureSRGB @ 14e6d1b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangeGLTFTranslator::SetTextureSRGB
          (UInterchangeGLTFTranslator *this,UInterchangeBaseNodeContainer *param_1,
          FTextureMap *param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  wchar_t *pwVar3;
  FAttributeStorage *this_00;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  FString *pFVar6;
  FString *pFVar7;
  UInterchangeBaseNode *this_01;
  UClass *pUVar8;
  EAttributeStorageResult EVar9;
  int iVar10;
  bool local_res8 [8];
  bool local_res20 [8];
  FString local_128;
  FString local_118;
  TAttributeHandle<bool,void> local_108;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  void *local_90 [2];
  FString local_80;
  FString local_70;
  void *local_60 [2];
  FString local_50;
  FString local_40;
  
  iVar1 = param_2->TextureIndex;
  if (iVar1 < 0) {
    return;
  }
  if ((this->GltfAsset).Textures.ArrayNum <= iVar1) {
    return;
  }
  pFVar2 = (this->GltfAsset).Textures.AllocatorInstance.Data;
  pwVar3 = *(wchar_t **)(pFVar2 + (longlong)iVar1 * 0x80 + 0x70);
  iVar1 = *(int *)(pFVar2 + (longlong)iVar1 * 0x80 + 0x78);
  local_res20[0] = param_3;
  pFVar6 = ::FString::FString(&local_a0,L"\\");
  pFVar7 = ::FString::FString(&local_b0,L"\\");
  ::FString::ConcatFC(&local_e0,pFVar7,L"Textures");
  ::FString::ConcatFF(&local_f0,&local_e0,pFVar6);
  iVar10 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar10 = 0;
  }
  ::FString::ConcatFR(&local_c0,&local_f0,pwVar3,iVar10);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  this_01 = UInterchangeBaseNodeContainer::GetNode(param_1,&local_c0);
  if (this_01 == (UInterchangeBaseNode *)0x0) goto LAB_14e6d1f03;
  pUVar8 = Z_Construct_UClass_UInterchangeTextureNode_NoRegister();
  iVar1 = (int)pUVar8->_padding_;
  if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar8->_padding_)) goto LAB_14e6d1f03;
  pFVar6 = (FString *)(**(code **)(this_01->_padding_ + 0x2b0))(this_01,local_90);
  ::FString::ConcatFC(&local_d0,pFVar6,L".GetSRGB");
  if (local_90[0] != (void *)0x0) {
    FMemory::Free(local_90[0]);
  }
  if (((this_01->Attributes).Object == (FAttributeStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = (this_01->Attributes).Object;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (this_00,(FAttributeKey *)(this_01 + 1));
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (this_00,&local_108,(FAttributeKey *)(this_01 + 1));
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_108);
    if (bVar5) {
      EVar9 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                        (&local_108,local_res8);
      if ((EVar9 & Operation_Success) != None) {
        if (local_108.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar5 = true;
        goto LAB_14e6d1d98;
      }
      ::FString::FString(&local_80,(FString *)(this_01 + 1));
      pFVar6 = ::FString::FString(&local_40,&local_d0);
      UE::Interchange::LogAttributeStorageErrors(EVar9,pFVar6,(FAttributeKey *)&local_80);
    }
    if (local_108.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = false;
  }
  else {
    bVar5 = false;
  }
LAB_14e6d1d98:
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (((bVar5) && (local_res8[0] != local_res20[0])) && (2 < (byte)LogInterchangeImport._0_1_)) {
    UInterchangeBaseNode::GetDisplayLabel(this_01,&local_70);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = (FString *)(**(code **)(this_01->_padding_ + 0x2b0))(this_01,local_60);
  ::FString::ConcatFC(&local_118,pFVar6,L".SetSRGB");
  if (local_60[0] != (void *)0x0) {
    FMemory::Free(local_60[0]);
  }
  if (((this_01->Attributes).Object == (FAttributeStorage *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar9 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((this_01->Attributes).Object,(FAttributeKey *)(this_01 + 1),local_res20,None);
  if ((EVar9 & Operation_Success) == None) {
    ::FString::FString(&local_50,(FString *)(this_01 + 1));
    _Src.Data = local_118.Data.AllocatorInstance.Data;
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = local_118.Data.ArrayNum;
    if (local_118.Data.ArrayNum == 0) {
      local_128.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
                 local_118.Data.ArrayNum,&local_128.Data.ArrayMax);
      memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_118.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar9,&local_128,(FAttributeKey *)&local_50);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
LAB_14e6d1f03:
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUInterchangeGLTFTranslator @ 14e6d2300

void __cdecl UInterchangeGLTFTranslator::StaticRegisterNativesUInterchangeGLTFTranslator(void)

{
  return;
}

// Translate @ 14e6d26b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UInterchangeGLTFTranslator::Translate
          (UInterchangeGLTFTranslator *this,UInterchangeBaseNodeContainer *param_1)

{
  FMetadata *pFVar1;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar2
  ;
  TTuple<GLTF::EMessageSeverity,FText> *pTVar3;
  FAnimation *pFVar4;
  void *pvVar5;
  code *pcVar6;
  double dVar7;
  float fVar8;
  FName FVar9;
  FName FVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  FText *pFVar16;
  FAsset *pFVar17;
  UInterchangeSourceNode *this_00;
  FString *pFVar18;
  UInterchangeResultError_Generic *pUVar19;
  ulonglong uVar20;
  FText *pFVar21;
  FTextFormat *pFVar22;
  FText *pFVar23;
  UInterchangeTexture2DNode *this_01;
  FAttributeStorage *pFVar24;
  EAttributeStorageResult EVar25;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar26;
  UClass *pUVar27;
  UClass *pUVar28;
  UInterchangeBaseNode *pUVar29;
  FPrimitive *pFVar30;
  UInterchangeShaderGraphNode *this_02;
  UInterchangeStandardCameraNode *this_03;
  UInterchangeSpotLightNode *this_04;
  FLinearColor *pFVar31;
  UInterchangePointLightNode *this_05;
  UInterchangeBaseLightNode *this_06;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar32;
  UInterchangeSceneNode *this_07;
  byte bVar33;
  longlong lVar34;
  TRefCountPtr<ITextData> TVar35;
  longlong *plVar36;
  ITextData *pIVar37;
  int iVar38;
  ForElementType<FSetElementId> FVar39;
  wchar_t *pwVar40;
  undefined1 *puVar41;
  int iVar42;
  ForAnyElementType this_08;
  ForAnyElementType FVar43;
  uint uVar44;
  uint uVar45;
  FScriptContainerElement *pFVar46;
  uint *puVar47;
  ITextData *pIVar48;
  uint uVar49;
  FScriptContainerElement *pFVar50;
  TTuple<GLTF::EMessageSeverity,FText> *pTVar51;
  int *piVar52;
  FMaterial *pFVar53;
  int *piVar54;
  int iVar55;
  TBitArray<FDefaultBitArrayAllocator> *pTVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  FScriptContainerElement *pFVar60;
  FMaterial *pFVar61;
  ulonglong uVar62;
  UInterchangeBaseNodeContainer *pUVar63;
  undefined1 auStackY_1498 [32];
  undefined1 local_1448;
  bool local_1447;
  undefined1 local_1446;
  undefined1 local_1445;
  undefined1 local_1444;
  undefined1 local_1443;
  undefined1 local_1442;
  undefined1 local_1441;
  uchar local_1440;
  bool local_143f;
  EInterchangeTextureWrapMode local_143e;
  uchar local_143d;
  undefined1 local_143c;
  undefined1 local_143b;
  undefined1 local_143a;
  EInterchangeCameraProjectionType local_1439;
  EInterchangeCameraProjectionType local_1438;
  undefined1 local_1437;
  EInterchangeLightUnits local_1436;
  EInterchangeLightUnits local_1435;
  undefined1 local_1434;
  undefined1 local_1433;
  undefined1 local_1432;
  undefined1 local_1431;
  undefined1 local_1430 [4];
  uint local_142c;
  UInterchangeBaseNodeContainer *local_1428;
  FScriptContainerElement *local_1420;
  ulonglong local_1418;
  FScriptContainerElement *local_1410;
  longlong lStack_1408;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  int local_13e8;
  undefined4 uStack_13e4;
  ForAnyElementType local_13e0;
  undefined8 local_13d8;
  undefined1 local_13d0 [8];
  FScriptContainerElement *local_13c8;
  ForAnyElementType local_13c0;
  undefined8 local_13b8;
  FString local_13b0;
  FString local_13a0;
  undefined1 local_1390 [12];
  uint uStack_1384;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1380;
  undefined8 uStack_1378;
  longlong lStack_1370;
  int local_1368;
  undefined4 uStack_1364;
  int local_1360;
  float local_135c;
  float local_1358;
  float local_1354;
  float local_1350;
  float local_134c;
  TranslationResult local_1348 [2];
  int local_1340 [2];
  FScriptContainerElement *local_1338;
  TranslationResult local_1330;
  TranslationResult local_132c;
  TranslationResult local_1328 [2];
  FString local_1320;
  TTuple<GLTF::EMessageSeverity,FText> *local_1310;
  int local_1308;
  FString local_1300;
  int local_12f0 [2];
  int local_12e8 [2];
  int local_12e0;
  uint uStack_12dc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_12d8;
  undefined4 local_12d0;
  uint uStack_12cc;
  int iStack_12c8;
  undefined4 uStack_12c4;
  TArray<int,TSizedDefaultAllocator<32>_> local_12c0;
  TOptional<FString>_u_0 local_12b0;
  FName local_12a0;
  UInterchangeGLTFTranslator *local_1298;
  FString local_1290;
  TOptional<FString>_u_0 local_1280;
  TOptional<FString>_u_0 local_1270;
  FString local_1260;
  TOptional<FString>_u_0 local_1250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1240;
  FString local_1220;
  FString local_1210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_11e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_11c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_11a0;
  int local_1180;
  int local_117c;
  int local_1178;
  int local_1174;
  FString local_1170;
  undefined1 local_1160 [8];
  int local_1158;
  undefined1 local_1154 [4];
  undefined1 local_1150 [4];
  undefined1 local_114c [4];
  int local_1148;
  int local_1144;
  undefined1 local_1140 [12];
  uint uStack_1134;
  TBitArray<FDefaultBitArrayAllocator> *local_1130;
  undefined8 uStack_1128;
  longlong local_1120;
  int iStack_1118;
  undefined4 uStack_1114;
  undefined1 local_1110 [12];
  uint uStack_1104;
  TBitArray<FDefaultBitArrayAllocator> *local_1100;
  undefined8 uStack_10f8;
  longlong local_10f0;
  undefined8 uStack_10e8;
  undefined1 local_10e0 [12];
  uint uStack_10d4;
  TBitArray<FDefaultBitArrayAllocator> *local_10d0;
  undefined8 uStack_10c8;
  longlong local_10c0;
  undefined8 uStack_10b8;
  FScriptContainerElement *local_10b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_10a8;
  undefined8 uStack_1088;
  FScriptContainerElement *local_1080;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1078;
  undefined8 uStack_1058;
  FString local_1050;
  FString local_1040;
  FString local_1030;
  FString local_1020;
  FString local_1010;
  FString local_1000;
  FString local_ff0;
  FString local_fe0;
  wchar_t *local_fc8;
  int iStack_fc0;
  undefined4 uStack_fbc;
  FString local_fb8;
  FScriptContainerElement *local_fa8;
  int iStack_fa0;
  undefined4 uStack_f9c;
  FScriptContainerElement *local_f98;
  int iStack_f90;
  undefined4 uStack_f8c;
  FString local_f88;
  FString local_f78;
  FString local_f68;
  FString local_f58;
  FString local_f48;
  FString local_f38;
  FString local_f28;
  FString local_f18;
  FString local_f08;
  uint *local_ef8;
  TTransform<double> *local_ef0;
  FString local_ee8;
  TArray<GLTF::FAnimation,TSizedDefaultAllocator<32>_> local_ed8;
  FString local_ec8;
  FString local_eb8;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_ea8;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_e98;
  FString local_e88;
  FString local_e78;
  FString local_e68;
  FString local_e58;
  FString local_e48;
  FString local_e38;
  FString local_e28;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_e18;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_e08;
  wchar_t *local_df8;
  int iStack_df0;
  undefined4 uStack_dec;
  FString local_de8;
  FString local_dd8;
  FGLTFMaterialProcessor local_dc8;
  TMatrix<double> local_d88;
  FString local_d08;
  TStringView<wchar_t> local_cf8;
  TStringView<wchar_t> local_ce8;
  TStringView<wchar_t> local_cd8;
  void *local_cc8 [2];
  FString local_cb8;
  void *local_ca8 [2];
  FString local_c98;
  void *local_c88 [2];
  FString local_c78;
  void *local_c68 [2];
  FString local_c58;
  TVector<double>_u_0 local_c48;
  TVector<double>_u_0 local_c30;
  TVector<double>_u_0 local_c18;
  void *local_c00 [2];
  void *local_bf0 [2];
  FText local_be0;
  FText local_bd0;
  FText local_bc0;
  FText local_bb0;
  FText local_ba0;
  FText local_b90;
  TStringView<wchar_t> local_b78;
  FText local_b68;
  void *local_b58 [2];
  FString local_b48;
  void *local_b38 [2];
  TRangedForConstIterator local_b28;
  TRangedForConstIterator local_af8;
  TRangedForConstIterator local_ac8;
  TRangedForIterator local_a98;
  double local_a68;
  double dStack_a60;
  double local_a58;
  double local_a50;
  double dStack_a48;
  double local_a40;
  double local_a38;
  double dStack_a30;
  double local_a28;
  FFileReader local_a18;
  double local_9b8;
  double dStack_9b0;
  double local_9a8;
  FText local_9a0;
  FTextFormat local_990;
  FText local_980;
  FTextFormat local_970;
  FText local_960;
  FText local_950;
  FTextFormat local_940;
  FString local_930;
  FString local_920;
  FString local_910;
  FString local_900;
  FString local_8f0;
  FLinearColor local_8e0;
  FLinearColor local_8d0;
  FLinearColor local_8c0;
  FString local_8b0 [2];
  undefined4 local_884;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_880;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_860;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_840;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_820;
  undefined1 local_7f8 [128];
  undefined1 local_778 [128];
  undefined1 local_6f8 [128];
  undefined1 local_678 [128];
  undefined1 local_5f8 [32];
  uint *local_5d8;
  uint local_5d0;
  uint local_5cc;
  undefined4 local_5c8;
  int local_5c4;
  ForElementType<FSetElementId> local_5c0;
  int local_5b0 [2];
  undefined1 local_5a8 [32];
  undefined1 *local_588;
  uint local_580;
  undefined4 local_57c;
  undefined4 local_578;
  int local_574;
  ForElementType<FSetElementId> local_570;
  int local_560;
  undefined1 local_558 [32];
  undefined8 local_538;
  int local_530;
  undefined4 local_52c;
  undefined4 local_528;
  int local_524;
  ForElementType<FSetElementId> local_518;
  int local_510;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_508;
  TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
  local_4b8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_468;
  TTransform<double> local_418;
  TMatrix<double> local_3b8;
  TMatrix<double> local_338;
  TTransform<double> local_2b8;
  FAsset local_258;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1498;
  local_1428 = param_1;
  local_1298 = this;
  ::FString::FString(&local_1170,(FString *)(this->_padding_ + 0x28));
  bVar12 = FPaths::FileExists(&local_1170);
  if (!bVar12) {
    pFVar16 = FText::GetEmpty();
    memset(&local_258,0,0x1f0);
    pFVar17 = GLTF::FAsset::FAsset(&local_258);
    local_e98.Object = (FAnalyticsHelper *)this->_padding_;
    local_e98.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    if (local_e98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1330 = INPUT_FILE_NOTFOUND;
    UE::Interchange::Gltf::Private::AddAnalytics(&local_1330,&local_e98,pFVar17,pFVar16);
    GLTF::FAsset::~FAsset(&local_258);
    bVar12 = false;
    goto LAB_14e6d6017;
  }
  GLTF::FFileReader::FFileReader(&local_a18);
  GLTF::FFileReader::ReadFile(&local_a18,&local_1170,false,true,&this->GltfAsset);
  this_00 = UInterchangeSourceNode::FindOrCreateUniqueInstance(param_1);
  ::FString::FString(&local_e78,L"meter");
  ::FString::FString(&local_e88,L"File Units");
  UInterchangeSourceNode::SetExtraInformation(this_00,&local_e88,&local_e78);
  if (local_e88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e88.Data.AllocatorInstance.Data);
  }
  if (local_e78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e78.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_e58,L"Y-UP (RH)");
  ::FString::FString(&local_e68,L"File Axis Direction");
  UInterchangeSourceNode::SetExtraInformation(this_00,&local_e68,&local_e58);
  if (local_e68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e68.Data.AllocatorInstance.Data);
  }
  if (local_e58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e58.Data.AllocatorInstance.Data);
  }
  pFVar1 = &(this->GltfAsset).Metadata;
  iVar15 = (this->GltfAsset).Metadata.GeneratorName.Data.ArrayNum;
  iVar14 = iVar15 + -1;
  if (iVar15 == 0) {
    iVar14 = 0;
  }
  if (0 < iVar14) {
    ::FString::FString(&local_e48,L"Generator Name");
    UInterchangeSourceNode::SetExtraInformation(this_00,&local_e48,&pFVar1->GeneratorName);
    if (local_e48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e48.Data.AllocatorInstance.Data);
    }
    pFVar60 = (pFVar1->GeneratorName).Data.AllocatorInstance.Data;
    iVar15 = (this->GltfAsset).Metadata.GeneratorName.Data.ArrayNum;
    pFVar50 = pFVar60 + (longlong)iVar15 * 2;
    do {
      if (pFVar50 == pFVar60) goto LAB_14e6d292f;
      pFVar50 = pFVar50 + -2;
    } while (*(short *)pFVar50 != 0x20);
    iVar14 = (int)((longlong)pFVar50 - (longlong)pFVar60 >> 1);
    if (iVar14 != -1) {
      iVar55 = 0;
      iVar42 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar42 = iVar55;
      }
      if (iVar14 < iVar42 + -1) {
        if ((((iVar14 + 1 < 0) || (iVar15 == 0)) || (iVar15 + -1 <= iVar14 + 1)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                ,0x113,
                                L"String index out of bounds: Index %i from a string with a length of %i"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        pwVar40 = (wchar_t *)(pFVar1->GeneratorName).Data.AllocatorInstance.Data;
        if (*(short *)((longlong)pwVar40 + ((longlong)iVar14 + 1) * 2) == 0x76) {
          iVar15 = (this->GltfAsset).Metadata.GeneratorName.Data.ArrayNum;
          iVar42 = iVar15 + -1;
          if (iVar15 == 0) {
            iVar42 = iVar55;
          }
          iVar38 = (iVar42 - iVar14) + -1;
          iVar42 = iVar15 + -1;
          if (iVar15 == 0) {
            pwVar40 = L"";
            iVar42 = iVar55;
          }
          iVar15 = iVar42;
          if (iVar38 < iVar42) {
            iVar15 = iVar38;
          }
          iVar38 = iVar55;
          if (0 < iVar15) {
            iVar38 = iVar15;
          }
          ::FString::FString(&local_e28,
                             (wchar_t *)
                             ((longlong)pwVar40 + ((longlong)iVar42 - (longlong)iVar38) * 2));
          iVar15 = (this->GltfAsset).Metadata.GeneratorName.Data.ArrayNum;
          iVar42 = iVar15 + -1;
          if (iVar15 == 0) {
            iVar42 = iVar55;
          }
          if (iVar14 < iVar42) {
            iVar42 = iVar14;
          }
          if (0 < iVar42) {
            iVar55 = iVar42;
          }
          if (iVar15 == 0) {
            pwVar40 = L"";
          }
          else {
            pwVar40 = (wchar_t *)(pFVar1->GeneratorName).Data.AllocatorInstance.Data;
          }
          ::FString::ConstructFromPtrSize(&local_e38,pwVar40,iVar55);
          pFVar18 = UE::Interchange::FSourceNodeExtraInfoStaticData::GetApplicationNameExtraInfoKey
                              ();
          UInterchangeSourceNode::SetExtraInformation(this_00,pFVar18,&local_e38);
          pFVar18 = UE::Interchange::FSourceNodeExtraInfoStaticData::
                    GetApplicationVersionExtraInfoKey();
          UInterchangeSourceNode::SetExtraInformation(this_00,pFVar18,&local_e28);
          if (local_e38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e38.Data.AllocatorInstance.Data);
          }
          if (local_e28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e28.Data.AllocatorInstance.Data);
          }
          goto LAB_14e6d2942;
        }
      }
    }
LAB_14e6d292f:
    pFVar18 = UE::Interchange::FSourceNodeExtraInfoStaticData::GetApplicationNameExtraInfoKey();
    UInterchangeSourceNode::SetExtraInformation(this_00,pFVar18,&pFVar1->GeneratorName);
  }
LAB_14e6d2942:
  iVar15 = (this->GltfAsset).Metadata.Extras.ArrayNum;
  pFVar50 = (this->GltfAsset).Metadata.Extras.AllocatorInstance.Data;
  pFVar60 = pFVar50 + (longlong)iVar15 * 0x20;
  while( true ) {
    if ((this->GltfAsset).Metadata.Extras.ArrayNum != iVar15) {
      local_1446 = 0;
      `TCheckedPointerIterator<GLTF::FMetadata::FExtraData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1446);
    }
    dVar7 = __real_3e45798ee0000000;
    if (pFVar50 == pFVar60) break;
    UInterchangeSourceNode::SetExtraInformation
              (this_00,(FString *)pFVar50,(FString *)(pFVar50 + 0x10));
    pFVar50 = pFVar50 + 0x20;
  }
  local_3b8.M[1][0] = 0.0;
  local_3b8.M[1][1] = 0.0;
  local_3b8.M[3][0] = 0.0;
  local_3b8.M[3][1] = 0.0;
  local_c48._s_0.Z = 0.0;
  local_3b8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_3b8.M[0][1] = _UNK_150689518;
  local_3b8.M[0][2] = 0.0;
  local_3b8.M[0][3] = 0.0;
  local_3b8.M[1][2] = ___xmm_00000000000000003ff0000000000000;
  local_3b8.M[1][3] = _UNK_150689518;
  local_3b8.M[2][0] = ___xmm_3ff00000000000000000000000000000;
  local_3b8.M[2][1] = _UNK_15061cbc8;
  local_3b8.M[2][2] = 0.0;
  local_3b8.M[2][3] = 0.0;
  local_3b8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_3b8.M[3][3] = _UNK_15061cbc8;
  local_c48._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_c48._s_0.Y = _UNK_150689518;
  bVar12 = UE::Math::TVector<double>::IsNearlyZero
                     ((TVector<double> *)&local_c48._s_0,__real_3e45798ee0000000);
  if (bVar12) {
    local_c30._s_0.X = 0.0;
    local_c30._s_0.Y = 0.0;
    local_c30._s_0.Z = __real_3ff0000000000000;
    bVar12 = UE::Math::TVector<double>::IsNearlyZero((TVector<double> *)&local_c30._s_0,dVar7);
    if (bVar12) {
      local_c18._s_0.Z = 0.0;
      local_c18._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_c18._s_0.Y = _UNK_15061cbc8;
      bVar12 = UE::Math::TVector<double>::IsNearlyZero((TVector<double> *)&local_c18._s_0,dVar7);
      if (bVar12) {
        local_d88.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
        local_d88.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
        local_d88.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
        local_d88.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
        local_d88.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
        local_d88.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
        local_d88.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
        local_d88.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
        local_d88.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
        local_d88.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
        local_d88.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
        local_d88.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
        local_d88.M[3][2]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_;
        local_d88.M[3][2]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_;
        local_d88.M[3][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_;
        local_d88.M[3][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_;
        local_d88.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
        local_d88.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
        goto LAB_14e6d2c9e;
      }
    }
  }
  FMath::MatrixInverse(&local_338,&local_3b8);
  local_d88.M[0][0] = local_338.M[0][0];
  local_d88.M[0][1] = local_338.M[0][1];
  local_d88.M[0][2] = local_338.M[0][2];
  local_d88.M[0][3] = local_338.M[0][3];
  local_d88.M[1][0] = local_338.M[1][0];
  local_d88.M[1][1] = local_338.M[1][1];
  local_d88.M[1][2] = local_338.M[1][2];
  local_d88.M[1][3] = local_338.M[1][3];
  local_d88.M[2][0] = local_338.M[2][0];
  local_d88.M[2][1] = local_338.M[2][1];
  local_d88.M[2][2] = local_338.M[2][2];
  local_d88.M[2][3] = local_338.M[2][3];
  local_d88.M[3][2]._0_4_ = local_338.M[3][2]._0_4_;
  local_d88.M[3][2]._4_4_ = local_338.M[3][2]._4_4_;
  local_d88.M[3][3]._0_4_ = local_338.M[3][3]._0_4_;
  local_d88.M[3][3]._4_4_ = local_338.M[3][3]._4_4_;
  local_d88.M[3][0] = local_338.M[3][0];
  local_d88.M[3][1] = local_338.M[3][1];
LAB_14e6d2c9e:
  UE::Math::TTransform<double>::SetFromMatrix(&local_2b8,&local_d88);
  UInterchangeSourceNode::SetCustomAxisConversionInverseTransform(this_00,&local_2b8);
  ::FString::FString(&local_1300,&(this->GltfAsset).Name);
  local_1418 = 1;
  local_13e0.Data = (FScriptContainerElement *)0x0;
  local_13d8 = 0;
  if ((this->GltfAsset).ExtensionsRequired.ArrayNum != 0) {
    iVar15 = (this->GltfAsset).ExtensionsRequired.ArrayNum;
    pFVar50 = (this->GltfAsset).ExtensionsRequired.AllocatorInstance.Data;
    pFVar60 = pFVar50 + (longlong)iVar15 * 0x10;
    while( true ) {
      if ((this->GltfAsset).ExtensionsRequired.ArrayNum != iVar15) {
        local_1445 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1445);
      }
      FVar43.Data = ImporterSupportedExtensions.AllocatorInstance.Data;
      if (pFVar50 == pFVar60) break;
      pFVar46 = ImporterSupportedExtensions.AllocatorInstance.Data +
                (longlong)ImporterSupportedExtensions.ArrayNum * 0x10;
      for (this_08.Data = ImporterSupportedExtensions.AllocatorInstance.Data;
          this_08.Data != pFVar46; this_08.Data = this_08.Data + 0x10) {
        bVar12 = ::FString::Equals((FString *)this_08.Data,(FString *)pFVar50,(Type)local_1418);
        if (bVar12) {
          if ((int)((longlong)this_08.Data - (longlong)FVar43.Data >> 4) != -1) goto LAB_14e6d2e2d;
          break;
        }
      }
      if (((local_13e0.Data <= pFVar50) &&
          (pFVar50 < local_13e0.Data + (longlong)local_13d8._4_4_ * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      if ((int)local_13d8 == local_13d8._4_4_) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_13e0,(int *)((longlong)&local_13d8 + 4));
        local_13d8 = CONCAT44(local_13d8._4_4_,iVar14);
      }
      lVar34 = (longlong)(int)local_13d8;
      local_13d8 = CONCAT44(local_13d8._4_4_,(int)local_13d8 + 1);
      ::FString::FString((FString *)(local_13e0.Data + lVar34 * 0x10),(FString *)pFVar50);
LAB_14e6d2e2d:
      pFVar50 = pFVar50 + 0x10;
    }
  }
  local_1310 = (TTuple<GLTF::EMessageSeverity,FText> *)0x0;
  TArray<TTuple<enum_GLTF::EMessageSeverity,FText>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<TTuple<enum_GLTF::EMessageSeverity,FText>,int>
            (&local_1310,(TTuple<GLTF::EMessageSeverity,FText> *)local_a18._padding_,
             (int)local_a18._padding_,0);
  iVar15 = local_1308;
  pTVar3 = local_1310 + local_1308;
  pTVar51 = local_1310;
  iVar14 = local_1308;
  while( true ) {
    if (iVar14 != iVar15) {
      local_1444 = 0;
      `TCheckedPointerIterator<TTuple<enum_GLTF::EMessageSeverity,FText>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1444);
      iVar14 = local_1308;
    }
    fVar8 = UE::Interchange::Gltf::Private::GltfUnitConversionMultiplier;
    if (pTVar51 == pTVar3) break;
    if (*(int *)pTVar51 == 2) goto LAB_14e6d2eaa;
    pTVar51 = pTVar51 + 1;
  }
  iVar15 = (int)local_13d8;
  uVar20 = (ulonglong)(int)local_13d8;
  if (0 < (int)local_13d8) {
    pFVar50 = local_13e0.Data + uVar20 * 0x10;
    local_13b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_13b0.Data.ArrayNum = 0;
    local_13b0.Data.ArrayMax = 0;
    FVar43.Data = local_13e0.Data;
    while( true ) {
      if ((int)uVar20 != iVar15) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_13d0);
      }
      if (FVar43.Data == pFVar50) break;
      iVar14 = local_13b0.Data.ArrayNum + -1;
      if (local_13b0.Data.ArrayNum == 0) {
        iVar14 = 0;
      }
      if (0 < iVar14) {
        ::FString::AppendChars(&local_13b0,", ",2);
      }
      iVar14 = *(int *)(FVar43.Data + 8) + -1;
      if (*(int *)(FVar43.Data + 8) == 0) {
        iVar14 = 0;
      }
      ::FString::AppendChars(&local_13b0,*(wchar_t **)FVar43.Data,iVar14);
      uVar20 = local_13d8 & 0xffffffff;
      FVar43.Data = FVar43.Data + 0x10;
    }
    pUVar19 = UInterchangeTranslatorBase::AddMessage<UInterchangeResultError_Generic>
                        ((UInterchangeTranslatorBase *)this);
    ::FString::operator=((FString *)&pUVar19->_padding_,&local_1300);
    pFVar16 = FText::FromString(&local_9a0,&local_13b0);
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        (&local_be0,L"InterchangeGLTFTranslator",L"UnsupportedRequiredExtensions",
                         L"Not all required extensions are supported. (Unsupported extensions: {0})"
                        );
    pFVar22 = FTextFormat::FTextFormat(&local_990,pFVar21,Default);
    pFVar16 = FText::Format<FText>(&local_b68,pFVar22,pFVar16);
    FText::operator=(&pUVar19->Text,pFVar16);
    if (local_b68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b68.TextData.Reference + 0x10))();
    }
    if (local_be0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_be0.TextData.Reference + 0x10))();
    }
    pFVar16 = FText::GetEmpty();
    local_e08.Object = (FAnalyticsHelper *)this->_padding_;
    local_e08.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    if (local_e08.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e08.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e08.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1328[0] = NOTSUPPORTED_EXTENSION_FOUND;
    UE::Interchange::Gltf::Private::AddAnalytics(local_1328,&local_e08,&this->GltfAsset,pFVar16);
    if (local_13b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13b0.Data.AllocatorInstance.Data);
    }
    bVar12 = false;
    goto LAB_14e6d5f8d;
  }
  pFVar60 = (this->GltfAsset).Nodes.AllocatorInstance.Data;
  iVar15 = (this->GltfAsset).Nodes.ArrayNum;
  pFVar50 = pFVar60 + 0x30;
  pFVar46 = pFVar60 + (longlong)iVar15 * 0x260;
  while( true ) {
    if ((this->GltfAsset).Nodes.ArrayNum != iVar15) {
      local_1443 = 0;
      `TCheckedPointerIterator<GLTF::FNode,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1443);
    }
    if (pFVar60 == pFVar46) break;
    local_a68 = *(double *)pFVar50;
    dStack_a60 = *(double *)(pFVar50 + 8);
    local_a58 = *(double *)(pFVar50 + 0x10);
    pFVar60 = pFVar60 + 0x260;
    local_a28 = (double)fVar8;
    local_a50 = local_a28 * local_a68;
    dStack_a48 = local_a28 * dStack_a60;
    local_a40 = local_a28 * local_a58;
    *(double *)pFVar50 = local_a50;
    *(double *)(pFVar50 + 8) = dStack_a48;
    *(double *)(pFVar50 + 0x10) = local_a40;
    *(double *)(pFVar50 + 0x18) = 0.0;
    local_9b8 = *(double *)(pFVar50 + 400);
    dStack_9b0 = *(double *)(pFVar50 + 0x198);
    local_9a8 = *(double *)(pFVar50 + 0x1a0);
    local_a38 = local_a28 * local_9b8;
    dStack_a30 = local_a28 * dStack_9b0;
    local_a28 = local_a28 * local_9a8;
    *(double *)(pFVar50 + 400) = local_a38;
    *(double *)(pFVar50 + 0x198) = dStack_a30;
    *(double *)(pFVar50 + 0x1a0) = local_a28;
    *(double *)(pFVar50 + 0x1a8) = 0.0;
    pFVar50 = pFVar50 + 0x260;
  }
  iVar15 = (this->GltfAsset).Materials.ArrayNum;
  pFVar50 = (this->GltfAsset).Materials.AllocatorInstance.Data;
  local_508.Elements._0_8_ = 0;
  pFVar60 = pFVar50 + (longlong)iVar15 * 0x370;
  local_508.Elements._8_8_ = 0;
  local_508.Elements._32_8_ = 0;
  local_508.Elements._40_4_ = 0;
  local_508.Elements._44_4_ = 0x80;
  local_508.Elements._48_4_ = 0xffffffff;
  local_508.Elements._52_4_ = 0;
  local_508.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_508.HashSize = 0;
  while( true ) {
    if ((this->GltfAsset).Materials.ArrayNum != iVar15) {
      local_1442 = 0;
      `TCheckedPointerIterator<GLTF::FMaterial_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1442);
    }
    piVar52 = &(this->GltfAsset).Textures.ArrayNum;
    if (pFVar50 == pFVar60) break;
    local_12f0[0] = *(int *)(pFVar50 + 0x1e0);
    if ((-1 < local_12f0[0]) && (local_12f0[0] < *piVar52)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_508,&local_1174,(bool *)local_12f0);
    }
    local_12e8[0] = *(int *)(pFVar50 + 0xec);
    if ((-1 < local_12e8[0]) && (local_12e8[0] < *piVar52)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_508,&local_1180,(bool *)local_12e8);
    }
    local_1340[0] = *(int *)(pFVar50 + 0x274);
    if ((local_1340[0] < 0) || ((this->GltfAsset).Textures.ArrayNum <= local_1340[0])) {
      pFVar50 = pFVar50 + 0x370;
    }
    else {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_508,&local_117c,(bool *)local_1340);
      pFVar50 = pFVar50 + 0x370;
    }
  }
  iVar15 = (this->GltfAsset).Textures.ArrayNum;
  uVar20 = (ulonglong)iVar15;
  uVar62 = 0;
  pFVar50 = (this->GltfAsset).Textures.AllocatorInstance.Data;
  local_13c8 = pFVar50 + uVar20 * 0x80;
  local_1420 = (FScriptContainerElement *)CONCAT44(local_1420._4_4_,iVar15);
LAB_14e6d3311:
  do {
    pFVar60 = local_13c8;
    if ((this->GltfAsset).Textures.ArrayNum != (int)uVar20) {
      local_1441 = 0;
      `TCheckedPointerIterator<GLTF::FTexture_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1441);
    }
    pUVar63 = local_1428;
    if (pFVar50 == pFVar60) break;
    if (*(int *)(*(longlong *)pFVar50 + 0x20) == 0) {
      pUVar19 = UInterchangeTranslatorBase::AddMessage<UInterchangeResultError_Generic>
                          ((UInterchangeTranslatorBase *)this);
      FText::FText(&local_b90);
      if (*(int *)(*(longlong *)pFVar50 + 0x30) < 2) {
        pFVar16 = FText::FromString(&local_980,(FString *)(pFVar50 + 0x10));
        pFVar21 = FText::AsLocalizable_Advanced_LocText
                            (&local_bc0,L"InterchangeGLTFTranslator",L"TextureCreationFailed",
                             L"The image format of the buffer for texture {0} is not supported.");
        pFVar22 = FTextFormat::FTextFormat(&local_970,pFVar21,Default);
        pFVar16 = FText::Format<FText>(&local_bd0,pFVar22,pFVar16);
        FText::operator=(&pUVar19->Text,pFVar16);
        TVar35.Reference = local_bc0.TextData.Reference;
        if (local_bd0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_bd0.TextData.Reference + 0x10))();
          TVar35.Reference = local_bc0.TextData.Reference;
        }
      }
      else {
        ::FString::FString(&local_13a0,(FString *)(this->_padding_ + 0x28));
        plVar36 = &pUVar19->_padding_;
        if ((FString *)plVar36 != &local_13a0) {
          if ((void *)*plVar36 != (void *)0x0) {
            FMemory::Free((void *)*plVar36);
          }
          *plVar36 = (longlong)local_13a0.Data.AllocatorInstance.Data;
          *(int *)&pUVar19->_padding_ = local_13a0.Data.ArrayNum;
          *(int *)((longlong)&pUVar19->_padding_ + 4) = local_13a0.Data.ArrayMax;
          local_13a0.Data.ArrayNum = 0;
          local_13a0.Data.ArrayMax = 0;
          local_13a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_13a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_13a0.Data.AllocatorInstance.Data);
        }
        pFVar16 = FText::FromString(&local_960,(FString *)(pFVar50 + 0x10));
        pFVar21 = FText::FromString(&local_950,(FString *)(*(longlong *)pFVar50 + 0x28));
        pFVar23 = FText::AsLocalizable_Advanced_LocText
                            (&local_ba0,L"InterchangeGLTFTranslator",
                             L"TextureCreationFailedFromFile",
                             L"The extension of the image file, {0}, for texture {1} is not supported."
                            );
        pFVar22 = FTextFormat::FTextFormat(&local_940,pFVar23,Default);
        pFVar16 = FText::Format<FText,FText>(&local_bb0,pFVar22,pFVar21,pFVar16);
        FText::operator=(&pUVar19->Text,pFVar16);
        TVar35.Reference = local_ba0.TextData.Reference;
        if (local_bb0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_bb0.TextData.Reference + 0x10))();
          TVar35.Reference = local_ba0.TextData.Reference;
        }
      }
      if (TVar35.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar35.Reference + 0x10))();
      }
      if (local_b90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b90.TextData.Reference + 0x10))();
        uVar20 = (ulonglong)local_1420 & 0xffffffff;
        pFVar50 = pFVar50 + 0x80;
        goto LAB_14e6d3311;
      }
    }
    else {
      local_df8 = *(wchar_t **)(pFVar50 + 0x70);
      iStack_df0 = *(int *)(pFVar50 + 0x78) + -1;
      if (*(int *)(pFVar50 + 0x78) == 0) {
        iStack_df0 = 0;
      }
      local_b78._12_4_ = uStack_dec;
      local_b78.Size = iStack_df0;
      local_b78.DataPtr = local_df8;
      this_01 = UInterchangeTexture2DNode::Create(local_1428,&local_b78);
      UInterchangeBaseNode::SetDisplayLabel
                ((UInterchangeBaseNode *)this_01,(FString *)(pFVar50 + 0x10));
      iVar15 = **(int **)(pFVar50 + 8);
      if (iVar15 == 0x2600) {
        local_1440 = '\0';
      }
      else if (iVar15 == 0x2701) {
        local_1440 = '\x01';
      }
      else if (iVar15 == 0x2703) {
        local_1440 = '\x02';
      }
      else {
        local_1440 = '\x03';
      }
      pFVar18 = (FString *)(**(code **)(this_01->_padding_ + 0x2b0))(this_01,local_b58);
      ::FString::ConcatFC(&local_de8,pFVar18,L".SetFilter");
      if (local_b58[0] != (void *)0x0) {
        FMemory::Free(local_b58[0]);
      }
      pFVar24 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                operator*<UE::Interchange::FAttributeStorage>
                          ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this_01->_padding_);
      EVar25 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                         (pFVar24,(FAttributeKey *)&this_01->_padding_,&local_1440,None);
      if ((EVar25 & Operation_Success) == None) {
        ::FString::FString(&local_b48,(FString *)&this_01->_padding_);
        pFVar18 = ::FString::FString(&local_930,&local_de8);
        UE::Interchange::LogAttributeStorageErrors(EVar25,pFVar18,(FAttributeKey *)&local_b48);
      }
      if (local_de8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_de8.Data.AllocatorInstance.Data);
      }
      if (local_508.Elements._8_4_ != local_508.Elements._52_4_) {
        FVar39 = (ForElementType<FSetElementId>)&local_508.Hash;
        if (local_508.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar39 = local_508.Hash.SecondaryData;
        }
        for (iVar15 = *(int *)((longlong)FVar39 + (local_508.HashSize - 1 & uVar62) * 4);
            iVar15 != -1; iVar15 = *(int *)(local_508.Elements._0_8_ + 4 + (longlong)iVar15 * 0xc))
        {
          if (*(int *)(local_508.Elements._0_8_ + (longlong)iVar15 * 0xc) == (int)uVar62) {
            if (iVar15 != -1) {
              local_143f = true;
              pFVar18 = (FString *)(**(code **)(this_01->_padding_ + 0x2b0))(this_01,local_b38);
              ::FString::ConcatFC(&local_dd8,pFVar18,L".SetbFlipGreenChannel");
              if (local_b38[0] != (void *)0x0) {
                FMemory::Free(local_b38[0]);
              }
              pFVar24 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                        operator*<UE::Interchange::FAttributeStorage>
                                  ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)
                                   &this_01->_padding_);
              InterchangePrivateNodeBase::SetCustomAttribute<bool>
                        (pFVar24,(FAttributeKey *)&this_01->_padding_,&local_dd8,&local_143f);
              if (local_dd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_dd8.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_14e6d369f;
          }
        }
      }
      iVar15 = -1;
LAB_14e6d369f:
      pwVar40 = L"true";
      if (iVar15 == -1) {
        pwVar40 = L"false";
      }
      ::FString::FString(&local_1030,pwVar40);
      uVar62 = (ulonglong)((int)uVar62 + 1);
      ::FString::PrintfImpl(&local_1040,L"%d");
      ::FString::ConcatFC(&local_1050,&local_1040,L":");
      ::FString::ConcatFF(&local_1000,&local_1050,&local_1030);
      if (local_1050.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1050.Data.AllocatorInstance.Data);
      }
      if (local_1040.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1040.Data.AllocatorInstance.Data);
      }
      if (local_1030.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1030.Data.AllocatorInstance.Data);
      }
      (**(code **)(this_01->_padding_ + 0x300))(this_01,&local_1000);
      iVar15 = *(int *)(*(longlong *)(pFVar50 + 8) + 8);
      if (iVar15 == 0x2901) {
        local_143e = Wrap;
      }
      else if (iVar15 == 0x812f) {
        local_143e = Clamp;
      }
      else {
        local_143e = Mirror;
        if (iVar15 != 0x8370) {
          local_143e = Wrap;
        }
      }
      pFVar18 = (FString *)(**(code **)(this_01->_padding_ + 0x2b0))(this_01,local_c00);
      ::FString::ConcatFC(&local_1020,pFVar18,L".SetWrapU");
      if (local_c00[0] != (void *)0x0) {
        FMemory::Free(local_c00[0]);
      }
      pFVar24 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                operator*<UE::Interchange::FAttributeStorage>
                          ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this_01->_padding_);
      InterchangePrivateNodeBase::SetCustomAttribute<enum_EInterchangeTextureWrapMode>
                (pFVar24,&this_01->Macro_CustomWrapUKey,&local_1020,&local_143e);
      if (local_1020.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1020.Data.AllocatorInstance.Data);
      }
      iVar15 = *(int *)(*(longlong *)(pFVar50 + 8) + 0xc);
      if (iVar15 == 0x2901) {
        local_143d = '\0';
      }
      else if (iVar15 == 0x812f) {
        local_143d = '\x01';
      }
      else {
        local_143d = '\x02';
        if (iVar15 != 0x8370) {
          local_143d = '\0';
        }
      }
      pFVar18 = (FString *)(**(code **)(this_01->_padding_ + 0x2b0))(this_01,local_bf0);
      ::FString::ConcatFC(&local_1010,pFVar18,L".SetWrapV");
      if (local_bf0[0] != (void *)0x0) {
        FMemory::Free(local_bf0[0]);
      }
      pFVar24 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                operator*<UE::Interchange::FAttributeStorage>
                          ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this_01->_padding_);
      EVar25 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                         (pFVar24,&this_01->Macro_CustomWrapVKey,&local_143d,None);
      if ((EVar25 & Operation_Success) == None) {
        ::FString::FString(&local_d08,&(this_01->Macro_CustomWrapVKey).Key);
        pFVar18 = ::FString::FString(&local_920,&local_1010);
        UE::Interchange::LogAttributeStorageErrors(EVar25,pFVar18,(FAttributeKey *)&local_d08);
      }
      if (local_1010.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1010.Data.AllocatorInstance.Data);
      }
      lVar34 = *(longlong *)pFVar50;
      local_1200._padding_._0_4_ = 0;
      local_1200._padding_._4_4_ = (undefined4)local_1418;
      pTVar56 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar34 + 0x58);
      local_1200.UnvisitedBitMask = 0xffffffff;
      plVar36 = (longlong *)(lVar34 + 0x48);
      local_1200.CurrentBitIndex = 0;
      local_1200.BaseBitIndex = 0;
      local_1200.Array = pTVar56;
      if (*(int *)(lVar34 + 0x70) != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1200);
      }
      unique0x1000334f = CONCAT44(local_1200._padding_._4_4_,(undefined4)local_1200._padding_);
      uStack_1378 = CONCAT44(local_1200.CurrentBitIndex,local_1200.UnvisitedBitMask);
      lStack_1370 = CONCAT44(local_1200._28_4_,local_1200.BaseBitIndex);
      iStack_1118 = *(int *)(lVar34 + 0x50) - *(int *)(lVar34 + 0x7c);
      pTStack_1380 = local_1200.Array;
      local_1368 = iStack_1118;
      local_1130 = local_1200.Array;
      uStack_1114 = uStack_1364;
      local_1390._0_8_ = plVar36;
      local_1140._0_8_ = plVar36;
      unique0x100066a1 = unique0x1000334f;
      uStack_1128 = uStack_1378;
      local_1120 = lStack_1370;
      pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_860,pTVar56,*(int *)(lVar34 + 0x70));
      unique0x10002bd7 = pTVar26->_padding_;
      pTStack_1380 = pTVar26->Array;
      uStack_1378._0_4_ = pTVar26->UnvisitedBitMask;
      uStack_1378._4_4_ = pTVar26->CurrentBitIndex;
      lStack_1370 = *(longlong *)&pTVar26->BaseBitIndex;
      local_b28.InitialNum = *(int *)(lVar34 + 0x50) - *(int *)(lVar34 + 0x7c);
      local_1368 = local_b28.InitialNum;
      local_b28._44_4_ = uStack_1364;
      local_1390._0_8_ = plVar36;
      local_b28._padding_ = (longlong)plVar36;
      local_b28._padding_ = unique0x10002bd7;
      local_b28._padding_ = (longlong)pTStack_1380;
      local_b28._padding_ = uStack_1378;
      local_b28._padding_ = lStack_1370;
      bVar12 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForConstIterator::operator!=
                         ((TRangedForConstIterator *)local_1140,&local_b28);
      if (bVar12) {
        do {
          local_1250.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_1250.TypedValue.Data.ArrayNum = 0;
          local_1250.TypedValue.Data.ArrayMax = -1;
          pFVar18 = (FString *)(*(longlong *)local_1140._0_8_ + (longlong)uStack_1128._4_4_ * 0x28);
          UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FString>
                    ((UInterchangeBaseNode *)this_01,pFVar18,pFVar18 + 1,
                     (TOptional<FString> *)&local_1250.TypedValue,false);
          if ((local_1250.TypedValue.Data.ArrayMax != -1) &&
             (local_1250.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free((void *)local_1250.TypedValue.Data.AllocatorInstance.Data);
          }
          uStack_1128 = CONCAT44(uStack_1128._4_4_,(uint)uStack_1128 & ~uStack_1134);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1140 + 8));
          bVar12 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForConstIterator::operator!=
                             ((TRangedForConstIterator *)local_1140,&local_b28);
        } while (bVar12);
      }
      pTVar56 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar50 + 0x30);
      pFVar60 = pFVar50 + 0x20;
      local_11e0._padding_._4_4_ = (undefined4)local_1418;
      local_11e0._padding_._0_4_ = 0;
      local_11e0.UnvisitedBitMask = 0xffffffff;
      local_11e0.CurrentBitIndex = 0;
      local_11e0.BaseBitIndex = 0;
      local_11e0.Array = pTVar56;
      if (*(int *)(pFVar50 + 0x48) != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_11e0);
      }
      lStack_1408 = CONCAT44(local_11e0._padding_._4_4_,(undefined4)local_11e0._padding_);
      uStack_13f8 = CONCAT44(local_11e0.CurrentBitIndex,local_11e0.UnvisitedBitMask);
      uStack_13f0 = CONCAT44(local_11e0._28_4_,local_11e0.BaseBitIndex);
      local_13e8 = *(int *)(pFVar50 + 0x28) - *(int *)(pFVar50 + 0x54);
      pTStack_1400 = local_11e0.Array;
      uStack_1364 = uStack_13e4;
      local_1368 = local_13e8;
      pTStack_1380 = local_11e0.Array;
      local_1410 = pFVar60;
      local_1390._0_8_ = pFVar60;
      unique0x100065f9 = lStack_1408;
      uStack_1378 = uStack_13f8;
      lStack_1370 = uStack_13f0;
      pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_880,pTVar56,*(int *)(pFVar50 + 0x48));
      lStack_1408 = pTVar26->_padding_;
      pTStack_1400 = pTVar26->Array;
      uStack_13f8._0_4_ = pTVar26->UnvisitedBitMask;
      uStack_13f8._4_4_ = pTVar26->CurrentBitIndex;
      uStack_13f0 = *(longlong *)&pTVar26->BaseBitIndex;
      local_13e8 = *(int *)(pFVar50 + 0x28) - *(int *)(pFVar50 + 0x54);
      local_af8._44_4_ = uStack_13e4;
      local_af8.InitialNum = local_13e8;
      local_1410 = pFVar60;
      local_af8._padding_ = (longlong)pFVar60;
      local_af8._padding_ = lStack_1408;
      local_af8._padding_ = (longlong)pTStack_1400;
      local_af8._padding_ = uStack_13f8;
      local_af8._padding_ = uStack_13f0;
      bVar12 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForConstIterator::operator!=
                         ((TRangedForConstIterator *)local_1390,&local_af8);
      if (bVar12) {
        do {
          local_12b0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_12b0.TypedValue.Data.ArrayNum = 0;
          local_12b0.TypedValue.Data.ArrayMax = -1;
          pFVar18 = (FString *)(*(longlong *)local_1390._0_8_ + (longlong)uStack_1378._4_4_ * 0x28);
          UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FString>
                    ((UInterchangeBaseNode *)this_01,pFVar18,pFVar18 + 1,
                     (TOptional<FString> *)&local_12b0.TypedValue,false);
          if ((local_12b0.TypedValue.Data.ArrayMax != -1) &&
             (local_12b0.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free((void *)local_12b0.TypedValue.Data.AllocatorInstance.Data);
          }
          uStack_1378 = CONCAT44(uStack_1378._4_4_,(uint)uStack_1378 & ~uStack_1384);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1390 + 8));
          bVar12 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForConstIterator::operator!=
                             ((TRangedForConstIterator *)local_1390,&local_af8);
        } while (bVar12);
      }
      if (local_1000.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1000.Data.AllocatorInstance.Data);
      }
    }
    pFVar50 = pFVar50 + 0x80;
    uVar20 = (ulonglong)local_1420 & 0xffffffff;
  } while( true );
  iVar15 = (this->GltfAsset).LightsIES.ArrayNum;
  pFVar50 = (this->GltfAsset).LightsIES.AllocatorInstance.Data;
  pFVar60 = pFVar50 + (longlong)iVar15 * 0x68;
  while( true ) {
    if ((this->GltfAsset).LightsIES.ArrayNum != iVar15) {
      local_143c = 0;
      `TCheckedPointerIterator<GLTF::FLightIES_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_143c);
    }
    if (pFVar50 == pFVar60) break;
    local_12a0.ComparisonIndex.Value = 0;
    local_12a0.Number = 0;
    pUVar27 = Z_Construct_UClass_UInterchangeTextureLightProfileNode_NoRegister();
    FVar9 = local_12a0;
    if (local_12a0 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar63,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar28 = Z_Construct_UClass_UInterchangeTextureLightProfileNode_NoRegister();
    CheckIsClassChildOf_Internal(pUVar28,pUVar27);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_7f8,pUVar27);
    FVar10 = local_12a0;
    local_7f8._8_8_ = pUVar63;
    local_7f8._24_4_ = RF_NoFlags;
    local_7f8._40_8_ = (UObject *)0x0;
    local_7f8[0x20] = false;
    local_7f8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_7f8._56_8_ = (UPackage *)0x0;
    local_12a0.ComparisonIndex = FVar9.ComparisonIndex.Value;
    local_12a0.Number = FVar9.Number;
    local_7f8._16_4_ = local_12a0.ComparisonIndex.Value;
    local_7f8._20_4_ = local_12a0.Number;
    local_12a0 = FVar10;
    pUVar29 = (UInterchangeBaseNode *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_7f8);
    if (local_7f8._64_8_ != 0) {
      plVar36 = (longlong *)(local_7f8 + 0x50);
      if ((longlong *)local_7f8._104_8_ != (longlong *)0x0) {
        plVar36 = (longlong *)local_7f8._104_8_;
      }
      (**(code **)(*plVar36 + 0x10))();
    }
    ::FString::ConcatCF(&local_fe0,L"\\LightIES\\",(FString *)(pFVar50 + 0x58));
    ::FString::FString(&local_ff0,L"");
    UInterchangeBaseNodeContainer::SetupNode
              (pUVar63,pUVar29,&local_fe0,(FString *)(pFVar50 + 0x48),TranslatedAsset,&local_ff0);
    if (local_ff0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ff0.Data.AllocatorInstance.Data);
    }
    pcVar6 = *(code **)(pUVar29->_padding_ + 0x300);
    local_1290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1290.Data.ArrayNum = 0;
    local_1290.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_1290,*(int *)pFVar50);
    (*pcVar6)(pUVar29,&local_1290);
    if (local_1290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1290.Data.AllocatorInstance.Data);
    }
    if (local_fe0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fe0.Data.AllocatorInstance.Data);
    }
    pFVar50 = pFVar50 + 0x68;
  }
  iVar15 = (this->GltfAsset).Meshes.ArrayNum;
  uVar20 = (ulonglong)iVar15;
  pFVar50 = (this->GltfAsset).Meshes.AllocatorInstance.Data;
  local_468.Elements._0_8_ = 0;
  pFVar60 = pFVar50 + uVar20 * 0xa8;
  local_468.Elements._8_8_ = 0;
  local_468.Elements._32_8_ = 0;
  local_468.Elements._40_4_ = 0;
  local_468.Elements._44_4_ = 0x80;
  local_468.Elements._48_4_ = 0xffffffff;
  local_468.Elements._52_4_ = 0;
  local_468.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_468.HashSize = 0;
  local_5a8._0_8_ = (void *)0x0;
  local_5a8._8_8_ = 0;
  local_588 = (undefined1 *)0x0;
  local_580 = 0;
  local_57c = 0x80;
  local_578 = 0xffffffff;
  local_574 = 0;
  local_570.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_560 = 0;
  local_1420 = (FScriptContainerElement *)((ulonglong)local_1420 & 0xffffffff00000000);
  local_13c8 = (FScriptContainerElement *)CONCAT44(local_13c8._4_4_,iVar15);
  iVar15 = 0;
  local_1338 = pFVar60;
  uVar13 = local_1448;
  while( true ) {
    uVar44 = 0;
    if ((this->GltfAsset).Meshes.ArrayNum != (int)uVar20) {
      local_1448 = 0;
      `TCheckedPointerIterator<GLTF::FMesh_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1448);
      iVar15 = (uint)local_1420;
    }
    if (pFVar50 == pFVar60) break;
    local_1420 = (FScriptContainerElement *)CONCAT44(local_1420._4_4_,iVar15 + 1);
    local_1360 = iVar15;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_5a8,&local_1178,
               (bool *)&local_1360);
    pFVar30 = TArray<GLTF::FPrimitive,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_GLTF::FMesh::HasColors_::__l2::<lambda_1>_>
                        ((TArray<GLTF::FPrimitive,TSizedDefaultAllocator<32>_> *)(pFVar50 + 0x10),
                         uVar13);
    if ((pFVar30 != (FPrimitive *)0x0) && (iVar15 = *(int *)(pFVar50 + 0x18), 0 < iVar15)) {
      lVar34 = 0;
      do {
        uVar59 = 0;
        if ((int)uVar44 < iVar15) {
          uVar59 = ~uVar44 >> 0x1f;
        }
        if ((uVar59 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        iVar15 = *(int *)(*(longlong *)(pFVar50 + 0x10) + 0x1c + lVar34);
        if ((-1 < iVar15) && (iVar15 < (this->GltfAsset).Materials.ArrayNum)) {
          if ((iVar15 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          pFVar60 = (this->GltfAsset).Materials.AllocatorInstance.Data;
          local_fc8 = *(wchar_t **)(pFVar60 + (longlong)iVar15 * 0x370 + 0x360);
          iVar15 = *(int *)(pFVar60 + (longlong)iVar15 * 0x370 + 0x368);
          iStack_fc0 = iVar15 + -1;
          if (iVar15 == 0) {
            iStack_fc0 = 0;
          }
          local_cf8._12_4_ = uStack_fbc;
          local_cf8.Size = iStack_fc0;
          local_cf8.DataPtr = local_fc8;
          UInterchangeShaderGraphNode::MakeNodeUid(&local_fb8,&local_cf8);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (&local_468,(FString *)local_1160,(bool *)&local_fb8);
          if (local_fb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_fb8.Data.AllocatorInstance.Data);
          }
        }
        iVar15 = *(int *)(pFVar50 + 0x18);
        uVar44 = uVar44 + 1;
        lVar34 = lVar34 + 0xa0;
        pFVar60 = local_1338;
        uVar13 = local_1448;
      } while ((int)uVar44 < iVar15);
    }
    pFVar50 = pFVar50 + 0xa8;
    uVar20 = (ulonglong)local_13c8 & 0xffffffff;
    iVar15 = (uint)local_1420;
  }
  iVar15 = (this->GltfAsset).Materials.ArrayNum;
  pFVar53 = (FMaterial *)(this->GltfAsset).Materials.AllocatorInstance.Data;
  pFVar61 = pFVar53 + iVar15;
  pUVar63 = local_1428;
  while( true ) {
    iVar14 = 0;
    if ((this->GltfAsset).Materials.ArrayNum != iVar15) {
      local_143b = 0;
      `TCheckedPointerIterator<GLTF::FMaterial_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_143b);
    }
    fVar8 = __real_42652ee0;
    if (pFVar53 == pFVar61) break;
    SetTextureSRGB(this,pUVar63,&pFVar53->BaseColor,true);
    SetTextureSRGB(this,pUVar63,&pFVar53->Emissive,true);
    SetTextureSRGB(this,pUVar63,&(pFVar53->Specular).SpecularColorMap,true);
    SetTextureSRGB(this,pUVar63,&(pFVar53->Specular).SpecularMap,true);
    SetTextureSRGB(this,pUVar63,&(pFVar53->MetallicRoughness).Map,false);
    SetTextureSRGB(this,pUVar63,&pFVar53->Occlusion,false);
    SetTextureSRGB(this,pUVar63,&(pFVar53->ClearCoat).ClearCoatMap,false);
    SetTextureSRGB(this,pUVar63,&(pFVar53->ClearCoat).RoughnessMap,false);
    SetTextureSRGB(this,pUVar63,&(pFVar53->Transmission).TransmissionMap,false);
    local_fa8 = (pFVar53->UniqueId).Data.AllocatorInstance.Data;
    iVar42 = (pFVar53->UniqueId).Data.ArrayNum;
    iStack_fa0 = iVar42 + -1;
    if (iVar42 == 0) {
      iStack_fa0 = 0;
    }
    local_ce8._12_4_ = uStack_f9c;
    local_ce8.Size = iStack_fa0;
    local_ce8.DataPtr = (wchar_t *)local_fa8;
    UInterchangeShaderGraphNode::MakeNodeUid(&local_1220,&local_ce8);
    if (local_1220.Data.ArrayNum == 0) {
      pwVar40 = L"";
    }
    else {
      iVar14 = local_1220.Data.ArrayNum + -1;
      pwVar40 = (wchar_t *)local_1220.Data.AllocatorInstance.Data;
    }
    uVar44 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar40);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
              (&local_468,uVar44,&local_1220);
    local_f98 = (pFVar53->UniqueId).Data.AllocatorInstance.Data;
    iVar14 = (pFVar53->UniqueId).Data.ArrayNum;
    iStack_f90 = iVar14 + -1;
    if (iVar14 == 0) {
      iStack_f90 = 0;
    }
    local_cd8._12_4_ = uStack_f8c;
    local_cd8.Size = iStack_f90;
    local_cd8.DataPtr = (wchar_t *)local_f98;
    this_02 = UInterchangeShaderGraphNode::Create(pUVar63,&local_cd8);
    UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)this_02,&pFVar53->Name);
    puVar41 = &(pFVar53->Extras).field_0x10;
    local_11c0._padding_._4_4_ = (undefined4)local_1418;
    local_11c0._padding_._0_4_ = 0;
    local_11c0.UnvisitedBitMask = 0xffffffff;
    local_11c0.CurrentBitIndex = 0;
    local_11c0.BaseBitIndex = 0;
    local_11c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar41;
    if (*(int *)&(pFVar53->Extras).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_11c0);
    }
    lStack_1408 = CONCAT44(local_11c0._padding_._4_4_,(undefined4)local_11c0._padding_);
    pTVar2 = &pFVar53->Extras;
    uStack_13f8 = CONCAT44(local_11c0.CurrentBitIndex,local_11c0.UnvisitedBitMask);
    uStack_13f0 = CONCAT44(local_11c0._28_4_,local_11c0.BaseBitIndex);
    local_13e8 = *(int *)&(pFVar53->Extras).field_0x8 - *(int *)&(pFVar53->Extras).field_0x34;
    pTStack_1400 = local_11c0.Array;
    uStack_10e8._4_4_ = uStack_13e4;
    uStack_10e8._0_4_ = local_13e8;
    local_1100 = local_11c0.Array;
    local_1410 = (FScriptContainerElement *)pTVar2;
    local_1110._0_8_ = pTVar2;
    unique0x100066c1 = lStack_1408;
    uStack_10f8 = uStack_13f8;
    local_10f0 = uStack_13f0;
    pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_840,(TBitArray<FDefaultBitArrayAllocator> *)puVar41,
                         *(int *)&(pFVar53->Extras).field_0x28);
    lStack_1408 = pTVar26->_padding_;
    pTStack_1400 = pTVar26->Array;
    uStack_13f8._0_4_ = pTVar26->UnvisitedBitMask;
    uStack_13f8._4_4_ = pTVar26->CurrentBitIndex;
    uStack_13f0 = *(longlong *)&pTVar26->BaseBitIndex;
    local_13e8 = *(int *)&(pFVar53->Extras).field_0x8 - *(int *)&(pFVar53->Extras).field_0x34;
    local_ac8._44_4_ = uStack_13e4;
    local_ac8.InitialNum = local_13e8;
    local_1410 = (FScriptContainerElement *)pTVar2;
    local_ac8._padding_ = (longlong)pTVar2;
    local_ac8._padding_ = lStack_1408;
    local_ac8._padding_ = (longlong)pTStack_1400;
    local_ac8._padding_ = uStack_13f8;
    local_ac8._padding_ = uStack_13f0;
    bVar12 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_1110,&local_ac8)
    ;
    if (bVar12) {
      do {
        local_1280.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_1280.TypedValue.Data.ArrayNum = 0;
        local_1280.TypedValue.Data.ArrayMax = -1;
        pFVar18 = (FString *)(*(longlong *)local_1110._0_8_ + (longlong)uStack_10f8._4_4_ * 0x28);
        UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FString>
                  ((UInterchangeBaseNode *)this_02,pFVar18,pFVar18 + 1,
                   (TOptional<FString> *)&local_1280.TypedValue,false);
        if ((local_1280.TypedValue.Data.ArrayMax != -1) &&
           (local_1280.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_1280.TypedValue.Data.AllocatorInstance.Data);
        }
        uStack_10f8 = CONCAT44(uStack_10f8._4_4_,(uint)uStack_10f8 & ~uStack_1104);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1110 + 8));
        bVar12 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_1110,&local_ac8);
        this = local_1298;
      } while (bVar12);
    }
    pUVar63 = local_1428;
    local_dc8.Textures = &(this->GltfAsset).Textures;
    local_dc8.NodeContainer = local_1428;
    local_dc8.MaterialNode = (UInterchangeShaderNode *)0x0;
    local_dc8.MaterialInstanceNode = (UInterchangeShaderNode *)0x0;
    if (pFVar53->bIsUnlitShadingModel == false) {
      if (pFVar53->ShadingModel == SpecularGlossiness) {
        local_dc8.ShadingModel = SPECULARGLOSSINESS;
      }
      else if (pFVar53->bHasTransmission == false) {
        if (pFVar53->bHasClearCoat == false) {
          local_dc8.ShadingModel = -(pFVar53->bHasSheen != false) & SHEEN;
        }
        else {
          local_dc8.ShadingModel = CLEARCOAT;
        }
      }
      else {
        local_dc8.ShadingModel = TRANSMISSION;
      }
    }
    else {
      local_dc8.ShadingModel = UNLIT;
    }
    local_dc8.AlphaMode = (EAlphaMode)pFVar53->AlphaMode;
    local_dc8.GltfMaterial = pFVar53;
    local_dc8.ShaderGraphNode = this_02;
    UE::Interchange::GLTFMaterials::FGLTFMaterialProcessor::ConfigureMaterialNode(&local_dc8);
    UE::Interchange::GLTFMaterials::FGLTFMaterialProcessor::ConfigureMaterialInstanceNode
              (&local_dc8);
    UE::Interchange::GLTFMaterials::FGLTFMaterialProcessor::ParseMaterialValues(&local_dc8);
    if (local_1220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1220.Data.AllocatorInstance.Data);
    }
    pFVar53 = pFVar53 + 1;
  }
  iVar15 = (this->GltfAsset).Cameras.ArrayNum;
  uVar20 = (ulonglong)iVar15;
  pFVar50 = (this->GltfAsset).Cameras.AllocatorInstance.Data;
  local_13c8 = (FScriptContainerElement *)CONCAT44(local_13c8._4_4_,iVar15);
  pFVar60 = pFVar50 + uVar20 * 0x90;
  while( true ) {
    if ((this->GltfAsset).Cameras.ArrayNum != (int)uVar20) {
      local_143a = 0;
      `TCheckedPointerIterator<GLTF::FCamera_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_143a);
    }
    if (pFVar50 == pFVar60) break;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar63,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar27 = Z_Construct_UClass_UInterchangeStandardCameraNode_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_778,pUVar27);
    local_778._8_8_ = pUVar63;
    this_03 = (UInterchangeStandardCameraNode *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_778);
    if (local_778._64_8_ != 0) {
      plVar36 = (longlong *)(local_778 + 0x50);
      if ((longlong *)local_778._104_8_ != (longlong *)0x0) {
        plVar36 = (longlong *)local_778._104_8_;
      }
      (**(code **)(*plVar36 + 0x10))();
    }
    ::FString::ConcatCF(&local_f38,L"\\Camera\\",(FString *)(pFVar50 + 0x80));
    ::FString::FString(&local_f88,L"");
    UInterchangeBaseNodeContainer::SetupNode
              (pUVar63,(UInterchangeBaseNode *)this_03,&local_f38,(FString *)(pFVar50 + 8),
               TranslatedAsset,&local_f88);
    if (local_f88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f88.Data.AllocatorInstance.Data);
    }
    if (pFVar50[0x28] == (FScriptContainerElement)0x0) {
      local_1438 = Orthographic;
      UInterchangeStandardCameraNode::SetCustomProjectionMode(this_03,&local_1438);
      local_1358 = UE::Interchange::Gltf::Private::GltfUnitConversionMultiplier *
                   *(float *)(pFVar50 + 0x18);
      pFVar18 = (FString *)(**(code **)(this_03->_padding_ + 0x2b0))(this_03,local_ca8);
      ::FString::ConcatFC(&local_f68,pFVar18,L".SetWidth");
      if (local_ca8[0] != (void *)0x0) {
        FMemory::Free(local_ca8[0]);
      }
      pFVar24 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                operator*<UE::Interchange::FAttributeStorage>
                          ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this_03->_padding_);
      EVar25 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                         (pFVar24,&this_03->Macro_CustomWidthKey,&local_1358,None);
      if ((EVar25 & Operation_Success) == None) {
        ::FString::FString(&local_c98,&(this_03->Macro_CustomWidthKey).Key);
        pFVar18 = ::FString::FString(&local_900,&local_f68);
        UE::Interchange::LogAttributeStorageErrors(EVar25,pFVar18,(FAttributeKey *)&local_c98);
      }
      if (local_f68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f68.Data.AllocatorInstance.Data);
      }
      local_1354 = UE::Interchange::Gltf::Private::GltfUnitConversionMultiplier *
                   *(float *)(pFVar50 + 0x20);
      pFVar18 = (FString *)(**(code **)(this_03->_padding_ + 0x2b0))(this_03,local_c88);
      ::FString::ConcatFC(&local_f58,pFVar18,L".SetNearClipPlane");
      if (local_c88[0] != (void *)0x0) {
        FMemory::Free(local_c88[0]);
      }
      pFVar24 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                operator*<UE::Interchange::FAttributeStorage>
                          ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this_03->_padding_);
      EVar25 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                         (pFVar24,&this_03->Macro_CustomNearClipPlaneKey,&local_1354,None);
      if ((EVar25 & Operation_Success) == None) {
        ::FString::FString(&local_c78,&(this_03->Macro_CustomNearClipPlaneKey).Key);
        pFVar18 = ::FString::FString(&local_8f0,&local_f58);
        UE::Interchange::LogAttributeStorageErrors(EVar25,pFVar18,(FAttributeKey *)&local_c78);
      }
      if (local_f58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f58.Data.AllocatorInstance.Data);
      }
      local_1350 = UE::Interchange::Gltf::Private::GltfUnitConversionMultiplier *
                   *(float *)(pFVar50 + 0x24);
      pFVar18 = (FString *)(**(code **)(this_03->_padding_ + 0x2b0))(this_03,local_c68);
      ::FString::ConcatFC(&local_f48,pFVar18,L".SetFarClipPlane");
      if (local_c68[0] != (void *)0x0) {
        FMemory::Free(local_c68[0]);
      }
      pFVar24 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                operator*<UE::Interchange::FAttributeStorage>
                          ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this_03->_padding_);
      EVar25 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                         (pFVar24,&this_03->Macro_CustomFarClipPlaneKey,&local_1350,None);
      if ((EVar25 & Operation_Success) == None) {
        ::FString::FString(&local_c58,&(this_03->Macro_CustomFarClipPlaneKey).Key);
        pFVar18 = ::FString::FString(local_8b0,&local_f48);
        UE::Interchange::LogAttributeStorageErrors(EVar25,pFVar18,(FAttributeKey *)&local_c58);
      }
      if (local_f48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f48.Data.AllocatorInstance.Data);
      }
      pFVar46 = (FScriptContainerElement *)&local_134c;
      local_134c = *(float *)(pFVar50 + 0x18) / *(float *)(pFVar50 + 0x1c);
    }
    else {
      local_1439 = Perspective;
      UInterchangeStandardCameraNode::SetCustomProjectionMode(this_03,&local_1439);
      local_135c = *(float *)(pFVar50 + 0x18) * fVar8;
      pFVar18 = (FString *)(**(code **)(this_03->_padding_ + 0x2b0))(this_03,local_cc8);
      ::FString::ConcatFC(&local_f78,pFVar18,L".SetFieldOfView");
      if (local_cc8[0] != (void *)0x0) {
        FMemory::Free(local_cc8[0]);
      }
      pFVar24 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::
                operator*<UE::Interchange::FAttributeStorage>
                          ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this_03->_padding_);
      EVar25 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                         (pFVar24,&this_03->Macro_CustomFieldOfViewKey,&local_135c,None);
      if ((EVar25 & Operation_Success) == None) {
        ::FString::FString(&local_cb8,&(this_03->Macro_CustomFieldOfViewKey).Key);
        pFVar18 = ::FString::FString(&local_910,&local_f78);
        UE::Interchange::LogAttributeStorageErrors(EVar25,pFVar18,(FAttributeKey *)&local_cb8);
      }
      if (local_f78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f78.Data.AllocatorInstance.Data);
      }
      pFVar46 = pFVar50 + 0x1c;
    }
    UInterchangeStandardCameraNode::SetCustomAspectRatio(this_03,(float *)pFVar46);
    if (local_f38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f38.Data.AllocatorInstance.Data);
    }
    uVar20 = (ulonglong)local_13c8 & 0xffffffff;
    pFVar50 = pFVar50 + 0x90;
    pUVar63 = local_1428;
  }
  iVar15 = (this->GltfAsset).Lights.ArrayNum;
  pFVar50 = (this->GltfAsset).Lights.AllocatorInstance.Data;
  pFVar60 = pFVar50 + (longlong)iVar15 * 0x58;
  while( true ) {
    if ((this->GltfAsset).Lights.ArrayNum != iVar15) {
      local_1437 = 0;
      `TCheckedPointerIterator<GLTF::FLight_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1437);
    }
    if (pFVar50 == pFVar60) break;
    ::FString::ConcatCF(&local_1210,L"\\Light\\",(FString *)(pFVar50 + 0x48));
    pUVar63 = local_1428;
    iVar14 = *(int *)(pFVar50 + 0x18);
    if (iVar14 == 0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)local_1428,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar27 = Z_Construct_UClass_UInterchangeDirectionalLightNode_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_678,pUVar27);
      local_678._8_8_ = pUVar63;
      this_06 = (UInterchangeBaseLightNode *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_678);
      if (local_678._64_8_ != 0) {
        plVar36 = (longlong *)(local_678 + 0x50);
        if ((longlong *)local_678._104_8_ != (longlong *)0x0) {
          plVar36 = (longlong *)local_678._104_8_;
        }
        (**(code **)(*plVar36 + 0x10))();
      }
      ::FString::FString(&local_f08,L"");
      UInterchangeBaseNodeContainer::SetupNode
                (pUVar63,(UInterchangeBaseNode *)this_06,&local_1210,(FString *)(pFVar50 + 8),
                 TranslatedAsset,&local_f08);
      if (local_f08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f08.Data.AllocatorInstance.Data);
      }
      pFVar31 = FLinearColor::FLinearColor(&local_8c0,(TVector<double> *)(pFVar50 + 0x20));
      UInterchangeBaseLightNode::SetCustomLightColor(this_06,pFVar31);
      UInterchangeBaseLightNode::SetCustomIntensity(this_06,*(float *)(pFVar50 + 0x38));
    }
    else if (iVar14 == 1) {
      this_05 = NewObject<UInterchangePointLightNode>((UObject *)local_1428);
      ::FString::FString(&local_f18,L"");
      UInterchangeBaseNodeContainer::SetupNode
                (local_1428,(UInterchangeBaseNode *)this_05,&local_1210,(FString *)(pFVar50 + 8),
                 TranslatedAsset,&local_f18);
      if (local_f18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f18.Data.AllocatorInstance.Data);
      }
      local_1435 = Candelas;
      UInterchangeLightNode::SetCustomIntensityUnits((UInterchangeLightNode *)this_05,&local_1435);
      pFVar31 = FLinearColor::FLinearColor(&local_8d0,(TVector<double> *)(pFVar50 + 0x20));
      UInterchangeBaseLightNode::SetCustomLightColor((UInterchangeBaseLightNode *)this_05,pFVar31);
      UInterchangeBaseLightNode::SetCustomIntensity
                ((UInterchangeBaseLightNode *)this_05,*(float *)(pFVar50 + 0x38));
      UInterchangeLightNode::SetCustomAttenuationRadius
                ((UInterchangeLightNode *)this_05,
                 UE::Interchange::Gltf::Private::GltfUnitConversionMultiplier *
                 *(float *)(pFVar50 + 0x3c));
    }
    else if (iVar14 == 2) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)local_1428,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar27 = Z_Construct_UClass_UInterchangeSpotLightNode_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_6f8,pUVar27);
      local_6f8._8_8_ = pUVar63;
      this_04 = (UInterchangeSpotLightNode *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_6f8);
      if (local_6f8._64_8_ != 0) {
        plVar36 = (longlong *)(local_6f8 + 0x50);
        if ((longlong *)local_6f8._104_8_ != (longlong *)0x0) {
          plVar36 = (longlong *)local_6f8._104_8_;
        }
        (**(code **)(*plVar36 + 0x10))();
      }
      ::FString::FString(&local_f28,L"");
      UInterchangeBaseNodeContainer::SetupNode
                (pUVar63,(UInterchangeBaseNode *)this_04,&local_1210,(FString *)(pFVar50 + 8),
                 TranslatedAsset,&local_f28);
      if (local_f28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f28.Data.AllocatorInstance.Data);
      }
      local_1436 = Candelas;
      UInterchangeLightNode::SetCustomIntensityUnits((UInterchangeLightNode *)this_04,&local_1436);
      pFVar31 = FLinearColor::FLinearColor(&local_8e0,(TVector<double> *)(pFVar50 + 0x20));
      UInterchangeBaseLightNode::SetCustomLightColor((UInterchangeBaseLightNode *)this_04,pFVar31);
      UInterchangeBaseLightNode::SetCustomIntensity
                ((UInterchangeBaseLightNode *)this_04,*(float *)(pFVar50 + 0x38));
      UInterchangeSpotLightNode::SetCustomInnerConeAngle(this_04,*(float *)(pFVar50 + 0x40) * fVar8)
      ;
      UInterchangeSpotLightNode::SetCustomOuterConeAngle(this_04,*(float *)(pFVar50 + 0x44) * fVar8)
      ;
    }
    if (local_1210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1210.Data.AllocatorInstance.Data);
    }
    pFVar50 = pFVar50 + 0x58;
  }
  local_1447 = false;
  local_4b8.Elements._0_8_ = 0;
  local_4b8.Elements._8_8_ = 0;
  local_4b8.Elements._32_8_ = 0;
  local_4b8.Elements._40_4_ = 0;
  local_4b8.Elements._44_4_ = 0x80;
  local_4b8.Elements._48_4_ = 0xffffffff;
  local_4b8.Elements._52_4_ = 0;
  local_4b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_4b8.HashSize = 0;
  if (0 < (this->GltfAsset).Animations.ArrayNum) {
    if (((this->GltfAsset).Animations.ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    pFVar4 = (FAnimation *)(this->GltfAsset).Animations.AllocatorInstance.Data;
    local_558._0_8_ = 0;
    local_558._8_8_ = 0;
    local_538 = 0;
    local_530 = 0;
    local_52c = 0x80;
    local_528 = 0xffffffff;
    local_524 = 0;
    local_518 = (ForElementType<FSetElementId>)0x0;
    local_510 = 0;
    local_142c = 0;
    if (0 < (pFVar4->Channels).ArrayNum) {
      do {
        uVar44 = local_142c;
        uVar59 = 0;
        if ((int)local_142c < (pFVar4->Channels).ArrayNum) {
          uVar59 = ~local_142c >> 0x1f;
        }
        if ((uVar59 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        lVar34 = *(longlong *)
                  ((pFVar4->Channels).AllocatorInstance.Data + (longlong)(int)uVar44 * 0x18 + 8);
        if (*(int *)(lVar34 + 0x80) == 2) {
          pTVar32 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindOrAddImpl<int_const_&>
                              ((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                *)local_558,*(uint *)(lVar34 + 200),(int *)(lVar34 + 200));
          pFVar50 = (pTVar32->AllocatorInstance).Data;
          if (((pFVar50 <= (FScriptContainerElement *)&local_142c) &&
              ((FScriptContainerElement *)&local_142c < pFVar50 + (longlong)pTVar32->ArrayMax * 4))
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar12)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          iVar15 = pTVar32->ArrayNum;
          if (iVar15 == pTVar32->ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar32->AllocatorInstance,&pTVar32->ArrayMax);
          }
          pTVar32->ArrayNum = iVar15 + 1;
          *(uint *)((pTVar32->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_142c;
        }
        local_142c = local_142c + 1;
      } while ((int)local_142c < (pFVar4->Channels).ArrayNum);
    }
    local_11a0._padding_._4_4_ = (undefined4)local_1418;
    local_11a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_558 + 0x10);
    local_11a0._padding_._0_4_ = 0;
    local_11a0.UnvisitedBitMask = 0xffffffff;
    local_11a0.CurrentBitIndex = 0;
    local_11a0.BaseBitIndex = 0;
    if (local_530 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_11a0);
    }
    lStack_1408 = CONCAT44(local_11a0._padding_._4_4_,(undefined4)local_11a0._padding_);
    local_1410 = (FScriptContainerElement *)local_558;
    uStack_13f8 = CONCAT44(local_11a0.CurrentBitIndex,local_11a0.UnvisitedBitMask);
    uStack_13f0 = CONCAT44(local_11a0._28_4_,local_11a0.BaseBitIndex);
    local_13e8 = local_558._8_4_ - local_524;
    pTStack_1400 = local_11a0.Array;
    uStack_10b8._4_4_ = uStack_13e4;
    uStack_10b8._0_4_ = local_13e8;
    local_10d0 = local_11a0.Array;
    local_10e0._0_8_ = local_1410;
    unique0x100066e1 = lStack_1408;
    uStack_10c8 = uStack_13f8;
    local_10c0 = uStack_13f0;
    pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_820,(TBitArray<FDefaultBitArrayAllocator> *)(local_558 + 0x10),
                         local_530);
    local_1410 = (FScriptContainerElement *)local_558;
    lStack_1408 = pTVar26->_padding_;
    pTStack_1400 = pTVar26->Array;
    uStack_13f8._0_4_ = pTVar26->UnvisitedBitMask;
    uStack_13f8._4_4_ = pTVar26->CurrentBitIndex;
    uStack_13f0 = *(longlong *)&pTVar26->BaseBitIndex;
    local_13e8 = local_558._8_4_ - local_524;
    local_a98._44_4_ = uStack_13e4;
    local_a98.InitialNum = local_13e8;
    local_a98._padding_ = (longlong)local_1410;
    local_a98._padding_ = lStack_1408;
    local_a98._padding_ = (longlong)pTStack_1400;
    local_a98._padding_ = uStack_13f8;
    local_a98._padding_ = uStack_13f0;
    bVar12 = TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_10e0,&local_a98);
    if (bVar12) {
      do {
        local_418.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_418.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        puVar47 = (uint *)((longlong)uStack_10c8._4_4_ * 0x20 + *(longlong *)local_10e0._0_8_);
        uVar44 = *puVar47;
        local_418.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_418.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        uVar59 = 0;
        if ((int)uVar44 < (this->GltfAsset).Nodes.ArrayNum) {
          uVar59 = ~uVar44 >> 0x1f;
        }
        local_418.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_418.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_418.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_418.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_418.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_418.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_418.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_418.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_418.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_418.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        if ((uVar59 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        UE::Interchange::Gltf::Private::GetT0Transform
                  (pFVar4,(FNode *)((this->GltfAsset).Nodes.AllocatorInstance.Data +
                                   (longlong)(int)uVar44 * 0x260),
                   (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar47 + 2),&local_418);
        local_ef0 = &local_418;
        local_ef8 = puVar47;
        TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,UE::Math::TTransform<double>_&>_>
                  (&local_4b8,
                   (TPairInitializer<int_const_&,UE::Math::TTransform<double>_&> *)(local_1160 + 4),
                   (bool *)&local_ef8);
        uStack_10c8 = CONCAT44(uStack_10c8._4_4_,(uint)uStack_10c8 & ~uStack_10d4);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_10e0 + 8));
        bVar12 = TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_10e0,&local_a98);
      } while (bVar12);
    }
    local_510 = 0;
    if (local_518 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_518);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_558);
  }
  iVar15 = (this->GltfAsset).Scenes.ArrayNum;
  uVar20 = (ulonglong)iVar15;
  pFVar60 = (this->GltfAsset).Scenes.AllocatorInstance.Data;
  local_1338 = pFVar60 + uVar20 * 0x80;
  local_13c8 = (FScriptContainerElement *)CONCAT44(local_13c8._4_4_,iVar15);
  pFVar50 = pFVar60 + 0x18;
  pUVar63 = local_1428;
  while( true ) {
    pFVar46 = local_1338;
    local_1420 = pFVar60;
    if ((this->GltfAsset).Scenes.ArrayNum != (int)uVar20) {
      local_1434 = 0;
      `TCheckedPointerIterator<GLTF::FScene_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1434);
    }
    if (pFVar60 == pFVar46) break;
    this_07 = NewObject<UInterchangeSceneNode>((UObject *)pUVar63);
    local_1320.Data.ArrayNum = *(int *)(pFVar50 + -0x10);
    lVar34 = (longlong)local_1320.Data.ArrayNum;
    pvVar5 = *(void **)pFVar60;
    local_1320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_1320.Data.ArrayNum == 0) {
      local_1320.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1320.Data.ArrayNum,0,(ForAnyElementType *)&local_1320,
                 local_1320.Data.ArrayNum,&local_1320.Data.ArrayMax);
      memcpy(local_1320.Data.AllocatorInstance.Data,pvVar5,lVar34 * 2);
    }
    ::FString::ConcatCF(&local_1260,L"\\Scene\\",(FString *)(pFVar50 + 0x58));
    ::FString::FString(&local_ee8,L"");
    UInterchangeBaseNodeContainer::SetupNode
              (pUVar63,(UInterchangeBaseNode *)this_07,&local_1260,&local_1320,TranslatedScene,
               &local_ee8);
    if (local_ee8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ee8.Data.AllocatorInstance.Data);
    }
    pTStack_1400 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar50 + 0x18);
    uVar44 = *(uint *)(pFVar50 + 0x30);
    local_12e0 = 0;
    uVar59 = (uint)local_1418;
    uStack_12cc = 0;
    iStack_12c8 = 0;
    uStack_12dc = uVar59;
    if (uVar44 != 0) {
      pTVar56 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar50 + 0x28);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar50 + 0x28) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar56 = pTStack_1400;
      }
      uVar57 = *(uint *)(pTVar56->AllocatorInstance).InlineData;
      while (uVar57 == 0) {
        iStack_12c8 = iStack_12c8 + 0x20;
        lVar34 = (longlong)local_12e0;
        local_12e0 = local_12e0 + 1;
        if ((int)((uVar44 - 1) + ((int)(uVar44 - 1) >> 0x1f & 0x1fU)) >> 5 < local_12e0)
        goto LAB_14e6d530a;
        uVar57 = *(uint *)((pTVar56->AllocatorInstance).InlineData + lVar34 * 4 + 4);
      }
      uStack_12dc = -uVar57 & uVar57;
      uVar20 = (ulonglong)uStack_12dc * 2 + 1;
      lVar34 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      local_1158 = (int)lVar34;
      uStack_12cc = iStack_12c8 + -1 + local_1158;
      if ((int)uVar44 < (int)uStack_12cc) {
LAB_14e6d530a:
        uStack_12cc = uVar44;
      }
    }
    local_12d0 = 0xffffffff;
    lStack_1408 = CONCAT44(uStack_12dc,local_12e0);
    local_13e8 = *(int *)(pFVar50 + 0x10) - *(int *)(pFVar50 + 0x3c);
    pFVar60 = pFVar50 + 8;
    uStack_13f8 = CONCAT44(uStack_12cc,0xffffffff);
    uStack_13f0 = CONCAT44(uStack_12c4,iStack_12c8);
    bVar33 = (byte)uVar44 & 0x1f;
    local_1240._padding_._0_4_ = (int)uVar44 >> 5;
    local_1240._padding_._4_4_ = uVar59 << bVar33;
    pTVar56 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar50 + 0x18);
    local_1240.UnvisitedBitMask = -1 << bVar33;
    local_1240.BaseBitIndex = uVar44 & 0xffffffe0;
    uStack_1088 = CONCAT44(uStack_13e4,local_13e8);
    local_1410 = pFVar60;
    pTStack_12d8 = pTStack_1400;
    local_1240.Array = pTVar56;
    local_1240.CurrentBitIndex = uVar44;
    local_10b0 = pFVar60;
    TStack_10a8._padding_ = lStack_1408;
    TStack_10a8.Array = pTStack_1400;
    TStack_10a8._16_8_ = uStack_13f8;
    TStack_10a8._24_8_ = uStack_13f0;
    if (((int)uVar44 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    if (uVar44 != *(uint *)(pFVar50 + 0x30)) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1240);
      uVar44 = local_1240.CurrentBitIndex;
      pTVar56 = local_1240.Array;
    }
    while( true ) {
      pFVar46 = local_10b0;
      if (*(int *)(local_10b0 + 8) - *(int *)(local_10b0 + 0x34) != (int)uStack_1088) {
        local_1433 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1433);
      }
      if (((TStack_10a8.CurrentBitIndex == uVar44) && (TStack_10a8.Array == pTVar56)) &&
         (pFVar46 == pFVar60)) break;
      local_1270.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_1270.TypedValue.Data.ArrayNum = 0;
      local_1270.TypedValue.Data.ArrayMax = -1;
      pFVar18 = (FString *)(*(longlong *)pFVar46 + (longlong)TStack_10a8.CurrentBitIndex * 0x28);
      UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FString>
                ((UInterchangeBaseNode *)this_07,pFVar18,pFVar18 + 1,
                 (TOptional<FString> *)&local_1270.TypedValue,false);
      if ((local_1270.TypedValue.Data.ArrayMax != -1) &&
         (local_1270.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_1270.TypedValue.Data.AllocatorInstance.Data);
      }
      TStack_10a8.UnvisitedBitMask = TStack_10a8.UnvisitedBitMask & ~TStack_10a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_10a8);
    }
    UInterchangeSceneNode::SetCustomLocalTransform
              (this_07,local_1428,&UE::Math::TTransform<double>::Identity,true);
    this = local_1298;
    piVar54 = *(int **)(pFVar50 + -8);
    iVar15 = *(int *)pFVar50;
    local_12c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_12c0.ArrayNum = 0;
    local_12c0.ArrayMax = 0;
    piVar52 = piVar54 + iVar15;
    while( true ) {
      if (*(int *)pFVar50 != iVar15) {
        local_1432 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1432);
      }
      pUVar63 = local_1428;
      if (piVar54 == piVar52) break;
      iVar14 = *piVar54;
      if ((-1 < iVar14) && (iVar14 < (this->GltfAsset).Nodes.ArrayNum)) {
        if ((iVar14 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        HandleGltfNode(this,local_1428,
                       (FNode *)((this->GltfAsset).Nodes.AllocatorInstance.Data +
                                (longlong)iVar14 * 0x260),&local_1260,iVar14,&local_1447,&local_12c0
                       ,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_5a8,
                       (TMap<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
                        *)&local_4b8,&local_1260);
      }
      piVar54 = piVar54 + 1;
    }
    HandleGltfSkeletons(this,local_1428,&local_1260,&local_12c0,
                        (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_5a8);
    if (local_12c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12c0.AllocatorInstance.Data);
    }
    if (local_1260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1260.Data.AllocatorInstance.Data);
    }
    if (local_1320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1320.Data.AllocatorInstance.Data);
    }
    pFVar50 = pFVar50 + 0x80;
    pFVar60 = local_1420 + 0x80;
    uVar20 = (ulonglong)local_13c8 & 0xffffffff;
  }
  local_4b8.HashSize = 0;
  if (local_4b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_4b8.Elements);
  local_ed8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<GLTF::FAnimation,TSizedDefaultAllocator<32>_>::CopyToEmpty<GLTF::FAnimation,int>
            (&local_ed8,(FAnimation *)(this->GltfAsset).Animations.AllocatorInstance.Data,
             (this->GltfAsset).Animations.ArrayNum,0);
  UE::Interchange::Gltf::Private::HandleGLTFAnimations
            (pUVar63,&local_ed8,&(this->GltfAsset).Nodes,&(this->GltfAsset).Skins,&this->NodeUidMap)
  ;
  if (local_1447 != false) {
    HandleGltfVariants(this,pUVar63,&local_1300);
  }
  iVar15 = (int)local_a18._padding_;
  lVar34 = (longlong)(int)local_a18._padding_;
  puVar47 = (uint *)(local_a18._padding_ + 0x10);
  while( true ) {
    if ((int)local_a18._padding_ != iVar15) {
      local_1431 = 0;
      `TCheckedPointerIterator<TTuple<enum_GLTF::EMessageSeverity,FText>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_1431);
    }
    if ((TTuple<GLTF::EMessageSeverity,FText> *)(puVar47 + -4) ==
        (TTuple<GLTF::EMessageSeverity,FText> *)(local_a18._padding_ + lVar34 * 0x18)) break;
    uVar44 = puVar47[-4];
    if (uVar44 == 0) {
      pUVar19 = (UInterchangeResultError_Generic *)
                UInterchangeTranslatorBase::AddMessage<UInterchangeResultDisplay_Generic>
                          ((UInterchangeTranslatorBase *)this);
      pIVar37 = *(ITextData **)(puVar47 + -2);
      pIVar48 = (((UInterchangeResultDisplay_Generic *)pUVar19)->Text).TextData.Reference;
      if (pIVar48 != pIVar37) {
        (((UInterchangeResultDisplay_Generic *)pUVar19)->Text).TextData.Reference = pIVar37;
        if (pIVar37 != (ITextData *)0x0) {
          puVar41 = local_114c;
LAB_14e6d58d0:
          (**(code **)((longlong)*pIVar37 + 8))(pIVar37,puVar41);
        }
LAB_14e6d58d6:
        if (pIVar48 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar48 + 0x10))(pIVar48);
        }
      }
LAB_14e6d58e4:
      FVar43.Data = local_1300.Data.AllocatorInstance.Data;
      (pUVar19->Text).Flags = *puVar47;
      if ((pUVar19 == (UInterchangeResultError_Generic *)0x0) ||
         (plVar36 = &pUVar19->_padding_, (FString *)plVar36 == &local_1300)) goto LAB_14e6d595c;
      piVar52 = (int *)((longlong)&pUVar19->_padding_ + 4);
      iVar14 = *piVar52;
      iVar42 = local_1300.Data.ArrayNum;
      *(int *)&pUVar19->_padding_ = iVar42;
      if ((iVar42 != 0) || (iVar14 != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar42,iVar14,(ForAnyElementType *)plVar36,iVar42,piVar52);
        if (iVar42 != 0) {
          memcpy((void *)*plVar36,FVar43.Data,(longlong)iVar42 * 2);
        }
        goto LAB_14e6d595c;
      }
      *piVar52 = 0;
      puVar47 = puVar47 + 6;
    }
    else {
      if (uVar44 == 1) {
        pUVar19 = (UInterchangeResultError_Generic *)
                  UInterchangeTranslatorBase::AddMessage<UInterchangeResultWarning_Generic>
                            ((UInterchangeTranslatorBase *)this);
        pIVar37 = *(ITextData **)(puVar47 + -2);
        pIVar48 = (((UInterchangeResultWarning_Generic *)pUVar19)->Text).TextData.Reference;
        if (pIVar48 != pIVar37) {
          (((UInterchangeResultWarning_Generic *)pUVar19)->Text).TextData.Reference = pIVar37;
          if (pIVar37 != (ITextData *)0x0) {
            puVar41 = local_1150;
            goto LAB_14e6d58d0;
          }
          goto LAB_14e6d58d6;
        }
        goto LAB_14e6d58e4;
      }
      if (uVar44 == 2) {
        if ((UInterchangeResultsContainer *)this->_padding_ == (UInterchangeResultsContainer *)0x0)
        {
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<3799874561680343173>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
                              ,0x85,"Results");
          if (bVar12) {
code_r0x00014e6d579f:
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          pUVar19 = (UInterchangeResultError_Generic *)0x0;
        }
        else if (this->_padding_ == 0) {
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<3799874561680343173>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
                              ,0x85,"SourceData");
          if (bVar12) goto code_r0x00014e6d579f;
          pUVar19 = (UInterchangeResultError_Generic *)0x0;
        }
        else {
          pUVar19 = UInterchangeResultsContainer::Add<UInterchangeResultError_Generic>
                              ((UInterchangeResultsContainer *)this->_padding_);
          local_13c0.Data = (FScriptContainerElement *)0x0;
          iVar14 = *(int *)(this->_padding_ + 0x30);
          pvVar5 = *(void **)(this->_padding_ + 0x28);
          local_13b8 = CONCAT44(local_13b8._4_4_,iVar14);
          if (iVar14 == 0) {
            local_13b8 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar14,0,&local_13c0,iVar14,(int *)((longlong)&local_13b8 + 4));
            memcpy(local_13c0.Data,pvVar5,(longlong)iVar14 * 2);
          }
          plVar36 = &pUVar19->_padding_;
          if ((ForAnyElementType *)plVar36 != &local_13c0) {
            if ((void *)*plVar36 != (void *)0x0) {
              FMemory::Free((void *)*plVar36);
            }
            *plVar36 = (longlong)local_13c0.Data;
            *(undefined4 *)&pUVar19->_padding_ = (undefined4)local_13b8;
            local_13c0.Data = (FScriptContainerElement *)0x0;
            *(undefined4 *)((longlong)&pUVar19->_padding_ + 4) = local_13b8._4_4_;
            local_13b8 = 0;
          }
          if (local_13c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_13c0.Data);
          }
        }
        pIVar37 = *(ITextData **)(puVar47 + -2);
        pIVar48 = (pUVar19->Text).TextData.Reference;
        if (pIVar48 != pIVar37) {
          (pUVar19->Text).TextData.Reference = pIVar37;
          if (pIVar37 != (ITextData *)0x0) {
            puVar41 = local_1154;
            goto LAB_14e6d58d0;
          }
          goto LAB_14e6d58d6;
        }
        goto LAB_14e6d58e4;
      }
LAB_14e6d595c:
      puVar47 = puVar47 + 6;
    }
  }
  uVar59 = 0;
  local_5cc = 0x80;
  local_5f8._0_8_ = (FScriptContainerElement *)0x0;
  local_5f8._8_8_ = 0;
  local_5d8 = (uint *)0x0;
  local_5d0 = 0;
  local_5c4 = 0;
  local_5c0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_5b0[0] = 0;
  local_5c8 = 0xffffffff;
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&local_5c0,local_5b0,&local_570,local_560);
  uVar11 = local_5a8._8_4_;
  lVar34 = (longlong)(int)local_5a8._8_4_;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_5f8,local_5a8._8_4_);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,uVar11,(ForAnyElementType *)local_5f8,(int *)(local_5f8 + 8),
             (int *)(local_5f8 + 0xc));
  local_5c8 = local_578;
  local_5c4 = local_574;
  uVar44 = local_580 + 0x1f & 0xffffffe0;
  local_5d0 = 0;
  if (((int)local_5cc < (int)uVar44) || (0x80 < (int)local_5cc)) {
    local_5cc = 0x80;
    if (0x80 < (int)uVar44) {
      local_5cc = uVar44;
    }
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_5f8 + 0x10),0);
  }
  local_5d0 = local_580;
  if (local_580 != 0) {
    puVar41 = local_5a8 + 0x10;
    if (local_588 != (undefined1 *)0x0) {
      puVar41 = local_588;
    }
    puVar47 = (uint *)(local_5f8 + 0x10);
    if (local_5d8 != (uint *)0x0) {
      puVar47 = local_5d8;
    }
    memcpy(puVar47,puVar41,(ulonglong)(local_580 + 0x1f >> 5) << 2);
  }
  if (uVar11 != 0) {
    memcpy((void *)local_5f8._0_8_,(void *)local_5a8._0_8_,lVar34 * 0xc);
  }
  uVar49 = local_5d0;
  uVar44 = uVar59;
  TStack_1078.CurrentBitIndex = uVar59;
  uVar57 = uVar59;
  if (local_5d0 != 0) {
    puVar47 = (uint *)(local_5f8 + 0x10);
    if (local_5d8 != (uint *)0x0) {
      puVar47 = local_5d8;
    }
    uVar58 = *puVar47;
    uVar57 = 0;
    while (uVar58 == 0) {
      lVar34 = (longlong)(int)uVar44;
      uVar57 = uVar57 + 0x20;
      uVar44 = uVar44 + 1;
      TStack_1078.CurrentBitIndex = local_5d0;
      if ((int)((local_5d0 - 1) + ((int)(local_5d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar44)
      goto LAB_14e6d5b67;
      uVar58 = (puVar47 + 1)[lVar34];
    }
    local_1418 = (ulonglong)(-uVar58 & uVar58);
    uVar20 = local_1418 * 2 + 1;
    lVar34 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    local_1148 = (int)lVar34;
    TStack_1078.CurrentBitIndex = local_1148 + -1 + uVar57;
    if ((int)local_5d0 < TStack_1078.CurrentBitIndex) {
      TStack_1078.CurrentBitIndex = local_5d0;
    }
  }
LAB_14e6d5b67:
  local_1410 = (FScriptContainerElement *)local_5f8;
  pTStack_1400 = (TBitArray<FDefaultBitArrayAllocator> *)(local_5f8 + 0x10);
  uVar45 = local_5d0 & 0xffffffe0;
  local_13e8 = local_5f8._8_4_ - local_5c4;
  uStack_13f8 = CONCAT44(TStack_1078.CurrentBitIndex,0xffffffff);
  uVar58 = -1 << ((byte)local_5d0 & 0x1f);
  lStack_1408 = CONCAT44((int)local_1418,uVar44);
  uStack_13f0 = CONCAT44(local_884,uVar57);
  iVar15 = (int)local_5d0 >> 5;
  local_1420 = (FScriptContainerElement *)CONCAT44(local_1420._4_4_,uVar58);
  uStack_1058 = CONCAT44(uStack_13e4,local_13e8);
  TStack_1078.UnvisitedBitMask = 0xffffffff;
  TStack_1078._24_8_ = uStack_13f0;
  local_1080 = local_1410;
  TStack_1078._padding_ = lStack_1408;
  TStack_1078.Array = pTStack_1400;
  if ((int)local_5d0 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    uVar58 = (uint)local_1420;
  }
  if (uVar49 != local_5d0) {
    puVar47 = (uint *)(local_5f8 + 0x10);
    if (local_5d8 != (uint *)0x0) {
      puVar47 = local_5d8;
    }
    uVar58 = uVar58 & puVar47[iVar15];
    while (uVar58 == 0) {
      lVar34 = (longlong)iVar15;
      uVar45 = uVar45 + 0x20;
      iVar15 = iVar15 + 1;
      uVar49 = local_5d0;
      if ((int)((local_5d0 - 1) + ((int)(local_5d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14e6d5cb0;
      uVar58 = (puVar47 + 1)[lVar34];
    }
    uVar20 = (ulonglong)(-uVar58 & uVar58) * 2 + 1;
    lVar34 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    local_1144 = (int)lVar34;
    uVar49 = (uVar45 - 1) + local_1144;
    if ((int)local_5d0 < (int)uVar49) {
      uVar49 = local_5d0;
    }
  }
LAB_14e6d5cb0:
  while( true ) {
    pFVar50 = local_1080;
    if (*(int *)(local_1080 + 8) - *(int *)(local_1080 + 0x34) != (int)uStack_1058) {
      local_1430[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1430);
    }
    if (((TStack_1078.CurrentBitIndex == uVar49) &&
        (TStack_1078.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_5f8 + 0x10))) &&
       (pFVar50 == (FScriptContainerElement *)local_5f8)) break;
    uVar44 = *(uint *)(*(longlong *)pFVar50 + (longlong)TStack_1078.CurrentBitIndex * 0xc);
    ::FString::FString(&local_eb8,"");
    ::FString::FString(&local_ec8,"");
    uVar57 = uVar59;
    if ((int)uVar44 < (this->GltfAsset).Meshes.ArrayNum) {
      uVar57 = ~uVar44 >> 0x1f;
    }
    if ((uVar57 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    HandleGltfMesh(this,local_1428,
                   (FMesh *)((this->GltfAsset).Meshes.AllocatorInstance.Data +
                            (longlong)(int)uVar44 * 0xa8),uVar44,
                   (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_5a8,&local_ec8,
                   &local_eb8);
    if (local_ec8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ec8.Data.AllocatorInstance.Data);
    }
    if (local_eb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_eb8.Data.AllocatorInstance.Data);
    }
    TStack_1078.UnvisitedBitMask = TStack_1078.UnvisitedBitMask & ~TStack_1078._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1078);
  }
  if ((local_5a8._8_4_ != local_574) && (2 < (byte)LogInterchangeImport._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
  }
  pFVar16 = FText::GetEmpty();
  local_ea8.Object = (FAnalyticsHelper *)this->_padding_;
  local_ea8.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  if (local_ea8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_ea8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_ea8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1348[0] = SUCCESSFULL;
  UE::Interchange::Gltf::Private::AddAnalytics(local_1348,&local_ea8,&this->GltfAsset,pFVar16);
  bVar12 = true;
  local_5b0[0] = 0;
  if (local_5c0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_5c0.SecondaryData);
  }
  iVar15 = SUB84(local_5f8._8_8_,4);
  local_5f8._8_8_ = local_5f8._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_5f8,0,(int *)(local_5f8 + 0xc));
  }
  local_5c8 = 0xffffffff;
  local_5c4 = 0;
  local_5d0 = 0;
  if (0x80 < local_5cc) {
    local_5cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_5f8 + 0x10),0);
  }
  if (local_5d8 != (uint *)0x0) {
    FMemory::Free(local_5d8);
  }
  if ((FScriptContainerElement *)local_5f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_5f8._0_8_);
  }
  local_560 = 0;
  if (local_570.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_570.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_5a8);
  local_468.HashSize = 0;
  if (local_468.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_468.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_468.Elements);
  local_508.HashSize = 0;
  if (local_508.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_508.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_508.Elements);
  goto LAB_14e6d5f8d;
LAB_14e6d2eaa:
  pUVar19 = UInterchangeTranslatorBase::AddMessage<UInterchangeResultError_Generic>
                      ((UInterchangeTranslatorBase *)this);
  ::FString::operator=((FString *)&pUVar19->_padding_,&local_1300);
  FText::operator=(&pUVar19->Text,(FText *)&pTVar51->field_0x8);
  local_e18.Object = (FAnalyticsHelper *)this->_padding_;
  local_e18.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  if (local_e18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_132c = GLTFREADER_FAILED;
  UE::Interchange::Gltf::Private::AddAnalytics
            (&local_132c,&local_e18,&this->GltfAsset,(FText *)&pTVar51->field_0x8);
  bVar12 = false;
LAB_14e6d5f8d:
  DestructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,int>(local_1310,local_1308);
  if (local_1310 != (TTuple<GLTF::EMessageSeverity,FText> *)0x0) {
    FMemory::Free(local_1310);
  }
  DestructItems<FString,int>((FString *)local_13e0.Data,(int)local_13d8);
  if (local_13e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_13e0.Data);
  }
  if (local_1300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1300.Data.AllocatorInstance.Data);
  }
  GLTF::FFileReader::~FFileReader(&local_a18);
LAB_14e6d6017:
  if (local_1170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1170.Data.AllocatorInstance.Data);
  }
  return bVar12;
}

// _getUObject @ 14e6d7fc0

UObject * __thiscall UInterchangeGLTFTranslator::_getUObject(UInterchangeGLTFTranslator *this)

{
  return (UObject *)&this[-1].NodeUidMap.field_0x10;
}

// _getUObject`adjustor{8}' @ 14e6d7fcc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UInterchangeGLTFTranslator::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UInterchangeGLTFTranslator::_getUObject_adjustor_8__(UInterchangeGLTFTranslator *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UInterchangeGLTFTranslator *)
                       &this[-1].bRenderSettingsClearCoatEnableSecondNormal);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14e6d7fdc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UInterchangeGLTFTranslator::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UInterchangeGLTFTranslator::_getUObject_adjustor_16__(UInterchangeGLTFTranslator *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UInterchangeGLTFTranslator *)&this[-1].NodeUidMap.field_0x48);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{24}' @ 14e6d7fec

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UInterchangeGLTFTranslator::_getUObject`adjustor{24}' (void)const __ptr64 */

UObject * __thiscall
UInterchangeGLTFTranslator::_getUObject_adjustor_24__(UInterchangeGLTFTranslator *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UInterchangeGLTFTranslator *)&this[-1].NodeUidMap.field_0x40);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{32}' @ 14e6d7ffc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UInterchangeGLTFTranslator::_getUObject`adjustor{32}' (void)const __ptr64 */

UObject * __thiscall
UInterchangeGLTFTranslator::_getUObject_adjustor_32__(UInterchangeGLTFTranslator *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UInterchangeGLTFTranslator *)&this[-1].NodeUidMap.field_0x38);
  return (UObject *)pUVar1;
}

