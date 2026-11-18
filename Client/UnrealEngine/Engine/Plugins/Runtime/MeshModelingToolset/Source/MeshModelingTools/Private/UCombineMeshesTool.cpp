// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 19

// StaticClass @ 14cbd17b0

UClass * __cdecl UCombineMeshesTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombineMeshesTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CombineMeshesTool",
               &Z_Registration_Info_UClass_UCombineMeshesTool.InnerSingleton,
               StaticRegisterNativesUCombineMeshesTool,0x108,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCombineMeshesTool>,
               InternalVTableHelperCtorCaller<UCombineMeshesTool>,local_res8,
               UMultiSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombineMeshesTool.InnerSingleton;
}

// UCombineMeshesTool @ 14cbdcd70

UCombineMeshesTool * __thiscall
UCombineMeshesTool::UCombineMeshesTool(UCombineMeshesTool *this,FVTableHelper *param_1)

{
  UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolExclusiveToolAPI__;
  (this->BasicProperties).field0_0x0.DebugPtr = (UCombineMeshesToolProperties *)0x0;
  (this->OutputTypeProperties).field0_0x0.DebugPtr = (UCreateMeshObjectTypeProperties *)0x0;
  (this->HandleSourceProperties).field0_0x0.DebugPtr = (UOnAcceptHandleSourcesPropertiesBase *)0x0;
  return this;
}

// UCombineMeshesTool @ 14cbdcde0

UCombineMeshesTool * __thiscall UCombineMeshesTool::UCombineMeshesTool(UCombineMeshesTool *this)

{
  UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolExclusiveToolAPI__;
  (this->BasicProperties).field0_0x0.DebugPtr = (UCombineMeshesToolProperties *)0x0;
  (this->OutputTypeProperties).field0_0x0.DebugPtr = (UCreateMeshObjectTypeProperties *)0x0;
  (this->HandleSourceProperties).field0_0x0.DebugPtr = (UOnAcceptHandleSourcesPropertiesBase *)0x0;
  return this;
}

// ~UCombineMeshesTool @ 14cbe00f0

void __thiscall UCombineMeshesTool::~UCombineMeshesTool(UCombineMeshesTool *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&___7IInteractiveToolExclusiveToolAPI__6B_;
  UMultiSelectionMeshEditingTool::~UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this);
  return;
}

