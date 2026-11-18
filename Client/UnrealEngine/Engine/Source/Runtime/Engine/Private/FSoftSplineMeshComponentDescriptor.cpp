// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticStruct @ 148701b60

UScriptStruct * __cdecl FSoftSplineMeshComponentDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoftSplineMeshComponentDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoftSplineMeshComponentDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor,
                         (UObject *)pUVar1,L"SoftSplineMeshComponentDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FSoftSplineMeshComponentDescriptor.OuterSingleton;
}

// FSoftSplineMeshComponentDescriptor @ 1487104f0

FSoftSplineMeshComponentDescriptor * __thiscall
FSoftSplineMeshComponentDescriptor::FSoftSplineMeshComponentDescriptor
          (FSoftSplineMeshComponentDescriptor *this,FSplineMeshComponentDescriptor *param_1)

{
  undefined1 *puVar1;
  TSoftObjectPtr<UStaticMesh> *this_00;
  UStaticMesh *pUVar2;
  UMaterialInterface *pUVar3;
  UStaticMesh *local_res8;
  
  FSplineMeshComponentDescriptorBase::FSplineMeshComponentDescriptorBase
            ((FSplineMeshComponentDescriptorBase *)this,
             (FSplineMeshComponentDescriptorBase *)param_1);
  this_00 = &this->StaticMesh;
  puVar1 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7FSoftSplineMeshComponentDescriptor__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&this_00->SoftObjectPtr = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = (UStaticMesh *)0x0;
  FSoftObjectPtr::operator=(&this_00->SoftObjectPtr,(FObjectPtr)&local_res8);
  puVar1 = &(this->OverlayMaterial).SoftObjectPtr.field_0x18;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->OverlayMaterial).SoftObjectPtr.field_0x20 = 0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  *(undefined8 *)&(this->OverlayMaterial).SoftObjectPtr = 0;
  *(undefined8 *)&(this->OverlayMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OverlayMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->RuntimeVirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->RuntimeVirtualTextures).ArrayMax = 0;
  pUVar2 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FSoftObjectPtr::operator=(&this_00->SoftObjectPtr,(FObjectPtr)&local_res8);
  Algo::
  Transform<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,_FSoftSplineMeshComponentDescriptor::FSoftSplineMeshComponentDescriptor_::__l2::<lambda_1>_>
            (&param_1->OverrideMaterials,&this->OverrideMaterials,local_res8._0_1_);
  pUVar3 = (param_1->OverlayMaterial).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_res8 = (UStaticMesh *)pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FSoftObjectPtr::operator=(&(this->OverlayMaterial).SoftObjectPtr,(FObjectPtr)&local_res8);
  Algo::
  Transform<TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>_&,_FSoftSplineMeshComponentDescriptor::FSoftSplineMeshComponentDescriptor_::__l2::<lambda_2>_>
            (&param_1->RuntimeVirtualTextures,&this->RuntimeVirtualTextures,
             (<lambda_2>)local_res8._0_1_);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  return this;
}

// FSoftSplineMeshComponentDescriptor @ 148710690

FSoftSplineMeshComponentDescriptor * __thiscall
FSoftSplineMeshComponentDescriptor::FSoftSplineMeshComponentDescriptor
          (FSoftSplineMeshComponentDescriptor *this)

