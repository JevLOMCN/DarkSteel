// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// GetNumPrimitives @ 149759f60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall FPCGPrimitiveFactoryPISMC::GetNumPrimitives(FPCGPrimitiveFactoryPISMC *this)

{
  return (this->Components).ArrayNum;
}

// Create @ 1497fb200

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

bool __thiscall
FPCGPrimitiveFactoryPISMC::Create(FPCGPrimitiveFactoryPISMC *this,FPCGContext *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  IPCGGraphExecutionSource *pIVar4;
  FWeakObjectPtr *pFVar5;
  FScriptContainerElement *pFVar6;
  TBox<double> *pTVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  UPCGComponent *pUVar14;
  UClass *pUVar15;
  UPCGManagedProceduralISMComponent *this_00;
  UPCGProceduralISMComponent *pUVar16;
  UStaticMesh *this_01;
  TBox<double> *pTVar17;
  longlong lVar18;
  uint uVar19;
  FProceduralISMComponentDescriptor *pFVar20;
  undefined1 auStackY_1d8 [32];
  FWeakObjectPtr local_188;
  UPCGProceduralISMComponent *local_180;
  FPCGContext *local_178;
  FPCGProceduralISMCBuilderParameters local_168;
  TBox<double> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_178 = param_1;
  if (((((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
       (bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar10)) &&
      (pIVar4 = (param_1->ExecutionSource).InterfaceInstance,
      pIVar4 != (IPCGGraphExecutionSource *)0x0)) &&
     (pUVar14 = (UPCGComponent *)(**(code **)((longlong)*pIVar4 + 8))(),
     pUVar14 != (UPCGComponent *)0x0)) {
    pUVar15 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((iVar13 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar15->_padding_)) {
      FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
                ((FProceduralISMComponentDescriptor *)&local_168);
      uVar3 = this->NumPrimitivesProcessed;
      local_168.Descriptor._padding_ = (longlong)&___7FPCGProceduralISMComponentDescriptor__6B_;
      local_168.Descriptor.ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.Descriptor.ComponentTags.ArrayNum = 0;
      local_168.Descriptor.ComponentTags.ArrayMax = 0;
      uVar19 = 0x100;
      if ((this->Descriptors).ArrayNum < 0x100) {
        uVar19 = (this->Descriptors).ArrayNum;
      }
      local_168.bAllowDescriptorChanges = false;
      do {
        if ((int)uVar19 <= (int)uVar3) {
          bVar10 = uVar3 == uVar19;
LAB_1497fb62c:
          if (local_168.Descriptor.ComponentTags.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Descriptor.ComponentTags.AllocatorInstance.Data);
          }
          if ((void *)local_168.Descriptor._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168.Descriptor._padding_);
          }
          if ((void *)local_168.Descriptor._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168.Descriptor._padding_);
          }
          if ((void *)local_168.Descriptor._padding_ == (void *)0x0) {
            return bVar10;
          }
          FMemory::Free((void *)local_168.Descriptor._padding_);
          return bVar10;
        }
        uVar12 = 0;
        if ((int)uVar3 < (this->Descriptors).ArrayNum) {
          uVar12 = ~uVar3 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        pFVar20 = (FProceduralISMComponentDescriptor *)
                  ((this->Descriptors).AllocatorInstance.Data + (longlong)(int)uVar3 * 0xe0);
        FProceduralISMComponentDescriptor::operator=
                  ((FProceduralISMComponentDescriptor *)&local_168,pFVar20);
        TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                  (&local_168.Descriptor.ComponentTags,
                   (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar20 + 1));
        this_00 = PCGManagedProceduralISMComponent::GetOrCreateManagedProceduralISMC
                            (this->TargetActor,pUVar14,0,&local_168,(FPCGContext *)0x0);
        if (this_00 != (UPCGManagedProceduralISMComponent *)0x0) {
          pUVar16 = UPCGManagedProceduralISMComponent::GetComponent(this_00);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar16 != (UPCGProceduralISMComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar16);
          }
          local_188.ObjectIndex = 0;
          local_188.ObjectSerialNumber = 0;
          local_180 = pUVar16;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar16 != (UPCGProceduralISMComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar16);
          }
          FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_180);
          pFVar5 = (FWeakObjectPtr *)(this->Components).AllocatorInstance.Data;
          if (((pFVar5 <= &local_188) && (&local_188 < pFVar5 + (this->Components).ArrayMax)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          iVar13 = (this->Components).ArrayNum;
          piVar1 = &(this->Components).ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&(this->Components).AllocatorInstance,piVar1);
          }
          piVar1 = &pFVar20->NumInstances;
          (this->Components).ArrayNum = iVar13 + 1;
          *(FWeakObjectPtr *)((this->Components).AllocatorInstance.Data + (longlong)iVar13 * 8) =
               local_188;
          pFVar6 = (this->NumInstances).AllocatorInstance.Data;
          if (((pFVar6 <= piVar1) && (piVar1 < pFVar6 + (longlong)(this->NumInstances).ArrayMax * 4)
              ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          iVar13 = (this->NumInstances).ArrayNum;
          piVar2 = &(this->NumInstances).ArrayMax;
          if (iVar13 == *piVar2) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(this->NumInstances).AllocatorInstance,piVar2);
          }
          (this->NumInstances).ArrayNum = iVar13 + 1;
          *(int *)((this->NumInstances).AllocatorInstance.Data + (longlong)iVar13 * 4) = *piVar1;
          this_01 = (UStaticMesh *)
                    TPersistentObjectPtr<FSoftObjectPath>::Get
                              ((TPersistentObjectPtr<FSoftObjectPath> *)&pFVar20->StaticMesh);
          if (this_01 == (UStaticMesh *)0x0) {
LAB_1497fb538:
            this_01 = (UStaticMesh *)0x0;
          }
          else {
            pUVar15 = Z_Construct_UClass_UStaticMesh_NoRegister();
            iVar13 = (int)pUVar15->_padding_;
            if ((*(int *)(this_01->_padding_ + 0x38) < iVar13) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
                &pUVar15->_padding_)) goto LAB_1497fb538;
          }
          pTVar17 = UStaticMesh::GetBoundingBox(this_01,&local_78);
          pTVar7 = (TBox<double> *)(this->MeshBounds).AllocatorInstance.Data;
          if (((pTVar7 <= pTVar17) && (pTVar17 < pTVar7 + (this->MeshBounds).ArrayMax)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          iVar13 = (this->MeshBounds).ArrayNum;
          piVar1 = &(this->MeshBounds).ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&(this->MeshBounds).AllocatorInstance,piVar1);
          }
          (this->MeshBounds).ArrayNum = iVar13 + 1;
          dVar9 = (pTVar17->Min).field0_0x0._s_0.Y;
          lVar18 = (longlong)iVar13 * 0x38;
          pFVar6 = (this->MeshBounds).AllocatorInstance.Data;
          *(double *)(pFVar6 + lVar18) = (pTVar17->Min).field0_0x0._s_0.X;
          *(double *)(pFVar6 + lVar18 + 8) = dVar9;
          dVar9 = (pTVar17->Max).field0_0x0._s_0.X;
          *(double *)(pFVar6 + lVar18 + 0x10) = (pTVar17->Min).field0_0x0._s_0.Z;
          *(double *)(pFVar6 + lVar18 + 0x10 + 8) = dVar9;
          dVar9 = (pTVar17->Max).field0_0x0._s_0.Z;
          *(double *)(pFVar6 + lVar18 + 0x20) = (pTVar17->Max).field0_0x0._s_0.Y;
          *(double *)(pFVar6 + lVar18 + 0x20 + 8) = dVar9;
          *(undefined8 *)(pFVar6 + lVar18 + 0x30) = *(undefined8 *)&pTVar17->IsValid;
          param_1 = local_178;
        }
        this->NumPrimitivesProcessed = this->NumPrimitivesProcessed + 1;
        if ((this->NumPrimitivesProcessed < (int)uVar19) &&
           (bVar10 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), bVar10)) {
          bVar10 = false;
          goto LAB_1497fb62c;
        }
        uVar3 = this->NumPrimitivesProcessed;
      } while( true );
    }
  }
  if ((((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
      (bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar10)) &&
     (1 < (byte)LogPCG._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return true;
}

// GetMeshBounds @ 149815f00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __thiscall
FPCGPrimitiveFactoryPISMC::GetMeshBounds
          (FPCGPrimitiveFactoryPISMC *this,TBox<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  TBox<double> *pTVar9;
  double *pdVar10;
  longlong lVar11;
  double local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  double local_50 [6];
  undefined1 local_20;
  
  if ((param_1 < 0) || ((this->MeshBounds).ArrayNum <= param_1)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2696479321396084834>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PrimitiveFactories\\PCGPrimitiveFactoryPISMC.cpp"
                       ,0x62,"MeshBounds.IsValidIndex(InPrimitiveIndex)");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TBox<double> *)(*pcVar3)();
      return pTVar9;
    }
    local_20 = 0;
    pdVar10 = local_50;
  }
  else {
    if (param_1 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TBox<double> *)(*pcVar3)();
        return pTVar9;
      }
    }
    pFVar2 = (this->MeshBounds).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 * 0x38;
    local_88 = *(double *)(pFVar2 + lVar11);
    uStack_80 = *(undefined8 *)(pFVar2 + lVar11 + 8);
    local_78 = *(undefined8 *)(pFVar2 + lVar11 + 0x10);
    uStack_70 = *(undefined8 *)(pFVar2 + lVar11 + 0x10 + 8);
    pdVar10 = &local_88;
    local_68 = *(undefined8 *)(pFVar2 + lVar11 + 0x20);
    uStack_60 = *(undefined8 *)(pFVar2 + lVar11 + 0x20 + 8);
    local_58 = *(undefined8 *)(pFVar2 + lVar11 + 0x30);
  }
  dVar1 = pdVar10[1];
  dVar4 = pdVar10[2];
  dVar5 = pdVar10[3];
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = *pdVar10;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar6 = pdVar10[4];
  dVar7 = pdVar10[5];
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar5;
  dVar1 = pdVar10[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar7;
  *(double *)&__return_storage_ptr__->IsValid = dVar1;
  return __return_storage_ptr__;
}