// operator() @ 14cbe2e70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`UCombineMeshesTool::Setup'::__l2::<lambda_2>::operator()
          (void *this,EBaseCreateFromSelectedTargetType param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UPrimitiveComponent *pUVar7;
  FString *pFVar8;
  uint uVar9;
  FString *pFVar10;
  undefined8 uVar11;
  FString local_18;
  
  lVar1 = *(longlong *)this;
  if (param_1 == NewObject) {
    ::FString::operator=((FString *)(*(longlong *)(lVar1 + 0xe8) + 200),L"");
    uVar11 = 1;
  }
  else {
    if (*(int *)(*(longlong *)(lVar1 + 0xe8) + 0xb4) == 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(int *)(lVar1 + 0xd0) - 1;
    }
    uVar6 = 0;
    if ((int)uVar9 < *(int *)(lVar1 + 0xd0)) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pUVar7 = UE::ToolTarget::GetTargetComponent
                       (*(UToolTarget **)(*(longlong *)(lVar1 + 200) + (longlong)(int)uVar9 * 8));
    pFVar8 = UE::Modeling::GetComponentAssetBaseName(&local_18,(UActorComponent *)pUVar7,false);
    lVar1 = *(longlong *)(*(longlong *)this + 0xe8);
    pFVar10 = (FString *)(lVar1 + 200);
    if (pFVar10 != pFVar8) {
      pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar10->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(lVar1 + 0xd0) = (pFVar8->Data).ArrayNum;
      *(int *)(lVar1 + 0xd4) = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    uVar11 = 0;
  }
  plVar3 = *(longlong **)this;
                    /* WARNING: Could not recover jumptable at 0x00014cbe2fab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x338))(plVar3,plVar3[0x1e],uVar11);
  return;
}

// operator() @ 14cbe3120

TVector<double> * __thiscall
`UCombineMeshesTool::CreateNewAsset'::__l36::<lambda_2>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  double dVar1;
  TQuaternion<double> *pTVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TVector<double>_u_0 local_48 [2];
  
  pTVar2 = *(TQuaternion<double> **)this;
  dVar7 = pTVar2[2].field0_0x0._s_0.X;
  dVar1 = pTVar2[1].field0_0x0._s_0.W;
  dVar8 = pTVar2[2].field0_0x0._s_0.Y;
  dVar6 = dVar7 * dVar1;
  dVar5 = __real_3ff0000000000000;
  if (dVar8 * dVar6 < 0.0) {
    dVar5 = __real_bff0000000000000;
  }
  dVar1 = dVar1 * (param_2->field0_0x0)._s_0.Y * dVar8 * dVar5;
  dVar8 = dVar7 * (param_2->field0_0x0)._s_0.X * dVar8 * dVar5;
  dVar7 = dVar6 * dVar5 * (param_2->field0_0x0)._s_0.Z;
  auVar3._0_8_ = dVar1 * dVar1;
  auVar3._8_8_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar8 * dVar8 + auVar3._0_8_ + dVar7 * dVar7;
  auVar4 = sqrtpd(auVar3,auVar4);
  if (auVar4._0_8_ <= 0.0) {
    local_48[0]._s_0.Z = 0.0;
    local_48[0]._s_0.X = 0.0;
    local_48[0]._s_0.Y = 0.0;
  }
  else {
    dVar5 = __real_3ff0000000000000 / auVar4._0_8_;
    local_48[0]._0_8_ = dVar5 * dVar8;
    local_48[0]._8_8_ = dVar5 * dVar1;
    local_48[0]._16_8_ = dVar5 * dVar7;
  }
  UE::Geometry::operator*<double>
            (__return_storage_ptr__,pTVar2,(TVector<double> *)&local_48[0]._s_0);
  return __return_storage_ptr__;
}

// BuildCombinedMaterialSet @ 14cbe6810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UCombineMeshesTool::BuildCombinedMaterialSet
          (UCombineMeshesTool *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ForElementType<FSetElementId> FVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStackY_148 [32];
  int local_f8 [2];
  UMaterialInterface *local_f0;
  longlong local_e8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_e0;
  longlong local_d8;
  FComponentMaterialSet local_d0;
  TPairInitializer<UMaterialInterface_*_const_&,int_const_&> local_c0;
  UCombineMeshesTool *local_b0;
  UMaterialInterface **local_a8;
  int *local_a0;
  TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  local_e0 = param_2;
  local_b0 = this;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,(int)this->_padding_,Default);
  if (0 < (int)this->_padding_) {
    local_e8 = 0;
    local_d8 = 0;
    do {
      lVar10 = local_d8;
      uVar9 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::ToolTarget::GetMaterialSet(&local_d0,*(UToolTarget **)(this->_padding_ + lVar10),false);
      piVar6 = (int *)(longlong)local_d0.Materials.ArrayNum;
      uVar9 = 0;
      lVar10 = 0;
      local_c0.Value = piVar6;
      if (0 < local_d0.Materials.ArrayNum) {
        do {
          uVar5 = 0;
          if ((int)uVar9 < (int)piVar6) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_f0 = *(UMaterialInterface **)
                      (local_d0.Materials.AllocatorInstance.Data + lVar10 * 8);
          local_f8[0] = 0;
          uVar5 = ((uint)((ulonglong)local_f0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_f0 >> 4))
                  * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar7 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar7 = local_98.Hash.SecondaryData;
            }
            for (iVar4 = *(int *)((longlong)FVar7 +
                                 (ulonglong)(local_98.HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
                iVar4 != -1;
                iVar4 = *(int *)(local_98.Elements._0_8_ + 0x10 + (longlong)iVar4 * 0x18)) {
              if (*(UMaterialInterface **)(local_98.Elements._0_8_ + (longlong)iVar4 * 0x18) ==
                  local_f0) {
                piVar6 = TMapBase<UMaterialInterface_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>_>
                         ::FindChecked((TMapBase<UMaterialInterface_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>_>
                                        *)&local_98,local_f0);
                local_f8[0] = *piVar6;
                goto LAB_14cbe6b0e;
              }
            }
          }
          local_f8[0] = param_1->ArrayNum;
          local_a8 = &local_f0;
          local_a0 = local_f8;
          TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UMaterialInterface_*_const_&,int_const_&>_>
                    (&local_98,&local_c0,(bool *)&local_a8);
          pFVar8 = (param_1->AllocatorInstance).Data;
          if (((pFVar8 <= (FScriptContainerElement *)&local_f0) &&
              ((FScriptContainerElement *)&local_f0 < pFVar8 + (longlong)*piVar1 * 8)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar4 = param_1->ArrayNum;
          if (iVar4 == *piVar1) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar4 + 1;
          *(UMaterialInterface **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) =
               local_f0;
LAB_14cbe6b0e:
          uVar5 = 0;
          if ((int)uVar11 < param_2->ArrayNum) {
            uVar5 = ~uVar11 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar8 = (param_2->AllocatorInstance).Data + local_e8;
          if (((*(FScriptContainerElement **)&pFVar8->field_0x0 <=
                (FScriptContainerElement *)local_f8) &&
              ((FScriptContainerElement *)local_f8 <
               *(FScriptContainerElement **)&pFVar8->field_0x0 +
               (longlong)*(int *)(pFVar8 + 0xc) * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar4 = *(int *)&pFVar8[8].field_0x0;
          if (iVar4 == *(int *)(pFVar8 + 0xc)) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar8,(int *)(pFVar8 + 0xc));
          }
          *(int *)&pFVar8[8].field_0x0 = iVar4 + 1;
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 1;
          *(int *)(*(FScriptContainerElement **)&pFVar8->field_0x0 + (longlong)iVar4 * 4) =
               local_f8[0];
          param_2 = local_e0;
          if ((longlong)local_c0.Value <= lVar10) break;
          piVar6 = (int *)(ulonglong)(uint)local_d0.Materials.ArrayNum;
        } while( true );
      }
      if (local_d0.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Materials.AllocatorInstance.Data);
      }
      uVar11 = uVar11 + 1;
      local_d8 = local_d8 + 8;
      local_e8 = local_e8 + 0x10;
      this = local_b0;
    } while ((int)uVar11 < (int)local_b0->_padding_);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// CreateNewAsset @ 14cbe9150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCombineMeshesTool::CreateNewAsset(UCombineMeshesTool *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar2;
  UCombineMeshesToolProperties *pUVar3;
  UCreateMeshObjectTypeProperties *pUVar4;
  UOnAcceptHandleSourcesPropertiesBase *this_00;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [8];
  undefined1 auVar17 [8];
  undefined8 uVar18;
  ForAnyElementType FVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  FDynamicMesh3 *pFVar23;
  longlong lVar24;
  FText *pFVar25;
  UPrimitiveComponent *pUVar26;
  TTransform<double> *pTVar27;
  FComponentCollisionSettings FVar28;
  UInteractiveToolManager *pUVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  wchar_t *pwVar33;
  wchar_t *pwVar34;
  uint uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  undefined4 uVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auStackY_14c8 [32];
  ForAnyElementType local_1470;
  undefined8 local_1468;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_1460;
  ulonglong local_1450;
  AActor *local_1448;
  double local_1440;
  double dStack_1438;
  undefined1 local_1430 [8];
  double dStack_1428;
  undefined1 local_1420 [8];
  double dStack_1418;
  undefined8 local_1410;
  undefined4 local_1408;
  uint uStack_1404;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_1400;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_13f0;
  double local_13e0;
  double dStack_13d8;
  double local_13d0;
  FSimpleShapeSet3d local_13c8;
  FDynamicMeshEditor local_1378;
  FString local_1370;
  BaseIterator local_1360;
  double local_1348;
  double dStack_1340;
  double local_1338;
  double dStack_1330;
  undefined8 local_1328;
  double dStack_1320;
  double local_1318;
  undefined8 local_1310;
  double dStack_1308;
  double local_1300;
  FCreateMeshObjectResult local_12f8;
  undefined1 local_12d8 [16];
  double local_12c8;
  double dStack_12c0;
  undefined1 local_12b8 [16];
  double local_12a8;
  double dStack_12a0;
  double local_1298;
  double dStack_1290;
  double local_1288;
  double dStack_1280;
  FText local_1278;
  FText local_1268;
  IndexIterator local_1258;
  FComponentMaterialSet local_1248;
  double local_1238;
  double dStack_1230;
  double local_1228;
  code *local_1218 [2];
  undefined **local_1208;
  double *local_1200;
  undefined8 local_11f0;
  code *local_11e8 [2];
  undefined **local_11d8;
  double *local_11d0;
  undefined8 local_11c0;
  double local_11b8;
  double dStack_11b0;
  double local_11a8;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_1198;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_1168;
  undefined1 local_1138 [16];
  undefined1 local_10e8;
  undefined7 uStack_10e7;
  FDynamicMesh3 local_10d8;
  FDynamicMesh3 local_ea8;
  undefined1 local_c78 [32];
  void *local_c58;
  undefined4 local_c50;
  uint local_c4c;
  undefined4 local_c48;
  undefined4 local_c44;
  void *local_c38;
  undefined4 local_c30;
  ForAnyElementType local_c28;
  undefined8 local_c20;
  TBitArray<FDefaultBitArrayAllocator> local_c18;
  undefined4 local_bf8;
  undefined4 local_bf4;
  void *local_be8;
  undefined4 local_be0;
  undefined2 local_bd8;
  ForAnyElementType local_bd0;
  undefined8 local_bc8;
  TBitArray<FDefaultBitArrayAllocator> local_bc0;
  undefined8 uStack_ba0;
  void *local_b90;
  undefined4 local_b88;
  ForAnyElementType local_b80;
  undefined8 local_b78;
  TBitArray<FDefaultBitArrayAllocator> local_b70;
  undefined8 uStack_b50;
  void *local_b40;
  undefined4 local_b38;
  undefined2 local_b30;
  ForAnyElementType local_b28;
  undefined8 local_b20;
  TBitArray<FDefaultBitArrayAllocator> local_b18;
  undefined4 local_af8;
  undefined4 local_af4;
  void *local_ae8;
  undefined4 local_ae0;
  ForAnyElementType local_ad8;
  undefined8 local_ad0;
  TBitArray<FDefaultBitArrayAllocator> local_ac8;
  undefined4 local_aa8;
  undefined4 local_aa4;
  void *local_a98;
  undefined4 local_a90;
  undefined2 local_a88;
  ForAnyElementType local_a80;
  undefined8 local_a78;
  TBitArray<FDefaultBitArrayAllocator> local_a70;
  undefined8 uStack_a50;
  void *local_a40;
  undefined4 local_a38;
  ForAnyElementType local_a30;
  undefined8 local_a28;
  TBitArray<FDefaultBitArrayAllocator> local_a20;
  undefined8 uStack_a00;
  void *local_9f0;
  undefined4 local_9e8;
  undefined2 local_9e0;
  ForAnyElementType local_9d8;
  undefined8 local_9d0;
  ForAnyElementType local_9c8;
  undefined8 local_9c0;
  TTransform<double> local_9b8;
  TTransform<double> local_958;
  TTransform<double> local_8f8;
  FCreateMeshObjectParams local_898;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_14c8;
  uVar31 = 0;
  GetMeshParams.bWantMeshTangents = true;
  uVar35 = (uint)this->_padding_;
  local_1450 = local_1450 & 0xffffffff00000000;
  local_1470.Data = (FScriptContainerElement *)0x0;
  local_1468 = 0;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  if (0 < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x230,8,uVar35,&local_1470,0,(int *)((longlong)&local_1468 + 4));
  }
  uVar32 = uVar31;
  if (0 < (int)this->_padding_) {
    do {
      uVar30 = (uint)uVar31;
      uVar35 = 0;
      if ((int)uVar30 < (int)this->_padding_) {
        uVar35 = ~uVar30 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar23 = UE::ToolTarget::GetDynamicMeshCopy
                          (&local_ea8,*(UToolTarget **)(uVar32 + this->_padding_),&GetMeshParams);
      if (((local_1470.Data <= pFVar23) &&
          (pFVar23 < (FDynamicMesh3 *)(local_1470.Data + (longlong)local_1468._4_4_ * 0x230))) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar22 = (int)local_1468;
      if ((int)local_1468 == local_1468._4_4_) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x230,8,&local_1470,(int *)((longlong)&local_1468 + 4));
      }
      local_1468 = CONCAT44(local_1468._4_4_,iVar22 + 1);
      UE::Geometry::FDynamicMesh3::FDynamicMesh3
                ((FDynamicMesh3 *)(local_1470.Data + (longlong)iVar22 * 0x230),pFVar23);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_ea8);
      uVar31 = (ulonglong)(uVar30 + 1);
      uVar32 = uVar32 + 8;
    } while ((int)(uVar30 + 1) < (int)this->_padding_);
  }
  lVar24 = (**(code **)(this->_padding_ + 0x2d8))(this);
  bVar20 = this->bDuplicateMode;
  pwVar34 = L"Duplicate Mesh";
  pwVar33 = L"DuplicateMeshToolTransactionName";
  pcVar5 = *(code **)(*(longlong *)(lVar24 + 0x28) + 0x10);
  pFVar25 = &local_1268;
  if (bVar20 == false) {
    pwVar34 = L"Merge Meshes";
    pwVar33 = L"CombineMeshesToolTransactionName";
    pFVar25 = &local_1278;
  }
  pFVar25 = FText::AsLocalizable_Advanced_LocText(pFVar25,L"UCombineMeshesTool",pwVar33,pwVar34);
  (*pcVar5)(lVar24 + 0x28,pFVar25);
  if (((2U - (bVar20 != false) & 2) != 0) && (local_1278.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_1278.TextData.Reference + 0x10))();
  }
  if ((bVar20 != false) && (local_1268.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_1268.TextData.Reference + 0x10))();
  }
  uVar31 = 0;
  local_1440 = 0.0;
  dStack_1438 = 0.0;
  _local_1430 = ZEXT816(0);
  auVar45 = _local_1430;
  _local_1420 = ZEXT816(0);
  auVar40 = _local_1420;
  local_1410 = 0;
  if (0 < (int)this->_padding_) {
    dStack_1418 = 0.0;
    local_1420 = (undefined1  [8])0x0;
    dStack_1428 = 0.0;
    local_1430 = (undefined1  [8])0x0;
    uVar32 = uVar31;
    auVar17 = local_1430;
    auVar16 = local_1420;
    dVar9 = dStack_1418;
    dVar6 = dStack_1428;
    _local_1430 = auVar45;
    _local_1420 = auVar40;
    do {
      dVar8 = dStack_1438;
      dVar48 = local_1440;
      uVar30 = (uint)uVar31;
      uVar35 = 0;
      if ((int)uVar30 < (int)this->_padding_) {
        uVar35 = ~uVar30 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar26 = UE::ToolTarget::GetTargetComponent(*(UToolTarget **)(uVar32 + this->_padding_));
      local_10e8 = 1;
      dVar12 = *(double *)&pUVar26->field_0x110 + *(double *)&pUVar26->field_0x128;
      dVar14 = *(double *)&pUVar26->field_0x118 + *(double *)&pUVar26->field_0x130;
      dVar15 = *(double *)&pUVar26->field_0x120 + *(double *)&pUVar26->field_0x138;
      local_1440 = *(double *)&pUVar26->field_0x110 - *(double *)&pUVar26->field_0x128;
      dStack_1438 = *(double *)&pUVar26->field_0x118 - *(double *)&pUVar26->field_0x130;
      dVar7 = *(double *)&pUVar26->field_0x120 - *(double *)&pUVar26->field_0x138;
      if ((char)local_1410 == '\0') {
        local_1410 = CONCAT71(uStack_10e7,1);
        unique0x10000cbf = SUB84(dVar12,0);
        local_1430 = (undefined1  [8])dVar7;
        unique0x10000cc3 = (int)((ulonglong)dVar12 >> 0x20);
        unique0x10000d87 = SUB84(dVar15,0);
        local_1420 = (undefined1  [8])dVar14;
        unique0x10000d8b = (int)((ulonglong)dVar15 >> 0x20);
      }
      else {
        if (local_1440 <= dVar48) {
          dVar48 = local_1440;
        }
        if (dStack_1438 <= dVar8) {
          dVar8 = dStack_1438;
        }
        if (dVar7 <= (double)auVar17) {
          auVar17 = (undefined1  [8])dVar7;
        }
        dVar7 = (double)auVar17;
        if (dVar6 <= dVar12) {
          dVar6 = dVar12;
        }
        if ((double)auVar16 <= dVar14) {
          auVar16 = (undefined1  [8])dVar14;
        }
        if (dVar9 <= dVar15) {
          dVar9 = dVar15;
        }
        dStack_1428 = dVar6;
        local_1430 = (undefined1  [8])dVar7;
        dStack_1418 = dVar9;
        local_1420 = auVar16;
        dVar12 = dVar6;
        dVar14 = (double)auVar16;
        dVar15 = dVar9;
        dStack_1438 = dVar8;
        local_1440 = dVar48;
      }
      uVar31 = (ulonglong)(uVar30 + 1);
      uVar32 = uVar32 + 8;
      auVar17 = (undefined1  [8])dVar7;
      auVar16 = (undefined1  [8])dVar14;
      dVar9 = dVar15;
      dVar6 = dVar12;
    } while ((int)(uVar30 + 1) < (int)this->_padding_);
  }
  uVar31 = 0;
  local_13f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_13f0.ArrayNum = 0;
  local_13f0.ArrayMax = 0;
  local_1400.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1400.ArrayNum = 0;
  local_1400.ArrayMax = 0;
  BuildCombinedMaterialSet(this,&local_13f0,&local_1400);
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_10d8);
  UE::Geometry::FDynamicMesh3::EnableTriangleGroups(&local_10d8,0);
  UE::Geometry::FDynamicMesh3::EnableAttributes(&local_10d8);
  UE::Geometry::FDynamicMeshAttributeSet::EnableTangents(local_10d8.AttributeSet.Ptr);
  UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(local_10d8.AttributeSet.Ptr);
  UE::Geometry::FDynamicMeshAttributeSet::EnablePrimaryColors(local_10d8.AttributeSet.Ptr);
  iVar22 = (int)this->_padding_;
  local_13e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_13d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_13d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_12a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (iVar22 != 0) {
    uVar32 = uVar31;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (0 < iVar22) {
      do {
        uVar30 = (uint)uVar31;
        uVar35 = 0;
        if ((int)uVar30 < (int)this->_padding_) {
          uVar35 = ~uVar30 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar27 = UE::ToolTarget::GetLocalToWorldTransform
                            (&local_1e8,*(UToolTarget **)(uVar32 + this->_padding_));
        uVar31 = (ulonglong)(uVar30 + 1);
        auVar45 = *(undefined1 (*) [16])(pTVar27->Rotation).ZW.m128d_f64;
        dVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z *
                 (pTVar27->Scale3D).ZW.m128d_f64[0];
        dVar9 = (pTVar27->Scale3D).ZW.m128d_f64[1] * 0.0;
        auVar40 = *(undefined1 (*) [16])(pTVar27->Rotation).XY.m128d_f64;
        dVar14 = (pTVar27->Rotation).ZW.m128d_f64[1];
        dVar48 = (pTVar27->Scale3D).XY.m128d_f64[0] *
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dVar7 = (pTVar27->Scale3D).XY.m128d_f64[1] *
                UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar46 = (undefined4)((ulonglong)dVar7 >> 0x20);
        local_1138 = *(undefined1 (*) [16])(pTVar27->Rotation).XY.m128d_f64;
        auVar38 = blendpd(local_1138,auVar45,2);
        auVar49._8_4_ = SUB84(dVar7,0);
        auVar49._0_8_ = dVar48;
        auVar49._12_4_ = uVar46;
        dVar6 = auVar45._0_8_;
        auVar50._0_8_ = auVar49._8_8_ * local_1138._0_8_ - local_1138._8_8_ * dVar48;
        auVar50._8_8_ = dVar12 * local_1138._8_8_ - dVar6 * dVar7;
        auVar42._8_4_ = SUB84(dVar7,0);
        auVar42._0_8_ = dVar48;
        auVar42._12_4_ = uVar46;
        auVar36._8_4_ = SUB84(dVar9,0);
        auVar36._0_8_ = dVar12;
        auVar36._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar36 = blendpd(auVar42,auVar36,2);
        auVar37._0_8_ = auVar36._0_8_ * dVar6 - auVar38._0_8_ * dVar12;
        auVar37._8_8_ = auVar36._8_8_ * auVar45._8_8_ - auVar38._8_8_ * dVar9;
        auVar36 = blendpd(auVar50,auVar37,2);
        dVar9 = auVar50._8_8_ + auVar50._8_8_;
        dVar8 = auVar37._0_8_ + auVar37._0_8_;
        uVar46 = (undefined4)((ulonglong)dVar8 >> 0x20);
        auVar51._0_8_ = auVar36._0_8_ + auVar36._0_8_;
        auVar51._8_8_ = auVar36._8_8_ + auVar36._8_8_;
        auVar43._8_4_ = SUB84(dVar8,0);
        auVar43._0_8_ = dVar9;
        auVar43._12_4_ = uVar46;
        auVar39._8_4_ = SUB84(dVar8,0);
        auVar39._0_8_ = dVar9;
        auVar39._12_4_ = uVar46;
        auVar36 = blendpd(auVar39,auVar51,2);
        auVar44._0_8_ = auVar43._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar9;
        auVar44._8_8_ = auVar51._0_8_ * auVar40._8_8_ - dVar6 * dVar8;
        auVar38._8_4_ = SUB84(auVar44._8_8_,0);
        auVar38._0_8_ = auVar44._0_8_;
        auVar38._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
        auVar42 = blendpd(auVar40,auVar45,2);
        auVar40._0_8_ = auVar36._0_8_ * dVar6 - auVar42._0_8_ * auVar51._0_8_;
        auVar40._8_8_ = auVar36._8_8_ * auVar45._8_8_ - auVar42._8_8_ * auVar51._8_8_;
        auVar45 = blendpd(auVar44,auVar40,2);
        uVar13 = (double)uVar13 +
                 dVar9 * dVar14 + dVar48 + auVar38._8_8_ + (pTVar27->Translation).XY.m128d_f64[0];
        iVar22 = (int)this->_padding_;
        uVar11 = (double)uVar11 +
                 dVar8 * dVar14 + dVar7 + auVar40._0_8_ + (pTVar27->Translation).XY.m128d_f64[1];
        uVar10 = (double)uVar10 +
                 auVar51._0_8_ * dVar14 + dVar12 + auVar45._0_8_ +
                 (pTVar27->Translation).ZW.m128d_f64[0];
        uVar32 = uVar32 + 8;
      } while ((int)(uVar30 + 1) < iVar22);
    }
    dVar6 = __real_3ff0000000000000 / (double)iVar22;
    uVar13 = (double)uVar13 * dVar6;
    uVar11 = (double)uVar11 * dVar6;
    local_12a8 = (double)uVar10 * dVar6;
  }
  uVar18 = _UNK_150631d98;
  uVar10 = ___xmm_00000000ffffffff0000008000000000;
  uVar35 = 0;
  local_958.Translation.XY.m128d_f64[1]._4_4_ = (uint)((ulonglong)uVar11 >> 0x20);
  local_1408 = 0;
  uStack_1404 = CONCAT31(uStack_1404._1_3_,1);
  FVar28 = (FComponentCollisionSettings)((ulonglong)uStack_1404 << 0x20);
  local_13c8.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_13c8.Spheres.ArrayNum = 0;
  local_13c8.Spheres.ArrayMax = 0;
  local_13c8.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_13c8.Boxes.ArrayNum = 0;
  local_13c8.Boxes.ArrayMax = 0;
  local_13c8.Capsules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_13c8.Capsules.ArrayNum = 0;
  local_13c8.Capsules.ArrayMax = 0;
  local_13c8.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_13c8.Convexes.ArrayNum = 0;
  local_13c8.Convexes.ArrayMax = 0;
  local_13c8.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_13c8.LevelSets.ArrayNum = 0;
  local_13c8.LevelSets.ArrayMax = 0;
  bVar20 = false;
  uVar46 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar47 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_12d8._8_4_ = uVar46;
  local_12d8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_12d8._12_4_ = uVar47;
  local_958.Rotation.XY.m128d_f64[1]._0_4_ = uVar46;
  local_958.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_958.Rotation.XY.m128d_f64[1]._4_4_ = uVar47;
  local_12c8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_12c0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_12b8._8_4_ = (uint)uVar11;
  local_12b8._0_8_ = uVar13;
  local_12b8._12_4_ = local_958.Translation.XY.m128d_f64[1]._4_4_;
  dStack_12a0 = 0.0;
  uVar30 = (uint)__xmm_80000000000000008000000000000000;
  local_958.Translation.XY.m128d_f64[0]._0_4_ = (uint)uVar13 ^ uVar30;
  uVar41 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_958.Translation.XY.m128d_f64[0]._4_4_ = (uint)((ulonglong)uVar13 >> 0x20) ^ uVar41;
  local_958.Translation.XY.m128d_f64[1]._0_4_ = (uint)uVar11 ^ uVar30;
  local_958.Translation.XY.m128d_f64[1]._4_4_ = local_958.Translation.XY.m128d_f64[1]._4_4_ ^ uVar41
  ;
  local_1298 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dStack_1290 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1288 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_1280 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_958.Translation.ZW.m128d_f64[0] =
       (double)CONCAT44((uint)((ulonglong)local_12a8 >> 0x20) ^ uVar41,SUB84(local_12a8,0) ^ uVar30)
  ;
  local_958.Translation.ZW.m128d_f64[1] = 0.0;
  local_958.Rotation.ZW.m128d_f64[0] = local_12c8;
  local_958.Rotation.ZW.m128d_f64[1] = dStack_12c0;
  local_958.Scale3D.XY.m128d_f64[0] = local_1298;
  local_958.Scale3D.XY.m128d_f64[1] = dStack_1290;
  local_958.Scale3D.ZW.m128d_f64[0] = local_1288;
  local_958.Scale3D.ZW.m128d_f64[1] = dStack_1280;
  if (iVar22 < 1) {
LAB_14cbea44f:
    UE::Geometry::FDynamicMeshAttributeSet::DisablePrimaryColors(local_10d8.AttributeSet.Ptr);
  }
  else {
    local_1450 = 0;
    do {
      uVar31 = local_1450;
      uVar30 = 0;
      if ((int)uVar35 < (int)this->_padding_) {
        uVar30 = ~uVar35 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar26 = UE::ToolTarget::GetTargetComponent(*(UToolTarget **)(this->_padding_ + uVar31 * 8));
      uVar30 = 0;
      if ((int)uVar35 < (int)local_1468) {
        uVar30 = ~uVar35 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar23 = (FDynamicMesh3 *)(local_1470.Data + uVar31 * 0x230);
      pFVar1 = (pFVar23->AttributeSet).Ptr;
      if ((bVar20) ||
         ((pFVar1 != (FDynamicMeshAttributeSet *)0x0 &&
          ((pFVar1->ColorLayer).Ptr !=
           (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)))) {
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        UE::Geometry::FDynamicMeshAttributeSet::EnableMatchingAttributes
                  (local_10d8.AttributeSet.Ptr,pFVar1,false,false);
      }
      pTVar2 = (((pFVar23->AttributeSet).Ptr)->MaterialIDAttrib).Ptr;
      if (pTVar2 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                  ((IndexIterator *)&local_1360,&pFVar23->TriangleRefCounts,0,
                   (pFVar23->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar23->TriangleRefCounts).RefCounts.CurBlockUsed);
        iVar22 = (pFVar23->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar23->TriangleRefCounts).RefCounts.CurBlockUsed;
        UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                  (&local_1258,&pFVar23->TriangleRefCounts,iVar22,iVar22);
        uVar46 = local_1258._8_4_;
        iVar22 = local_1360.Index;
        while (iVar22 != uVar46) {
          CombineMeshesToolLocals::SetNewMaterialID
                    (uVar35,pTVar2,local_1360.Index,&local_1400,&local_13f0);
          UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_1360);
          iVar22 = local_1360.Index;
        }
      }
      uVar11 = ___xmm_00000000ffffffff0000008000000000;
      local_c4c = 0x80;
      local_1378.Mesh = &local_10d8;
      local_c78._0_8_ = (FScriptContainerElement *)0x0;
      local_c78._8_8_ = 0;
      local_c58 = (void *)0x0;
      local_c50 = 0;
      local_c48 = 0xffffffff;
      local_c44 = 0;
      local_c38 = (void *)0x0;
      local_c30 = 0;
      local_c28.Data = (FScriptContainerElement *)0x0;
      local_c20 = 0;
      local_c18.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_c18.NumBits = 0;
      local_c18.MaxBits = 0x80;
      local_bf8 = 0xffffffff;
      local_bf4 = 0;
      local_be8 = (void *)0x0;
      local_be0 = 0;
      local_bd8._0_1_ = true;
      local_bd8._1_1_ = true;
      local_bd0.Data = (FScriptContainerElement *)0x0;
      local_bc8 = 0;
      local_bc0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      ___xmm_00000000ffffffff0000008000000000 = (int)uVar10;
      _UNK_150631d94 = SUB84(uVar10,4);
      local_bc0.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_bc0.MaxBits = _UNK_150631d94;
      uStack_ba0 = uVar18;
      local_b90 = (void *)0x0;
      local_b88 = 0;
      local_b80.Data = (FScriptContainerElement *)0x0;
      local_b78 = 0;
      local_b70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      ___xmm_00000000ffffffff0000008000000000 = (int)uVar10;
      _UNK_150631d94 = SUB84(uVar10,4);
      local_b70.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_b70.MaxBits = _UNK_150631d94;
      uStack_b50 = uVar18;
      local_b40 = (void *)0x0;
      local_b38 = 0;
      local_b30._0_1_ = true;
      local_b30._1_1_ = true;
      local_b28.Data = (FScriptContainerElement *)0x0;
      local_b20 = 0;
      local_b18.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_b18.NumBits = 0;
      local_b18.MaxBits = 0x80;
      local_af8 = 0xffffffff;
      local_af4 = 0;
      local_ae8 = (void *)0x0;
      local_ae0 = 0;
      local_ad8.Data = (FScriptContainerElement *)0x0;
      local_ad0 = 0;
      local_ac8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_ac8.NumBits = 0;
      local_ac8.MaxBits = 0x80;
      local_aa8 = 0xffffffff;
      local_aa4 = 0;
      local_a98 = (void *)0x0;
      local_a90 = 0;
      local_a88._0_1_ = true;
      local_a88._1_1_ = true;
      local_a80.Data = (FScriptContainerElement *)0x0;
      local_a78 = 0;
      local_a70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      ___xmm_00000000ffffffff0000008000000000 = (int)uVar10;
      _UNK_150631d94 = SUB84(uVar10,4);
      local_a70.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_a70.MaxBits = _UNK_150631d94;
      uStack_a50 = uVar18;
      local_a40 = (void *)0x0;
      local_a38 = 0;
      local_a30.Data = (FScriptContainerElement *)0x0;
      local_a28 = 0;
      local_a20.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      ___xmm_00000000ffffffff0000008000000000 = (int)uVar10;
      _UNK_150631d94 = SUB84(uVar10,4);
      local_a20.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_a20.MaxBits = _UNK_150631d94;
      uStack_a00 = uVar18;
      local_9f0 = (void *)0x0;
      local_9e8 = 0;
      local_9e0._0_1_ = true;
      local_9e0._1_1_ = true;
      local_9d8.Data = (FScriptContainerElement *)0x0;
      local_9d0._0_4_ = 0;
      local_9d0._4_4_ = 0;
      local_9c8.Data = (FScriptContainerElement *)0x0;
      local_9c0._0_4_ = 0;
      local_9c0._4_4_ = 0;
      ___xmm_00000000ffffffff0000008000000000 = uVar11;
      if (this->bDuplicateMode == false) {
        uVar30 = 0;
        if ((int)uVar35 < (int)this->_padding_) {
          uVar30 = ~uVar35 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar31 = local_1450;
        pTVar27 = UE::ToolTarget::GetLocalToWorldTransform
                            (&local_188,*(UToolTarget **)(this->_padding_ + local_1450 * 8));
        local_9b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_9b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_9b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_9b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_9b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_9b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_9b8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_9b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_9b8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_9b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_9b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_9b8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_9b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_9b8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_9b8,pTVar27,&local_958);
        local_1338 = local_9b8.Rotation.ZW.m128d_f64[0];
        dStack_1330 = local_9b8.Rotation.ZW.m128d_f64[1];
        local_11b8 = local_9b8.Translation.XY.m128d_f64[0];
        dStack_11b0 = local_9b8.Translation.XY.m128d_f64[1];
        local_1328 = local_9b8.Translation.XY.m128d_f64[0];
        dStack_1320 = local_9b8.Translation.XY.m128d_f64[1];
        local_1348 = local_9b8.Rotation.XY.m128d_f64[0];
        dStack_1340 = local_9b8.Rotation.XY.m128d_f64[1];
        local_11a8 = local_9b8.Translation.ZW.m128d_f64[0];
        local_1318 = local_9b8.Translation.ZW.m128d_f64[0];
        local_1228 = local_9b8.Scale3D.ZW.m128d_f64[0];
        local_1238 = local_9b8.Scale3D.XY.m128d_f64[0];
        dStack_1230 = local_9b8.Scale3D.XY.m128d_f64[1];
        local_1310 = local_9b8.Scale3D.XY.m128d_f64[0];
        dStack_1308 = local_9b8.Scale3D.XY.m128d_f64[1];
        local_1300 = local_9b8.Scale3D.ZW.m128d_f64[0];
        if (local_9b8.Scale3D.XY.m128d_f64[1] * local_9b8.Scale3D.XY.m128d_f64[0] *
            local_9b8.Scale3D.ZW.m128d_f64[0] < 0.0) {
          UE::Geometry::FDynamicMesh3::ReverseOrientation(pFVar23,false);
        }
        local_11d8 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UCombineMeshesTool::CreateNewAsset'::`36'::<lambda_2>,0,0>
                      ::_vftable_;
        local_11d0 = &local_1348;
        local_11c0 = 0;
        local_11f0 = 0;
        local_11e8[0] =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UCombineMeshesTool::CreateNewAsset'::__l36::<lambda_2>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
             ::Call;
        local_1208 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UCombineMeshesTool::CreateNewAsset'::`36'::<lambda_1>,0,0>
                      ::_vftable_;
        local_1200 = &local_1348;
        local_1218[0] =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UCombineMeshesTool::CreateNewAsset'::__l36::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
             ::Call;
        UE::Geometry::FDynamicMeshEditor::AppendMesh
                  (&local_1378,pFVar23,(FMeshIndexMappings *)local_c78,
                   (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                    *)local_1218,
                   (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                    *)local_11e8,false);
        bVar21 = UE::Geometry::ComponentTypeSupportsCollision(pUVar26,ReadWrite);
        if (bVar21) {
          local_8f8.Rotation.XY.m128d_f64[0] = local_1348;
          local_8f8.Rotation.XY.m128d_f64[1] = dStack_1340;
          local_8f8.Rotation.ZW.m128d_f64[0] = local_1338;
          local_8f8.Rotation.ZW.m128d_f64[1] = dStack_1330;
          local_8f8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dStack_1320,0);
          local_8f8.Translation.XY.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)dStack_1320 >> 0x20)
          ;
          local_8f8.Translation.XY.m128d_f64[0]._0_4_ = (undefined4)local_1328;
          local_8f8.Translation.XY.m128d_f64[0]._4_4_ = local_1328._4_4_;
          local_8f8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dStack_1308,0);
          local_8f8.Scale3D.XY.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)dStack_1308 >> 0x20);
          local_8f8.Translation.ZW.m128d_f64[0] = local_1318;
          local_8f8.Translation.ZW.m128d_f64[1] = 0.0;
          local_8f8.Scale3D.ZW.m128d_f64[0] = local_1300;
          local_8f8.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_8f8.Scale3D.XY.m128d_f64[0]._0_4_ = (undefined4)local_1310;
          local_8f8.Scale3D.XY.m128d_f64[0]._4_4_ = local_1310._4_4_;
          UE::Geometry::AppendSimpleCollision(pUVar26,&local_13c8,&local_8f8);
        }
      }
      else {
        local_1198._0_8_ = 0;
        local_1198._40_8_ = 0;
        local_1168._0_8_ = 0;
        local_1168._40_8_ = 0;
        UE::Geometry::FDynamicMeshEditor::AppendMesh
                  (&local_1378,pFVar23,(FMeshIndexMappings *)local_c78,&local_1168,&local_1198,false
                  );
        bVar21 = UE::Geometry::ComponentTypeSupportsCollision(pUVar26,ReadWrite);
        uVar31 = local_1450;
        if (bVar21) {
          FVar28 = UE::Geometry::GetCollisionSettings(pUVar26);
          UE::Geometry::AppendSimpleCollision
                    (pUVar26,&local_13c8,&UE::Math::TTransform<double>::Identity);
          uVar31 = local_1450;
        }
      }
      uVar30 = 0;
      if ((int)uVar35 < (int)this->_padding_) {
        uVar30 = ~uVar35 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::ToolTarget::GetMaterialSet
                (&local_1248,*(UToolTarget **)(this->_padding_ + uVar31 * 8),false);
      if (local_1248.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1248.Materials.AllocatorInstance.Data);
      }
      DestructItems<UE::Geometry::TIndexMap<int>,int>
                ((TIndexMap<int> *)local_9c8.Data,(int)local_9c0);
      if ((TIndexMap<int> *)local_9c8.Data != (TIndexMap<int> *)0x0) {
        FMemory::Free(local_9c8.Data);
      }
      DestructItems<UE::Geometry::TIndexMap<int>,int>
                ((TIndexMap<int> *)local_9d8.Data,(int)local_9d0);
      if ((TIndexMap<int> *)local_9d8.Data != (TIndexMap<int> *)0x0) {
        FMemory::Free(local_9d8.Data);
      }
      local_9e8 = 0;
      if (local_9f0 != (void *)0x0) {
        FMemory::Free(local_9f0);
      }
      uVar32 = local_a28 >> 0x20;
      local_a28 = local_a28 & 0xffffffff00000000;
      if ((int)uVar32 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_a30,0,(int *)((longlong)&local_a28 + 4));
      }
      iVar22 = local_a20.MaxBits;
      uStack_a00 = 0xffffffff;
      local_a20._24_8_ = (ulonglong)(uint)local_a20.MaxBits << 0x20;
      if (0x80 < (uint)iVar22) {
        local_a20.NumBits = 0;
        local_a20.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a20,0);
      }
      if (local_a20.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_a20.AllocatorInstance.SecondaryData);
      }
      if (local_a30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a30.Data);
      }
      local_a38 = 0;
      if (local_a40 != (void *)0x0) {
        FMemory::Free(local_a40);
      }
      uVar32 = local_a78 >> 0x20;
      local_a78 = local_a78 & 0xffffffff00000000;
      if ((int)uVar32 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_a80,0,(int *)((longlong)&local_a78 + 4));
      }
      iVar22 = local_a70.MaxBits;
      uStack_a50 = 0xffffffff;
      local_a70._24_8_ = (ulonglong)(uint)local_a70.MaxBits << 0x20;
      if (0x80 < (uint)iVar22) {
        local_a70.NumBits = 0;
        local_a70.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a70,0);
      }
      if (local_a70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_a70.AllocatorInstance.SecondaryData);
      }
      if (local_a80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a80.Data);
      }
      local_a90 = 0;
      if (local_a98 != (void *)0x0) {
        FMemory::Free(local_a98);
      }
      uVar32 = local_ad0 >> 0x20;
      local_ad0 = local_ad0 & 0xffffffff00000000;
      if ((int)uVar32 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_ad8,0,(int *)((longlong)&local_ad0 + 4));
      }
      local_aa8 = 0xffffffff;
      local_aa4 = 0;
      local_ac8.NumBits = 0;
      if (0x80 < (uint)local_ac8.MaxBits) {
        local_ac8.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_ac8,0);
      }
      if (local_ac8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_ac8.AllocatorInstance.SecondaryData);
      }
      if (local_ad8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ad8.Data);
      }
      local_ae0 = 0;
      if (local_ae8 != (void *)0x0) {
        FMemory::Free(local_ae8);
      }
      uVar32 = local_b20 >> 0x20;
      local_b20 = local_b20 & 0xffffffff00000000;
      if ((int)uVar32 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_b28,0,(int *)((longlong)&local_b20 + 4));
      }
      local_af8 = 0xffffffff;
      local_af4 = 0;
      local_b18.NumBits = 0;
      if (0x80 < (uint)local_b18.MaxBits) {
        local_b18.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b18,0);
      }
      if (local_b18.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_b18.AllocatorInstance.SecondaryData);
      }
      if (local_b28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b28.Data);
      }
      local_b38 = 0;
      if (local_b40 != (void *)0x0) {
        FMemory::Free(local_b40);
      }
      uVar32 = local_b78 >> 0x20;
      local_b78 = local_b78 & 0xffffffff00000000;
      if ((int)uVar32 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_b80,0,(int *)((longlong)&local_b78 + 4));
      }
      iVar22 = local_b70.MaxBits;
      uStack_b50 = 0xffffffff;
      local_b70._24_8_ = (ulonglong)(uint)local_b70.MaxBits << 0x20;
      if (0x80 < (uint)iVar22) {
        local_b70.NumBits = 0;
        local_b70.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b70,0);
      }
      if (local_b70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_b70.AllocatorInstance.SecondaryData);
      }
      if (local_b80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b80.Data);
      }
      local_b88 = 0;
      if (local_b90 != (void *)0x0) {
        FMemory::Free(local_b90);
      }
      uVar32 = local_bc8 >> 0x20;
      local_bc8 = local_bc8 & 0xffffffff00000000;
      if ((int)uVar32 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_bd0,0,(int *)((longlong)&local_bc8 + 4));
      }
      iVar22 = local_bc0.MaxBits;
      uStack_ba0 = 0xffffffff;
      local_bc0._24_8_ = (ulonglong)(uint)local_bc0.MaxBits << 0x20;
      if (0x80 < (uint)iVar22) {
        local_bc0.NumBits = 0;
        local_bc0.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_bc0,0);
      }
      if (local_bc0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_bc0.AllocatorInstance.SecondaryData);
      }
      if (local_bd0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bd0.Data);
      }
      local_be0 = 0;
      if (local_be8 != (void *)0x0) {
        FMemory::Free(local_be8);
      }
      uVar32 = local_c20 >> 0x20;
      local_c20 = local_c20 & 0xffffffff00000000;
      if ((int)uVar32 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_c28,0,(int *)((longlong)&local_c20 + 4));
      }
      local_bf8 = 0xffffffff;
      local_bf4 = 0;
      local_c18.NumBits = 0;
      if (0x80 < (uint)local_c18.MaxBits) {
        local_c18.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c18,0);
      }
      if (local_c18.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_c18.AllocatorInstance.SecondaryData);
      }
      if (local_c28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c28.Data);
      }
      local_c30 = 0;
      if (local_c38 != (void *)0x0) {
        FMemory::Free(local_c38);
      }
      iVar22 = SUB84(local_c78._8_8_,4);
      local_c78._8_8_ = local_c78._8_8_ & 0xffffffff00000000;
      if (iVar22 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_c78,0,(int *)(local_c78 + 0xc));
      }
      local_c48 = 0xffffffff;
      local_c44 = 0;
      local_c50 = 0;
      if (0x80 < local_c4c) {
        local_c4c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_c78 + 0x10),0);
      }
      if (local_c58 != (void *)0x0) {
        FMemory::Free(local_c58);
      }
      if ((FScriptContainerElement *)local_c78._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_c78._0_8_);
      }
      local_1450 = uVar31 + 1;
      uVar35 = uVar35 + 1;
    } while ((int)uVar35 < (int)this->_padding_);
    if (!bVar20) goto LAB_14cbea44f;
  }
  pwVar33 = L"";
  if (this->bDuplicateMode != false) {
    if (((int)this->_padding_ != 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Targets.Num() == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\CombineMeshesTool.cpp"
                            ,0x14f,L""), bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((int)this->_padding_ < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar27 = UE::ToolTarget::GetLocalToWorldTransform(&local_128,*(UToolTarget **)this->_padding_);
    local_12d8 = *(undefined1 (*) [16])(pTVar27->Rotation).XY.m128d_f64;
    local_12c8 = (pTVar27->Rotation).ZW.m128d_f64[0];
    dStack_12c0 = (pTVar27->Rotation).ZW.m128d_f64[1];
    local_12b8 = *(undefined1 (*) [16])(pTVar27->Translation).XY.m128d_f64;
    local_12a8 = (pTVar27->Translation).ZW.m128d_f64[0];
    dStack_12a0 = (pTVar27->Translation).ZW.m128d_f64[1];
    local_1298 = (pTVar27->Scale3D).XY.m128d_f64[0];
    dStack_1290 = (pTVar27->Scale3D).XY.m128d_f64[1];
    local_1288 = (pTVar27->Scale3D).ZW.m128d_f64[0];
    dStack_1280 = (pTVar27->Scale3D).ZW.m128d_f64[1];
  }
  uVar31 = 0;
  pUVar3 = (this->BasicProperties).field0_0x0.DebugPtr;
  iVar22 = (pUVar3->OutputNewName).Data.ArrayNum;
  uVar35 = iVar22 - 1;
  if (iVar22 == 0) {
    uVar35 = 0;
  }
  if (0xfa < (int)uVar35) {
    uVar35 = 0xfa;
  }
  uVar30 = 0;
  if (0 < (int)uVar35) {
    uVar30 = uVar35;
  }
  if (iVar22 != 0) {
    pwVar33 = (wchar_t *)(pUVar3->OutputNewName).Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_1370,pwVar33,uVar30);
  if (local_1370.Data.ArrayNum < 2) {
    pwVar33 = L"Merge";
    if (this->bDuplicateMode != false) {
      pwVar33 = L"Duplicate";
    }
    ::FString::operator=(&local_1370,pwVar33);
  }
  FCreateMeshObjectParams::FCreateMeshObjectParams(&local_898,true);
  local_898.TargetWorld.field0_0x0 =
       (TObjectPtr<UWorld>_u_0)(**(code **)(this->_padding_ + 0x3b0))(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_898.TargetWorld.field0_0x0.DebugPtr != (TObjectPtr<UWorld>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_898.TargetWorld.field0_0x0);
  }
  local_898.Transform.Rotation.XY.m128d_f64[0] = (double)local_12d8._0_8_;
  local_898.Transform.Rotation.XY.m128d_f64[1] = (double)local_12d8._8_8_;
  local_898.Transform.Rotation.ZW.m128d_f64[0] = local_12c8;
  local_898.Transform.Rotation.ZW.m128d_f64[1] = dStack_12c0;
  uVar32 = (ulonglong)(local_1370.Data.ArrayNum - 1);
  if (local_1370.Data.ArrayNum == 0) {
    uVar32 = uVar31;
  }
  local_898.Transform.Translation.XY.m128d_f64[0] = (double)local_12b8._0_8_;
  local_898.Transform.Translation.XY.m128d_f64[1] = (double)local_12b8._8_8_;
  local_898.Transform.Translation.ZW.m128d_f64[0] = local_12a8;
  local_898.Transform.Translation.ZW.m128d_f64[1] = dStack_12a0;
  local_898.Transform.Scale3D.XY.m128d_f64[0] = local_1298;
  local_898.Transform.Scale3D.XY.m128d_f64[1] = dStack_1290;
  local_898.Transform.Scale3D.ZW.m128d_f64[0] = local_1288;
  local_898.Transform.Scale3D.ZW.m128d_f64[1] = dStack_1280;
  ::FString::AssignRange
            (&local_898.BaseName,(wchar_t *)local_1370.Data.AllocatorInstance.Data,(int)uVar32);
  FVar19.Data = local_13f0.AllocatorInstance.Data;
  iVar22 = local_13f0.ArrayNum;
  local_898.Materials.ArrayNum = local_13f0.ArrayNum;
  if ((local_13f0.ArrayNum == 0) && (local_898.Materials.ArrayMax == 0)) {
    local_898.Materials.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_13f0.ArrayNum,local_898.Materials.ArrayMax,
               &local_898.Materials.AllocatorInstance,local_13f0.ArrayNum,
               &local_898.Materials.ArrayMax);
    ConstructItems<TObjectPtr<UMaterialInterface>,UMaterialInterface_*,int>
              (local_898.Materials.AllocatorInstance.Data,(UMaterialInterface **)FVar19.Data,iVar22)
    ;
  }
  FCreateMeshObjectParams::SetMesh(&local_898,&local_10d8);
  pUVar4 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  iVar22 = (pUVar4->OutputType).Data.ArrayNum;
  if (iVar22 == UCreateMeshObjectTypeProperties::AutoIdentifier.Data.ArrayNum) {
    if (1 < iVar22) {
      iVar22 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pUVar4->OutputType).Data.AllocatorInstance.Data,
                          (wchar_t *)
                          UCreateMeshObjectTypeProperties::AutoIdentifier.Data.AllocatorInstance.
                          Data);
      bVar20 = iVar22 == 0;
      goto LAB_14cbea9da;
    }
  }
  else {
    bVar20 = iVar22 + UCreateMeshObjectTypeProperties::AutoIdentifier.Data.ArrayNum == 1;
LAB_14cbea9da:
    if (!bVar20) {
      pUVar4 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
      (**(code **)(pUVar4->_padding_ + 0x2d0))(pUVar4,&local_898);
      goto LAB_14cbeaa4b;
    }
  }
  if (((int)this->_padding_ < 1) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UE::ToolTarget::ConfigureCreateMeshObjectParams(*(UToolTarget **)this->_padding_,&local_898);
LAB_14cbeaa4b:
  pUVar29 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  UE::Modeling::CreateMeshObject(&local_12f8,pUVar29,&local_898);
  if ((local_12f8.ResultCode == Ok) &&
     (local_12f8.NewActor.field0_0x0.DebugPtr != (TObjectPtr<AActor>_u_0)0x0)) {
    bVar20 = UE::Geometry::ComponentTypeSupportsCollision
                       ((UPrimitiveComponent *)local_12f8.NewComponent.field0_0x0,ReadWrite);
    if (bVar20) {
      if (0 < local_13c8.LevelSets.ArrayNum + local_13c8.Convexes.ArrayNum +
              local_13c8.Capsules.ArrayNum + local_13c8.Boxes.ArrayNum + local_13c8.Spheres.ArrayNum
         ) {
        UE::Geometry::SetSimpleCollision
                  ((UPrimitiveComponent *)local_12f8.NewComponent.field0_0x0,&local_13c8,FVar28);
      }
    }
    pUVar29 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    ToolSelectionUtil::SetNewActorSelection(pUVar29,(AActor *)local_12f8.NewActor.field0_0x0);
  }
  FCreateMeshObjectParams::~FCreateMeshObjectParams(&local_898);
  if (local_1370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1370.Data.AllocatorInstance.Data);
  }
  local_1460.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1460.ArrayNum = 0;
  local_1460.ArrayMax = 0;
  uVar32 = uVar31;
  if (0 < (int)this->_padding_) {
    do {
      uVar30 = (uint)uVar31;
      uVar35 = 0;
      if ((int)uVar30 < (int)this->_padding_) {
        uVar35 = ~uVar30 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_1448 = UE::ToolTarget::GetTargetActor(*(UToolTarget **)(this->_padding_ + uVar32));
      if (((local_1460.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1448) &&
          ((FScriptContainerElement *)&local_1448 <
           local_1460.AllocatorInstance.Data + (longlong)local_1460.ArrayMax * 8)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar22 = local_1460.ArrayNum;
      if (local_1460.ArrayNum == local_1460.ArrayMax) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_1460.AllocatorInstance,&local_1460.ArrayMax);
      }
      uVar31 = (ulonglong)(uVar30 + 1);
      local_1460.ArrayNum = iVar22 + 1;
      *(AActor **)(local_1460.AllocatorInstance.Data + (longlong)iVar22 * 8) = local_1448;
      uVar32 = uVar32 + 8;
    } while ((int)(uVar30 + 1) < (int)this->_padding_);
  }
  this_00 = (this->HandleSourceProperties).field0_0x0.DebugPtr;
  pUVar29 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  UOnAcceptHandleSourcesPropertiesBase::ApplyMethod(this_00,&local_1460,pUVar29,(AActor *)0x0);
  lVar24 = (**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*(longlong *)(lVar24 + 0x28) + 0x18))(lVar24 + 0x28);
  if (local_1460.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1460.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FLevelSetShape3d,int>
            ((FLevelSetShape3d *)local_13c8.LevelSets.AllocatorInstance.Data,
             local_13c8.LevelSets.ArrayNum);
  if ((FLevelSetShape3d *)local_13c8.LevelSets.AllocatorInstance.Data != (FLevelSetShape3d *)0x0) {
    FMemory::Free(local_13c8.LevelSets.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FConvexShape3d,int>
            ((FConvexShape3d *)local_13c8.Convexes.AllocatorInstance.Data,
             local_13c8.Convexes.ArrayNum);
  if (local_13c8.Convexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_13c8.Convexes.AllocatorInstance.Data);
  }
  if (local_13c8.Capsules.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_13c8.Capsules.AllocatorInstance.Data);
  }
  if (local_13c8.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_13c8.Boxes.AllocatorInstance.Data);
  }
  if (local_13c8.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_13c8.Spheres.AllocatorInstance.Data);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_10d8);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1400.AllocatorInstance.Data,
             local_1400.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1400.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_1400.AllocatorInstance.Data);
  }
  if (local_13f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_13f0.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FDynamicMesh3,int>((FDynamicMesh3 *)local_1470.Data,(int)local_1468);
  if ((FDynamicMesh3 *)local_1470.Data != (FDynamicMesh3 *)0x0) {
    FMemory::Free(local_1470.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14cbef200

UClass * __cdecl UCombineMeshesTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombineMeshesTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"CombineMeshesTool",
               &Z_Registration_Info_UClass_UCombineMeshesTool.InnerSingleton,
               StaticRegisterNativesUCombineMeshesTool,0x108,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCombineMeshesTool>,
               InternalVTableHelperCtorCaller<UCombineMeshesTool>,local_res8,
               UMultiSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombineMeshesTool.InnerSingleton;
}

// HasAccept @ 14cbf2270

bool __thiscall UCombineMeshesTool::HasAccept(UCombineMeshesTool *this)

{
  return true;
}

// HasCancel @ 14cbf22a0

bool __thiscall UCombineMeshesTool::HasCancel(UCombineMeshesTool *this)

{
  return true;
}

// OnShutdown @ 14cbf2920

void __thiscall UCombineMeshesTool::OnShutdown(UCombineMeshesTool *this,EToolShutdownType param_1)

{
  UCombineMeshesToolProperties *pUVar1;
  code *pcVar2;
  UCreateMeshObjectTypeProperties *pUVar3;
  UOnAcceptHandleSourcesPropertiesBase *pUVar4;
  FString local_18;
  
  pUVar1 = (this->BasicProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar2)(pUVar1,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pUVar3 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar3->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"OutputTypeFromInputTool");
  (*pcVar2)(pUVar3,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pUVar4 = (this->HandleSourceProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(*(longlong *)pUVar4 + 0x2b0);
  ::FString::FString(&local_18,L"");
  (*pcVar2)(pUVar4,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (param_1 == Accept) {
    if ((this->bDuplicateMode == false) &&
       (((this->BasicProperties).field0_0x0.DebugPtr)->OutputWriteTo != NewObject)) {
      UpdateExistingAsset(this);
    }
    else {
      CreateNewAsset(this);
    }
  }
  return;
}

// SetDuplicateMode @ 14cbf38f0

void __thiscall UCombineMeshesTool::SetDuplicateMode(UCombineMeshesTool *this,bool param_1)

{
  this->bDuplicateMode = param_1;
  return;
}

// Setup @ 14cbf4870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCombineMeshesTool::Setup(UCombineMeshesTool *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  undefined1 *puVar5;
  ForAnyElementType _Src;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UCombineMeshesToolProperties *pUVar9;
  UCreateMeshObjectTypeProperties *pUVar10;
  void *this_00;
  TPropertyWatcher<EBaseCreateFromSelectedTargetType> *pTVar11;
  FText *pFVar12;
  UPrimitiveComponent *pUVar13;
  FString *pFVar14;
  UOnAcceptHandleSourcesPropertiesBase *pUVar15;
  longlong *plVar16;
  undefined ***pppuVar17;
  longlong lVar18;
  FString *pFVar19;
  undefined1 auStackY_308 [32];
  undefined **local_2b8;
  UCombineMeshesTool *local_2b0;
  undefined ***local_2a0;
  FString local_298;
  FString local_288;
  FString local_278;
  FText local_268;
  FString local_258;
  FText local_248;
  FString local_238;
  FText local_228;
  FText local_218;
  code *local_208 [2];
  undefined **local_1f8;
  UCombineMeshesTool *local_1f0;
  undefined8 local_1e0;
  code *local_1d8 [2];
  undefined1 local_1c8 [24];
  undefined8 local_1b0;
  undefined1 local_1a8 [128];
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_308;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UCombineMeshesToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1a8,pUVar8);
  local_1a8._8_8_ = this;
  pUVar9 = (UCombineMeshesToolProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
  if (local_1a8._64_8_ != 0) {
    plVar16 = (longlong *)(local_1a8 + 0x50);
    if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_1a8._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UCombineMeshesToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->BasicProperties).field0_0x0.DebugPtr = pUVar9;
  (**(code **)(this->_padding_ + 0x318))(this,pUVar9);
  pUVar9 = (this->BasicProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar9->_padding_ + 0x2b8);
  ::FString::FString(&local_298,L"");
  (*pcVar3)(pUVar9,this,&local_298);
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  ((this->BasicProperties).field0_0x0.DebugPtr)->bIsDuplicateMode = this->bDuplicateMode;
  pUVar10 = NewObject<UCreateMeshObjectTypeProperties>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UCreateMeshObjectTypeProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->OutputTypeProperties).field0_0x0.DebugPtr = pUVar10;
  UCreateMeshObjectTypeProperties::InitializeDefaultWithAuto(pUVar10);
  iVar7 = UCreateMeshObjectTypeProperties::AutoIdentifier.Data.ArrayNum;
  _Src = UCreateMeshObjectTypeProperties::AutoIdentifier.Data.AllocatorInstance;
  pUVar10 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  pFVar14 = &pUVar10->OutputType;
  pTVar11 = (TPropertyWatcher<EBaseCreateFromSelectedTargetType> *)0x0;
  if (pFVar14 != &UCreateMeshObjectTypeProperties::AutoIdentifier) {
    lVar18 = (longlong)UCreateMeshObjectTypeProperties::AutoIdentifier.Data.ArrayNum;
    piVar1 = &(pUVar10->OutputType).Data.ArrayMax;
    iVar2 = *piVar1;
    (pUVar10->OutputType).Data.ArrayNum =
         UCreateMeshObjectTypeProperties::AutoIdentifier.Data.ArrayNum;
    if ((iVar7 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,iVar2,(ForAnyElementType *)pFVar14,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pFVar14->Data).AllocatorInstance.Data,_Src.Data,lVar18 * 2);
      }
    }
  }
  pUVar10 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar10->_padding_ + 0x2b8);
  ::FString::FString(&local_288,L"OutputTypeFromInputTool");
  (*pcVar3)(pUVar10,this,&local_288);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  pUVar10 = (this->OutputTypeProperties).field0_0x0.DebugPtr;
  local_1f8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UCombineMeshesTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  local_1e0 = 0;
  local_208[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UCombineMeshesTool::Setup'::__l2::<lambda_1>,void,FString_const_&>
                 ::Call;
  local_1f0 = this;
  FWatchablePropertySet::WatchProperty<FString>
            ((FWatchablePropertySet *)&pUVar10->_padding_,&pUVar10->OutputType,
             (TFunction<void___cdecl(FString_const_&)> *)local_208);
  (**(code **)(this->_padding_ + 0x318))(this,(this->OutputTypeProperties).field0_0x0.DebugPtr);
  pUVar9 = (this->BasicProperties).field0_0x0.DebugPtr;
  local_2b8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UCombineMeshesTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  local_2a0 = (undefined ***)0x0;
  local_2b0 = this;
  this_00 = ::operator_new(0xa0);
  if (this_00 != (void *)0x0) {
    local_1d8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UCombineMeshesTool::Setup'::__l2::<lambda_2>,void,enum_EBaseCreateFromSelectedTargetType_const_&>
                   ::Call;
    local_1b0 = 0;
    pppuVar17 = &local_2b8;
    if (local_2a0 != (undefined ***)0x0) {
      pppuVar17 = local_2a0;
    }
    (*(code *)**pppuVar17)(pppuVar17,local_1c8);
    pTVar11 = FWatchablePropertySet::TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType>::
              TPropertyWatcher<enum_EBaseCreateFromSelectedTargetType><enum_EBaseCreateFromSelectedTargetType,void>
                        (this_00,&pUVar9->OutputWriteTo,
                         (TFunction<void___cdecl(EBaseCreateFromSelectedTargetType_const_&)> *)
                         local_1d8);
  }
  iVar7 = (int)pUVar9->_padding_;
  piVar1 = (int *)((longlong)&pUVar9->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar9->_padding_,piVar1);
  }
  *(int *)&pUVar9->_padding_ = iVar7 + 1;
  *(TPropertyWatcher<EBaseCreateFromSelectedTargetType> **)(pUVar9->_padding_ + (longlong)iVar7 * 8)
       = pTVar11;
  pppuVar17 = &local_2b8;
  if (local_2a0 != (undefined ***)0x0) {
    pppuVar17 = local_2a0;
  }
  (*(code *)(*pppuVar17)[2])();
  (**(code **)(this->_padding_ + 0x338))
            (this,(this->OutputTypeProperties).field0_0x0.DebugPtr,
             ((this->BasicProperties).field0_0x0.DebugPtr)->OutputWriteTo == NewObject);
  pcVar3 = *(code **)(this->_padding_ + 0x380);
  if (this->bDuplicateMode == false) {
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_248,L"UCombineMeshesTool",L"CombineMeshesToolName",L"Append");
    (*pcVar3)(this,pFVar12);
    if (local_248.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
    }
    pFVar14 = ::FString::FString(&local_238,"Combined");
    pUVar9 = (this->BasicProperties).field0_0x0.DebugPtr;
    pFVar19 = &pUVar9->OutputNewName;
    if (pFVar19 != pFVar14) {
      pFVar4 = (pFVar19->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar19->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pUVar9->OutputNewName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
      (pUVar9->OutputNewName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
    }
  }
  else {
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_268,L"UCombineMeshesTool",L"DuplicateMeshesToolName",L"Duplicate");
    (*pcVar3)(this,pFVar12);
    if (local_268.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
    }
    if (((int)this->_padding_ < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar13 = UE::ToolTarget::GetTargetComponent(*(UToolTarget **)this->_padding_);
    pFVar14 = UE::Modeling::GetComponentAssetBaseName(&local_258,(UActorComponent *)pUVar13,true);
    pUVar9 = (this->BasicProperties).field0_0x0.DebugPtr;
    pFVar19 = &pUVar9->OutputNewName;
    local_238.Data.AllocatorInstance.Data = local_258.Data.AllocatorInstance.Data;
    if (pFVar19 != pFVar14) {
      pFVar4 = (pFVar19->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar19->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pUVar9->OutputNewName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
      (pUVar9->OutputNewName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      local_238.Data.AllocatorInstance.Data = local_258.Data.AllocatorInstance.Data;
    }
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (this->bDuplicateMode == false) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UOnAcceptHandleSourcesProperties_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar8);
    local_a8._8_8_ = this;
    pUVar15 = (UOnAcceptHandleSourcesPropertiesBase *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ == 0) goto LAB_14cbf4dc3;
    puVar5 = local_a8;
    local_128._104_8_ = local_a8._104_8_;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_128,pUVar8);
    local_128._8_8_ = this;
    pUVar15 = (UOnAcceptHandleSourcesPropertiesBase *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
    if (local_128._64_8_ == 0) goto LAB_14cbf4dc3;
    puVar5 = local_128;
  }
  plVar16 = (longlong *)(puVar5 + 0x50);
  if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
    plVar16 = (longlong *)local_128._104_8_;
  }
  (**(code **)(*plVar16 + 0x10))();
LAB_14cbf4dc3:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UOnAcceptHandleSourcesPropertiesBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->HandleSourceProperties).field0_0x0.DebugPtr = pUVar15;
  (**(code **)(this->_padding_ + 0x318))(this,pUVar15);
  pUVar15 = (this->HandleSourceProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(*(longlong *)pUVar15 + 0x2b8);
  ::FString::FString(&local_278,L"");
  (*pcVar3)(pUVar15,this,&local_278);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(this->_padding_ + 0x2d8);
  if (this->bDuplicateMode == false) {
    plVar16 = (longlong *)(*pcVar3)(this);
    pcVar3 = *(code **)(*plVar16 + 0x360);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_218,L"UCombineMeshesTool",L"OnStartToolCombine",
                         L"This tool appends multiple input object to create new objects, and optionally replaces the one of the input objects."
                        );
    (*pcVar3)(plVar16,pFVar12,2);
    local_228.TextData.Reference = local_218.TextData.Reference;
  }
  else {
    plVar16 = (longlong *)(*pcVar3)();
    pcVar3 = *(code **)(*plVar16 + 0x360);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_228,L"UCombineMeshesTool",L"OnStartToolDuplicate",
                         L"This tool duplicates a single input object to create new objects, and optionally replaces the input object."
                        );
    (*pcVar3)(plVar16,pFVar12,2);
  }
  if (local_228.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
  }
  return;
}

// StaticRegisterNativesUCombineMeshesTool @ 14cbf6a90

void __cdecl UCombineMeshesTool::StaticRegisterNativesUCombineMeshesTool(void)

{
  return;
}

// UpdateExistingAsset @ 14cbf6fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCombineMeshesTool::UpdateExistingAsset(UCombineMeshesTool *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  UOnAcceptHandleSourcesPropertiesBase *this_00;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ForAnyElementType _Src;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar23;
  AActor *pAVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint uVar28;
  uint uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  int iVar42;
  uint uVar43;
  FDynamicMesh3 *pFVar44;
  longlong lVar45;
  FText *pFVar46;
  UPrimitiveComponent *pUVar47;
  UInteractiveToolManager *pUVar48;
  uint uVar49;
  uint uVar50;
  FDynamicMeshAttributeSet *pFVar51;
  FDynamicMesh3 *pFVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  FComponentCollisionSettings FVar58;
  longlong lVar59;
  uint uVar60;
  ulonglong uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  undefined4 uVar67;
  double dVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined1 auStackY_d58 [32];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_d00;
  ForAnyElementType local_cf0;
  undefined8 local_ce8;
  FConversionToMeshDescriptionOptions local_ce0;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_cd0;
  uint local_cc0;
  uint local_cbc;
  FComponentCollisionSettings local_cb8;
  AActor *local_cb0;
  FComponentMaterialSet local_ca8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_c98;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_c88;
  IndexIterator local_c78;
  longlong local_c68;
  FComponentCollisionSettings local_c60;
  FSimpleShapeSet3d local_c58;
  TDynamicMeshScalarTriangleAttribute<int> *local_c08;
  UCombineMeshesTool *local_c00;
  FDynamicMesh3 *local_bf8;
  UPrimitiveComponent *local_bf0;
  FComponentCollisionSettings local_be8;
  FDynamicMeshEditor local_be0;
  UPrimitiveComponent *local_bd8;
  AActor *local_bd0;
  IndexIterator local_bc8;
  TVector<double>_u_0 local_bb8;
  TVector<double>_u_0 local_b98;
  undefined1 local_b80 [16];
  double local_b70;
  TTransform<double> local_b68;
  FText local_b08;
  double local_af8;
  double dStack_af0;
  double local_ae8;
  double local_ae0;
  double dStack_ad8;
  double local_ad0;
  double local_ab0;
  double dStack_aa8;
  uint local_a88;
  uint uStack_a84;
  uint local_a70;
  uint uStack_a6c;
  undefined8 local_a68;
  TQuaternion<double>_u_0 local_a60;
  double local_a40;
  double dStack_a38;
  double local_a30;
  double local_a28;
  double dStack_a20;
  double local_a18;
  TQuaternion<double>_u_0 local_a10;
  double local_9d8;
  double dStack_9d0;
  undefined1 local_9b8 [16];
  undefined1 local_9a8 [16];
  uint local_998;
  uint uStack_994;
  uint uStack_990;
  uint uStack_98c;
  uint local_988;
  uint uStack_984;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_978;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_948;
  FDynamicMesh3 local_918;
  FDynamicMesh3 local_6e8;
  double local_4b8 [2];
  double local_4a8 [2];
  double local_498 [2];
  double local_488 [2];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [64];
  void *local_418;
  undefined4 local_410;
  undefined1 local_408 [64];
  void *local_3c8;
  undefined4 local_3c0;
  undefined2 local_3b8;
  undefined1 local_3b0 [64];
  void *local_370;
  undefined4 local_368;
  undefined1 local_360 [64];
  void *local_320;
  undefined4 local_318;
  undefined2 local_310;
  undefined1 local_308 [64];
  void *local_2c8;
  undefined4 local_2c0;
  undefined1 local_2b8 [64];
  void *local_278;
  undefined4 local_270;
  undefined2 local_268;
  undefined1 local_260 [64];
  void *local_220;
  undefined4 local_218;
  undefined1 local_210 [64];
  void *local_1d0;
  undefined4 local_1c8;
  undefined2 local_1c0;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_d58;
  uVar61 = 0;
  GetMeshParams.bWantMeshTangents = true;
  uVar55 = (uint)this->_padding_;
  local_cf0.Data = (FScriptContainerElement *)0x0;
  local_ce8 = 0;
  local_c00 = this;
  if ((int)uVar55 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar55);
  }
  if (0 < (int)uVar55) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x230,8,uVar55,&local_cf0,0,(int *)((longlong)&local_ce8 + 4));
  }
  uVar56 = uVar61;
  uVar57 = uVar61;
  if (0 < (int)this->_padding_) {
    do {
      uVar53 = (uint)uVar56;
      uVar55 = 0;
      if ((int)uVar53 < (int)this->_padding_) {
        uVar55 = ~uVar53 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar39)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar44 = UE::ToolTarget::GetDynamicMeshCopy
                          (&local_6e8,*(UToolTarget **)(uVar57 + this->_padding_),&GetMeshParams);
      if (((local_cf0.Data <= pFVar44) &&
          (pFVar44 < (FDynamicMesh3 *)(local_cf0.Data + (longlong)local_ce8._4_4_ * 0x230))) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar39)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar42 = (int)local_ce8;
      if ((int)local_ce8 == local_ce8._4_4_) {
        iVar42 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x230,8,&local_cf0,(int *)((longlong)&local_ce8 + 4));
      }
      local_ce8 = CONCAT44(local_ce8._4_4_,iVar42 + 1);
      UE::Geometry::FDynamicMesh3::FDynamicMesh3
                ((FDynamicMesh3 *)(local_cf0.Data + (longlong)iVar42 * 0x230),pFVar44);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_6e8);
      uVar56 = (ulonglong)(uVar53 + 1);
      uVar57 = uVar57 + 8;
    } while ((int)(uVar53 + 1) < (int)this->_padding_);
  }
  if ((this->bDuplicateMode != false) &&
     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bDuplicateMode",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\CombineMeshesTool.cpp"
                          ,0x191,L""), bVar39)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar45 = (**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar2 = *(code **)(*(longlong *)(lVar45 + 0x28) + 0x10);
  pFVar46 = FText::AsLocalizable_Advanced_LocText
                      (&local_b08,L"UCombineMeshesTool",L"CombineMeshesToolTransactionName",
                       L"Merge Meshes");
  (*pcVar2)(lVar45 + 0x28,pFVar46);
  if (local_b08.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b08.TextData.Reference + 0x10))();
  }
  local_c88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c88.ArrayNum = 0;
  local_c88.ArrayMax = 0;
  local_c98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c98.ArrayNum = 0;
  local_c98.ArrayMax = 0;
  BuildCombinedMaterialSet(this,&local_c88,&local_c98);
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_918);
  UE::Geometry::FDynamicMesh3::EnableTriangleGroups(&local_918,0);
  UE::Geometry::FDynamicMesh3::EnableAttributes(&local_918);
  UE::Geometry::FDynamicMeshAttributeSet::EnableTangents(local_918.AttributeSet.Ptr);
  UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(local_918.AttributeSet.Ptr);
  UE::Geometry::FDynamicMeshAttributeSet::EnablePrimaryColors(local_918.AttributeSet.Ptr);
  if (((this->BasicProperties).field0_0x0.DebugPtr)->OutputWriteTo == FirstInputObject) {
    local_cbc = 0;
    local_cc0 = 0xffffffff;
  }
  else {
    iVar42 = (int)this->_padding_;
    local_cbc = iVar42 - 1;
    local_cc0 = -iVar42;
  }
  uVar55 = local_cbc;
  uVar54 = ~local_cbc >> 0x1f;
  uVar53 = 0;
  if ((int)local_cbc < (int)this->_padding_) {
    uVar53 = uVar54;
  }
  if ((uVar53 == 0) &&
     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar39)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar58 = (FComponentCollisionSettings)(longlong)(int)uVar55;
  local_be8 = FVar58;
  pUVar47 = UE::ToolTarget::GetTargetComponent
                      (*(UToolTarget **)(this->_padding_ + (longlong)FVar58 * 8));
  uVar53 = 0;
  if ((int)uVar55 < (int)this->_padding_) {
    uVar53 = uVar54;
  }
  local_bd8 = pUVar47;
  if ((uVar53 == 0) &&
     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar39)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_bd0 = UE::ToolTarget::GetTargetActor
                        (*(UToolTarget **)(this->_padding_ + (longlong)FVar58 * 8));
  uVar53 = 0;
  if ((int)uVar55 < (int)this->_padding_) {
    uVar53 = uVar54;
  }
  if ((uVar53 == 0) &&
     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar39)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::ToolTarget::GetLocalToWorldTransform
            (&local_198,*(UToolTarget **)(this->_padding_ + (longlong)FVar58 * 8));
  local_c58.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c58.Spheres.ArrayNum = 0;
  local_c58.Spheres.ArrayMax = 0;
  local_c58.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c58.Boxes.ArrayNum = 0;
  local_c58.Boxes.ArrayMax = 0;
  local_c58.Capsules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c58.Capsules.ArrayNum = 0;
  local_c58.Capsules.ArrayMax = 0;
  local_c58.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c58.Convexes.ArrayNum = 0;
  local_c58.Convexes.ArrayMax = 0;
  local_c58.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c58.LevelSets.ArrayNum = 0;
  local_c58.LevelSets.ArrayMax = 0;
  local_cb8.CollisionTypeFlag = 0;
  local_cb8.bIsGeneratedCollision = true;
  bVar39 = UE::Geometry::ComponentTypeSupportsCollision(pUVar47,ReadWrite);
  FVar58 = local_cb8;
  if (bVar39) {
    FVar58 = UE::Geometry::GetCollisionSettings(pUVar47);
  }
  local_d00.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d00.ArrayNum = 0;
  local_d00.ArrayMax = 0;
  local_c60 = FVar58;
  iVar42 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,0x10,2,&local_d00.AllocatorInstance,&local_d00.ArrayNum,
                      &local_d00.ArrayMax);
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            (local_d00.AllocatorInstance.Data + (longlong)iVar42 * 0x60,2);
  uVar19 = _UNK_150631d98;
  uVar18 = ___xmm_00000000ffffffff0000008000000000;
  uVar17 = _UNK_15061cc8c;
  uVar54 = _UNK_15061cc88;
  uVar53 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar55 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (0 < (int)this->_padding_) {
    uVar78 = SUB84(__real_3e45798ee0000000,0);
    uVar80 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    bVar41 = false;
    uVar84 = (undefined4)__real_3f1a36e2e0000000;
    uVar86 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
    local_cb8.CollisionTypeFlag = 0;
    local_cb8.bIsGeneratedCollision = false;
    local_cb8._5_3_ = 0;
    local_c68 = 0;
    do {
      lVar45 = local_c68;
      FVar58 = local_cb8;
      uVar60 = (uint)uVar61;
      uVar62 = 0;
      if ((int)uVar60 < (int)this->_padding_) {
        uVar62 = ~uVar60 >> 0x1f;
      }
      if ((uVar62 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar47 = UE::ToolTarget::GetTargetComponent
                          (*(UToolTarget **)(this->_padding_ + (longlong)FVar58 * 8));
      uVar62 = 0;
      if ((int)uVar60 < (int)local_ce8) {
        uVar62 = ~uVar60 >> 0x1f;
      }
      local_bf0 = pUVar47;
      if ((uVar62 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar44 = (FDynamicMesh3 *)(local_cf0.Data + lVar45);
      if ((bVar41) ||
         ((pFVar1 = (pFVar44->AttributeSet).Ptr, pFVar1 != (FDynamicMeshAttributeSet *)0x0 &&
          ((pFVar1->ColorLayer).Ptr !=
           (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)))) {
        bVar41 = true;
      }
      else {
        bVar41 = false;
      }
      pFVar1 = (pFVar44->AttributeSet).Ptr;
      pFVar51 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar51 = pFVar1;
      }
      local_c08 = (pFVar51->MaterialIDAttrib).Ptr;
      local_bf8 = pFVar44;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&local_c78,&pFVar44->TriangleRefCounts,0,
                 (pFVar44->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar44->TriangleRefCounts).RefCounts.CurBlockUsed);
      iVar42 = (pFVar44->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar44->TriangleRefCounts).RefCounts.CurBlockUsed;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&local_bc8,&pFVar44->TriangleRefCounts,iVar42,iVar42);
      pTVar23 = local_c08;
      uVar67 = local_c78._12_4_;
      uVar20 = local_c78._0_8_;
      uVar62 = local_bc8._8_4_;
      if (local_c78._8_4_ != local_bc8._8_4_) {
        do {
          uVar72 = local_c78._8_4_;
          CombineMeshesToolLocals::SetNewMaterialID
                    (uVar60,pTVar23,local_c78._8_4_,&local_c98,&local_c88);
          local_c78._8_4_ = uVar72 + 1;
          if ((int)local_c78._8_4_ < (int)uVar67) {
            do {
              uVar62 = local_bc8._8_4_;
              if ((*(short *)(*(longlong *)
                               (*(longlong *)(uVar20 + 8) +
                               (ulonglong)((uint)local_c78._8_4_ >> 9) * 8) +
                             (ulonglong)(local_c78._8_4_ & 0x1ff) * 2) != 0) &&
                 (*(short *)(*(longlong *)
                              (*(longlong *)(uVar20 + 8) +
                              (ulonglong)((uint)local_c78._8_4_ >> 9) * 8) +
                            (ulonglong)(local_c78._8_4_ & 0x1ff) * 2) != -1)) break;
              local_c78._8_4_ = local_c78._8_4_ + 1;
            } while ((int)local_c78._8_4_ < (int)uVar67);
          }
          pFVar44 = local_bf8;
          pUVar47 = local_bf0;
          this = local_c00;
        } while (local_c78._8_4_ != uVar62);
      }
      FVar58 = local_cb8;
      if (local_cb8 == local_be8) {
        if ((bVar39) &&
           (bVar40 = UE::Geometry::ComponentTypeSupportsCollision(pUVar47,ReadWrite), bVar40)) {
          UE::Geometry::AppendSimpleCollision
                    (pUVar47,&local_c58,&UE::Math::TTransform<double>::Identity);
        }
      }
      else {
        uVar62 = 0;
        if ((int)uVar60 < (int)this->_padding_) {
          uVar62 = ~uVar60 >> 0x1f;
        }
        if ((uVar62 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UE::ToolTarget::GetLocalToWorldTransform
                  (&local_138,*(UToolTarget **)(this->_padding_ + (longlong)FVar58 * 8));
        local_a60._s_0.X = local_138.Rotation.XY.m128d_f64[0];
        local_a60._s_0.Z = local_138.Rotation.ZW.m128d_f64[0];
        local_a60._s_0.Y = local_138.Rotation.XY.m128d_f64[1];
        local_ae8 = local_138.Translation.ZW.m128d_f64[0];
        local_a60._s_0.W = local_138.Rotation.ZW.m128d_f64[1];
        local_a30 = local_138.Translation.ZW.m128d_f64[0];
        local_ad0 = local_138.Scale3D.ZW.m128d_f64[0];
        local_af8 = local_138.Translation.XY.m128d_f64[0];
        dStack_af0 = local_138.Translation.XY.m128d_f64[1];
        local_a18 = local_138.Scale3D.ZW.m128d_f64[0];
        local_a40 = local_138.Translation.XY.m128d_f64[0];
        dStack_a38 = local_138.Translation.XY.m128d_f64[1];
        local_ae0 = local_138.Scale3D.XY.m128d_f64[0];
        dStack_ad8 = local_138.Scale3D.XY.m128d_f64[1];
        local_a28 = local_138.Scale3D.XY.m128d_f64[0];
        dStack_a20 = local_138.Scale3D.XY.m128d_f64[1];
        MeshTransforms::ApplyTransform(pFVar44,(TTransformSRT3<double> *)&local_a60._s_0,true,All);
        local_a10._s_0.X = local_198.Rotation.XY.m128d_f64[0];
        local_a10._s_0.Z = local_198.Rotation.ZW.m128d_f64[0];
        local_a10._s_0.Y = local_198.Rotation.XY.m128d_f64[1];
        local_a10._s_0.W = local_198.Rotation.ZW.m128d_f64[1];
        local_ab0 = local_198.Scale3D.XY.m128d_f64[0];
        dStack_aa8 = local_198.Scale3D.XY.m128d_f64[1];
        local_9d8 = local_198.Scale3D.XY.m128d_f64[0];
        dStack_9d0 = local_198.Scale3D.XY.m128d_f64[1];
        pFVar52 = pFVar44;
        MeshTransforms::ApplyTransformInverse
                  (pFVar44,(TTransformSRT3<double> *)&local_a10._s_0,true,All);
        dVar38 = local_138.Scale3D.ZW.m128d_f64[1];
        dVar37 = local_138.Scale3D.ZW.m128d_f64[0];
        dVar36 = local_138.Scale3D.XY.m128d_f64[1];
        dVar35 = local_138.Scale3D.XY.m128d_f64[0];
        dVar34 = local_138.Translation.ZW.m128d_f64[1];
        dVar33 = local_138.Translation.ZW.m128d_f64[0];
        dVar32 = local_138.Translation.XY.m128d_f64[1];
        dVar31 = local_138.Translation.XY.m128d_f64[0];
        dVar30 = local_138.Rotation.ZW.m128d_f64[1];
        dVar16 = local_138.Rotation.ZW.m128d_f64[0];
        dVar14 = local_138.Rotation.XY.m128d_f64[1];
        dVar7 = local_138.Rotation.XY.m128d_f64[0];
        uVar67 = SUB84(pFVar52,0);
        if (local_d00.ArrayNum < 1) {
          uVar67 = 0x506106c8;
          bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar40) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar29 = local_198.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar28 = local_198.Scale3D.ZW.m128d_f64[0]._0_4_;
        dVar9 = local_198.Scale3D.XY.m128d_f64[1];
        dVar68 = local_198.Scale3D.XY.m128d_f64[0];
        dVar10 = (double)CONCAT44(uVar80,uVar78);
        dVar11 = (double)CONCAT44(uVar80,uVar78);
        local_a68 = CONCAT44(uVar80,uVar78);
        *(double *)local_d00.AllocatorInstance.Data = dVar7;
        *(double *)(local_d00.AllocatorInstance.Data + 8) = dVar14;
        *(double *)(local_d00.AllocatorInstance.Data + 0x10) = dVar16;
        *(double *)(local_d00.AllocatorInstance.Data + 0x18) = dVar30;
        *(double *)(local_d00.AllocatorInstance.Data + 0x20) = dVar31;
        *(double *)(local_d00.AllocatorInstance.Data + 0x28) = dVar32;
        *(double *)(local_d00.AllocatorInstance.Data + 0x30) = dVar33;
        *(double *)(local_d00.AllocatorInstance.Data + 0x38) = dVar34;
        *(double *)(local_d00.AllocatorInstance.Data + 0x40) = dVar35;
        *(double *)(local_d00.AllocatorInstance.Data + 0x48) = dVar36;
        *(double *)(local_d00.AllocatorInstance.Data + 0x50) = dVar37;
        *(double *)(local_d00.AllocatorInstance.Data + 0x58) = dVar38;
        uVar62 = SUB84(local_198.Scale3D.XY.m128d_f64[0],0);
        uVar65 = (uint)((ulonglong)local_198.Scale3D.XY.m128d_f64[0] >> 0x20);
        uVar63 = SUB84(local_198.Scale3D.XY.m128d_f64[1],0);
        uVar66 = (uint)((ulonglong)local_198.Scale3D.XY.m128d_f64[1] >> 0x20);
        lVar45 = -(ulonglong)
                  (dVar10 < (double)CONCAT44((uint)((ulonglong)
                                                    (local_198.Rotation.ZW.m128d_f64[1] -
                                                    UE::Math::TQuat<double>::Identity.W) >> 0x20) &
                                             uVar17,SUB84(local_198.Rotation.ZW.m128d_f64[1] -
                                                          UE::Math::TQuat<double>::Identity.W,0) &
                                                    uVar54));
        auVar3._8_4_ = (int)lVar45;
        auVar3._0_8_ = -(ulonglong)
                        (dVar11 < (double)CONCAT44((uint)((ulonglong)
                                                          (local_198.Rotation.ZW.m128d_f64[0] -
                                                          UE::Math::TQuat<double>::Identity.Z) >>
                                                         0x20) & uVar53,
                                                   SUB84(local_198.Rotation.ZW.m128d_f64[0] -
                                                         UE::Math::TQuat<double>::Identity.Z,0) &
                                                   uVar55));
        auVar3._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
        iVar42 = movmskpd(uVar67,auVar3);
        lVar45 = -(ulonglong)
                  (dVar10 < (double)CONCAT44((uint)((ulonglong)
                                                    (local_198.Rotation.XY.m128d_f64[1] -
                                                    UE::Math::TQuat<double>::Identity.Y) >> 0x20) &
                                             uVar17,SUB84(local_198.Rotation.XY.m128d_f64[1] -
                                                          UE::Math::TQuat<double>::Identity.Y,0) &
                                                    uVar54));
        auVar4._8_4_ = (int)lVar45;
        auVar4._0_8_ = -(ulonglong)
                        (dVar11 < (double)CONCAT44((uint)((ulonglong)
                                                          (local_198.Rotation.XY.m128d_f64[0] -
                                                          UE::Math::TQuat<double>::Identity.X) >>
                                                         0x20) & uVar53,
                                                   SUB84(local_198.Rotation.XY.m128d_f64[0] -
                                                         UE::Math::TQuat<double>::Identity.X,0) &
                                                   uVar55));
        auVar4._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
        uVar43 = movmskpd((int)local_d00.AllocatorInstance.Data,auVar4);
        uVar49 = iVar42 << 2 | uVar43;
        uVar50 = 0;
        if (uVar49 == 0) {
LAB_14cbf7db2:
          lVar45 = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                    (double)CONCAT44(local_198.Scale3D.ZW.m128d_f64[1]._4_4_ & uVar17,
                                     local_198.Scale3D.ZW.m128d_f64[1]._0_4_ & uVar54));
          auVar8._8_4_ = (int)lVar45;
          auVar8._0_8_ = -(ulonglong)
                          ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                          (double)CONCAT44(local_198.Scale3D.ZW.m128d_f64[0]._4_4_ & uVar53,
                                           local_198.Scale3D.ZW.m128d_f64[0]._0_4_ & uVar55));
          auVar8._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
          uVar50 = movmskpd(uVar50,auVar8);
          lVar45 = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                    (double)CONCAT44(uVar66 & uVar17,uVar63 & uVar54));
          auVar6._8_4_ = (int)lVar45;
          auVar6._0_8_ = -(ulonglong)
                          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                          (double)CONCAT44(uVar65 & uVar53,uVar62 & uVar55));
          auVar6._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
          iVar42 = movmskpd(uVar43,auVar6);
          if ((uVar50 & 0x3fffffff) == 0 && iVar42 == 0) {
            uVar67 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
            uVar69 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
            uVar70 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
            uVar71 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
            uVar72 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar73 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar74 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar75 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar76 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
            uVar77 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
            uVar79 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
            uVar81 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
            uVar82 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
            uVar83 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
            uVar85 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
            uVar87 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
            uVar88 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar89 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar90 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar91 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar92 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar93 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar94 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar95 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
            local_b68.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_b68.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_b68.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_b68.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_b68.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_b68.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            UE::Math::TTransform<double>::InverseFast(&local_198,&local_b68);
            uVar67 = local_b68.Rotation.XY.m128d_f64[0]._0_4_;
            uVar69 = local_b68.Rotation.XY.m128d_f64[0]._4_4_;
            uVar70 = local_b68.Rotation.XY.m128d_f64[1]._0_4_;
            uVar71 = local_b68.Rotation.XY.m128d_f64[1]._4_4_;
            uVar72 = local_b68.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar73 = local_b68.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar74 = local_b68.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar75 = local_b68.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar76 = local_b68.Translation.XY.m128d_f64[0]._0_4_;
            uVar77 = local_b68.Translation.XY.m128d_f64[0]._4_4_;
            uVar79 = local_b68.Translation.XY.m128d_f64[1]._0_4_;
            uVar81 = local_b68.Translation.XY.m128d_f64[1]._4_4_;
            uVar82 = local_b68.Translation.ZW.m128d_f64[0]._0_4_;
            uVar83 = local_b68.Translation.ZW.m128d_f64[0]._4_4_;
            uVar85 = local_b68.Translation.ZW.m128d_f64[1]._0_4_;
            uVar87 = local_b68.Translation.ZW.m128d_f64[1]._4_4_;
            uVar88 = local_b68.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar89 = local_b68.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar90 = local_b68.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar91 = local_b68.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar92 = local_b68.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar93 = local_b68.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar94 = local_b68.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar95 = local_b68.Scale3D.ZW.m128d_f64[1]._4_4_;
          }
          if ((local_d00.ArrayNum < 2) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x60) = uVar67;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 100) = uVar69;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x68) = uVar70;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x6c) = uVar71;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x70) = uVar72;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x74) = uVar73;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x78) = uVar74;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x7c) = uVar75;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x80) = uVar76;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x84) = uVar77;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x88) = uVar79;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x8c) = uVar81;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x90) = uVar82;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x94) = uVar83;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x98) = uVar85;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0x9c) = uVar87;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0xa0) = uVar88;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0xa4) = uVar89;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0xa8) = uVar90;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0xac) = uVar91;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0xb0) = uVar92;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0xb4) = uVar93;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0xb8) = uVar94;
          *(undefined4 *)(local_d00.AllocatorInstance.Data + 0xbc) = uVar95;
        }
        else {
          lVar45 = -(ulonglong)
                    (dVar10 < (double)CONCAT44((uint)((ulonglong)
                                                      (local_198.Rotation.ZW.m128d_f64[1] +
                                                      UE::Math::TQuat<double>::Identity.W) >> 0x20)
                                               & uVar17,SUB84(local_198.Rotation.ZW.m128d_f64[1] +
                                                              UE::Math::TQuat<double>::Identity.W,0)
                                                        & uVar54));
          auVar5._8_4_ = (int)lVar45;
          auVar5._0_8_ = -(ulonglong)
                          (dVar11 < (double)CONCAT44((uint)((ulonglong)
                                                            (local_198.Rotation.ZW.m128d_f64[0] +
                                                            UE::Math::TQuat<double>::Identity.Z) >>
                                                           0x20) & uVar53,
                                                     SUB84(local_198.Rotation.ZW.m128d_f64[0] +
                                                           UE::Math::TQuat<double>::Identity.Z,0) &
                                                     uVar55));
          auVar5._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
          iVar42 = movmskpd(uVar49,auVar5);
          lVar45 = -(ulonglong)
                    (dVar10 < (double)CONCAT44((uint)((ulonglong)
                                                      (local_198.Rotation.XY.m128d_f64[1] +
                                                      UE::Math::TQuat<double>::Identity.Y) >> 0x20)
                                               & uVar17,SUB84(local_198.Rotation.XY.m128d_f64[1] +
                                                              UE::Math::TQuat<double>::Identity.Y,0)
                                                        & uVar54));
          auVar12._8_4_ = (int)lVar45;
          auVar12._0_8_ =
               -(ulonglong)
                (dVar11 < (double)CONCAT44((uint)((ulonglong)
                                                  (local_198.Rotation.XY.m128d_f64[0] +
                                                  UE::Math::TQuat<double>::Identity.X) >> 0x20) &
                                           uVar53,SUB84(local_198.Rotation.XY.m128d_f64[0] +
                                                        UE::Math::TQuat<double>::Identity.X,0) &
                                                  uVar55));
          auVar12._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
          uVar43 = movmskpd(uVar43,auVar12);
          uVar50 = iVar42 << 2 | uVar43;
          if (uVar50 == 0) goto LAB_14cbf7db2;
          local_a88 = local_198.Scale3D.ZW.m128d_f64[0]._0_4_;
          uStack_a84 = local_198.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar49 = SUB84(local_198.Scale3D.XY.m128d_f64[0] - local_198.Scale3D.XY.m128d_f64[1],0) &
                   uVar55;
          uVar64 = (uint)((ulonglong)
                          (local_198.Scale3D.XY.m128d_f64[0] - local_198.Scale3D.XY.m128d_f64[1]) >>
                         0x20) & uVar53;
          if ((((double)CONCAT44(uVar64,uVar49) < (double)CONCAT44(uVar86,uVar84) ||
                (double)CONCAT44(uVar64,uVar49) == (double)CONCAT44(uVar86,uVar84)) &&
              (dVar7 = local_198.Scale3D.XY.m128d_f64[0] -
                       (double)CONCAT44(local_198.Scale3D.ZW.m128d_f64[0]._4_4_,
                                        local_198.Scale3D.ZW.m128d_f64[0]._0_4_),
              uVar49 = SUB84(dVar7,0) & uVar55, uVar64 = (uint)((ulonglong)dVar7 >> 0x20) & uVar53,
              (double)CONCAT44(uVar64,uVar49) < (double)CONCAT44(uVar86,uVar84) ||
              (double)CONCAT44(uVar64,uVar49) == (double)CONCAT44(uVar86,uVar84))) &&
             (dVar7 = local_198.Scale3D.XY.m128d_f64[1] -
                      (double)CONCAT44(local_198.Scale3D.ZW.m128d_f64[0]._4_4_,
                                       local_198.Scale3D.ZW.m128d_f64[0]._0_4_),
             uVar49 = SUB84(dVar7,0) & uVar55, uVar64 = (uint)((ulonglong)dVar7 >> 0x20) & uVar53,
             (double)CONCAT44(uVar64,uVar49) < (double)CONCAT44(uVar86,uVar84) ||
             (double)CONCAT44(uVar64,uVar49) == (double)CONCAT44(uVar86,uVar84)))
          goto LAB_14cbf7db2;
          uVar50 = (uint)__xmm_80000000000000008000000000000000;
          uVar43 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          dVar7 = local_198.Rotation.XY.m128d_f64[0] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar14 = local_198.Rotation.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          uVar78 = SUB84(dVar14,0);
          uVar80 = (undefined4)((ulonglong)dVar14 >> 0x20);
          dVar14 = local_198.Rotation.ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar16 = local_198.Rotation.ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar84 = SUB84(dVar16,0);
          uVar86 = (undefined4)((ulonglong)dVar16 >> 0x20);
          local_988 = local_198.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_984 = local_198.Translation.ZW.m128d_f64[0]._4_4_;
          local_998 = local_198.Translation.XY.m128d_f64[0]._0_4_;
          uStack_994 = local_198.Translation.XY.m128d_f64[0]._4_4_;
          uStack_990 = local_198.Translation.XY.m128d_f64[1]._0_4_;
          uStack_98c = local_198.Translation.XY.m128d_f64[1]._4_4_;
          local_9b8._8_4_ = uVar78;
          local_9b8._0_8_ = dVar7;
          local_9b8._12_4_ = uVar80;
          local_bb8._s_0.Z =
               (double)CONCAT44(local_198.Translation.ZW.m128d_f64[0]._4_4_ ^ uVar43,
                                local_198.Translation.ZW.m128d_f64[0]._0_4_ ^ uVar50);
          local_9a8._8_4_ = uVar84;
          local_9a8._0_8_ = dVar14;
          local_9a8._12_4_ = uVar86;
          local_bb8._s_0.X =
               (double)CONCAT44(local_198.Translation.XY.m128d_f64[0]._4_4_ ^ uVar43,
                                local_198.Translation.XY.m128d_f64[0]._0_4_ ^ uVar50);
          local_bb8._s_0.Y =
               (double)CONCAT44(local_198.Translation.XY.m128d_f64[1]._4_4_ ^ uVar43,
                                local_198.Translation.XY.m128d_f64[1]._0_4_ ^ uVar50);
          UE::Math::TQuat<double>::RotateVector
                    ((TQuat<double> *)local_9b8,(TVector<double> *)&local_b98._s_0,
                     (TVector<double> *)&local_bb8._s_0);
          uVar27 = local_b98._s_0.Z;
          uVar26 = local_b98._s_0.Y;
          uVar25 = local_b98._s_0.X;
          uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          uVar20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          local_4b8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_4b8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_498[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_498[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_4a8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_4a8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          uVar62 = uVar62 & uVar55;
          uVar65 = uVar65 & uVar53;
          local_a70 = uVar28;
          uStack_a6c = uVar29;
          local_488[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_488[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar65,uVar62) &&
              (double)CONCAT44(uVar65,uVar62) != __real_3e45798ee0000000) {
            dVar68 = __real_3ff0000000000000 / dVar68;
          }
          else {
            dVar68 = 0.0;
          }
          uVar63 = uVar63 & uVar55;
          uVar66 = uVar66 & uVar53;
          if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar66,uVar63) &&
              (double)CONCAT44(uVar66,uVar63) != __real_3e45798ee0000000) {
            dVar9 = __real_3ff0000000000000 / dVar9;
          }
          else {
            dVar9 = 0.0;
          }
          uVar67 = (undefined4)((ulonglong)dVar9 >> 0x20);
          if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar29 & uVar53,uVar28 & uVar55) &&
              (double)CONCAT44(uVar29 & uVar53,uVar28 & uVar55) != __real_3e45798ee0000000) {
            local_b70 = __real_3ff0000000000000 / (double)CONCAT44(uVar29,uVar28);
          }
          else {
            local_b70 = 0.0;
          }
          local_478._8_4_ = SUB84(dVar9,0);
          local_478._0_8_ = dVar68;
          local_478._12_4_ = uVar67;
          local_b80._8_4_ = SUB84(dVar9,0);
          local_b80._0_8_ = dVar68;
          local_b80._12_4_ = uVar67;
          local_468._8_8_ = 0;
          local_468._0_8_ = local_b70;
          if ((local_d00.ArrayNum < 2) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          auVar13._8_4_ = uVar78;
          auVar13._0_8_ = dVar7;
          auVar13._12_4_ = uVar80;
          *(undefined1 (*) [16])(local_d00.AllocatorInstance.Data + 0x60) = auVar13;
          auVar15._8_4_ = uVar84;
          auVar15._0_8_ = dVar14;
          auVar15._12_4_ = uVar86;
          *(undefined1 (*) [16])(local_d00.AllocatorInstance.Data + 0x70) = auVar15;
          *(undefined8 *)(local_d00.AllocatorInstance.Data + 0x80) = uVar25;
          *(undefined8 *)(local_d00.AllocatorInstance.Data + 0x88) = uVar26;
          *(undefined8 *)(local_d00.AllocatorInstance.Data + 0x90) = uVar27;
          *(double *)(local_d00.AllocatorInstance.Data + 0x98) = 0.0;
          *(undefined8 *)(local_d00.AllocatorInstance.Data + 0xa0) = uVar20;
          *(undefined8 *)(local_d00.AllocatorInstance.Data + 0xa8) = uVar21;
          *(undefined8 *)(local_d00.AllocatorInstance.Data + 0xb0) = uVar22;
          *(double *)(local_d00.AllocatorInstance.Data + 0xb8) = 0.0;
          if (((local_d00.AllocatorInstance.Data <= (FScriptContainerElement *)local_4b8) &&
              ((FScriptContainerElement *)local_4b8 <
               local_d00.AllocatorInstance.Data + (longlong)local_d00.ArrayMax * 0x60)) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar40)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar42 = local_d00.ArrayNum;
          if (local_d00.ArrayNum == local_d00.ArrayMax) {
            iVar42 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&local_d00.AllocatorInstance,&local_d00.ArrayMax);
          }
          uVar78 = SUB84(__real_3e45798ee0000000,0);
          uVar80 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          uVar84 = (undefined4)__real_3f1a36e2e0000000;
          uVar86 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
          local_d00.ArrayNum = iVar42 + 1;
          lVar45 = (longlong)iVar42 * 0x60;
          *(double *)(local_d00.AllocatorInstance.Data + lVar45) = local_4b8[0];
          *(double *)(local_d00.AllocatorInstance.Data + lVar45 + 8) = local_4b8[1];
          *(double *)(local_d00.AllocatorInstance.Data + lVar45 + 0x10) = local_4a8[0];
          *(double *)(local_d00.AllocatorInstance.Data + lVar45 + 0x10 + 8) = local_4a8[1];
          *(double *)(local_d00.AllocatorInstance.Data + lVar45 + 0x20) = local_498[0];
          *(double *)(local_d00.AllocatorInstance.Data + lVar45 + 0x20 + 8) = local_498[1];
          *(double *)(local_d00.AllocatorInstance.Data + lVar45 + 0x30) = local_488[0];
          *(double *)(local_d00.AllocatorInstance.Data + lVar45 + 0x30 + 8) = local_488[1];
          *(undefined8 *)(local_d00.AllocatorInstance.Data + lVar45 + 0x40) = local_478._0_8_;
          *(undefined8 *)(local_d00.AllocatorInstance.Data + lVar45 + 0x40 + 8) = local_478._8_8_;
          *(undefined8 *)(local_d00.AllocatorInstance.Data + lVar45 + 0x50) = local_468._0_8_;
          *(undefined8 *)(local_d00.AllocatorInstance.Data + lVar45 + 0x50 + 8) = local_468._8_8_;
        }
        if ((bVar39) &&
           (bVar40 = UE::Geometry::ComponentTypeSupportsCollision(pUVar47,ReadWrite), bVar40)) {
          UE::Geometry::AppendSimpleCollision(pUVar47,&local_c58,&local_d00);
        }
      }
      local_458._44_4_ = 0x80;
      local_be0.Mesh = &local_918;
      local_458._0_8_ = 0;
      local_458._8_8_ = 0;
      local_458._32_8_ = 0;
      local_458._40_4_ = 0;
      local_458._48_4_ = 0xffffffff;
      local_458._52_4_ = 0;
      local_418 = (void *)0x0;
      local_410 = 0;
      local_408._0_8_ = 0;
      local_408._8_8_ = 0;
      local_408._32_8_ = 0;
      local_408._40_4_ = 0;
      local_408._44_4_ = 0x80;
      local_408._48_4_ = 0xffffffff;
      local_408._52_4_ = 0;
      local_3c8 = (void *)0x0;
      local_3c0 = 0;
      local_3b8._0_1_ = true;
      local_3b8._1_1_ = true;
      local_3b0._0_8_ = 0;
      local_3b0._8_8_ = 0;
      local_3b0._32_8_ = 0;
      local_3b0._40_8_ = uVar18;
      local_3b0._48_8_ = uVar19;
      local_370 = (void *)0x0;
      local_368 = 0;
      local_360._0_8_ = 0;
      local_360._8_8_ = 0;
      local_360._32_8_ = 0;
      local_360._40_8_ = uVar18;
      local_360._48_8_ = uVar19;
      local_320 = (void *)0x0;
      local_318 = 0;
      local_310._0_1_ = true;
      local_310._1_1_ = true;
      local_308._0_8_ = 0;
      local_308._8_8_ = 0;
      local_308._32_8_ = 0;
      local_308._40_4_ = 0;
      local_308._44_4_ = 0x80;
      local_308._48_4_ = 0xffffffff;
      local_308._52_4_ = 0;
      local_2c8 = (void *)0x0;
      local_2c0 = 0;
      local_2b8._0_8_ = 0;
      local_2b8._8_8_ = 0;
      local_2b8._32_8_ = 0;
      local_2b8._40_4_ = 0;
      local_2b8._44_4_ = 0x80;
      local_2b8._48_4_ = 0xffffffff;
      local_2b8._52_4_ = 0;
      local_278 = (void *)0x0;
      local_270 = 0;
      local_268._0_1_ = true;
      local_268._1_1_ = true;
      local_260._0_8_ = 0;
      local_260._8_8_ = 0;
      local_260._32_8_ = 0;
      local_260._40_8_ = uVar18;
      local_260._48_8_ = uVar19;
      local_220 = (void *)0x0;
      local_218 = 0;
      local_210._0_8_ = 0;
      local_210._8_8_ = 0;
      local_210._32_8_ = 0;
      local_210._40_8_ = uVar18;
      local_210._48_8_ = uVar19;
      local_1d0 = (void *)0x0;
      local_1c8 = 0;
      local_1c0._0_1_ = true;
      local_1c0._1_1_ = true;
      local_1b8.Data = (FScriptContainerElement *)0x0;
      local_1b0._0_4_ = 0;
      local_1b0._4_4_ = 0;
      local_1a8.Data = (FScriptContainerElement *)0x0;
      local_1a0._0_4_ = 0;
      local_1a0._4_4_ = 0;
      local_978._0_8_ = 0;
      local_978._40_8_ = 0;
      local_948._0_8_ = 0;
      local_948._40_8_ = 0;
      UE::Geometry::FDynamicMeshEditor::AppendMesh
                (&local_be0,pFVar44,(FMeshIndexMappings *)local_458,&local_948,&local_978,false);
      DestructItems<UE::Geometry::TIndexMap<int>,int>
                ((TIndexMap<int> *)local_1a8.Data,(int)local_1a0);
      if ((TIndexMap<int> *)local_1a8.Data != (TIndexMap<int> *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
      DestructItems<UE::Geometry::TIndexMap<int>,int>
                ((TIndexMap<int> *)local_1b8.Data,(int)local_1b0);
      if ((TIndexMap<int> *)local_1b8.Data != (TIndexMap<int> *)0x0) {
        FMemory::Free(local_1b8.Data);
      }
      local_1c8 = 0;
      if (local_1d0 != (void *)0x0) {
        FMemory::Free(local_1d0);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_210);
      local_218 = 0;
      if (local_220 != (void *)0x0) {
        FMemory::Free(local_220);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_260);
      local_270 = 0;
      if (local_278 != (void *)0x0) {
        FMemory::Free(local_278);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_2b8);
      local_2c0 = 0;
      if (local_2c8 != (void *)0x0) {
        FMemory::Free(local_2c8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_308);
      local_318 = 0;
      if (local_320 != (void *)0x0) {
        FMemory::Free(local_320);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_360);
      local_368 = 0;
      if (local_370 != (void *)0x0) {
        FMemory::Free(local_370);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_3b0);
      local_3c0 = 0;
      if (local_3c8 != (void *)0x0) {
        FMemory::Free(local_3c8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_408);
      local_410 = 0;
      if (local_418 != (void *)0x0) {
        FMemory::Free(local_418);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_458);
      local_cb8 = (FComponentCollisionSettings)((longlong)FVar58 + 1);
      local_c68 = local_c68 + 0x230;
      uVar61 = (ulonglong)(uVar60 + 1);
    } while ((int)(uVar60 + 1) < (int)this->_padding_);
    FVar58 = local_c60;
    if (bVar41) goto LAB_14cbf839f;
  }
  UE::Geometry::FDynamicMeshAttributeSet::DisablePrimaryColors(local_918.AttributeSet.Ptr);
LAB_14cbf839f:
  _Src.Data = local_c88.AllocatorInstance.Data;
  lVar59 = 0;
  lVar45 = (longlong)local_c88.ArrayNum;
  local_ca8.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ca8.Materials.ArrayMax = 0;
  local_ca8.Materials.ArrayNum = local_c88.ArrayNum;
  if (local_c88.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_c88.ArrayNum,0,(ForAnyElementType *)&local_ca8,local_c88.ArrayNum,
               &local_ca8.Materials.ArrayMax);
    memcpy(local_ca8.Materials.AllocatorInstance.Data,_Src.Data,lVar45 << 3);
  }
  uVar55 = local_cbc;
  lVar45 = (longlong)(int)local_cbc;
  uVar54 = local_cc0 >> 0x1f;
  local_ce0.bSetPolyGroups = true;
  local_ce0.bUpdatePositions = true;
  local_ce0.bUpdateNormals = true;
  local_ce0.bUpdateTangents = false;
  local_ce0.bUpdateUVs = false;
  local_ce0.bUpdateVtxColors = false;
  local_ce0.bTransformVtxColorsSRGBToLinear = true;
  local_ce0.bConvertBackToNonManifold = false;
  uVar53 = 0;
  if ((int)local_cbc < (int)this->_padding_) {
    uVar53 = uVar54;
  }
  local_ce0.bSetHardEdgesFromNormalSeams = true;
  if ((uVar53 == 0) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar41)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::ToolTarget::CommitDynamicMeshUpdate
            (*(UToolTarget **)(this->_padding_ + lVar45 * 8),&local_918,true,&local_ce0,&local_ca8);
  uVar53 = 0;
  if ((int)uVar55 < (int)this->_padding_) {
    uVar53 = uVar54;
  }
  if ((uVar53 == 0) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar41)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::ToolTarget::CommitMaterialSetUpdate
            (*(UToolTarget **)(this->_padding_ + lVar45 * 8),&local_ca8,false);
  if (bVar39) {
    UE::Geometry::SetSimpleCollision(local_bd8,&local_c58,FVar58);
  }
  pUVar48 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pAVar24 = local_bd0;
  ToolSelectionUtil::SetNewActorSelection(pUVar48,local_bd0);
  if (local_ca8.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ca8.Materials.AllocatorInstance.Data);
  }
  uVar55 = 0;
  local_cd0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cd0.ArrayNum = 0;
  local_cd0.ArrayMax = 0;
  if (0 < (int)this->_padding_) {
    do {
      uVar53 = 0;
      if ((int)uVar55 < (int)this->_padding_) {
        uVar53 = ~uVar55 >> 0x1f;
      }
      if ((uVar53 == 0) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar39)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_cb0 = UE::ToolTarget::GetTargetActor(*(UToolTarget **)(this->_padding_ + lVar59));
      if (((local_cd0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_cb0) &&
          ((FScriptContainerElement *)&local_cb0 <
           local_cd0.AllocatorInstance.Data + (longlong)local_cd0.ArrayMax * 8)) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar39)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar42 = local_cd0.ArrayNum;
      if (local_cd0.ArrayNum == local_cd0.ArrayMax) {
        iVar42 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_cd0.AllocatorInstance,&local_cd0.ArrayMax);
      }
      uVar55 = uVar55 + 1;
      local_cd0.ArrayNum = iVar42 + 1;
      lVar59 = lVar59 + 8;
      *(AActor **)(local_cd0.AllocatorInstance.Data + (longlong)iVar42 * 8) = local_cb0;
    } while ((int)uVar55 < (int)this->_padding_);
  }
  this_00 = (this->HandleSourceProperties).field0_0x0.DebugPtr;
  pUVar48 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  UOnAcceptHandleSourcesPropertiesBase::ApplyMethod(this_00,&local_cd0,pUVar48,pAVar24);
  lVar45 = (**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*(longlong *)(lVar45 + 0x28) + 0x18))(lVar45 + 0x28);
  if (local_cd0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cd0.AllocatorInstance.Data);
  }
  if (local_d00.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d00.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FLevelSetShape3d,int>
            ((FLevelSetShape3d *)local_c58.LevelSets.AllocatorInstance.Data,
             local_c58.LevelSets.ArrayNum);
  if ((FLevelSetShape3d *)local_c58.LevelSets.AllocatorInstance.Data != (FLevelSetShape3d *)0x0) {
    FMemory::Free(local_c58.LevelSets.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FConvexShape3d,int>
            ((FConvexShape3d *)local_c58.Convexes.AllocatorInstance.Data,local_c58.Convexes.ArrayNum
            );
  if (local_c58.Convexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c58.Convexes.AllocatorInstance.Data);
  }
  if (local_c58.Capsules.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c58.Capsules.AllocatorInstance.Data);
  }
  if (local_c58.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c58.Boxes.AllocatorInstance.Data);
  }
  if (local_c58.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c58.Spheres.AllocatorInstance.Data);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_918);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_c98.AllocatorInstance.Data,
             local_c98.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_c98.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_c98.AllocatorInstance.Data);
  }
  if (local_c88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c88.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FDynamicMesh3,int>((FDynamicMesh3 *)local_cf0.Data,(int)local_ce8);
  if ((FDynamicMesh3 *)local_cf0.Data != (FDynamicMesh3 *)0x0) {
    FMemory::Free(local_cf0.Data);
  }
  return;
}

// _getUObject @ 14cbfce50

UObject * __thiscall UCombineMeshesTool::_getUObject(UCombineMeshesTool *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{152}' @ 14cbfce5c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCombineMeshesTool::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall UCombineMeshesTool::_getUObject_adjustor_152__(UCombineMeshesTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCombineMeshesTool *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{184}' @ 14cbfce70

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCombineMeshesTool::_getUObject`adjustor{184}' (void)const __ptr64 */

UObject * __thiscall UCombineMeshesTool::_getUObject_adjustor_184__(UCombineMeshesTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCombineMeshesTool *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

