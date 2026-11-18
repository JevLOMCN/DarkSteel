// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticStruct @ 1473cb110

UScriptStruct * __cdecl FSoftSkinnedMeshComponentDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoftSkinnedMeshComponentDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoftSkinnedMeshComponentDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoftSkinnedMeshComponentDescriptor,
                         (UObject *)pUVar1,L"SoftSkinnedMeshComponentDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FSoftSkinnedMeshComponentDescriptor.OuterSingleton;
}

// FSoftSkinnedMeshComponentDescriptor @ 1473d7610

FSoftSkinnedMeshComponentDescriptor * __thiscall
FSoftSkinnedMeshComponentDescriptor::FSoftSkinnedMeshComponentDescriptor
          (FSoftSkinnedMeshComponentDescriptor *this,FSoftSkinnedMeshComponentDescriptor *param_1)

{
  FSkinnedMeshComponentDescriptorBase::FSkinnedMeshComponentDescriptorBase
            ((FSkinnedMeshComponentDescriptorBase *)this,
             (FSkinnedMeshComponentDescriptorBase *)param_1);
  this->_padding_ = (longlong)&___7FSoftSkinnedMeshComponentDescriptor__6B_;
  TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SkinnedAsset,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->SkinnedAsset);
  TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->TransformProvider,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->TransformProvider);
  return this;
}

// FSoftSkinnedMeshComponentDescriptor @ 1473d7670

FSoftSkinnedMeshComponentDescriptor * __thiscall
FSoftSkinnedMeshComponentDescriptor::FSoftSkinnedMeshComponentDescriptor
          (FSoftSkinnedMeshComponentDescriptor *this,FSkinnedMeshComponentDescriptor *param_1)

{
  undefined1 *puVar1;
  UTransformProviderData *pUVar2;
  USkinnedAsset *local_res8;
  
  FSkinnedMeshComponentDescriptorBase::FSkinnedMeshComponentDescriptorBase
            ((FSkinnedMeshComponentDescriptorBase *)this,
             (FSkinnedMeshComponentDescriptorBase *)param_1);
  puVar1 = &(this->SkinnedAsset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7FSoftSkinnedMeshComponentDescriptor__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SkinnedAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SkinnedAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SkinnedAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SkinnedAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TransformProvider).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TransformProvider).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TransformProvider).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TransformProvider).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TransformProvider).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = (param_1->SkinnedAsset).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (USkinnedAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (USkinnedAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FSoftObjectPtr::operator=(&(this->SkinnedAsset).SoftObjectPtr,(FObjectPtr)&local_res8);
  pUVar2 = (param_1->TransformProvider).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UTransformProviderData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_res8 = (USkinnedAsset *)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UTransformProviderData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FSoftObjectPtr::operator=(&(this->TransformProvider).SoftObjectPtr,(FObjectPtr)&local_res8);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  return this;
}

// FSoftSkinnedMeshComponentDescriptor @ 1473d77b0

FSoftSkinnedMeshComponentDescriptor * __thiscall
FSoftSkinnedMeshComponentDescriptor::FSoftSkinnedMeshComponentDescriptor
          (FSoftSkinnedMeshComponentDescriptor *this,ENoInit param_1)

{
  undefined1 *puVar1;
  UClass *this_00;
  UInstancedSkinnedMeshComponent *pUVar2;
  
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0x101;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptorBase__6B_;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this_00 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
  pUVar2 = UClass::GetDefaultObject<UInstancedSkinnedMeshComponent>(this_00);
  FSkinnedMeshComponentDescriptorBase::InitFrom
            ((FSkinnedMeshComponentDescriptorBase *)this,pUVar2,true);
  puVar1 = &(this->SkinnedAsset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7FSoftSkinnedMeshComponentDescriptor__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SkinnedAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SkinnedAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SkinnedAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SkinnedAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TransformProvider).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TransformProvider).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TransformProvider).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TransformProvider).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TransformProvider).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  return this;
}

