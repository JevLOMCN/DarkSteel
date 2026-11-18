// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticStruct @ 148701ae0

UScriptStruct * __cdecl FSplineMeshComponentDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor,(UObject *)pUVar1,
                         L"SplineMeshComponentDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptor.OuterSingleton;
}

// FSplineMeshComponentDescriptor @ 148710db0

FSplineMeshComponentDescriptor * __thiscall
FSplineMeshComponentDescriptor::FSplineMeshComponentDescriptor
          (FSplineMeshComponentDescriptor *this,FSoftSplineMeshComponentDescriptor *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *pTVar2;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UStaticMesh *pUVar9;
  UMaterialInterface *pUVar10;
  FSplineMeshComponentDescriptor *pFVar11;
  URuntimeVirtualTexture *pUVar12;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UMaterialInterface *local_98;
  URuntimeVirtualTexture *local_90;
  TPersistentObjectPtr<FSoftObjectPath> local_88;
  TPersistentObjectPtr<FSoftObjectPath> local_60;
  
  FSplineMeshComponentDescriptorBase::FSplineMeshComponentDescriptorBase
            ((FSplineMeshComponentDescriptorBase *)this,
             (FSplineMeshComponentDescriptorBase *)param_1);
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptor__6B_;
  pTVar1 = &this->OverrideMaterials;
  pTVar2 = &this->RuntimeVirtualTextures;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->RuntimeVirtualTextures).ArrayMax = 0;
  pUVar9 = TSoftObjectPtr<UStaticMesh>::LoadSynchronous(&param_1->StaticMesh);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->StaticMesh).field0_0x0.DebugPtr = pUVar9;
  iVar4 = (param_1->OverrideMaterials).ArrayNum;
  pTVar13 = (TPersistentObjectPtr<FSoftObjectPath> *)
            (param_1->OverrideMaterials).AllocatorInstance.Data;
  pTVar3 = pTVar13 + iVar4;
  while( true ) {
    if ((param_1->OverrideMaterials).ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pTVar13 == pTVar3) break;
    TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>(&local_88,pTVar13);
    pUVar10 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous
                        ((TSoftObjectPtr<UMaterialInterface> *)&local_88);
    if (local_88.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
    local_98 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)&local_98) &&
       ((FScriptContainerElement *)&local_98 <
        pFVar5 + (longlong)(this->OverrideMaterials).ArrayMax * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FSplineMeshComponentDescriptor *)(*pcVar6)();
        return pFVar11;
      }
    }
    iVar8 = (this->OverrideMaterials).ArrayNum;
    if (iVar8 == (this->OverrideMaterials).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,&(this->OverrideMaterials).ArrayMax);
    }
    (this->OverrideMaterials).ArrayNum = iVar8 + 1;
    *(UMaterialInterface **)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_98;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_98 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_98);
    }
    pTVar13 = pTVar13 + 1;
  }
  pUVar10 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(&param_1->OverlayMaterial);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->OverlayMaterial).field0_0x0.DebugPtr = pUVar10;
  iVar4 = (param_1->RuntimeVirtualTextures).ArrayNum;
  pTVar13 = (TPersistentObjectPtr<FSoftObjectPath> *)
            (param_1->RuntimeVirtualTextures).AllocatorInstance.Data;
  pTVar3 = pTVar13 + iVar4;
  while( true ) {
    if ((param_1->RuntimeVirtualTextures).ArrayNum != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<URuntimeVirtualTexture>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (pTVar13 == pTVar3) break;
    TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>(&local_60,pTVar13);
    pUVar12 = TSoftObjectPtr<URuntimeVirtualTexture>::LoadSynchronous
                        ((TSoftObjectPtr<URuntimeVirtualTexture> *)&local_60);
    if (local_60.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
    local_90 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (URuntimeVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)&local_90) &&
       ((FScriptContainerElement *)&local_90 <
        pFVar5 + (longlong)(this->RuntimeVirtualTextures).ArrayMax * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FSplineMeshComponentDescriptor *)(*pcVar6)();
        return pFVar11;
      }
    }
    iVar8 = (this->RuntimeVirtualTextures).ArrayNum;
    if (iVar8 == (this->RuntimeVirtualTextures).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,&(this->RuntimeVirtualTextures).ArrayMax);
    }
    (this->RuntimeVirtualTextures).ArrayNum = iVar8 + 1;
    *(URuntimeVirtualTexture **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_90 != (URuntimeVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_90);
    }
    pTVar13 = pTVar13 + 1;
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  return this;
}