{
  undefined1 *puVar1;
  TSoftObjectPtr<UStaticMesh> *this_00;
  byte bVar2;
  UObject *pUVar3;
  UClass *this_01;
  USplineMeshComponent *pUVar4;
  UObject *local_res8;
  
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptorBase__6B_;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 3);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(byte *)((longlong)&this->_padding_ + 3) = bVar2 & 0xf9 | 1;
  FBodyInstance::FBodyInstance((FBodyInstance *)&this->_padding_);
  this_00 = &this->StaticMesh;
  puVar1 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7FSoftSplineMeshComponentDescriptor__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&this_00->SoftObjectPtr = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = (UObject *)0x0;
  FSoftObjectPtr::operator=(&this_00->SoftObjectPtr,(FObjectPtr)&local_res8);
  puVar1 = &(this->OverlayMaterial).SoftObjectPtr.field_0x18;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->OverlayMaterial).SoftObjectPtr.field_0x20 = 0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  *(undefined8 *)&(this->OverlayMaterial).SoftObjectPtr = 0;
  *(undefined8 *)&(this->OverlayMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OverlayMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->RuntimeVirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->RuntimeVirtualTextures).ArrayMax = 0;
  this_01 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
  pUVar4 = UClass::GetDefaultObject<USplineMeshComponent>(this_01);
  pUVar3 = (UObject *)pUVar4->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FSoftObjectPtr::operator=(&this_00->SoftObjectPtr,(FObjectPtr)&local_res8);
  Algo::
  Transform<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,_FSoftSplineMeshComponentDescriptor::InitFrom_::__l2::<lambda_1>_>
            ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
             &pUVar4->_padding_,&this->OverrideMaterials,local_res8._0_1_);
  pUVar3 = (UObject *)pUVar4->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FSoftObjectPtr::operator=(&(this->OverlayMaterial).SoftObjectPtr,(FObjectPtr)&local_res8);
  Algo::
  Transform<TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>_&,_FSoftSplineMeshComponentDescriptor::InitFrom_::__l2::<lambda_2>_>
            ((TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *)
             &pUVar4->_padding_,&this->RuntimeVirtualTextures,(<lambda_2>)local_res8._0_1_);
  FSplineMeshComponentDescriptorBase::InitFrom
            ((FSplineMeshComponentDescriptorBase *)this,(UStaticMeshComponent *)pUVar4,true);
  return this;
}

// ~FSoftSplineMeshComponentDescriptor @ 148714200

void __thiscall
FSoftSplineMeshComponentDescriptor::~FSoftSplineMeshComponentDescriptor
          (FSoftSplineMeshComponentDescriptor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FSoftSplineMeshComponentDescriptor__6B_;
  DestructItems<TSoftObjectPtr<URuntimeVirtualTexture>,int>
            ((TSoftObjectPtr<URuntimeVirtualTexture> *)
             (this->RuntimeVirtualTextures).AllocatorInstance.Data,
             (this->RuntimeVirtualTextures).ArrayNum);
  pFVar1 = (this->RuntimeVirtualTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OverlayMaterial).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
            ((TSoftObjectPtr<UMaterialInterface> *)(this->OverrideMaterials).AllocatorInstance.Data,
             (this->OverrideMaterials).ArrayNum);
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->StaticMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptorBase__6B_;
  FBodyInstance::~FBodyInstance((FBodyInstance *)&this->_padding_);
  return;
}

// operator== @ 148717720

bool __thiscall
FSoftSplineMeshComponentDescriptor::operator==
          (FSoftSplineMeshComponentDescriptor *this,FSoftSplineMeshComponentDescriptor *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (int)this->_padding_;
  if (((iVar2 == 0) || (iVar1 = (int)param_1->_padding_, iVar1 == 0)) || (iVar2 == iVar1)) {
    bVar3 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(this->StaticMesh).SoftObjectPtr.field_0x8,
                       (FSoftObjectPath *)&(param_1->StaticMesh).SoftObjectPtr.field_0x8);
    if ((bVar3) &&
       (iVar2 = (this->OverrideMaterials).ArrayNum, iVar2 == (param_1->OverrideMaterials).ArrayNum))
    {
      bVar3 = CompareItems<TSoftObjectPtr<UMaterialInterface>,int>
                        ((TSoftObjectPtr<UMaterialInterface> *)
                         (this->OverrideMaterials).AllocatorInstance.Data,
                         (TSoftObjectPtr<UMaterialInterface> *)
                         (param_1->OverrideMaterials).AllocatorInstance.Data,iVar2);
      if (bVar3) {
        bVar3 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)&(this->OverlayMaterial).SoftObjectPtr.field_0x8,
                           (FSoftObjectPath *)&(param_1->OverlayMaterial).SoftObjectPtr.field_0x8);
        if ((bVar3) &&
           (iVar2 = (this->RuntimeVirtualTextures).ArrayNum,
           iVar2 == (param_1->RuntimeVirtualTextures).ArrayNum)) {
          bVar3 = CompareItems<TSoftObjectPtr<URuntimeVirtualTexture>,int>
                            ((TSoftObjectPtr<URuntimeVirtualTexture> *)
                             (this->RuntimeVirtualTextures).AllocatorInstance.Data,
                             (TSoftObjectPtr<URuntimeVirtualTexture> *)
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
    }
  }
  return false;
}