// FSoftSkinnedMeshComponentDescriptor @ 1473d7870

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSoftSkinnedMeshComponentDescriptor * __thiscall
FSoftSkinnedMeshComponentDescriptor::FSoftSkinnedMeshComponentDescriptor
          (FSoftSkinnedMeshComponentDescriptor *this)

{
  UClass *this_00;
  UInstancedSkinnedMeshComponent *this_01;
  undefined1 *puVar1;
  USkinnedAsset *local_res8;
  
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0x101;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FSoftSkinnedMeshComponentDescriptor__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  puVar1 = &(this->SkinnedAsset).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SkinnedAsset).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SkinnedAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SkinnedAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SkinnedAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TransformProvider).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TransformProvider).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TransformProvider).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TransformProvider).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TransformProvider).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  this_00 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
  this_01 = UClass::GetDefaultObject<UInstancedSkinnedMeshComponent>(this_00);
  FSkinnedMeshComponentDescriptorBase::InitFrom
            ((FSkinnedMeshComponentDescriptorBase *)this,this_01,true);
  local_res8 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (USkinnedAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FSoftObjectPtr::operator=(&(this->SkinnedAsset).SoftObjectPtr,(FObjectPtr)&local_res8);
  local_res8 = (USkinnedAsset *)UInstancedSkinnedMeshComponent::GetTransformProvider(this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (USkinnedAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FSoftObjectPtr::operator=(&(this->TransformProvider).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~FSoftSkinnedMeshComponentDescriptor @ 1473dad10

void __thiscall
FSoftSkinnedMeshComponentDescriptor::~FSoftSkinnedMeshComponentDescriptor
          (FSoftSkinnedMeshComponentDescriptor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSoftSkinnedMeshComponentDescriptor__6B_;
  pvVar1 = *(void **)&(this->TransformProvider).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SkinnedAsset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptorBase__6B_;
  return;
}

// operator== @ 1473dc5d0

bool __thiscall
FSoftSkinnedMeshComponentDescriptor::operator==
          (FSoftSkinnedMeshComponentDescriptor *this,FSoftSkinnedMeshComponentDescriptor *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = (int)this->_padding_;
  if (((iVar1 == 0) || (iVar2 = (int)param_1->_padding_, iVar2 == 0)) || (iVar1 == iVar2)) {
    bVar3 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(this->SkinnedAsset).SoftObjectPtr.field_0x8,
                       (FSoftObjectPath *)&(param_1->SkinnedAsset).SoftObjectPtr.field_0x8);
    if (bVar3) {
      bVar3 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)&(this->TransformProvider).SoftObjectPtr.field_0x8,
                         (FSoftObjectPath *)&(param_1->TransformProvider).SoftObjectPtr.field_0x8);
      if (bVar3) {
        bVar3 = FSkinnedMeshComponentDescriptorBase::operator==
                          ((FSkinnedMeshComponentDescriptorBase *)this,
                           (FSkinnedMeshComponentDescriptorBase *)param_1);
        if (bVar3) {
          return true;
        }
      }
    }
  }
  return false;
}

// operator!= @ 1473dc730

bool __thiscall
FSoftSkinnedMeshComponentDescriptor::operator!=
          (FSoftSkinnedMeshComponentDescriptor *this,FSoftSkinnedMeshComponentDescriptor *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = (int)this->_padding_;
  if (((iVar1 == 0) || (iVar2 = (int)param_1->_padding_, iVar2 == 0)) || (iVar1 == iVar2)) {
    bVar3 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(this->SkinnedAsset).SoftObjectPtr.field_0x8,
                       (FSoftObjectPath *)&(param_1->SkinnedAsset).SoftObjectPtr.field_0x8);
    if (bVar3) {
      bVar3 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)&(this->TransformProvider).SoftObjectPtr.field_0x8,
                         (FSoftObjectPath *)&(param_1->TransformProvider).SoftObjectPtr.field_0x8);
      if (bVar3) {
        bVar3 = FSkinnedMeshComponentDescriptorBase::operator==
                          ((FSkinnedMeshComponentDescriptorBase *)this,
                           (FSkinnedMeshComponentDescriptorBase *)param_1);
        if (bVar3) {
          return false;
        }
      }
    }
  }
  return true;
}