// FSplineMeshComponentDescriptor @ 148711130

FSplineMeshComponentDescriptor * __thiscall
FSplineMeshComponentDescriptor::FSplineMeshComponentDescriptor(FSplineMeshComponentDescriptor *this)

{
  byte bVar1;
  UClass *this_00;
  USplineMeshComponent *pUVar2;
  
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptorBase__6B_;
  bVar1 = *(byte *)((longlong)&this->_padding_ + 3);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(byte *)((longlong)&this->_padding_ + 3) = bVar1 & 0xf9 | 1;
  FBodyInstance::FBodyInstance((FBodyInstance *)&this->_padding_);
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptor__6B_;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->OverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->RuntimeVirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->RuntimeVirtualTextures).ArrayMax = 0;
  this_00 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
  pUVar2 = UClass::GetDefaultObject<USplineMeshComponent>(this_00);
  InitFrom(this,(UStaticMeshComponent *)pUVar2,true);
  return this;
}

// ~FSplineMeshComponentDescriptor @ 1487142a0

void __thiscall
FSplineMeshComponentDescriptor::~FSplineMeshComponentDescriptor
          (FSplineMeshComponentDescriptor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptor__6B_;
  pFVar1 = (this->RuntimeVirtualTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptorBase__6B_;
  FBodyInstance::~FBodyInstance((FBodyInstance *)&this->_padding_);
  return;
}

// operator== @ 148717800

bool __thiscall
FSplineMeshComponentDescriptor::operator==
          (FSplineMeshComponentDescriptor *this,FSplineMeshComponentDescriptor *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (int)this->_padding_;
  if ((((iVar2 == 0) || (iVar1 = (int)param_1->_padding_, iVar1 == 0)) || (iVar2 == iVar1)) &&
     (((this->StaticMesh).field0_0x0.DebugPtr == (param_1->StaticMesh).field0_0x0.DebugPtr &&
      (iVar2 = (this->OverrideMaterials).ArrayNum, iVar2 == (param_1->OverrideMaterials).ArrayNum)))
     ) {
    bVar3 = CompareItems<TObjectPtr<UMaterialInterface>,int>
                      ((TObjectPtr<UMaterialInterface> *)
                       (this->OverrideMaterials).AllocatorInstance.Data,
                       (TObjectPtr<UMaterialInterface> *)
                       (param_1->OverrideMaterials).AllocatorInstance.Data,iVar2);
    if ((bVar3) &&
       (((this->OverlayMaterial).field0_0x0.DebugPtr ==
         (param_1->OverlayMaterial).field0_0x0.DebugPtr &&
        (iVar2 = (this->RuntimeVirtualTextures).ArrayNum,
        iVar2 == (param_1->RuntimeVirtualTextures).ArrayNum)))) {
      bVar3 = CompareItems<TObjectPtr<URuntimeVirtualTexture>,int>
                        ((TObjectPtr<URuntimeVirtualTexture> *)
                         (this->RuntimeVirtualTextures).AllocatorInstance.Data,
                         (TObjectPtr<URuntimeVirtualTexture> *)
                         (param_1->RuntimeVirtualTextures).AllocatorInstance.Data,iVar2);
      if (bVar3) {
        bVar3 = FSplineMeshComponentDescriptorBase::operator==
                          ((FSplineMeshComponentDescriptorBase *)this,
                           (FSplineMeshComponentDescriptorBase *)param_1);
        if (bVar3) {
          return true;
        }
      }
    }
  }
  return false;
}

// operator!= @ 148717d60

bool __thiscall
FSplineMeshComponentDescriptor::operator!=
          (FSplineMeshComponentDescriptor *this,FSplineMeshComponentDescriptor *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (int)this->_padding_;
  if ((((iVar2 == 0) || (iVar1 = (int)param_1->_padding_, iVar1 == 0)) || (iVar2 == iVar1)) &&
     (((this->StaticMesh).field0_0x0.DebugPtr == (param_1->StaticMesh).field0_0x0.DebugPtr &&
      (iVar2 = (this->OverrideMaterials).ArrayNum, iVar2 == (param_1->OverrideMaterials).ArrayNum)))
     ) {
    bVar3 = CompareItems<TObjectPtr<UMaterialInterface>,int>
                      ((TObjectPtr<UMaterialInterface> *)
                       (this->OverrideMaterials).AllocatorInstance.Data,
                       (TObjectPtr<UMaterialInterface> *)
                       (param_1->OverrideMaterials).AllocatorInstance.Data,iVar2);
    if ((bVar3) &&
       (((this->OverlayMaterial).field0_0x0.DebugPtr ==
         (param_1->OverlayMaterial).field0_0x0.DebugPtr &&
        (iVar2 = (this->RuntimeVirtualTextures).ArrayNum,
        iVar2 == (param_1->RuntimeVirtualTextures).ArrayNum)))) {
      bVar3 = CompareItems<TObjectPtr<URuntimeVirtualTexture>,int>
                        ((TObjectPtr<URuntimeVirtualTexture> *)
                         (this->RuntimeVirtualTextures).AllocatorInstance.Data,
                         (TObjectPtr<URuntimeVirtualTexture> *)
                         (param_1->RuntimeVirtualTextures).AllocatorInstance.Data,iVar2);
      if (bVar3) {
        bVar3 = FSplineMeshComponentDescriptorBase::operator==
                          ((FSplineMeshComponentDescriptorBase *)this,
                           (FSplineMeshComponentDescriptorBase *)param_1);
        if (bVar3) {
          return false;
        }
      }
    }
  }
  return true;
}

// operator() @ 148719430

UMaterialInterface * __thiscall
`FSplineMeshComponentDescriptor::InitComponent'::__l2::<lambda_1>::operator()
          (void *this,UMaterialInterface *param_1)

{
  int iVar1;
  UObject *pUVar2;
  char cVar3;
  UClass *pUVar4;
  UMaterialInterface *pUVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((param_1 != (UMaterialInterface *)0x0) &&
     (cVar3 = (**(code **)(param_1->_padding_ + 0x1c0))(param_1), cVar3 == '\0')) {
    pUVar4 = Z_Construct_UClass_UMaterialInstance_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_ &&
        (cVar3 = (**(code **)(param_1->_padding_ + 0x5c0))(param_1), cVar3 != '\0')))) {
      return *(UMaterialInterface **)&param_1[1].SubsurfaceProfiles.ArrayNum;
    }
    pUVar2 = *(UObject **)this;
    pUVar4 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    param_1 = (UMaterialInterface *)
              DuplicateObject_Internal(pUVar4,(UObject *)param_1,pUVar2,(FName)0x0);
    if ((UMaterialInstanceDynamic *)param_1 != (UMaterialInstanceDynamic *)0x0) {
      pUVar4 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(((UMaterialInstanceDynamic *)param_1)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(((UMaterialInstanceDynamic *)param_1)->_padding_ + 0x30) +
           (longlong)iVar1 * 8) == &pUVar4->_padding_)) {
        local_18 = 0;
        uStack_10 = 0;
        pUVar5 = (UMaterialInterface *)
                 (**(code **)(((UMaterialInstanceDynamic *)param_1)->_padding_ + 0x3a8))
                           (param_1,&local_18);
        if ((pUVar5 != (UMaterialInterface *)0x0) &&
           (cVar3 = (**(code **)(pUVar5->_padding_ + 0x1c0))(pUVar5), cVar3 == '\0')) {
          pUVar5 = DuplicateObject<UMaterialInterface>(pUVar5,*(UObject **)this,(FName)0x0);
          UMaterialInstanceDynamic::SetNaniteOverride((UMaterialInstanceDynamic *)param_1,pUVar5);
        }
      }
    }
  }
  return (UMaterialInterface *)(UMaterialInstanceDynamic *)param_1;
}

// ComputeHash @ 14872c780

uint __thiscall FSplineMeshComponentDescriptor::ComputeHash(FSplineMeshComponentDescriptor *this)

{
  FArchiveCrc32 local_a8;
  
  FSplineMeshComponentDescriptorBase::ComputeHash((FSplineMeshComponentDescriptorBase *)this);
  FArchiveCrc32::FArchiveCrc32(&local_a8,(uint)this->_padding_,(UObject *)0x0);
  (**(code **)(local_a8._padding_ + 0x150))(&local_a8,&this->StaticMesh);
  TArrayPrivateFriend::Serialize<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_a8,&this->OverrideMaterials);
  (**(code **)(local_a8._padding_ + 0x150))(&local_a8,&this->OverlayMaterial);
  TArrayPrivateFriend::Serialize<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_a8,&this->RuntimeVirtualTextures);
  *(uint *)&this->_padding_ = local_a8.CRC;
  FArchive::~FArchive((FArchive *)&local_a8);
  return local_a8.CRC;
}

// CreateFrom @ 14872e840

FSplineMeshComponentDescriptor * __cdecl
FSplineMeshComponentDescriptor::CreateFrom
          (FSplineMeshComponentDescriptor *__return_storage_ptr__,
          TSubclassOf<UStaticMeshComponent> *param_1)

{
  int iVar1;
  UStaticMeshComponent *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  FSplineMeshComponentDescriptor *pFVar8;
  FArchiveCrc32 local_a8;
  
  FSplineMeshComponentDescriptor(__return_storage_ptr__);
  pUVar7 = (param_1->Class).field0_0x0.DebugPtr;
  if (pUVar7 != (UClass *)0x0) {
    pUVar6 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar7->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        pUVar7 = (param_1->Class).field0_0x0.DebugPtr;
        goto LAB_14872e89a;
      }
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_14872e89a:
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar2 = (UStaticMeshComponent *)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar7 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  lVar3 = pUVar2->_padding_;
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSplineMeshComponentDescriptor *)(*pcVar4)();
      return pFVar8;
    }
  }
  InitFrom(__return_storage_ptr__,pUVar2,true);
  FSplineMeshComponentDescriptorBase::ComputeHash
            ((FSplineMeshComponentDescriptorBase *)__return_storage_ptr__);
  FArchiveCrc32::FArchiveCrc32(&local_a8,(uint)__return_storage_ptr__->_padding_,(UObject *)0x0);
  (**(code **)(local_a8._padding_ + 0x150))(&local_a8,&__return_storage_ptr__->StaticMesh);
  TArrayPrivateFriend::Serialize<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_a8,&__return_storage_ptr__->OverrideMaterials);
  (**(code **)(local_a8._padding_ + 0x150))(&local_a8,&__return_storage_ptr__->OverlayMaterial);
  TArrayPrivateFriend::Serialize<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_a8,&__return_storage_ptr__->RuntimeVirtualTextures);
  *(uint *)&__return_storage_ptr__->_padding_ = local_a8.CRC;
  FArchive::~FArchive((FArchive *)&local_a8);
  return __return_storage_ptr__;
}

// InitComponent @ 148744290

void __thiscall
FSplineMeshComponentDescriptor::InitComponent
          (FSplineMeshComponentDescriptor *this,USplineMeshComponent *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  USplineMeshComponent *pUVar6;
  FScriptContainerElement *pFVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  UClass *pUVar11;
  UMaterialInstanceDynamic *this_00;
  UMaterialInterface *pUVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  USplineMeshComponent *local_res10;
  FName local_res18;
  undefined8 local_res20;
  UMaterialInstanceDynamic *local_78;
  USplineMeshComponent *local_70;
  FScriptContainerElement *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_res10 = param_1;
  (**(code **)(param_1->_padding_ + 0xb28))(param_1,(this->StaticMesh).field0_0x0.DebugPtr);
  uVar10 = (this->OverrideMaterials).ArrayNum;
  plVar2 = &param_1->_padding_;
  local_70 = param_1;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  puVar1 = (uint *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (*puVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar10,(ForAnyElementType *)plVar2,0,(int *)puVar1);
  }
  pFVar13 = (this->OverrideMaterials).AllocatorInstance.Data;
  iVar3 = (this->OverrideMaterials).ArrayNum;
  local_68 = pFVar13 + (longlong)iVar3 * 8;
  do {
    pFVar7 = local_68;
    if ((this->OverrideMaterials).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar7) {
      pUVar12 = `FSplineMeshComponentDescriptor::InitComponent'::__l2::<lambda_1>::operator()
                          (&local_70,(this->OverlayMaterial).field0_0x0.DebugPtr);
      pUVar6 = local_res10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      pUVar6->_padding_ = (longlong)pUVar12;
      TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *)
                 &pUVar6->_padding_,&this->RuntimeVirtualTextures);
      FSplineMeshComponentDescriptorBase::InitComponent
                ((FSplineMeshComponentDescriptorBase *)this,pUVar6);
      return;
    }
    this_00 = *(UMaterialInstanceDynamic **)pFVar13;
    if (this_00 != (UMaterialInstanceDynamic *)0x0) {
      cVar8 = (**(code **)(this_00->_padding_ + 0x1c0))(this_00);
      if (cVar8 == '\0') {
        pUVar11 = Z_Construct_UClass_UMaterialInstance_NoRegister();
        iVar4 = (int)pUVar11->_padding_;
        if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar11->_padding_)) {
          cVar8 = (**(code **)(this_00->_padding_ + 0x5c0))(this_00);
          if (cVar8 != '\0') {
            this_00 = (UMaterialInstanceDynamic *)this_00->_padding_;
            goto LAB_148744470;
          }
        }
        local_res18.ComparisonIndex.Value = 0;
        local_res18.Number = 0;
        pUVar11 = Z_Construct_UClass_UMaterialInterface_NoRegister();
        this_00 = (UMaterialInstanceDynamic *)
                  DuplicateObject_Internal
                            (pUVar11,(UObject *)this_00,(UObject *)param_1,local_res18);
        if (this_00 != (UMaterialInstanceDynamic *)0x0) {
          pUVar11 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar4 = (int)pUVar11->_padding_;
          if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
              &pUVar11->_padding_)) {
            local_60 = 0;
            uStack_58 = 0;
            pUVar12 = (UMaterialInterface *)
                      (**(code **)(this_00->_padding_ + 0x3a8))(this_00,&local_60);
            if (pUVar12 != (UMaterialInterface *)0x0) {
              cVar8 = (**(code **)(pUVar12->_padding_ + 0x1c0))(pUVar12);
              if (cVar8 == '\0') {
                local_res20 = 0;
                pUVar12 = DuplicateObject<UMaterialInterface>(pUVar12,(UObject *)param_1,(FName)0x0)
                ;
                UMaterialInstanceDynamic::SetNaniteOverride(this_00,pUVar12);
              }
            }
          }
        }
      }
    }
