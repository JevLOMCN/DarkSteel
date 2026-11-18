// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e892f50

UScriptStruct * __cdecl FStaticMeshToCollectionDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2,
                         (UObject *)pUVar1,L"StaticMeshToCollectionDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton;
}

// GetType @ 14e893100

FName __thiscall
FStaticMeshToCollectionDataflowNode_v2::GetType(FStaticMeshToCollectionDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FStaticMeshToCollectionDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e893140

bool __thiscall
FStaticMeshToCollectionDataflowNode_v2::IsA
          (FStaticMeshToCollectionDataflowNode_v2 *this,FName param_1)

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
  ::FName::FName(local_res18,"FStaticMeshToCollectionDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8931a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8931a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8931c6;
      }
    }
  }
  bVar5 = true;
LAB_14e8931c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e893200

FStructOnScope * __thiscall
FStaticMeshToCollectionDataflowNode_v2::NewStructOnScope
          (FStaticMeshToCollectionDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2,
                           (UObject *)pUVar2,L"StaticMeshToCollectionDataflowNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e893280

void __thiscall
FStaticMeshToCollectionDataflowNode_v2::SerializeInternal
          (FStaticMeshToCollectionDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2,
                         (UObject *)pUVar1,L"StaticMeshToCollectionDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8932fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e893310

FName __thiscall
FStaticMeshToCollectionDataflowNode_v2::GetDisplayName(FStaticMeshToCollectionDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"StaticMeshToCollection");
  return in_RDX;
}

// GetCategory @ 14e893340

FName __thiscall
FStaticMeshToCollectionDataflowNode_v2::GetCategory(FStaticMeshToCollectionDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Asset");
  return in_RDX;
}

// GetTags @ 14e893380

FString * __thiscall
FStaticMeshToCollectionDataflowNode_v2::GetTags
          (FStaticMeshToCollectionDataflowNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8933b0

UScriptStruct * __thiscall
FStaticMeshToCollectionDataflowNode_v2::TypedScriptStruct
          (FStaticMeshToCollectionDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2,
                         (UObject *)pUVar1,L"StaticMeshToCollectionDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton;
}

// Evaluate @ 14e8936d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticMeshToCollectionDataflowNode_v2::Evaluate
          (FStaticMeshToCollectionDataflowNode_v2 *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<UStaticMesh>_u_0 *pTVar1;
  bool bVar2;
  TObjectPtr<UStaticMesh>_u_0 TVar3;
  code *pcVar4;
  TObjectPtr<UMaterialInterface> *pTVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  FDataflowInput *pFVar9;
  TObjectPtr<UStaticMesh> *pTVar10;
  TTransform<double> *pTVar11;
  TObjectPtr<UStaticMesh>_u_0 *pTVar12;
  undefined1 auStackY_238 [32];
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> local_1e8;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> local_1d8;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_1c8;
  TObjectPtr<UStaticMesh>_u_0 local_1b8;
  FConnectionReference local_1b0;
  FConnectionReference local_198;
  TObjectPtr<UStaticMesh>_u_0 local_178 [2];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  TObjectPtr<UMaterialInterface> *local_108;
  undefined8 local_100;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((((FManagedArrayCollection *)puVar8 != &this->Collection) &&
       (puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar8 !=
       &this->Materials)) &&
      (puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)puVar8 !=
      &this->InstancedMeshes)) &&
     ((puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *)puVar8 != &this->RootProxyMeshes
      && (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2424983404844941269>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionStaticMeshToCollectionNode.cpp"
                             ,0x2b,
                             "Out->IsA(&Collection) || Out->IsA(&Materials) || Out->IsA(&InstancedMeshes) || Out->IsA(&RootProxyMeshes)"
                            ), bVar6)))) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FManagedArrayCollection::FManagedArrayCollection(&local_f8);
  local_1b0.Index = -1;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.ArrayNum = 0;
  local_1d8.ArrayMax = 0;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  local_1b0.ContainerReference = (void *)0x0;
  local_1b0.Reference = &this->StaticMesh;
  pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1b0);
  pTVar10 = FDataflowInput::GetValue<TObjectPtr<UStaticMesh>_>(pFVar9,param_1,&this->StaticMesh);
  TVar3.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar10->field0_0x0).DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UStaticMesh *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  local_198.Index = -1;
  local_198.ContainerReference = (void *)0x0;
  local_198.Reference = &this->MeshTransform;
  pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_198);
  pTVar11 = FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                      (pFVar9,param_1,&this->MeshTransform);
  if (TVar3.DebugPtr != (UStaticMesh *)0x0) {
    bVar6 = this->bSplitComponents;
    bVar2 = this->bSetInternalFromMaterialIndex;
    local_1b8.ObjectPtr.field0_0x0 = TVar3.ObjectPtr.field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    FGeometryCollectionEngineConversion::ConvertStaticMeshToGeometryCollection
              ((TObjectPtr<UStaticMesh>)&local_1b8,pTVar11,&local_f8,&local_1c8,&local_1d8,bVar2,
               bVar6);
    local_108 = (TObjectPtr<UMaterialInterface> *)0x0;
    local_100 = 0;
    local_168._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_168._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_168._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_158._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_158._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_158._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_148._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_148._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_148._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_138._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_138._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_138._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_128._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_128._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_118._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_118._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    local_168 = *(undefined1 (*) [16])(pTVar11->Rotation).XY.m128d_f64;
    local_158 = *(undefined1 (*) [16])(pTVar11->Rotation).ZW.m128d_f64;
    local_148 = *(undefined1 (*) [16])(pTVar11->Translation).XY.m128d_f64;
    local_138 = *(undefined1 (*) [16])(pTVar11->Translation).ZW.m128d_f64;
    local_128 = *(undefined1 (*) [16])(pTVar11->Scale3D).XY.m128d_f64;
    local_118 = *(undefined1 (*) [16])(pTVar11->Scale3D).ZW.m128d_f64;
    local_178[0].ObjectPtr.field0_0x0 = TVar3.ObjectPtr.field0_0x0;
    if (((local_1e8.AllocatorInstance.Data <= local_178) &&
        (local_178 <
         (TObjectPtr<UStaticMesh>_u_0 *)
         (local_1e8.AllocatorInstance.Data + (longlong)local_1e8.ArrayMax * 0x80))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = local_1e8.ArrayNum;
    if (local_1e8.ArrayNum == local_1e8.ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1080,&local_1e8.AllocatorInstance,&local_1e8.ArrayMax);
    }
    pTVar12 = (TObjectPtr<UStaticMesh>_u_0 *)
              (local_1e8.AllocatorInstance.Data + (longlong)iVar7 * 0x80);
    local_1e8.ArrayNum = iVar7 + 1;
    pTVar12->DebugPtr = (UStaticMesh *)local_178[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_178[0].DebugPtr != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_178[0].DebugPtr);
    }
    pTVar5 = local_108;
    pTVar1 = pTVar12 + 0xe;
    pTVar12[2] = (TObjectPtr<UStaticMesh>_u_0)local_168._0_8_;
    pTVar12[3] = (TObjectPtr<UStaticMesh>_u_0)local_168._8_8_;
    pTVar12[4] = (TObjectPtr<UStaticMesh>_u_0)local_158._0_8_;
    pTVar12[5] = (TObjectPtr<UStaticMesh>_u_0)local_158._8_8_;
    pTVar12[6] = (TObjectPtr<UStaticMesh>_u_0)local_148._0_8_;
    pTVar12[7] = (TObjectPtr<UStaticMesh>_u_0)local_148._8_8_;
    pTVar12[8] = (TObjectPtr<UStaticMesh>_u_0)local_138._0_8_;
    pTVar12[9] = (TObjectPtr<UStaticMesh>_u_0)local_138._8_8_;
    pTVar12[10] = (TObjectPtr<UStaticMesh>_u_0)local_128._0_8_;
    pTVar12[0xb] = (TObjectPtr<UStaticMesh>_u_0)local_128._8_8_;
    pTVar12[0xc] = (TObjectPtr<UStaticMesh>_u_0)local_118._0_8_;
    pTVar12[0xd] = (TObjectPtr<UStaticMesh>_u_0)local_118._8_8_;
    pTVar1->DebugPtr = (UStaticMesh *)0x0;
    iVar7 = (int)local_100;
    *(int *)(pTVar12 + 0xf) = (int)local_100;
    if ((int)local_100 == 0) {
      *(int *)((longlong)pTVar12 + 0x7c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(int)local_100,0,(ForAnyElementType *)&pTVar1->ObjectPtr,(int)local_100,
                 (int *)((longlong)pTVar12 + 0x7c));
      ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                ((FScriptContainerElement *)pTVar1->DebugPtr,pTVar5,iVar7);
    }
    if (local_108 != (TObjectPtr<UMaterialInterface> *)0x0) {
      FMemory::Free(local_108);
    }
  }
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_f8,&this->Collection);
  FDataflowNode::
  SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_1c8,&this->Materials);
  FDataflowNode::
  SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_1d8,&this->InstancedMeshes);
  FDataflowNode::
  SetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>,TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_1e8,&this->RootProxyMeshes);
  DestructItems<FDataflowRootProxyMesh,int>
            ((FDataflowRootProxyMesh *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
  if ((TObjectPtr<UStaticMesh>_u_0 *)local_1e8.AllocatorInstance.Data !=
      (TObjectPtr<UStaticMesh>_u_0 *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)local_1d8.AllocatorInstance.Data,
             local_1d8.ArrayNum);
  if ((FGeometryCollectionAutoInstanceMesh *)local_1d8.AllocatorInstance.Data !=
      (FGeometryCollectionAutoInstanceMesh *)0x0) {
    FMemory::Free(local_1d8.AllocatorInstance.Data);
  }
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  return;
}

// FStaticMeshToCollectionDataflowNode_v2 @ 14e92d4d0

FStaticMeshToCollectionDataflowNode_v2 * __thiscall
FStaticMeshToCollectionDataflowNode_v2::FStaticMeshToCollectionDataflowNode_v2
          (FStaticMeshToCollectionDataflowNode_v2 *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  *(undefined ***)this = &___7FStaticMeshToCollectionDataflowNode_v2__6B_;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  *&(this->MeshTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->MeshTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->MeshTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->MeshTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->MeshTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->MeshTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  (this->RootProxyMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMeshes).ArrayNum = 0;
  (this->RootProxyMeshes).ArrayMax = 0;
  local_68.ContainerReference = (void *)0x0;
  this->bSetInternalFromMaterialIndex = true;
  this->bSplitComponents = false;
  local_68.Index = -1;
  local_68.Reference = &this->StaticMesh;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MeshTransform;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Collection;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Materials;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->InstancedMeshes;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->RootProxyMeshes;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  return this;
}

// FStaticMeshToCollectionDataflowNode_v2 @ 14e92d730

FStaticMeshToCollectionDataflowNode_v2 * __thiscall
FStaticMeshToCollectionDataflowNode_v2::FStaticMeshToCollectionDataflowNode_v2
          (FStaticMeshToCollectionDataflowNode_v2 *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  *(undefined ***)this = &___7FStaticMeshToCollectionDataflowNode_v2__6B_;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  *&(this->MeshTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->MeshTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->MeshTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->MeshTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->MeshTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->MeshTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  (this->RootProxyMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMeshes).ArrayNum = 0;
  (this->RootProxyMeshes).ArrayMax = 0;
  this->bSetInternalFromMaterialIndex = true;
  this->bSplitComponents = false;
  return this;
}

// ~FStaticMeshToCollectionDataflowNode_v2 @ 14e933c20

void __thiscall
FStaticMeshToCollectionDataflowNode_v2::~FStaticMeshToCollectionDataflowNode_v2
          (FStaticMeshToCollectionDataflowNode_v2 *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FDataflowRootProxyMesh,int>
            ((FDataflowRootProxyMesh *)(this->RootProxyMeshes).AllocatorInstance.Data,
             (this->RootProxyMeshes).ArrayNum);
  pFVar1 = (this->RootProxyMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)(this->InstancedMeshes).AllocatorInstance.Data,
             (this->InstancedMeshes).ArrayNum);
  pFVar1 = (this->InstancedMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

