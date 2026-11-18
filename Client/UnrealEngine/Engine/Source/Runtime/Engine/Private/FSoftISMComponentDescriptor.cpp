// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticStruct @ 147d52b50

UScriptStruct * __cdecl FSoftISMComponentDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoftISMComponentDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoftISMComponentDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor,(UObject *)pUVar1,
                         L"SoftISMComponentDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FSoftISMComponentDescriptor.OuterSingleton;
}

// FSoftISMComponentDescriptor @ 147d79150

FSoftISMComponentDescriptor * __thiscall
FSoftISMComponentDescriptor::FSoftISMComponentDescriptor
          (FSoftISMComponentDescriptor *this,FSoftISMComponentDescriptor *param_1)

{
  int *piVar1;
  TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  FISMComponentDescriptorBase::FISMComponentDescriptorBase
            ((FISMComponentDescriptorBase *)this,(FISMComponentDescriptorBase *)param_1);
  this->_padding_ = (longlong)&___7FSoftISMComponentDescriptor__6B_;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr =
       *(undefined8 *)&(param_1->StaticMesh).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->StaticMesh).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->StaticMesh).SoftObjectPtr.field_0x8);
  pTVar2 = &this->OverrideMaterials;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OverrideMaterials).ArrayMax;
  iVar4 = (param_1->OverrideMaterials).ArrayNum;
  pFVar5 = (param_1->OverrideMaterials).AllocatorInstance.Data;
  (this->OverrideMaterials).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    ConstructItems<TSoftObjectPtr<UMaterialInterface>,TSoftObjectPtr<UMaterialInterface>,int>
              ((pTVar2->AllocatorInstance).Data,(TSoftObjectPtr<UMaterialInterface> *)pFVar5,iVar4);
  }
  *(undefined8 *)&(this->OverlayMaterial).SoftObjectPtr =
       *(undefined8 *)&(param_1->OverlayMaterial).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->OverlayMaterial).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->OverlayMaterial).SoftObjectPtr.field_0x8);
  pTVar3 = &this->RuntimeVirtualTextures;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RuntimeVirtualTextures).ArrayMax;
  iVar4 = (param_1->RuntimeVirtualTextures).ArrayNum;
  pFVar5 = (param_1->RuntimeVirtualTextures).AllocatorInstance.Data;
  (this->RuntimeVirtualTextures).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    ConstructItems<TSoftObjectPtr<URuntimeVirtualTexture>,TSoftObjectPtr<URuntimeVirtualTexture>,int>
              ((pTVar3->AllocatorInstance).Data,(TSoftObjectPtr<URuntimeVirtualTexture> *)pFVar5,
               iVar4);
  }
  return this;
}

// FSoftISMComponentDescriptor @ 147d792a0

FSoftISMComponentDescriptor * __thiscall
FSoftISMComponentDescriptor::FSoftISMComponentDescriptor
          (FSoftISMComponentDescriptor *this,FISMComponentDescriptor *param_1)

{
  undefined1 *puVar1;
  TSoftObjectPtr<UStaticMesh> *this_00;
  UStaticMesh *pUVar2;
  UMaterialInterface *pUVar3;
  UStaticMesh *local_res8;
  
  FISMComponentDescriptorBase::FISMComponentDescriptorBase
            ((FISMComponentDescriptorBase *)this,(FISMComponentDescriptorBase *)param_1);
  this_00 = &this->StaticMesh;
  puVar1 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7FSoftISMComponentDescriptor__6B_;
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
  Transform<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,_FSoftISMComponentDescriptor::FSoftISMComponentDescriptor_::__l2::<lambda_1>_>
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
  Transform<TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>_&,_FSoftISMComponentDescriptor::FSoftISMComponentDescriptor_::__l2::<lambda_2>_>
            (&param_1->RuntimeVirtualTextures,&this->RuntimeVirtualTextures,
             (<lambda_2>)local_res8._0_1_);
  *(undefined4 *)&this->_padding_ = *(undefined4 *)&param_1->field_0x8;
  return this;
}

// FSoftISMComponentDescriptor @ 147d79440