LAB_148744470:
    local_78 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    if (((UMaterialInstanceDynamic **)*plVar2 <= &local_78) &&
       (&local_78 < (UMaterialInstanceDynamic **)*plVar2 + (int)*puVar1)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar10 = (uint)param_1->_padding_;
    if (uVar10 == *puVar1) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)plVar2,(int *)puVar1);
    }
    *(uint *)&param_1->_padding_ = uVar10 + 1;
    *(UMaterialInstanceDynamic **)(*plVar2 + (longlong)(int)uVar10 * 8) = local_78;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_78 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_78);
    }
    pFVar13 = pFVar13 + 8;
  } while( true );
}

// InitFrom @ 148744b40

void __thiscall
FSplineMeshComponentDescriptor::InitFrom
          (FSplineMeshComponentDescriptor *this,UStaticMeshComponent *param_1,bool param_2)

{
  UStaticMesh *pUVar1;
  
  pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UStaticMesh *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  (this->StaticMesh).field0_0x0.DebugPtr = pUVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
            (&this->OverrideMaterials,
             (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
             &param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  (this->OverlayMaterial).field0_0x0 = (TObjectPtr<UMaterialInterface>_u_0)param_1->_padding_;
  TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>::operator=
            (&this->RuntimeVirtualTextures,
             (TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *)
             &param_1->_padding_);
  FSplineMeshComponentDescriptorBase::InitFrom
            ((FSplineMeshComponentDescriptorBase *)this,param_1,param_2);
  return;
}

