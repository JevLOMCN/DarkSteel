// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 12

// FCustomizableObjectMeshStreamIn @ 14ac08fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FCustomizableObjectMeshStreamIn * __thiscall
FCustomizableObjectMeshStreamIn::FCustomizableObjectMeshStreamIn
          (FCustomizableObjectMeshStreamIn *this,UCustomizableObjectSkeletalMesh *param_1,
          EThreadType param_2,TSharedPtr<FModelStreamableBulkData,1> *param_3)

{
  int *piVar1;
  TSharedPtr<FMutableUpdateMeshContext,1> *pTVar2;
  int iVar3;
  uint uVar4;
  UCustomizableObjectSystemPrivate *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSystem *pFVar7;
  FModel *pFVar8;
  FParameters *pFVar9;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *pTVar10;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *pTVar11;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *pTVar12;
  FUnrealMutableResourceProvider *pFVar13;
  FModelStreamableBulkData *pFVar14;
  FHandle *pFVar15;
  code *pcVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined8 uVar23;
  bool bVar24;
  int iVar25;
  TIntrusiveReferenceController<FMutableUpdateMeshContext,1> *this_00;
  TIntrusiveReferenceController<FMutableUpdateMeshContext,1> *pTVar26;
  FCustomizableObjectMeshStreamIn *pFVar27;
  UCustomizableObjectSystem *pUVar28;
  TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *pTVar29;
  longlong *plVar30;
  undefined ***pppuVar31;
  longlong *plVar32;
  TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
  *pTVar33;
  uint uVar34;
  FMutableUpdateMeshContext *pFVar35;
  TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,TSizedDefaultAllocator<32>_> *this_01;
  undefined1 auStackY_208 [32];
  TTypeCompatibleBytes<FMutableUpdateMeshContext> *local_1c8;
  FSharedReferencer<1> FStack_1c0;
  FParameters *local_1b8;
  FSharedReferencer<1> local_1b0;
  TSharedPtr<FModelStreamableBulkData,1> *local_1a8;
  FSystem *local_1a0;
  TReferenceControllerBase<1> *pTStack_198;
  FModel *local_190;
  TReferenceControllerBase<1> *pTStack_188;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *local_180;
  TReferenceControllerBase<1> *pTStack_178;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *local_170;
  TReferenceControllerBase<1> *pTStack_168;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *local_160;
  TReferenceControllerBase<1> *pTStack_158;
  FUnrealMutableResourceProvider *local_150;
  TReferenceControllerBase<1> *pTStack_148;
  FModelStreamableBulkData *local_140;
  TReferenceControllerBase<1> *pTStack_138;
  FSkelMeshUpdateContext local_130;
  code *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong *plStack_b0;
  code *local_a8;
  undefined **local_98;
  FCustomizableObjectMeshStreamIn *local_90;
  undefined ***local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1a8 = param_3;
  FSkeletalMeshStreamIn::FSkeletalMeshStreamIn
            ((FSkeletalMeshStreamIn *)this,(USkeletalMesh *)param_1,param_2);
  pTVar26 = (TIntrusiveReferenceController<FMutableUpdateMeshContext,1> *)0x0;
  *(undefined ***)this = &___7FCustomizableObjectMeshStreamIn__6B_;
  pTVar2 = &this->OperationData;
  pTVar2->Object = (FMutableUpdateMeshContext *)0x0;
  (this->OperationData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->MutableTaskId = 0;
  this_00 = ::operator_new(0x170);
  if (this_00 == (TIntrusiveReferenceController<FMutableUpdateMeshContext,1> *)0x0) {
    pFVar35 = (FMutableUpdateMeshContext *)&DAT_00000010;
    local_1c8 = ___xmm_00000000000000000000000000000010;
    FStack_1c0.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    pTVar26 = SharedPointerInternals::TIntrusiveReferenceController<FMutableUpdateMeshContext,1>::
              TIntrusiveReferenceController<FMutableUpdateMeshContext,1><>(this_00);
    pFVar35 = (FMutableUpdateMeshContext *)&pTVar26->ObjectStorage;
    if (pFVar35 == (FMutableUpdateMeshContext *)0x0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar24) {
        pcVar16 = (code *)swi(3);
        pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
        return pFVar27;
      }
    }
    param_3 = local_1a8;
    local_1c8 = (TTypeCompatibleBytes<FMutableUpdateMeshContext> *)pFVar35;
    FStack_1c0.ReferenceController = (TReferenceControllerBase<1> *)pTVar26;
    if (pTVar26 != (TIntrusiveReferenceController<FMutableUpdateMeshContext,1> *)0x0) {
      LOCK();
      *(int *)&pTVar26->_padding_ = (int)pTVar26->_padding_ + 1;
      UNLOCK();
    }
  }
  if (pTVar2 != (TSharedPtr<FMutableUpdateMeshContext,1> *)&local_1c8) {
    pTVar2->Object = pFVar35;
    local_1c8 = (TTypeCompatibleBytes<FMutableUpdateMeshContext> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OperationData).SharedReferenceCount,&FStack_1c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar26);
  if (UCustomizableObjectSystemPrivate::SSystem == (UCustomizableObjectSystem *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("UCustomizableObjectSystem::IsCreated()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                        ,0x30,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pUVar28 = UCustomizableObjectSystem::GetInstance();
  if ((pUVar28->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Private",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                        ,0x32c,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pUVar5 = (pUVar28->Private).field0_0x0.DebugPtr;
  if (pTVar2->Object == (FMutableUpdateMeshContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pTVar6 = (pUVar5->MutableSystem).SharedReferenceCount.ReferenceController;
  pFVar35 = pTVar2->Object;
  pFVar7 = (pUVar5->MutableSystem).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a0 = (pFVar35->System).Object;
  pTStack_198 = (pFVar35->System).SharedReferenceCount.ReferenceController;
  (pFVar35->System).Object = pFVar7;
  (pFVar35->System).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_198);
  if (pTVar2->Object == (FMutableUpdateMeshContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pTVar6 = (param_1->Model).SharedReferenceCount.ReferenceController;
  pFVar35 = pTVar2->Object;
  pFVar8 = (param_1->Model).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_190 = (pFVar35->Model).Object;
  pTStack_188 = (pFVar35->Model).SharedReferenceCount.ReferenceController;
  (pFVar35->Model).Object = pFVar8;
  (pFVar35->Model).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_188);
  local_1b0.ReferenceController = (param_1->Parameters).SharedReferenceCount.ReferenceController;
  pFVar9 = (param_1->Parameters).Object;
  if (local_1b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1b8 = pFVar9;
  if (pTVar2->Object == (FMutableUpdateMeshContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pFVar35 = pTVar2->Object;
  pTVar29 = &pFVar35->Parameters;
  if (pTVar29 != (TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *)&local_1b8) {
    pTVar29->Object = pFVar9;
    local_1b8 = (FParameters *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar35->Parameters).SharedReferenceCount,&local_1b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b0.ReferenceController);
  if (pTVar2->Object == (FMutableUpdateMeshContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pTVar6 = (param_1->MeshIdRegistry).SharedReferenceCount.ReferenceController;
  pFVar35 = pTVar2->Object;
  pTVar10 = (param_1->MeshIdRegistry).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_180 = (pFVar35->MeshIdRegistry).Object;
  pTStack_178 = (pFVar35->MeshIdRegistry).SharedReferenceCount.ReferenceController;
  (pFVar35->MeshIdRegistry).Object = pTVar10;
  (pFVar35->MeshIdRegistry).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_178);
  if (pTVar2->Object == (FMutableUpdateMeshContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pTVar6 = (param_1->ImageIdRegistry).SharedReferenceCount.ReferenceController;
  pFVar35 = pTVar2->Object;
  pTVar11 = (param_1->ImageIdRegistry).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_170 = (pFVar35->ImageIdRegistry).Object;
  pTStack_168 = (pFVar35->ImageIdRegistry).SharedReferenceCount.ReferenceController;
  (pFVar35->ImageIdRegistry).Object = pTVar11;
  (pFVar35->ImageIdRegistry).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_168);
  if (pTVar2->Object == (FMutableUpdateMeshContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pTVar6 = (param_1->MaterialIdRegistry).SharedReferenceCount.ReferenceController;
  pFVar35 = pTVar2->Object;
  pTVar12 = (param_1->MaterialIdRegistry).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_160 = (pFVar35->MaterialIdRegistry).Object;
  pTStack_158 = (pFVar35->MaterialIdRegistry).SharedReferenceCount.ReferenceController;
  (pFVar35->MaterialIdRegistry).Object = pTVar12;
  (pFVar35->MaterialIdRegistry).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_158);
  if (pTVar2->Object == (FMutableUpdateMeshContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pTVar6 = (param_1->ExternalResourceProvider).SharedReferenceCount.ReferenceController;
  pFVar35 = pTVar2->Object;
  pFVar13 = (param_1->ExternalResourceProvider).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_150 = (pFVar35->ExternalResourceProvider).Object;
  pTStack_148 = (pFVar35->ExternalResourceProvider).SharedReferenceCount.ReferenceController;
  (pFVar35->ExternalResourceProvider).Object = pFVar13;
  (pFVar35->ExternalResourceProvider).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_148);
  iVar3 = param_1->State;
  if (pTVar2->Object == (FMutableUpdateMeshContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pTVar2->Object->State = iVar3;
  if (pTVar2->Object == (FMutableUpdateMeshContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pTVar6 = (param_3->SharedReferenceCount).ReferenceController;
  pFVar35 = pTVar2->Object;
  pFVar14 = param_3->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_140 = (pFVar35->ModelStreamableBulkData).Object;
  pTStack_138 = (pFVar35->ModelStreamableBulkData).SharedReferenceCount.ReferenceController;
  (pFVar35->ModelStreamableBulkData).Object = pFVar14;
  (pFVar35->ModelStreamableBulkData).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_138);
  if (pTVar2->Object == (FMutableUpdateMeshContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pFVar35 = pTVar2->Object;
  pTVar33 = &pFVar35->MeshIDs;
  if (pTVar33 != &param_1->MeshIDs) {
    DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
              ((FHandle *)(pTVar33->AllocatorInstance).Data,(pFVar35->MeshIDs).ArrayNum);
    iVar3 = (param_1->MeshIDs).ArrayNum;
    piVar1 = &(pFVar35->MeshIDs).ArrayMax;
    pFVar15 = (FHandle *)(param_1->MeshIDs).AllocatorInstance.Data;
    (pFVar35->MeshIDs).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,*piVar1,&pTVar33->AllocatorInstance,iVar3,piVar1);
      ConstructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
                ((pTVar33->AllocatorInstance).Data,pFVar15,iVar3);
    }
  }
  if (pTVar2->Object == (FMutableUpdateMeshContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pFVar35 = pTVar2->Object;
  uVar4 = (param_1->MeshIDs).ArrayNum;
  this_01 = &pFVar35->Meshes;
  iVar3 = (pFVar35->Meshes).ArrayNum;
  piVar1 = &(pFVar35->Meshes).ArrayNum;
  if (iVar3 < (int)uVar4) {
    iVar25 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar4 - iVar3,&this_01->AllocatorInstance,piVar1,
                        &(pFVar35->Meshes).ArrayMax);
    memset((this_01->AllocatorInstance).Data + (longlong)iVar25 * 0x10,0,
           (longlong)(int)(uVar4 - iVar3) << 4);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar3) {
      uVar34 = iVar3 - uVar4;
      if ((int)(uVar4 | uVar34) < 0) {
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar24) {
          pcVar16 = (code *)swi(3);
          pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
          return pFVar27;
        }
      }
      if (uVar34 != 0) {
        TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_01,uVar4,uVar34);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_01->AllocatorInstance,*piVar1,&(pFVar35->Meshes).ArrayMax);
      }
    }
  }
  iVar3 = *(int *)&this->field_0x10;
  if (pTVar2->Object == (FMutableUpdateMeshContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  pTVar2->Object->CurrentFirstLODIdx = iVar3;
  iVar3 = *(int *)&this->field_0x14;
  if (pTVar2->Object == (FMutableUpdateMeshContext *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  local_78 = 0;
  local_50 = (longlong *)0x0;
  pTVar2->Object->PendingFirstLODIdx = iVar3;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::FCustomizableObjectMeshStreamIn'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::FCustomizableObjectMeshStreamIn'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_80 = (undefined ***)0x0;
  local_90 = this;
  FSkelMeshUpdateContext::FSkelMeshUpdateContext(&local_130,(USkeletalMesh *)param_1,0);
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("TaskState == TS_Locked || TaskState == TS_Init",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                        ,0x1b,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      pFVar27 = (FCustomizableObjectMeshStreamIn *)(*pcVar16)();
      return pFVar27;
    }
  }
  *(undefined4 *)&this->field_0x68 = 2;
  local_108 = local_a8;
  plStack_e0 = (longlong *)0x0;
  if (local_a8 != (code *)0x0) {
    pppuVar31 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar31 = local_80;
    }
    (*(code *)**pppuVar31)(pppuVar31,&local_f8);
  }
  lVar22 = *(longlong *)&this->field_0x70;
  uVar23 = *(undefined8 *)&this->field_0x78;
  uVar17 = *(undefined4 *)&this->field_0x80;
  uVar18 = *(undefined4 *)&this->field_0x84;
  uVar19 = *(undefined4 *)&this->field_0x88;
  uVar20 = *(undefined4 *)&this->field_0x8c;
  uVar21 = *(undefined8 *)&this->field_0x90;
  plVar32 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_108;
  *(undefined8 *)&this->field_0x78 = uStack_100;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_f8;
  *(undefined4 *)&this->field_0x84 = local_f8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_f0;
  *(undefined4 *)&this->field_0x8c = uStack_ec;
  *(undefined8 *)&this->field_0x90 = local_e8;
  *(longlong **)&this->field_0x98 = plStack_e0;
  local_f8._0_4_ = uVar17;
  local_f8._4_4_ = uVar18;
  uStack_f0 = uVar19;
  uStack_ec = uVar20;
  local_e8 = uVar21;
  plStack_e0 = plVar32;
  local_108 = (code *)lVar22;
  uStack_100 = uVar23;
  if (lVar22 != 0) {
    plVar30 = &local_f8;
    if (plVar32 != (longlong *)0x0) {
      plVar30 = plVar32;
    }
    (**(code **)(*plVar30 + 0x10))();
  }
  *(undefined4 *)&this->field_0xa0 = 0;
  local_d8 = local_78;
  plStack_b0 = (longlong *)0x0;
  if (local_78 != 0) {
    plVar32 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar32 = local_50;
    }
    (**(code **)*plVar32)(plVar32,&local_c8);
  }
  lVar22 = *(longlong *)&this->field_0xb0;
  uVar23 = *(undefined8 *)&this->field_0xb8;
  uVar17 = *(undefined4 *)&this->field_0xc0;
  uVar18 = *(undefined4 *)&this->field_0xc4;
  uVar19 = *(undefined4 *)&this->field_0xc8;
  uVar20 = *(undefined4 *)&this->field_0xcc;
  uVar21 = *(undefined8 *)&this->field_0xd0;
  plVar32 = *(longlong **)&this->field_0xd8;
  *(longlong *)&this->field_0xb0 = local_d8;
  *(undefined8 *)&this->field_0xb8 = uStack_d0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_c8;
  *(undefined4 *)&this->field_0xc4 = local_c8._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_c0;
  *(undefined4 *)&this->field_0xcc = uStack_bc;
  *(undefined8 *)&this->field_0xd0 = local_b8;
  *(longlong **)&this->field_0xd8 = plStack_b0;
  local_d8 = lVar22;
  uStack_d0 = uVar23;
  local_c8._0_4_ = uVar17;
  local_c8._4_4_ = uVar18;
  uStack_c0 = uVar19;
  uStack_bc = uVar20;
  local_b8 = uVar21;
  plStack_b0 = plVar32;
  if (lVar22 != 0) {
    plVar30 = &local_c8;
    if (plVar32 != (longlong *)0x0) {
      plVar30 = plVar32;
    }
    (**(code **)(*plVar30 + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar31 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar31 = local_80;
    }
    (*(code *)(*pppuVar31)[2])();
  }
  if (local_78 != 0) {
    plVar32 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar32 = local_50;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  return this;
}

// operator() @ 14ac10490

void __thiscall
`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::__l2::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FTaskHandle FVar8;
  FTaskBase *this_00;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  TSharedRef<UE::Mutable::Private::FMesh_const_,1> local_c8;
  TSharedRef<UE::Mutable::Private::FMesh_const_,1> local_b8;
  TSharedRef<UE::Mutable::Private::FMesh_const_,1> local_a8;
  FMutableStreamRequest local_98;
  
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 0x7f0) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FMutableStreamRequest::FMutableStreamRequest
            (&local_98,
             (TSharedPtr<FModelStreamableBulkData,1> *)(*(longlong *)(lVar3 + 0x7f0) + 0x70));
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 0x7f0) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x7f0);
  iVar2 = *(int *)(lVar3 + 0xa0);
  plVar9 = *(longlong **)(lVar3 + 0x98);
  plVar10 = plVar9 + (longlong)iVar2 * 2;
  while( true ) {
    if (*(int *)(lVar3 + 0xa0) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar9 == plVar10) break;
    if (*plVar9 != 0) {
      lVar4 = *(longlong *)this;
      if (*(longlong *)(lVar4 + 0x7f0) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar4 = *(longlong *)(lVar4 + 0x7f0);
      if (*plVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pTVar5 = (TReferenceControllerBase<1> *)plVar9[1];
      local_c8.Object = (FMesh *)*plVar9;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c8.SharedReferenceCount.ReferenceController = pTVar5;
      if (local_c8.Object == (FMesh *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      LoadMorphTargetsData
                (&local_98,&local_c8,
                 (TMap<unsigned_int,FMorphTargetMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMorphTargetMeshData,0>_>
                  *)(lVar4 + 0xa8));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      lVar4 = *(longlong *)this;
      if (*(longlong *)(lVar4 + 0x7f0) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar4 = *(longlong *)(lVar4 + 0x7f0);
      if (*plVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pTVar5 = (TReferenceControllerBase<1> *)plVar9[1];
      local_b8.Object = (FMesh *)*plVar9;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b8.SharedReferenceCount.ReferenceController = pTVar5;
      if (local_b8.Object == (FMesh *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      LoadMorphTargetsMetadata
                (&local_98,&local_b8,
                 (TMap<unsigned_int,FMorphTargetMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMorphTargetMeshData,0>_>
                  *)(lVar4 + 0xa8));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      lVar4 = *(longlong *)this;
      if (*(longlong *)(lVar4 + 0x7f0) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar4 = *(longlong *)(lVar4 + 0x7f0);
      if (*plVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pTVar5 = (TReferenceControllerBase<1> *)plVar9[1];
      local_a8.Object = (FMesh *)*plVar9;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a8.SharedReferenceCount.ReferenceController = pTVar5;
      if (local_a8.Object == (FMesh *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      LoadClothing(&local_98,&local_a8,
                   (TMap<unsigned_int,FClothingMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FClothingMeshData,0>_>
                    *)(lVar4 + 0xf8));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    plVar9 = plVar9 + 2;
  }
  FVar8 = FMutableStreamRequest::Stream(&local_98);
  this_00 = UE::Tasks::Private::GetCurrentTask();
  if (this_00 == (FTaskBase *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x1ff,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  UE::Tasks::Private::FTaskBase::AddNested(this_00,*(FTaskBase **)FVar8.Pimpl.Reference);
  if (local_res10 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res10 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res10)(local_res10,1);
    }
  }
  if (local_98.BlockReadInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.BlockReadInfos.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.HeapMemory.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IAsyncReadFileHandle,1>,int>
            ((TSharedPtr<IAsyncReadFileHandle,1> *)local_98.OpenFileHandles.AllocatorInstance.Data,
             local_98.OpenFileHandles.ArrayNum);
  if ((TSharedPtr<IAsyncReadFileHandle,1> *)local_98.OpenFileHandles.AllocatorInstance.Data !=
      (TSharedPtr<IAsyncReadFileHandle,1> *)0x0) {
    FMemory::Free(local_98.OpenFileHandles.AllocatorInstance.Data);
  }
  if (local_98.OpenFilesIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.OpenFilesIds.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.ModelStreamableBulkData.SharedReferenceCount.ReferenceController);
  return;
}

// Abort @ 14ac13dc0

void __thiscall FCustomizableObjectMeshStreamIn::Abort(FCustomizableObjectMeshStreamIn *this)

{
  UCustomizableObjectSystem *this_00;
  UCustomizableObjectSystemPrivate *pUVar1;
  
  if (((this->field_0x5c == '\0') && (*(int *)&this->field_0x60 != 0)) && (bEnableGCHangFix)) {
    if (*(int *)&this->field_0x60 != 0) {
      this->field_0x5c = 1;
    }
    LOCK();
    *(undefined4 *)&this->field_0x58 = 0;
    UNLOCK();
    if ((this->MutableTaskId != 0) &&
       (UCustomizableObjectSystemPrivate::SSystem != (UCustomizableObjectSystem *)0x0)) {
      this_00 = UCustomizableObjectSystem::GetInstance();
      pUVar1 = UCustomizableObjectSystem::GetPrivate(this_00);
      if (pUVar1 != (UCustomizableObjectSystemPrivate *)0x0) {
        FMutableTaskGraph::CancelMutableThreadTaskLowPriority
                  (&pUVar1->MutableTaskGraph,this->MutableTaskId);
        return;
      }
    }
  }
  else if (*(int *)&this->field_0x60 != 0) {
    this->field_0x5c = 1;
  }
  return;
}

// CancelMeshUpdate @ 14ac16610

void __thiscall
FCustomizableObjectMeshStreamIn::CancelMeshUpdate
          (FCustomizableObjectMeshStreamIn *this,FSkelMeshUpdateContext *param_1)

{
  undefined1 *puVar1;
  UCustomizableObjectSystemPrivate *pUVar2;
  code *pcVar3;
  bool bVar4;
  UCustomizableObjectSystem *pUVar5;
  bool bVar6;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId355,
               "Mutable_FCustomizableObjectMeshStreamIn::CancelMeshUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
               ,0x163);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId355);
  }
  pUVar5 = UCustomizableObjectSystem::GetInstance();
  if (((pUVar5->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x32c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar2 = (pUVar5->Private).field0_0x0.DebugPtr;
  if ((pUVar2 == (UCustomizableObjectSystemPrivate *)0x0) || (this->MutableTaskId == 0)) {
    if ((*(int *)&this->field_0x58 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TaskSynchronization.GetValue() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                           ,0x176,L""), bVar4)) {
code_r0x00014ac1675a:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    bVar4 = FMutableTaskGraph::CancelMutableThreadTaskLowPriority
                      (&pUVar2->MutableTaskGraph,this->MutableTaskId);
    if (bVar4) {
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->OperationData != (TSharedPtr<FMutableUpdateMeshContext,1> *)&local_18) {
        (this->OperationData).Object = (FMutableUpdateMeshContext *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->OperationData).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
      LOCK();
      puVar1 = &this->field_0x58;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((*(int *)puVar1 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TaskSynchronization.GetValue() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                             ,0x171,L""), bVar4)) goto code_r0x00014ac1675a;
    }
  }
  FRenderAssetUpdate::Tick((FRenderAssetUpdate *)this,TT_None);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ConvertMesh @ 14ac171c0

void __thiscall
FCustomizableObjectMeshStreamIn::ConvertMesh
          (FCustomizableObjectMeshStreamIn *this,FSkelMeshUpdateContext *param_1,bool *param_2)

{
  TSharedPtr<FMutableUpdateMeshContext,1> *pTVar1;
  FMutableUpdateMeshContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FMesh *this_00;
  FSkeletalMeshLODRenderData *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  FMeshBufferSet *this_01;
  FSkeletalMeshRenderData *this_02;
  longlong lVar12;
  FSharedReferencer<1> FVar13;
  uint uVar14;
  ulonglong uVar15;
  USkeletalMesh *pUVar16;
  uint uVar17;
  bool bVar18;
  uint local_res8;
  longlong local_78;
  longlong local_60;
  FSharedReferencer<1> aFStack_58 [3];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId385,"Mutable_FCustomizableObjectMeshStreamIn::ConvertMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
               ,0x181);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId385);
  }
  if ((*(int *)&this->field_0x58 != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!TaskSynchronization.GetValue()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                         ,0x183,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar16 = param_1->Mesh;
  if (pUVar16 != (USkeletalMesh *)0x0) {
    pUVar11 = UCustomizableObjectSkeletalMesh::StaticClass();
    iVar10 = (int)pUVar11->_padding_;
    if ((iVar10 <= *(int *)(pUVar16->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
        &pUVar11->_padding_)) goto LAB_14ac17287;
  }
  pUVar16 = (USkeletalMesh *)0x0;
LAB_14ac17287:
  if (((this->field_0x5c == '\0') && (pUVar16 != (USkeletalMesh *)0x0)) &&
     (param_1->RenderData != (FSkeletalMeshRenderData *)0x0)) {
    local_res8 = *(uint *)&this->field_0x14;
    uVar15 = (ulonglong)(int)local_res8;
    pTVar1 = &this->OperationData;
    if ((int)local_res8 < *(int *)&this->field_0x10) {
      local_78 = uVar15 * 8;
      do {
        uVar14 = (uint)uVar15;
        uVar17 = param_1->AssetLODBias + uVar14;
        if ((pTVar1->Object == (FMutableUpdateMeshContext *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = pTVar1->Object;
        uVar9 = 0;
        if ((int)uVar17 < (pFVar2->Meshes).ArrayNum) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (pFVar2->Meshes).AllocatorInstance.Data;
        lVar12 = (longlong)(int)uVar17 * 0x10;
        FVar13.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar3 + lVar12 + 8);
        this_00 = *(FMesh **)(pFVar3 + lVar12);
        if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar13.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (this_00 == (FMesh *)0x0) {
          iVar10 = 0x194;
LAB_14ac17672:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                             ,iVar10,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)(*(longlong *)this + 0x20))(this);
          goto LAB_14ac17617;
        }
        iVar10 = UE::Mutable::Private::FMesh::GetVertexCount(this_00);
        if ((iVar10 == 0) ||
           (iVar10 = UE::Mutable::Private::FMesh::GetSurfaceCount(this_00), iVar10 == 0)) {
LAB_14ac17664:
          iVar10 = 0x19b;
          goto LAB_14ac17672;
        }
        this_01 = UE::Mutable::Private::FMesh::GetVertexBuffers(this_00);
        bVar6 = UE::Mutable::Private::FMeshBufferSet::IsDescriptor(this_01);
        if (bVar6) goto LAB_14ac17664;
        this_02 = (FSkeletalMeshRenderData *)(**(code **)(pUVar16->_padding_ + 0x398))(pUVar16);
        bVar6 = FSkeletalMeshRenderData::RequiresCPUSkinning(this_02,GMaxRHIFeatureLevel);
        if ((bVar6) ||
           (cVar7 = (**(code **)(pUVar16->_padding_ + 0x468))(pUVar16,uVar17), cVar7 != '\0')) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        uVar9 = 0;
        if ((int)uVar14 < (param_1->LODResourcesView).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = *(FSkeletalMeshLODRenderData **)
                  (local_78 + (longlong)(param_1->LODResourcesView).DataPtr);
        UnrealConversionUtils::CopyMutableVertexBuffers(pFVar4,this_00,bVar6);
        uVar14 = 0;
        if ((int)uVar17 < (int)pUVar16[1]._padding_) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UnrealConversionUtils::CopyMutableIndexBuffers
                  (pFVar4,this_00,
                   (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                   (lVar12 + pUVar16[1]._padding_),param_2);
        UnrealConversionUtils::CopyMutableSkinWeightProfilesBuffers
                  (pFVar4,pUVar16,uVar17,this_00,
                   (TArray<TTuple<unsigned_int,FName>,TSizedDefaultAllocator<32>_> *)
                   &pUVar16[1]._padding_);
        if ((pTVar1->Object == (FMutableUpdateMeshContext *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UnrealConversionUtils::MorphTargetVertexInfoBuffers
                  (pFVar4,pUVar16,this_00,&pTVar1->Object->MorphTargetMeshData,uVar17);
        if ((pTVar1->Object == (FMutableUpdateMeshContext *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UnrealConversionUtils::ClothVertexBuffers
                  (pFVar4,this_00,&pTVar1->Object->ClothingMeshData,uVar17);
        UnrealConversionUtils::UpdateSkeletalMeshLODRenderDataBuffersSize(pFVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar13.ReferenceController);
        local_78 = local_78 + 8;
        local_res8 = local_res8 + 1;
        uVar15 = (ulonglong)local_res8;
      } while ((int)local_res8 < *(int *)&this->field_0x10);
    }
    local_60 = 0;
    aFStack_58[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar13.ReferenceController = aFStack_58[0].ReferenceController;
    if (pTVar1 != (TSharedPtr<FMutableUpdateMeshContext,1> *)&local_60) {
      pTVar1->Object = (FMutableUpdateMeshContext *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OperationData).SharedReferenceCount,aFStack_58);
      FVar13.ReferenceController = aFStack_58[0].ReferenceController;
    }
LAB_14ac17617:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar13.ReferenceController);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DoCancelMeshUpdate @ 14ac18ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCustomizableObjectMeshStreamIn::DoCancelMeshUpdate
          (FCustomizableObjectMeshStreamIn *this,FSkelMeshUpdateContext *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  UCustomizableObjectSystemPrivate *pUVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  UCustomizableObjectSystem *pUVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  FSharedReferencer<1> FStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined **local_78;
  FCustomizableObjectMeshStreamIn *local_70;
  undefined ***local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId164,
               "Mutable_FCustomizableObjectMeshStreamIn::DoCancelMeshUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
               ,0xa4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId164);
  }
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId355,
               "Mutable_FCustomizableObjectMeshStreamIn::CancelMeshUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
               ,0x163);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId355);
  }
  pUVar13 = UCustomizableObjectSystem::GetInstance();
  if (((pUVar13->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Private",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                          ,0x32c,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar3 = (pUVar13->Private).field0_0x0.DebugPtr;
  if ((pUVar3 == (UCustomizableObjectSystemPrivate *)0x0) || (this->MutableTaskId == 0)) {
    if ((*(int *)&this->field_0x58 != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskSynchronization.GetValue() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                            ,0x176,L""), bVar12)) {
code_r0x00014ac18c82:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    bVar12 = FMutableTaskGraph::CancelMutableThreadTaskLowPriority
                       (&pUVar3->MutableTaskGraph,this->MutableTaskId);
    if (bVar12) {
      local_f8 = 0;
      FStack_f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->OperationData != (TSharedPtr<FMutableUpdateMeshContext,1> *)&local_f8) {
        (this->OperationData).Object = (FMutableUpdateMeshContext *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->OperationData).SharedReferenceCount,&FStack_f0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_f0.ReferenceController);
      LOCK();
      puVar1 = &this->field_0x58;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((*(int *)puVar1 != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskSynchronization.GetValue() == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                              ,0x171,L""), bVar12)) goto code_r0x00014ac18c82;
    }
  }
  FRenderAssetUpdate::Tick((FRenderAssetUpdate *)this,TT_None);
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  iVar2 = param_1->CurrentThread;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCancelMeshUpdate'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoCancelMeshUpdate'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_60 = (undefined ***)0x0;
  local_70 = this;
  local_58 = 0;
  local_30 = (longlong *)0x0;
  if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("TaskState == TS_Locked || TaskState == TS_Init",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                          ,0x1b,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)&this->field_0x68 = 0;
  local_e8 = local_58;
  uStack_c0 = (longlong *)0x0;
  if (local_58 != 0) {
    plVar15 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar15 = local_30;
    }
    (**(code **)*plVar15)(plVar15,&local_d8);
  }
  lVar10 = *(longlong *)&this->field_0x70;
  uVar11 = *(undefined8 *)&this->field_0x78;
  uVar5 = *(undefined4 *)&this->field_0x80;
  uVar6 = *(undefined4 *)&this->field_0x84;
  uVar7 = *(undefined4 *)&this->field_0x88;
  uVar8 = *(undefined4 *)&this->field_0x8c;
  uVar9 = *(undefined8 *)&this->field_0x90;
  plVar15 = *(longlong **)&this->field_0x98;
  *(longlong *)&this->field_0x70 = local_e8;
  *(undefined8 *)&this->field_0x78 = uStack_e0;
  *(undefined4 *)&this->field_0x80 = local_d8;
  *(undefined4 *)&this->field_0x84 = uStack_d4;
  *(undefined4 *)&this->field_0x88 = uStack_d0;
  *(undefined4 *)&this->field_0x8c = uStack_cc;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_c8;
  *(undefined4 *)&this->field_0x94 = local_c8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_c0;
  *(undefined4 *)&this->field_0x9c = uStack_c0._4_4_;
  local_d8 = uVar5;
  uStack_d4 = uVar6;
  uStack_d0 = uVar7;
  uStack_cc = uVar8;
  local_c8 = uVar9;
  uStack_c0 = plVar15;
  local_e8 = lVar10;
  uStack_e0 = uVar11;
  if (lVar10 != 0) {
    plVar14 = (longlong *)&local_d8;
    if (plVar15 != (longlong *)0x0) {
      plVar14 = plVar15;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  *(int *)&this->field_0xa0 = iVar2;
  local_b8 = local_88;
  uStack_90 = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    pppuVar16 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar16 = local_60;
    }
    (*(code *)**pppuVar16)(pppuVar16,&local_a8);
  }
  lVar10 = *(longlong *)&this->field_0xb0;
  uVar11 = *(undefined8 *)&this->field_0xb8;
  uVar5 = *(undefined4 *)&this->field_0xc0;
  uVar6 = *(undefined4 *)&this->field_0xc4;
  uVar7 = *(undefined4 *)&this->field_0xc8;
  uVar8 = *(undefined4 *)&this->field_0xcc;
  uVar9 = *(undefined8 *)&this->field_0xd0;
  plVar15 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_b8;
  *(undefined8 *)&this->field_0xb8 = uStack_b0;
  *(undefined4 *)&this->field_0xc0 = local_a8;
  *(undefined4 *)&this->field_0xc4 = uStack_a4;
  *(undefined4 *)&this->field_0xc8 = uStack_a0;
  *(undefined4 *)&this->field_0xcc = uStack_9c;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_98;
  *(undefined4 *)&this->field_0xd4 = local_98._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_90;
  *(undefined4 *)&this->field_0xdc = uStack_90._4_4_;
  local_b8 = (code *)lVar10;
  uStack_b0 = uVar11;
  local_a8 = uVar5;
  uStack_a4 = uVar6;
  uStack_a0 = uVar7;
  uStack_9c = uVar8;
  local_98 = uVar9;
  uStack_90 = plVar15;
  if (lVar10 != 0) {
    plVar14 = (longlong *)&local_a8;
    if (plVar15 != (longlong *)0x0) {
      plVar14 = plVar15;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_58 != 0) {
    plVar15 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar15 = local_30;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if (local_88 != (code *)0x0) {
    pppuVar16 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar16 = local_60;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DoConvertResources @ 14ac18e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCustomizableObjectMeshStreamIn::DoConvertResources
          (FCustomizableObjectMeshStreamIn *this,FSkelMeshUpdateContext *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  undefined ***pppuVar13;
  longlong *plVar14;
  undefined ***pppuVar15;
  undefined1 auStack_1e8 [32];
  bool local_1c8 [16];
  code *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  code *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  code *local_158;
  undefined **local_148;
  FCustomizableObjectMeshStreamIn *local_140;
  undefined ***local_130;
  code *local_128;
  undefined **local_118;
  FCustomizableObjectMeshStreamIn *local_110;
  undefined ***local_100;
  code *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined **local_88;
  FCustomizableObjectMeshStreamIn *local_80;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  FCustomizableObjectMeshStreamIn *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if ((param_1->CurrentThread != 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.CurrentThread == TT_Async",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                          ,0x82,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId132,
               "Mutable_FCustomizableObjectMeshStreamIn::DoConvertResources",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
               ,0x84);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId132);
  }
  local_1c8[0] = false;
  ConvertMesh(this,param_1,local_1c8);
  if (local_1c8[0] == false) {
    iVar1 = param_1->CurrentThread;
    uVar2 = *(undefined4 *)&this->field_0x7e8;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::`14'::<lambda_4>,0,0>
                ::_vftable_;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l14::<lambda_4>,void,FSkelMeshUpdateContext_const_&>
               ::Call;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::`14'::<lambda_3>,0,0>
                ::_vftable_;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l14::<lambda_3>,void,FSkelMeshUpdateContext_const_&>
               ::Call;
    local_40 = (undefined ***)0x0;
    local_50 = this;
    local_70 = (undefined ***)0x0;
    local_80 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)&this->field_0x68 = uVar2;
    local_f8 = local_98;
    uStack_d0 = (longlong *)0x0;
    if (local_98 != (code *)0x0) {
      pppuVar15 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar15 = local_70;
      }
      (*(code *)**pppuVar15)(pppuVar15,&local_e8);
    }
    lVar9 = *(longlong *)&this->field_0x70;
    uVar10 = *(undefined8 *)&this->field_0x78;
    uVar2 = *(undefined4 *)&this->field_0x80;
    uVar4 = *(undefined4 *)&this->field_0x84;
    uVar5 = *(undefined4 *)&this->field_0x88;
    uVar6 = *(undefined4 *)&this->field_0x8c;
    uVar7 = *(undefined8 *)&this->field_0x90;
    plVar8 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 = local_f8;
    *(undefined8 *)&this->field_0x78 = uStack_f0;
    *(undefined4 *)&this->field_0x80 = local_e8;
    *(undefined4 *)&this->field_0x84 = uStack_e4;
    *(undefined4 *)&this->field_0x88 = uStack_e0;
    *(undefined4 *)&this->field_0x8c = uStack_dc;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_d8;
    *(undefined4 *)&this->field_0x94 = local_d8._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_d0;
    *(undefined4 *)&this->field_0x9c = uStack_d0._4_4_;
    local_f8 = (code *)lVar9;
    uStack_f0 = uVar10;
    local_e8 = uVar2;
    uStack_e4 = uVar4;
    uStack_e0 = uVar5;
    uStack_dc = uVar6;
    local_d8 = uVar7;
    uStack_d0 = plVar8;
    if (lVar9 != 0) {
      plVar14 = (longlong *)&local_e8;
      if (plVar8 != (longlong *)0x0) {
        plVar14 = plVar8;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    *(int *)&this->field_0xa0 = iVar1;
    local_c8 = local_68;
    uStack_a0 = (longlong *)0x0;
    if (local_68 != (code *)0x0) {
      pppuVar15 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar15 = local_40;
      }
      (*(code *)**pppuVar15)(pppuVar15,&local_b8);
    }
    lVar9 = *(longlong *)&this->field_0xb0;
    uVar10 = *(undefined8 *)&this->field_0xb8;
    uVar2 = *(undefined4 *)&this->field_0xc0;
    uVar4 = *(undefined4 *)&this->field_0xc4;
    uVar5 = *(undefined4 *)&this->field_0xc8;
    uVar6 = *(undefined4 *)&this->field_0xcc;
    uVar7 = *(undefined8 *)&this->field_0xd0;
    plVar8 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_c8;
    *(undefined8 *)&this->field_0xb8 = uStack_c0;
    *(undefined4 *)&this->field_0xc0 = (undefined4)local_b8;
    *(undefined4 *)&this->field_0xc4 = local_b8._4_4_;
    *(undefined4 *)&this->field_0xc8 = uStack_b0;
    *(undefined4 *)&this->field_0xcc = uStack_ac;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_a8;
    *(undefined4 *)&this->field_0xd4 = local_a8._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_a0;
    *(undefined4 *)&this->field_0xdc = uStack_a0._4_4_;
    local_c8 = (code *)lVar9;
    uStack_c0 = uVar10;
    local_b8._0_4_ = uVar2;
    local_b8._4_4_ = uVar4;
    uStack_b0 = uVar5;
    uStack_ac = uVar6;
    local_a8 = uVar7;
    uStack_a0 = plVar8;
    if (lVar9 != 0) {
      plVar14 = &local_b8;
      if (plVar8 != (longlong *)0x0) {
        plVar14 = plVar8;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if (local_98 != (code *)0x0) {
      pppuVar15 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar15 = local_70;
      }
      (*(code *)(*pppuVar15)[2])();
    }
    if (local_68 == (code *)0x0) goto LAB_14ac1933f;
    pppuVar15 = &local_58;
    pppuVar13 = local_40;
  }
  else {
    local_100 = (undefined ***)0x0;
    local_118 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::`12'::<lambda_2>,0,0>
                 ::_vftable_;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l12::<lambda_2>,void,FSkelMeshUpdateContext_const_&>
                ::Call;
    local_148 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::`12'::<lambda_1>,0,0>
                 ::_vftable_;
    local_158 = UE::Core::Private::Function::
                TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l12::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
                ::Call;
    local_110 = this;
    local_130 = (undefined ***)0x0;
    local_140 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)&this->field_0x68 = 3;
    local_1b8 = local_158;
    uStack_190 = (longlong *)0x0;
    if (local_158 != (code *)0x0) {
      pppuVar15 = &local_148;
      if (local_130 != (undefined ***)0x0) {
        pppuVar15 = local_130;
      }
      (*(code *)**pppuVar15)(pppuVar15,&local_1a8);
    }
    lVar9 = *(longlong *)&this->field_0x70;
    uVar10 = *(undefined8 *)&this->field_0x78;
    uVar2 = *(undefined4 *)&this->field_0x80;
    uVar4 = *(undefined4 *)&this->field_0x84;
    uVar5 = *(undefined4 *)&this->field_0x88;
    uVar6 = *(undefined4 *)&this->field_0x8c;
    uVar7 = *(undefined8 *)&this->field_0x90;
    plVar8 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 = local_1b8;
    *(undefined8 *)&this->field_0x78 = uStack_1b0;
    *(undefined4 *)&this->field_0x80 = (undefined4)local_1a8;
    *(undefined4 *)&this->field_0x84 = local_1a8._4_4_;
    *(undefined4 *)&this->field_0x88 = uStack_1a0;
    *(undefined4 *)&this->field_0x8c = uStack_19c;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_198;
    *(undefined4 *)&this->field_0x94 = local_198._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_190;
    *(undefined4 *)&this->field_0x9c = uStack_190._4_4_;
    local_1a8._0_4_ = uVar2;
    local_1a8._4_4_ = uVar4;
    uStack_1a0 = uVar5;
    uStack_19c = uVar6;
    local_198 = uVar7;
    uStack_190 = plVar8;
    local_1b8 = (code *)lVar9;
    uStack_1b0 = uVar10;
    if (lVar9 != 0) {
      plVar14 = &local_1a8;
      if (plVar8 != (longlong *)0x0) {
        plVar14 = plVar8;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    *(undefined4 *)&this->field_0xa0 = 0;
    local_188 = local_128;
    uStack_160 = (longlong *)0x0;
    if (local_128 != (code *)0x0) {
      pppuVar15 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar15 = local_100;
      }
      (*(code *)**pppuVar15)(pppuVar15,&local_178);
    }
    lVar9 = *(longlong *)&this->field_0xb0;
    uVar10 = *(undefined8 *)&this->field_0xb8;
    uVar2 = *(undefined4 *)&this->field_0xc0;
    uVar4 = *(undefined4 *)&this->field_0xc4;
    uVar5 = *(undefined4 *)&this->field_0xc8;
    uVar6 = *(undefined4 *)&this->field_0xcc;
    uVar7 = *(undefined8 *)&this->field_0xd0;
    plVar8 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_188;
    *(undefined8 *)&this->field_0xb8 = uStack_180;
    *(undefined4 *)&this->field_0xc0 = (undefined4)local_178;
    *(undefined4 *)&this->field_0xc4 = local_178._4_4_;
    *(undefined4 *)&this->field_0xc8 = uStack_170;
    *(undefined4 *)&this->field_0xcc = uStack_16c;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_168;
    *(undefined4 *)&this->field_0xd4 = local_168._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_160;
    *(undefined4 *)&this->field_0xdc = uStack_160._4_4_;
    local_188 = (code *)lVar9;
    uStack_180 = uVar10;
    local_178._0_4_ = uVar2;
    local_178._4_4_ = uVar4;
    uStack_170 = uVar5;
    uStack_16c = uVar6;
    local_168 = uVar7;
    uStack_160 = plVar8;
    if (lVar9 != 0) {
      plVar14 = &local_178;
      if (plVar8 != (longlong *)0x0) {
        plVar14 = plVar8;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if (local_158 != (code *)0x0) {
      pppuVar15 = &local_148;
      if (local_130 != (undefined ***)0x0) {
        pppuVar15 = local_130;
      }
      (*(code *)(*pppuVar15)[2])();
    }
    if (local_128 == (code *)0x0) goto LAB_14ac1933f;
    pppuVar15 = &local_118;
    pppuVar13 = local_100;
  }
  if (pppuVar13 != (undefined ***)0x0) {
    pppuVar15 = pppuVar13;
  }
  (*(code *)(*pppuVar15)[2])();
LAB_14ac1933f:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DoCreateBuffers @ 14ac19390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCustomizableObjectMeshStreamIn::DoCreateBuffers
          (FCustomizableObjectMeshStreamIn *this,FSkelMeshUpdateContext *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong *plVar11;
  undefined ***pppuVar12;
  bool bVar13;
  undefined1 auStack_108 [32];
  code *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined **local_78;
  FCustomizableObjectMeshStreamIn *local_70;
  undefined ***local_60;
  code *local_58;
  undefined **local_48;
  FCustomizableObjectMeshStreamIn *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId149,
               "Mutable_FCustomizableObjectMeshStreamIn::DoCreateBuffers",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
               ,0x95);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId149);
  }
  FSkeletalMeshStreamIn::CreateBuffers((FSkeletalMeshStreamIn *)this,param_1);
  if ((*(int *)&this->field_0x58 != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!TaskSynchronization.GetValue()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                          ,0x99,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_40 = this;
  local_30 = (undefined ***)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::__l2::<lambda_2>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_60 = (undefined ***)0x0;
  local_70 = this;
  if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TaskState == TS_Locked || TaskState == TS_Init",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                          ,0x1b,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&this->field_0x68 = 1;
  local_e8 = local_88;
  uStack_c0 = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    pppuVar12 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar12 = local_60;
    }
    (*(code *)**pppuVar12)(pppuVar12,&local_d8);
  }
  lVar8 = *(longlong *)&this->field_0x70;
  uVar9 = *(undefined8 *)&this->field_0x78;
  uVar2 = *(undefined4 *)&this->field_0x80;
  uVar3 = *(undefined4 *)&this->field_0x84;
  uVar4 = *(undefined4 *)&this->field_0x88;
  uVar5 = *(undefined4 *)&this->field_0x8c;
  uVar6 = *(undefined8 *)&this->field_0x90;
  plVar7 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_e8;
  *(undefined8 *)&this->field_0x78 = uStack_e0;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_d8;
  *(undefined4 *)&this->field_0x84 = local_d8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_d0;
  *(undefined4 *)&this->field_0x8c = uStack_cc;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_c8;
  *(undefined4 *)&this->field_0x94 = local_c8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_c0;
  *(undefined4 *)&this->field_0x9c = uStack_c0._4_4_;
  local_d8._0_4_ = uVar2;
  local_d8._4_4_ = uVar3;
  uStack_d0 = uVar4;
  uStack_cc = uVar5;
  local_c8 = uVar6;
  uStack_c0 = plVar7;
  local_e8 = (code *)lVar8;
  uStack_e0 = uVar9;
  if (lVar8 != 0) {
    plVar11 = &local_d8;
    if (plVar7 != (longlong *)0x0) {
      plVar11 = plVar7;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  *(undefined4 *)&this->field_0xa0 = 1;
  local_b8 = local_58;
  uStack_90 = (longlong *)0x0;
  if (local_58 != (code *)0x0) {
    pppuVar12 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar12 = local_30;
    }
    (*(code *)**pppuVar12)(pppuVar12,&local_a8);
  }
  lVar8 = *(longlong *)&this->field_0xb0;
  uVar9 = *(undefined8 *)&this->field_0xb8;
  uVar2 = *(undefined4 *)&this->field_0xc0;
  uVar3 = *(undefined4 *)&this->field_0xc4;
  uVar4 = *(undefined4 *)&this->field_0xc8;
  uVar5 = *(undefined4 *)&this->field_0xcc;
  uVar6 = *(undefined8 *)&this->field_0xd0;
  plVar7 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_b8;
  *(undefined8 *)&this->field_0xb8 = uStack_b0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_a8;
  *(undefined4 *)&this->field_0xc4 = local_a8._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_a0;
  *(undefined4 *)&this->field_0xcc = uStack_9c;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_98;
  *(undefined4 *)&this->field_0xd4 = local_98._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_90;
  *(undefined4 *)&this->field_0xdc = uStack_90._4_4_;
  local_b8 = (code *)lVar8;
  uStack_b0 = uVar9;
  local_a8._0_4_ = uVar2;
  local_a8._4_4_ = uVar3;
  uStack_a0 = uVar4;
  uStack_9c = uVar5;
  local_98 = uVar6;
  uStack_90 = plVar7;
  if (lVar8 != 0) {
    plVar11 = &local_a8;
    if (plVar7 != (longlong *)0x0) {
      plVar11 = plVar7;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_88 != (code *)0x0) {
    pppuVar12 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar12 = local_60;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  if (local_58 != (code *)0x0) {
    pppuVar12 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar12 = local_30;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DoInitiate @ 14ac19640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCustomizableObjectMeshStreamIn::DoInitiate
          (FCustomizableObjectMeshStreamIn *this,FSkelMeshUpdateContext *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  undefined ***pppuVar14;
  undefined1 auStack_1c8 [32];
  code *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  code *local_148;
  undefined **local_138;
  FCustomizableObjectMeshStreamIn *local_130;
  undefined ***local_120;
  code *local_118;
  undefined **local_108;
  FCustomizableObjectMeshStreamIn *local_100;
  undefined ***local_f0;
  code *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined **local_78;
  FCustomizableObjectMeshStreamIn *local_70;
  undefined ***local_60;
  code *local_58;
  undefined **local_48;
  FCustomizableObjectMeshStreamIn *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if ((param_1->CurrentThread != 2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.CurrentThread == TT_Async",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                          ,0x6f,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId113,"Mutable_FCustomizableObjectMeshStreamIn::DoInitiate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
               ,0x71);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId113);
  }
  RequestMeshUpdate(this,param_1);
  if (bEnableGCHangFix == false) {
    local_30 = (undefined ***)0x0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::`14'::<lambda_4>,0,0>
                ::_vftable_;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l14::<lambda_4>,void,FSkelMeshUpdateContext_const_&>
               ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::`14'::<lambda_3>,0,0>
                ::_vftable_;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l14::<lambda_3>,void,FSkelMeshUpdateContext_const_&>
               ::Call;
    local_40 = this;
    local_60 = (undefined ***)0x0;
    local_70 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar11)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&this->field_0x68 = 2;
    local_e8 = local_88;
    uStack_c0 = (longlong *)0x0;
    if (local_88 != (code *)0x0) {
      pppuVar14 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar14 = local_60;
      }
      (*(code *)**pppuVar14)(pppuVar14,&local_d8);
    }
    lVar8 = *(longlong *)&this->field_0x70;
    uVar9 = *(undefined8 *)&this->field_0x78;
    uVar2 = *(undefined4 *)&this->field_0x80;
    uVar3 = *(undefined4 *)&this->field_0x84;
    uVar4 = *(undefined4 *)&this->field_0x88;
    uVar5 = *(undefined4 *)&this->field_0x8c;
    uVar6 = *(undefined8 *)&this->field_0x90;
    plVar7 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 = local_e8;
    *(undefined8 *)&this->field_0x78 = uStack_e0;
    *(undefined4 *)&this->field_0x80 = (undefined4)local_d8;
    *(undefined4 *)&this->field_0x84 = local_d8._4_4_;
    *(undefined4 *)&this->field_0x88 = uStack_d0;
    *(undefined4 *)&this->field_0x8c = uStack_cc;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_c8;
    *(undefined4 *)&this->field_0x94 = local_c8._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_c0;
    *(undefined4 *)&this->field_0x9c = uStack_c0._4_4_;
    local_e8 = (code *)lVar8;
    uStack_e0 = uVar9;
    local_d8._0_4_ = uVar2;
    local_d8._4_4_ = uVar3;
    uStack_d0 = uVar4;
    uStack_cc = uVar5;
    local_c8 = uVar6;
    uStack_c0 = plVar7;
    if (lVar8 != 0) {
      plVar13 = &local_d8;
      if (plVar7 != (longlong *)0x0) {
        plVar13 = plVar7;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    *(undefined4 *)&this->field_0xa0 = 2;
    local_b8 = local_58;
    uStack_90 = (longlong *)0x0;
    if (local_58 != (code *)0x0) {
      pppuVar14 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar14 = local_30;
      }
      (*(code *)**pppuVar14)(pppuVar14,&local_a8);
    }
    lVar8 = *(longlong *)&this->field_0xb0;
    uVar9 = *(undefined8 *)&this->field_0xb8;
    uVar2 = *(undefined4 *)&this->field_0xc0;
    uVar3 = *(undefined4 *)&this->field_0xc4;
    uVar4 = *(undefined4 *)&this->field_0xc8;
    uVar5 = *(undefined4 *)&this->field_0xcc;
    uVar6 = *(undefined8 *)&this->field_0xd0;
    plVar7 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_b8;
    *(undefined8 *)&this->field_0xb8 = uStack_b0;
    *(undefined4 *)&this->field_0xc0 = (undefined4)local_a8;
    *(undefined4 *)&this->field_0xc4 = local_a8._4_4_;
    *(undefined4 *)&this->field_0xc8 = uStack_a0;
    *(undefined4 *)&this->field_0xcc = uStack_9c;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_98;
    *(undefined4 *)&this->field_0xd4 = local_98._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_90;
    *(undefined4 *)&this->field_0xdc = uStack_90._4_4_;
    local_b8 = (code *)lVar8;
    uStack_b0 = uVar9;
    local_a8._0_4_ = uVar2;
    local_a8._4_4_ = uVar3;
    uStack_a0 = uVar4;
    uStack_9c = uVar5;
    local_98 = uVar6;
    uStack_90 = plVar7;
    if (lVar8 != 0) {
      plVar13 = &local_a8;
      if (plVar7 != (longlong *)0x0) {
        plVar13 = plVar7;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (local_88 != (code *)0x0) {
      pppuVar14 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar14 = local_60;
      }
      (*(code *)(*pppuVar14)[2])();
    }
    if (local_58 == (code *)0x0) goto LAB_14ac19ac1;
    pppuVar14 = &local_48;
    pppuVar12 = local_30;
  }
  else {
    local_f0 = (undefined ***)0x0;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::`12'::<lambda_2>,0,0>
                 ::_vftable_;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l12::<lambda_2>,void,FSkelMeshUpdateContext_const_&>
                ::Call;
    local_138 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::`12'::<lambda_1>,0,0>
                 ::_vftable_;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l12::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
                ::Call;
    local_100 = this;
    local_120 = (undefined ***)0x0;
    local_130 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar11)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&this->field_0x68 = 2;
    local_1a8 = local_148;
    uStack_180 = (longlong *)0x0;
    if (local_148 != (code *)0x0) {
      pppuVar14 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar14 = local_120;
      }
      (*(code *)**pppuVar14)(pppuVar14,&local_198);
    }
    lVar8 = *(longlong *)&this->field_0x70;
    uVar9 = *(undefined8 *)&this->field_0x78;
    uVar2 = *(undefined4 *)&this->field_0x80;
    uVar3 = *(undefined4 *)&this->field_0x84;
    uVar4 = *(undefined4 *)&this->field_0x88;
    uVar5 = *(undefined4 *)&this->field_0x8c;
    uVar6 = *(undefined8 *)&this->field_0x90;
    plVar7 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 = local_1a8;
    *(undefined8 *)&this->field_0x78 = uStack_1a0;
    *(undefined4 *)&this->field_0x80 = (undefined4)local_198;
    *(undefined4 *)&this->field_0x84 = local_198._4_4_;
    *(undefined4 *)&this->field_0x88 = uStack_190;
    *(undefined4 *)&this->field_0x8c = uStack_18c;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_188;
    *(undefined4 *)&this->field_0x94 = local_188._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_180;
    *(undefined4 *)&this->field_0x9c = uStack_180._4_4_;
    local_198._0_4_ = uVar2;
    local_198._4_4_ = uVar3;
    uStack_190 = uVar4;
    uStack_18c = uVar5;
    local_188 = uVar6;
    uStack_180 = plVar7;
    local_1a8 = (code *)lVar8;
    uStack_1a0 = uVar9;
    if (lVar8 != 0) {
      plVar13 = &local_198;
      if (plVar7 != (longlong *)0x0) {
        plVar13 = plVar7;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    *(undefined4 *)&this->field_0xa0 = 2;
    local_178 = local_118;
    uStack_150 = (longlong *)0x0;
    if (local_118 != (code *)0x0) {
      pppuVar14 = &local_108;
      if (local_f0 != (undefined ***)0x0) {
        pppuVar14 = local_f0;
      }
      (*(code *)**pppuVar14)(pppuVar14,&local_168);
    }
    lVar8 = *(longlong *)&this->field_0xb0;
    uVar9 = *(undefined8 *)&this->field_0xb8;
    uVar2 = *(undefined4 *)&this->field_0xc0;
    uVar3 = *(undefined4 *)&this->field_0xc4;
    uVar4 = *(undefined4 *)&this->field_0xc8;
    uVar5 = *(undefined4 *)&this->field_0xcc;
    uVar6 = *(undefined8 *)&this->field_0xd0;
    plVar7 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_178;
    *(undefined8 *)&this->field_0xb8 = uStack_170;
    *(undefined4 *)&this->field_0xc0 = (undefined4)local_168;
    *(undefined4 *)&this->field_0xc4 = local_168._4_4_;
    *(undefined4 *)&this->field_0xc8 = uStack_160;
    *(undefined4 *)&this->field_0xcc = uStack_15c;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_158;
    *(undefined4 *)&this->field_0xd4 = local_158._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_150;
    *(undefined4 *)&this->field_0xdc = uStack_150._4_4_;
    local_178 = (code *)lVar8;
    uStack_170 = uVar9;
    local_168._0_4_ = uVar2;
    local_168._4_4_ = uVar3;
    uStack_160 = uVar4;
    uStack_15c = uVar5;
    local_158 = uVar6;
    uStack_150 = plVar7;
    if (lVar8 != 0) {
      plVar13 = &local_168;
      if (plVar7 != (longlong *)0x0) {
        plVar13 = plVar7;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (local_148 != (code *)0x0) {
      pppuVar14 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar14 = local_120;
      }
      (*(code *)(*pppuVar14)[2])();
    }
    if (local_118 == (code *)0x0) goto LAB_14ac19ac1;
    pppuVar14 = &local_108;
    pppuVar12 = local_f0;
  }
  if (pppuVar12 != (undefined ***)0x0) {
    pppuVar14 = pppuVar12;
  }
  (*(code *)(*pppuVar14)[2])();
LAB_14ac19ac1:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// MarkRenderStateDirty @ 14ac2ac10

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
FCustomizableObjectMeshStreamIn::MarkRenderStateDirty
          (FCustomizableObjectMeshStreamIn *this,FSkelMeshUpdateContext *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  USkeletalMesh *pUVar4;
  UPrimitiveComponent *this_00;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  bool bVar14;
  FStreamingManagerCollection *this_01;
  IRenderAssetStreamingManager *pIVar15;
  UClass *pUVar16;
  FString *pFVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined ***pppuVar20;
  wchar_t *pwVar21;
  undefined8 *puVar22;
  wchar_t *pwVar23;
  bool bVar24;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  undefined8 *local_180;
  ulonglong local_178;
  undefined8 *local_170;
  code *local_168 [2];
  undefined **local_158;
  code *local_150;
  undefined8 local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  code *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined **local_98;
  FCustomizableObjectMeshStreamIn *local_90;
  undefined ***local_80;
  code *local_78;
  undefined **local_68;
  FCustomizableObjectMeshStreamIn *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId435,
               "Mutable_FCustomizableObjectMeshStreamIn::ModifyRenderData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
               ,0x1b3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId435);
  }
  pwVar23 = L"";
  if ((param_1->CurrentThread != 3) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.CurrentThread == TT_GameThread",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                          ,0x1b5,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar4 = param_1->Mesh;
  if (((this->field_0x5c == '\0') && (pUVar4 != (USkeletalMesh *)0x0)) &&
     (param_1->RenderData != (FSkeletalMeshRenderData *)0x0)) {
    local_180 = (undefined8 *)0x0;
    local_178 = 0;
    this_01 = IStreamingManager::Get();
    pIVar15 = FStreamingManagerCollection::GetRenderAssetStreamingManager(this_01);
    local_140 = 0;
    local_158 = &
                ___7__TFunction_OwnedObject_P6A_NPEBVUPrimitiveComponent___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_150 = IRenderAssetStreamingManager::<lambda_6>::<lambda_invoker_cdecl>;
    local_168[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<bool_(__cdecl*)(UPrimitiveComponent_const_*),bool,UPrimitiveComponent_const_*>
                   ::Call;
    (**(code **)(*(longlong *)pIVar15 + 0x110))(pIVar15,pUVar4,&local_180,local_168);
    iVar2 = (int)local_178;
    uVar18 = (ulonglong)(int)local_178;
    local_170 = local_180 + uVar18;
    puVar22 = local_180;
    while( true ) {
      puVar13 = local_170;
      if ((int)uVar18 != iVar2) {
        local_188[0] = 0;
        `TCheckedPointerIterator<UPrimitiveComponent_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_188);
      }
      if (puVar22 == puVar13) break;
      this_00 = (UPrimitiveComponent *)*puVar22;
      if (this_00 == (UPrimitiveComponent *)0x0) {
        pFVar17 = GetTypeName<USkinnedMeshComponent>(&local_118);
        if ((pFVar17->Data).ArrayNum != 0) {
          pwVar23 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar23);
      }
      pUVar16 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
      iVar1 = (int)pUVar16->_padding_;
      if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar16->_padding_)) {
        pFVar17 = GetTypeName<USkinnedMeshComponent>(&local_138);
        if ((pFVar17->Data).ArrayNum == 0) {
          pwVar21 = L"";
        }
        else {
          pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
        }
        pFVar17 = GetFullNameForCastLogError<UPrimitiveComponent>(&local_128,this_00);
        if ((pFVar17->Data).ArrayNum != 0) {
          pwVar23 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar23,pwVar21);
      }
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this_00);
      uVar18 = local_178 & 0xffffffff;
      puVar22 = puVar22 + 1;
    }
    if (local_180 != (undefined8 *)0x0) {
      FMemory::Free(local_180);
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x20))(this);
  }
  iVar2 = param_1->CurrentThread;
  uVar3 = *(undefined4 *)&this->field_0x7e8;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::__l2::<lambda_2>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_50 = (undefined ***)0x0;
  local_60 = this;
  local_80 = (undefined ***)0x0;
  local_90 = this;
  if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("TaskState == TS_Locked || TaskState == TS_Init",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                          ,0x1b,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined4 *)&this->field_0x68 = uVar3;
  local_108 = local_a8;
  uStack_e0 = (longlong *)0x0;
  if (local_a8 != (code *)0x0) {
    pppuVar20 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar20 = local_80;
    }
    (*(code *)**pppuVar20)(pppuVar20,&local_f8);
  }
  lVar11 = *(longlong *)&this->field_0x70;
  uVar12 = *(undefined8 *)&this->field_0x78;
  uVar3 = *(undefined4 *)&this->field_0x80;
  uVar6 = *(undefined4 *)&this->field_0x84;
  uVar7 = *(undefined4 *)&this->field_0x88;
  uVar8 = *(undefined4 *)&this->field_0x8c;
  uVar9 = *(undefined8 *)&this->field_0x90;
  plVar10 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_108;
  *(undefined8 *)&this->field_0x78 = uStack_100;
  *(undefined4 *)&this->field_0x80 = local_f8;
  *(undefined4 *)&this->field_0x84 = uStack_f4;
  *(undefined4 *)&this->field_0x88 = uStack_f0;
  *(undefined4 *)&this->field_0x8c = uStack_ec;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_e8;
  *(undefined4 *)&this->field_0x94 = local_e8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_e0;
  *(undefined4 *)&this->field_0x9c = uStack_e0._4_4_;
  local_f8 = uVar3;
  uStack_f4 = uVar6;
  uStack_f0 = uVar7;
  uStack_ec = uVar8;
  local_e8 = uVar9;
  uStack_e0 = plVar10;
  local_108 = (code *)lVar11;
  uStack_100 = uVar12;
  if (lVar11 != 0) {
    plVar19 = (longlong *)&local_f8;
    if (plVar10 != (longlong *)0x0) {
      plVar19 = plVar10;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  *(int *)&this->field_0xa0 = iVar2;
  local_d8 = local_78;
  uStack_b0 = (longlong *)0x0;
  if (local_78 != (code *)0x0) {
    pppuVar20 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar20 = local_50;
    }
    (*(code *)**pppuVar20)(pppuVar20,&local_c8);
  }
  lVar11 = *(longlong *)&this->field_0xb0;
  uVar12 = *(undefined8 *)&this->field_0xb8;
  uVar3 = *(undefined4 *)&this->field_0xc0;
  uVar6 = *(undefined4 *)&this->field_0xc4;
  uVar7 = *(undefined4 *)&this->field_0xc8;
  uVar8 = *(undefined4 *)&this->field_0xcc;
  uVar9 = *(undefined8 *)&this->field_0xd0;
  plVar10 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_d8;
  *(undefined8 *)&this->field_0xb8 = uStack_d0;
  *(undefined4 *)&this->field_0xc0 = local_c8;
  *(undefined4 *)&this->field_0xc4 = uStack_c4;
  *(undefined4 *)&this->field_0xc8 = uStack_c0;
  *(undefined4 *)&this->field_0xcc = uStack_bc;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_b8;
  *(undefined4 *)&this->field_0xd4 = local_b8._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_b0;
  *(undefined4 *)&this->field_0xdc = uStack_b0._4_4_;
  local_d8 = (code *)lVar11;
  uStack_d0 = uVar12;
  local_c8 = uVar3;
  uStack_c4 = uVar6;
  uStack_c0 = uVar7;
  uStack_bc = uVar8;
  local_b8 = uVar9;
  uStack_b0 = plVar10;
  if (lVar11 != 0) {
    plVar19 = (longlong *)&local_c8;
    if (plVar10 != (longlong *)0x0) {
      plVar19 = plVar10;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar20 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar20 = local_80;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  if (local_78 != (code *)0x0) {
    pppuVar20 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar20 = local_50;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnUpdateMeshFinished @ 14ac2b490

void __thiscall
FCustomizableObjectMeshStreamIn::OnUpdateMeshFinished(FCustomizableObjectMeshStreamIn *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->field_0x5c != '\0') && (bEnableGCHangFix)) {
    return;
  }
  if (*(int *)&this->field_0x58 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskSynchronization.GetValue() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                       ,0x4a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LOCK();
  *(int *)&this->field_0x58 = *(int *)&this->field_0x58 + -1;
  UNLOCK();
  FRenderAssetUpdate::Tick((FRenderAssetUpdate *)this,TT_None);
  return;
}

// RequestMeshUpdate @ 14ac329a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FCustomizableObjectMeshStreamIn::RequestMeshUpdate
          (FCustomizableObjectMeshStreamIn *this,FSkelMeshUpdateContext *param_1)

{
  undefined1 *puVar1;
  UCustomizableObjectSystemPrivate *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMutableUpdateMeshContext *pFVar4;
  FTaskEvent FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  UClass *pUVar9;
  FString *pFVar10;
  UCustomizableObjectSystem *pUVar11;
  FCustomizableObjectMeshStreamIn *pFVar12;
  code **ppcVar13;
  FCustomizableObjectMeshStreamIn *pFVar14;
  FCustomizableObjectMeshStreamIn *pFVar15;
  FCustomizableObjectMeshStreamIn *this_00;
  int iVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStackY_108 [32];
  FName local_d8;
  FSoftObjectPath local_d0;
  wchar_t *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  TStringView<wchar_t> local_88;
  FString local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  this_00 = (FCustomizableObjectMeshStreamIn *)0x0;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId270,
               "Mutable_FCustomizableObjectMeshStreamIn::RequestMeshUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
               ,0x10e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId270);
  }
  pFVar14 = (FCustomizableObjectMeshStreamIn *)param_1->Mesh;
  if (pFVar14 != (FCustomizableObjectMeshStreamIn *)0x0) {
    pUVar9 = UCustomizableObjectSkeletalMesh::StaticClass();
    iVar16 = (int)pUVar9->_padding_;
    if ((iVar16 <= *(int *)(*(longlong *)&pFVar14->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pFVar14->field_0x10 + 0x30) + (longlong)iVar16 * 8) ==
        &pUVar9->_padding_)) goto LAB_14ac32a4e;
  }
  pFVar14 = this_00;
LAB_14ac32a4e:
  local_d0.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_d0.AssetPath.PackageName.Number = 0;
  local_d0.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_d0.AssetPath.AssetName.Number = 0;
  local_d0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.SubPathString.Data.ArrayNum = 0;
  local_d0.SubPathString.Data.ArrayMax = 0;
  local_a8 = *(wchar_t **)&pFVar14->field_0x518;
  iVar16 = 0;
  iStack_a0 = *(int *)&pFVar14->field_0x520 + -1;
  if (*(int *)&pFVar14->field_0x520 == 0) {
    iStack_a0 = iVar16;
  }
  local_88._12_4_ = uStack_9c;
  local_88.Size = iStack_a0;
  local_88.DataPtr = local_a8;
  FSoftObjectPath::SetPath(&local_d0,&local_88);
  local_d8 = local_d0.AssetPath.AssetName;
  if (local_d0.AssetPath.AssetName == (FName)0x0) {
    local_98 = 0;
    local_90 = 0;
    pFVar14 = this_00;
  }
  else {
    pFVar10 = ::FName::ToString(&local_d8,&local_78);
    pFVar14 = (FCustomizableObjectMeshStreamIn *)(pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar16 = (pFVar10->Data).ArrayNum;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar15 = (FCustomizableObjectMeshStreamIn *)L"";
  if (iVar16 != 0) {
    pFVar15 = pFVar14;
  }
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)pFVar15,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
               ,0x111);
  }
  if (pFVar14 != (FCustomizableObjectMeshStreamIn *)0x0) {
    FMemory::Free(pFVar14);
  }
  if (this->field_0x5c == '\0') {
    if ((UCustomizableObjectSystemPrivate::SSystem == (UCustomizableObjectSystem *)0x0) ||
       (bIsMutableEnabled == false)) {
      (**(code **)(*(longlong *)this + 0x20))(this);
    }
    else {
      if (((this->OperationData).Object == (FMutableUpdateMeshContext *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("OperationData.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                             ,0x11e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar16 = param_1->AssetLODBias;
      if (((this->OperationData).Object == (FMutableUpdateMeshContext *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      ((this->OperationData).Object)->AssetLODBias = iVar16;
      pUVar11 = UCustomizableObjectSystem::GetInstance();
      if (((pUVar11->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Private",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                             ,0x32c,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar2 = (pUVar11->Private).field0_0x0.DebugPtr;
      LOCK();
      *(int *)&this->field_0x58 = *(int *)&this->field_0x58 + 1;
      UNLOCK();
      LOCK();
      *(int *)&this->field_0x64 = *(int *)&this->field_0x64 + 1;
      UNLOCK();
      pTVar3 = (this->OperationData).SharedReferenceCount.ReferenceController;
      pFVar4 = (this->OperationData).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x20,8);
      local_40[1] = (code *)pFVar4;
      local_40[2] = (code *)pTVar3;
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::`2'::<lambda_1>,0,1>
                           ::_vftable_;
      local_40[3] = (code *)this;
      if (local_40 != (code **)&DAT_fffffffffffffff8) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::__l2::<lambda_1>,void>
                      ::Call;
      }
      uVar8 = FMutableTaskGraph::AddMutableThreadTaskLowPriority
                        (&pUVar2->MutableTaskGraph,L"Mutable_MeshUpdate",
                         (TFunction<void___cdecl(void)> *)local_68);
      this->MutableTaskId = uVar8;
      if (local_68[0] != (code *)0x0) {
        ppcVar13 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar13 = local_40;
        }
        (**(code **)(*ppcVar13 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (((this->OperationData).Object == (FMutableUpdateMeshContext *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->OperationData).Object;
      LOCK();
      *(int *)&this->field_0x64 = *(int *)&this->field_0x64 + 1;
      UNLOCK();
      pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      pFVar14 = this;
      pFVar15 = this_00;
      if (pFVar12 != (FCustomizableObjectMeshStreamIn *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar12,2,true);
        *(undefined ***)pFVar12 =
             &UE::Tasks::Private::
              TExecutableTaskBase<`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::`2'::<lambda_2>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init((FTaskBase *)pFVar12,L"StreamData",Inherit,None,None);
        *(FCustomizableObjectMeshStreamIn **)&pFVar12->field_0xd8 = this;
        *(undefined ***)pFVar12 =
             &UE::Tasks::Private::
              TExecutableTask<`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::`2'::<lambda_2>_>
              ::_vftable_;
        pFVar14 = this_00;
        pFVar15 = pFVar12;
      }
      FVar5 = pFVar4->Event;
      if (FVar5 != (FTaskEvent)0x0) {
        UE::Tasks::Private::FTaskBase::AddPrerequisites((FTaskBase *)pFVar15,(FTaskBase *)FVar5);
      }
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pFVar15,0x100);
      if (pFVar14 != (FCustomizableObjectMeshStreamIn *)0x0) {
        FRenderAssetUpdate::Release((FRenderAssetUpdate *)pFVar14);
      }
      LOCK();
      *(int *)&this->field_0x64 = *(int *)&this->field_0x64 + 1;
      UNLOCK();
      pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      pFVar14 = this;
      if (pFVar12 != (FCustomizableObjectMeshStreamIn *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar12,2,true);
        *(undefined ***)pFVar12 =
             &UE::Tasks::Private::
              TExecutableTaskBase<`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::`2'::<lambda_3>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init
                  ((FTaskBase *)pFVar12,L"OnUpdateMeshFinished",Inherit,Inline,None);
        *(FCustomizableObjectMeshStreamIn **)&pFVar12->field_0xd8 = this;
        *(undefined ***)pFVar12 =
             &UE::Tasks::Private::
              TExecutableTask<`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::`2'::<lambda_3>_>
              ::_vftable_;
        pFVar14 = this_00;
        this_00 = pFVar12;
      }
      if (pFVar15 != (FCustomizableObjectMeshStreamIn *)0x0) {
        UE::Tasks::Private::FTaskBase::AddPrerequisites((FTaskBase *)this_00,(FTaskBase *)pFVar15);
      }
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x100);
      if (this_00 != (FCustomizableObjectMeshStreamIn *)0x0) {
        LOCK();
        puVar1 = &this_00->field_0x30;
        iVar16 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (*(code *)**(undefined8 **)this_00)(this_00,1);
        }
      }
      if (pFVar14 != (FCustomizableObjectMeshStreamIn *)0x0) {
        FRenderAssetUpdate::Release((FRenderAssetUpdate *)pFVar14);
      }
      if (((this->field_0x5c != '\0') && (0 < *(int *)&this->field_0x58)) &&
         (bEnableGCHangFix != false)) {
        LOCK();
        *(undefined4 *)&this->field_0x58 = 0;
        UNLOCK();
      }
      if (pFVar15 != (FCustomizableObjectMeshStreamIn *)0x0) {
        LOCK();
        puVar1 = &pFVar15->field_0x30;
        iVar16 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (*(code *)**(undefined8 **)pFVar15)(pFVar15,1);
        }
      }
    }
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_d0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.SubPathString.Data.AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