// operator!= @ 148717c80

bool __thiscall
FSoftSplineMeshComponentDescriptor::operator!=
          (FSoftSplineMeshComponentDescriptor *this,FSoftSplineMeshComponentDescriptor *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (int)this->_padding_;
  if (((iVar2 == 0) || (iVar1 = (int)param_1->_padding_, iVar1 == 0)) || (iVar2 == iVar1)) {
    bVar3 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(this->StaticMesh).SoftObjectPtr.field_0x8,
                       (FSoftObjectPath *)&(param_1->StaticMesh).SoftObjectPtr.field_0x8);
    if ((bVar3) &&
       (iVar2 = (this->OverrideMaterials).ArrayNum, iVar2 == (param_1->OverrideMaterials).ArrayNum))
    {
      bVar3 = CompareItems<TSoftObjectPtr<UMaterialInterface>,int>
                        ((TSoftObjectPtr<UMaterialInterface> *)
                         (this->OverrideMaterials).AllocatorInstance.Data,
                         (TSoftObjectPtr<UMaterialInterface> *)
                         (param_1->OverrideMaterials).AllocatorInstance.Data,iVar2);
      if (bVar3) {
        bVar3 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)&(this->OverlayMaterial).SoftObjectPtr.field_0x8,
                           (FSoftObjectPath *)&(param_1->OverlayMaterial).SoftObjectPtr.field_0x8);
        if ((bVar3) &&
           (iVar2 = (this->RuntimeVirtualTextures).ArrayNum,
           iVar2 == (param_1->RuntimeVirtualTextures).ArrayNum)) {
          bVar3 = CompareItems<TSoftObjectPtr<URuntimeVirtualTexture>,int>
                            ((TSoftObjectPtr<URuntimeVirtualTexture> *)
                             (this->RuntimeVirtualTextures).AllocatorInstance.Data,
                             (TSoftObjectPtr<URuntimeVirtualTexture> *)
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
    }
  }
  return true;
}

// operator() @ 1487192e0