// GetNumInstances @ 149816560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
FPCGPrimitiveFactoryPISMC::GetNumInstances(FPCGPrimitiveFactoryPISMC *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < (this->NumInstances).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->NumInstances).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    return *(int *)((this->NumInstances).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return -1;
}

// GetSceneProxy @ 14981b480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FPCGPrimitiveFactoryPISMC::GetSceneProxy(FPCGPrimitiveFactoryPISMC *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPrimitiveSceneProxy *pFVar4;
  UObject *pUVar5;
  
  if ((-1 < param_1) && (param_1 < (this->Components).ArrayNum)) {
    pFVar4 = (FPrimitiveSceneProxy *)0x0;
    uVar3 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPrimitiveSceneProxy *)(*pcVar1)();
        return pFVar4;
      }
    }
    bVar2 = FWeakObjectPtr::IsValid
                      ((FWeakObjectPtr *)
                       ((this->Components).AllocatorInstance.Data + (longlong)param_1 * 8));
    if (bVar2) {
      uVar3 = 0;
      if (param_1 < (this->Components).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FPrimitiveSceneProxy *)(*pcVar1)();
          return pFVar4;
        }
      }
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((this->Components).AllocatorInstance.Data +
                                   (longlong)param_1 * 8));
      if (*(longlong *)&pUVar5[0x21].field_0x8 != *(longlong *)&pUVar5[0x14].field_0x10) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("SceneProxy == SceneData.SceneProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\PrimitiveComponent.h"
                           ,0x801,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FPrimitiveSceneProxy *)(*pcVar1)();
          return pFVar4;
        }
      }
      pFVar4 = *(FPrimitiveSceneProxy **)&pUVar5[0x14].field_0x10;
    }
    return pFVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2696479321396084753>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PrimitiveFactories\\PCGPrimitiveFactoryPISMC.cpp"
                     ,0x11,"Components.IsValidIndex(InPrimitiveIndex)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPrimitiveSceneProxy *)(*pcVar1)();
    return pFVar4;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// Initialize @ 14981df90

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
FPCGPrimitiveFactoryPISMC::Initialize(FPCGPrimitiveFactoryPISMC *this,FParameters *param_1)