FSoftISMComponentDescriptor * __thiscall
FSoftISMComponentDescriptor::FSoftISMComponentDescriptor(FSoftISMComponentDescriptor *this)

{
  undefined1 *puVar1;
  TSoftObjectPtr<UStaticMesh> *this_00;
  byte bVar2;
  UObject *pUVar3;
  UClass *this_01;
  UHierarchicalInstancedStaticMeshComponent *pUVar4;
  UObject *local_res8;
  
  this->_padding_ = (longlong)&___7FISMComponentDescriptorBase__6B_;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 3);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(byte *)((longlong)&this->_padding_ + 3) = bVar2 & 0xf9 | 1;
  FBodyInstance::FBodyInstance((FBodyInstance *)&this->_padding_);
  this_00 = &this->StaticMesh;
  puVar1 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7FSoftISMComponentDescriptor__6B_;
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
  this_01 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
  pUVar4 = UClass::GetDefaultObject<UHierarchicalInstancedStaticMeshComponent>(this_01);
  pUVar3 = *(UObject **)&pUVar4->field_0x5a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FSoftObjectPtr::operator=(&this_00->SoftObjectPtr,(FObjectPtr)&local_res8);
  Algo::
  Transform<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,_FSoftISMComponentDescriptor::InitFrom_::__l2::<lambda_1>_>
            ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
             &pUVar4->field_0x548,&this->OverrideMaterials,local_res8._0_1_);
  pUVar3 = *(UObject **)&pUVar4->field_0x558;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FSoftObjectPtr::operator=(&(this->OverlayMaterial).SoftObjectPtr,(FObjectPtr)&local_res8);
  Algo::
  Transform<TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>_&,_FSoftISMComponentDescriptor::InitFrom_::__l2::<lambda_2>_>
            ((TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *)
             &pUVar4->field_0x308,&this->RuntimeVirtualTextures,(<lambda_2>)local_res8._0_1_);
  FISMComponentDescriptorBase::InitFrom
            ((FISMComponentDescriptorBase *)this,(UStaticMeshComponent *)pUVar4,true);
  return this;
}

// ~FSoftISMComponentDescriptor @ 147d7b800

void __thiscall
FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor(FSoftISMComponentDescriptor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FSoftISMComponentDescriptor__6B_;
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
  this->_padding_ = (longlong)&___7FISMComponentDescriptorBase__6B_;
  FBodyInstance::~FBodyInstance((FBodyInstance *)&this->_padding_);
  return;
}

// operator== @ 147d7da80

bool __thiscall
FSoftISMComponentDescriptor::operator==
          (FSoftISMComponentDescriptor *this,FSoftISMComponentDescriptor *param_1)

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
            bVar3 = FISMComponentDescriptorBase::operator==
                              ((FISMComponentDescriptorBase *)this,
                               (FISMComponentDescriptorBase *)param_1);
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

// operator!= @ 147d7dbc0

bool __thiscall
FSoftISMComponentDescriptor::operator!=
          (FSoftISMComponentDescriptor *this,FSoftISMComponentDescriptor *param_1)

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
            bVar3 = FISMComponentDescriptorBase::operator==
                              ((FISMComponentDescriptorBase *)this,
                               (FISMComponentDescriptorBase *)param_1);
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

// operator() @ 147d7edd0