UMaterialInterface * __thiscall
`FSoftSplineMeshComponentDescriptor::InitComponent'::__l2::<lambda_1>::operator()
          (void *this,TSoftObjectPtr<UMaterialInterface> *param_1)

{
  int iVar1;
  UObject *pUVar2;
  char cVar3;
  UMaterialInstanceDynamic *this_00;
  UClass *pUVar4;
  UMaterialInterface *pUVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  this_00 = (UMaterialInstanceDynamic *)TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(param_1)
  ;
  if ((this_00 != (UMaterialInstanceDynamic *)0x0) &&
     (cVar3 = (**(code **)(this_00->_padding_ + 0x1c0))(this_00), cVar3 == '\0')) {
    pUVar4 = Z_Construct_UClass_UMaterialInstance_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       (((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_ &&
        (cVar3 = (**(code **)(this_00->_padding_ + 0x5c0))(this_00), cVar3 != '\0')))) {
      return (UMaterialInterface *)this_00->_padding_;
    }
    pUVar2 = *(UObject **)this;
    pUVar4 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    this_00 = (UMaterialInstanceDynamic *)
              DuplicateObject_Internal(pUVar4,(UObject *)this_00,pUVar2,(FName)0x0);
    if (this_00 != (UMaterialInstanceDynamic *)0x0) {
      pUVar4 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        local_18 = 0;
        uStack_10 = 0;
        pUVar5 = (UMaterialInterface *)(**(code **)(this_00->_padding_ + 0x3a8))(this_00,&local_18);
        if ((pUVar5 != (UMaterialInterface *)0x0) &&
           (cVar3 = (**(code **)(pUVar5->_padding_ + 0x1c0))(pUVar5), cVar3 == '\0')) {
          pUVar5 = DuplicateObject<UMaterialInterface>(pUVar5,*(UObject **)this,(FName)0x0);
          UMaterialInstanceDynamic::SetNaniteOverride(this_00,pUVar5);
        }
      }
    }
  }
  return (UMaterialInterface *)this_00;
}

// ComputeHash @ 14872c6d0

uint __thiscall
FSoftSplineMeshComponentDescriptor::ComputeHash(FSoftSplineMeshComponentDescriptor *this)

{
  FArchiveCrc32 local_a8;
  
  FSplineMeshComponentDescriptorBase::ComputeHash((FSplineMeshComponentDescriptorBase *)this);
  FArchiveCrc32::FArchiveCrc32(&local_a8,(uint)this->_padding_,(UObject *)0x0);
  (**(code **)(local_a8._padding_ + 0x148))(&local_a8,&this->StaticMesh);
  TArrayPrivateFriend::Serialize<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_a8,&this->OverrideMaterials);
  (**(code **)(local_a8._padding_ + 0x148))(&local_a8,&this->OverlayMaterial);
  TArrayPrivateFriend::Serialize<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_a8,&this->RuntimeVirtualTextures);
  *(uint *)&this->_padding_ = local_a8.CRC;
  FArchive::~FArchive((FArchive *)&local_a8);
  return local_a8.CRC;
}

// InitComponent @ 148743d70

void __thiscall
FSoftSplineMeshComponentDescriptor::InitComponent
          (FSoftSplineMeshComponentDescriptor *this,USplineMeshComponent *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  UStaticMesh *pUVar11;
  UMaterialInstanceDynamic *this_00;
  UClass *pUVar12;
  UMaterialInterface *pUVar13;
  UObject *pUVar14;
  TPersistentObjectPtr<FSoftObjectPath> *this_01;
  FScriptContainerElement *this_02;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  UMaterialInstanceDynamic *local_88;
  UObject *local_80;
  FName local_78;
  undefined8 local_70;
  USplineMeshComponent *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pcVar7 = *(code **)(param_1->_padding_ + 0xb28);
  pUVar11 = TSoftObjectPtr<UStaticMesh>::LoadSynchronous(&this->StaticMesh);
  (*pcVar7)(param_1,pUVar11);
  uVar10 = (this->OverrideMaterials).ArrayNum;
  plVar2 = &param_1->_padding_;
  local_68 = param_1;
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
  iVar5 = (this->OverrideMaterials).ArrayNum;
  this_02 = (this->OverrideMaterials).AllocatorInstance.Data;
  pFVar3 = this_02 + (longlong)iVar5 * 0x28;
  while( true ) {
    if ((this->OverrideMaterials).ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (this_02 == pFVar3) break;
    this_00 = (UMaterialInstanceDynamic *)
              TSoftObjectPtr<UMaterialInterface>::LoadSynchronous
                        ((TSoftObjectPtr<UMaterialInterface> *)this_02);
    if (this_00 != (UMaterialInstanceDynamic *)0x0) {
      cVar8 = (**(code **)(this_00->_padding_ + 0x1c0))(this_00);
      if (cVar8 == '\0') {
        pUVar12 = Z_Construct_UClass_UMaterialInstance_NoRegister();
        iVar6 = (int)pUVar12->_padding_;
        if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar12->_padding_)) {
          cVar8 = (**(code **)(this_00->_padding_ + 0x5c0))(this_00);
          if (cVar8 != '\0') {
            this_00 = (UMaterialInstanceDynamic *)this_00->_padding_;
            goto LAB_148743f62;
          }
        }
        local_78.ComparisonIndex.Value = 0;
        local_78.Number = 0;
        pUVar12 = Z_Construct_UClass_UMaterialInterface_NoRegister();
        this_00 = (UMaterialInstanceDynamic *)
                  DuplicateObject_Internal(pUVar12,(UObject *)this_00,(UObject *)param_1,local_78);
        if (this_00 != (UMaterialInstanceDynamic *)0x0) {
          pUVar12 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar6 = (int)pUVar12->_padding_;
          if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
              &pUVar12->_padding_)) {
            local_60 = 0;
            uStack_58 = 0;
            pUVar13 = (UMaterialInterface *)
                      (**(code **)(this_00->_padding_ + 0x3a8))(this_00,&local_60);
            if (pUVar13 != (UMaterialInterface *)0x0) {
              cVar8 = (**(code **)(pUVar13->_padding_ + 0x1c0))(pUVar13);
              if (cVar8 == '\0') {
                local_70 = 0;
                pUVar13 = DuplicateObject<UMaterialInterface>(pUVar13,(UObject *)param_1,(FName)0x0)
                ;
                UMaterialInstanceDynamic::SetNaniteOverride(this_00,pUVar13);
              }
            }
          }
        }
      }
    }
LAB_148743f62:
    local_88 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    if (((UMaterialInstanceDynamic **)*plVar2 <= &local_88) &&
       (&local_88 < (UMaterialInstanceDynamic **)*plVar2 + (int)*puVar1)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
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
    *(UMaterialInstanceDynamic **)(*plVar2 + (longlong)(int)uVar10 * 8) = local_88;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_88 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_88);
    }
    this_02 = this_02 + 0x28;
  }
  pUVar13 = `FSoftSplineMeshComponentDescriptor::InitComponent'::__l2::<lambda_1>::operator()
                      (&local_68,&this->OverlayMaterial);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  param_1->_padding_ = (longlong)pUVar13;
  plVar2 = &param_1->_padding_;
  uVar10 = (this->RuntimeVirtualTextures).ArrayNum;
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
  this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)
            (this->RuntimeVirtualTextures).AllocatorInstance.Data;
  iVar5 = (this->RuntimeVirtualTextures).ArrayNum;
  pTVar4 = this_01 + iVar5;
  do {
    if ((this->RuntimeVirtualTextures).ArrayNum != iVar5) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TSoftObjectPtr<URuntimeVirtualTexture>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res20);
    }
    if (this_01 == pTVar4) {
      FSplineMeshComponentDescriptorBase::InitComponent
                ((FSplineMeshComponentDescriptorBase *)this,param_1);
      return;
    }
    pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
    if (pUVar14 == (UObject *)0x0) {
      if ((this_01->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&this_01->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
        goto LAB_148744137;
      }
    }
    else {
LAB_148744137:
      if (pUVar14 != (UObject *)0x0) {
        pUVar12 = Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
        iVar6 = (int)pUVar12->_padding_;
        if ((iVar6 <= *(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar12->_padding_)) {
          local_80 = pUVar14;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar14);
          }
          if (((UObject **)*plVar2 <= &local_80) && (&local_80 < (UObject **)*plVar2 + (int)*puVar1)
             ) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
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
          *(UObject **)(*plVar2 + (longlong)(int)uVar10 * 8) = local_80;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_80);
          }
        }
      }
    }
    this_01 = this_01 + 1;
  } while( true );
}