{
  TArray<FPCGProceduralISMComponentDescriptor,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FPCGProceduralISMComponentDescriptor *pFVar4;
  
  pTVar1 = &this->Descriptors;
  if ((FParameters *)pTVar1 != param_1) {
    DestructItems<FPCGProceduralISMComponentDescriptor,int>
              ((FPCGProceduralISMComponentDescriptor *)(pTVar1->AllocatorInstance).Data,
               (this->Descriptors).ArrayNum);
    iVar3 = (param_1->Descriptors).ArrayNum;
    piVar2 = &(this->Descriptors).ArrayMax;
    pFVar4 = (FPCGProceduralISMComponentDescriptor *)(param_1->Descriptors).AllocatorInstance.Data;
    (this->Descriptors).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FPCGProceduralISMComponentDescriptor,FPCGProceduralISMComponentDescriptor,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
    this->TargetActor = param_1->TargetActor;
    return;
  }
  this->TargetActor = param_1->TargetActor;
  return;
}

// IsRenderStateCreated @ 149820c50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FPCGPrimitiveFactoryPISMC::IsRenderStateCreated(FPCGPrimitiveFactoryPISMC *this)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (**(code **)(this->_padding_ + 8))();
  if (0 < iVar1) {
    do {
      lVar2 = (**(code **)(this->_padding_ + 0x10))(this,iVar3);
      if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x228) == 0)) ||
         (*(int *)(*(longlong *)(lVar2 + 0x228) + 0x224) == -1)) {
        return false;
      }
      iVar3 = iVar3 + 1;
      iVar1 = (**(code **)(this->_padding_ + 8))(this);
    } while (iVar3 < iVar1);
  }
  return true;
}