// ComputeHash @ 1473f25a0

uint __thiscall
FSoftSkinnedMeshComponentDescriptor::ComputeHash(FSoftSkinnedMeshComponentDescriptor *this)

{
  UPackage *pUVar1;
  FArchiveCrc32 local_a8;
  
  *(undefined4 *)&this->_padding_ = 0;
  FArchiveCrc32::FArchiveCrc32(&local_a8,0,(UObject *)0x0);
  if (Z_Registration_Info_UScriptStruct_FSoftSkinnedMeshComponentDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoftSkinnedMeshComponentDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoftSkinnedMeshComponentDescriptor,
                         (UObject *)pUVar1,L"SoftSkinnedMeshComponentDescriptor");
  }
  UScriptStruct::SerializeItem
            (Z_Registration_Info_UScriptStruct_FSoftSkinnedMeshComponentDescriptor.OuterSingleton,
             (FArchive *)&local_a8,this,(void *)0x0);
  *(uint *)&this->_padding_ = local_a8.CRC;
  FArchive::~FArchive((FArchive *)&local_a8);
  return local_a8.CRC;
}

// CreateComponent @ 1473f4640

UInstancedSkinnedMeshComponent * __thiscall
FSoftSkinnedMeshComponentDescriptor::CreateComponent
          (FSoftSkinnedMeshComponentDescriptor *this,UObject *param_1,FName param_2,
          EObjectFlags param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UInstancedSkinnedMeshComponent *pUVar5;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = (UClass *)this->_padding_;
        goto LAB_1473f46a5;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1473f46a5:
  pUVar5 = NewObject<UInstancedSkinnedMeshComponent>
                     (param_1,pUVar4,param_2,param_3,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  (**(code **)(this->_padding_ + 0x10))(this,pUVar5);
  return pUVar5;
}

// InitComponent @ 147406530

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSoftSkinnedMeshComponentDescriptor::InitComponent
          (FSoftSkinnedMeshComponentDescriptor *this,UInstancedSkinnedMeshComponent *param_1)

{
  USkinnedAsset *pUVar1;
  UTransformProviderData *pUVar2;
  
  FSkinnedMeshComponentDescriptorBase::InitComponent
            ((FSkinnedMeshComponentDescriptorBase *)this,param_1);
  pUVar1 = TSoftObjectPtr<USkinnedAsset>::LoadSynchronous(&this->SkinnedAsset);
  USkinnedMeshComponent::SetSkinnedAsset((USkinnedMeshComponent *)param_1,pUVar1);
  pUVar2 = TSoftObjectPtr<UTransformProviderData>::LoadSynchronous(&this->TransformProvider);
  UInstancedSkinnedMeshComponent::SetTransformProvider(param_1,pUVar2);
  return;
}

// InitFrom @ 1474067e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSoftSkinnedMeshComponentDescriptor::InitFrom
          (FSoftSkinnedMeshComponentDescriptor *this,UInstancedSkinnedMeshComponent *param_1,
          bool param_2)

{
  USkinnedAsset *local_res8;
  
  FSkinnedMeshComponentDescriptorBase::InitFrom
            ((FSkinnedMeshComponentDescriptorBase *)this,param_1,param_2);
  local_res8 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (USkinnedAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FSoftObjectPtr::operator=(&(this->SkinnedAsset).SoftObjectPtr,(FObjectPtr)&local_res8);
  local_res8 = (USkinnedAsset *)UInstancedSkinnedMeshComponent::GetTransformProvider(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (USkinnedAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FSoftObjectPtr::operator=(&(this->TransformProvider).SoftObjectPtr,(FObjectPtr)&local_res8);
  return;
}

// PostLoadFixup @ 14740dbf0

void __thiscall
FSoftSkinnedMeshComponentDescriptor::PostLoadFixup
          (FSoftSkinnedMeshComponentDescriptor *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBank.cpp"
                       ,0x746,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