// InitFrom @ 148744a20

void __thiscall
FSoftSplineMeshComponentDescriptor::InitFrom
          (FSoftSplineMeshComponentDescriptor *this,UStaticMeshComponent *param_1,bool param_2)

{
  UStaticMesh *pUVar1;
  UObject *pUVar2;
  UStaticMesh *local_res8;
  
  pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FSoftObjectPtr::operator=(&(this->StaticMesh).SoftObjectPtr,(FObjectPtr)&local_res8);
  Algo::
  Transform<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,_FSoftSplineMeshComponentDescriptor::InitFrom_::__l2::<lambda_1>_>
            ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
             &param_1->_padding_,&this->OverrideMaterials,local_res8._0_1_);
  pUVar2 = (UObject *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_res8 = (UStaticMesh *)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FSoftObjectPtr::operator=(&(this->OverlayMaterial).SoftObjectPtr,(FObjectPtr)&local_res8);
  Algo::
  Transform<TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>_&,_FSoftSplineMeshComponentDescriptor::InitFrom_::__l2::<lambda_2>_>
            ((TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *)
             &param_1->_padding_,&this->RuntimeVirtualTextures,(<lambda_2>)local_res8._0_1_);
  FSplineMeshComponentDescriptorBase::InitFrom
            ((FSplineMeshComponentDescriptorBase *)this,param_1,param_2);
  return;
}