UMaterialInterface * __thiscall
`FSoftISMComponentDescriptor::InitComponent'::__l2::<lambda_1>::operator()
          (void *this,TSoftObjectPtr<UMaterialInterface> *param_1)

{
  int iVar1;
  char cVar2;
  UMaterialInstanceDynamic *this_00;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  this_00 = (UMaterialInstanceDynamic *)TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(param_1)
  ;
  if ((this_00 != (UMaterialInstanceDynamic *)0x0) &&
     (cVar2 = (**(code **)(this_00->_padding_ + 0x1c0))(this_00), cVar2 == '\0')) {
    pUVar3 = Z_Construct_UClass_UMaterialInstance_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       (((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_ &&
        (cVar2 = (**(code **)(this_00->_padding_ + 0x5c0))(this_00), cVar2 != '\0')))) {
      return (UMaterialInterface *)this_00->_padding_;
    }
    this_00 = (UMaterialInstanceDynamic *)
              FISMComponentDescriptorBase::DuplicateMaterialInterface
                        ((UMaterialInterface *)this_00,*(UObject **)this);
    if (this_00 != (UMaterialInstanceDynamic *)0x0) {
      pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        local_18 = 0;
        uStack_10 = 0;
        pUVar4 = (UMaterialInterface *)(**(code **)(this_00->_padding_ + 0x3a8))(this_00,&local_18);
        if ((pUVar4 != (UMaterialInterface *)0x0) &&
           (cVar2 = (**(code **)(pUVar4->_padding_ + 0x1c0))(pUVar4), cVar2 == '\0')) {
          pUVar4 = FISMComponentDescriptorBase::DuplicateMaterialInterface(pUVar4,*(UObject **)this)
          ;
          UMaterialInstanceDynamic::SetNaniteOverride(this_00,pUVar4);
        }
      }
    }
  }
  return (UMaterialInterface *)this_00;
}

// ComputeHash @ 147d8fcd0

uint __thiscall FSoftISMComponentDescriptor::ComputeHash(FSoftISMComponentDescriptor *this)

{
  FArchiveCrc32 local_a8;
  
  FISMComponentDescriptorBase::ComputeHash((FISMComponentDescriptorBase *)this);
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

// InitComponent @ 147dac120

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSoftISMComponentDescriptor::InitComponent
          (FSoftISMComponentDescriptor *this,UInstancedStaticMeshComponent *param_1)

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
  UMaterialInstanceDynamic *local_78;
  UObject *local_70;
  UInstancedStaticMeshComponent *local_68;
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
            goto LAB_147dac2e9;
          }
        }
        this_00 = (UMaterialInstanceDynamic *)
                  FISMComponentDescriptorBase::DuplicateMaterialInterface
                            ((UMaterialInterface *)this_00,(UObject *)param_1);
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
                pUVar13 = FISMComponentDescriptorBase::DuplicateMaterialInterface
                                    (pUVar13,(UObject *)param_1);
                UMaterialInstanceDynamic::SetNaniteOverride(this_00,pUVar13);
              }
            }
          }
        }
      }
    }
LAB_147dac2e9:
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
    *(UMaterialInstanceDynamic **)(*plVar2 + (longlong)(int)uVar10 * 8) = local_78;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_78 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_78);
    }
    this_02 = this_02 + 0x28;
  }
  pUVar13 = `FSoftISMComponentDescriptor::InitComponent'::__l2::<lambda_1>::operator()
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
      FISMComponentDescriptorBase::InitComponent((FISMComponentDescriptorBase *)this,param_1);
      return;
    }
    pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
    if (pUVar14 == (UObject *)0x0) {
      if ((this_01->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&this_01->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
        goto LAB_147dac4ba;
      }
    }
    else {
LAB_147dac4ba:
      if (pUVar14 != (UObject *)0x0) {
        pUVar12 = Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
        iVar6 = (int)pUVar12->_padding_;
        if ((iVar6 <= *(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar12->_padding_)) {
          local_70 = pUVar14;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar14);
          }
          if (((UObject **)*plVar2 <= &local_70) && (&local_70 < (UObject **)*plVar2 + (int)*puVar1)
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
          *(UObject **)(*plVar2 + (longlong)(int)uVar10 * 8) = local_70;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_70);
          }
        }
      }
    }
    this_01 = this_01 + 1;
  } while( true );
}

// InitFrom @ 147daccd0

void __thiscall
FSoftISMComponentDescriptor::InitFrom
          (FSoftISMComponentDescriptor *this,UStaticMeshComponent *param_1,bool param_2)

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
  Transform<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,_FSoftISMComponentDescriptor::InitFrom_::__l2::<lambda_1>_>
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
  Transform<TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>_&,_FSoftISMComponentDescriptor::InitFrom_::__l2::<lambda_2>_>
            ((TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *)
             &param_1->_padding_,&this->RuntimeVirtualTextures,(<lambda_2>)local_res8._0_1_);
  FISMComponentDescriptorBase::InitFrom((FISMComponentDescriptorBase *)this,param_1,param_2);
  return;
}

