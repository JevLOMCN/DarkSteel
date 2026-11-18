// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticStruct @ 1473cac00

UScriptStruct * __cdecl FSkinnedMeshComponentDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptor,(UObject *)pUVar1
                         ,L"SkinnedMeshComponentDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptor.OuterSingleton;
}

// FSkinnedMeshComponentDescriptor @ 1473d6ff0

FSkinnedMeshComponentDescriptor * __thiscall
FSkinnedMeshComponentDescriptor::FSkinnedMeshComponentDescriptor
          (FSkinnedMeshComponentDescriptor *this,FSkinnedMeshComponentDescriptor *param_1)

{
  USkinnedAsset *pUVar1;
  UTransformProviderData *pUVar2;
  
  FSkinnedMeshComponentDescriptorBase::FSkinnedMeshComponentDescriptorBase
            ((FSkinnedMeshComponentDescriptorBase *)this,
             (FSkinnedMeshComponentDescriptorBase *)param_1);
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptor__6B_;
  pUVar1 = (param_1->SkinnedAsset).field0_0x0.DebugPtr;
  (this->SkinnedAsset).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USkinnedAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->TransformProvider).field0_0x0.DebugPtr;
  (this->TransformProvider).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UTransformProviderData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// FSkinnedMeshComponentDescriptor @ 1473d7060

FSkinnedMeshComponentDescriptor * __thiscall
FSkinnedMeshComponentDescriptor::FSkinnedMeshComponentDescriptor
          (FSkinnedMeshComponentDescriptor *this,FSoftSkinnedMeshComponentDescriptor *param_1)

{
  USkinnedAsset *pUVar1;
  UTransformProviderData *pUVar2;
  
  FSkinnedMeshComponentDescriptorBase::FSkinnedMeshComponentDescriptorBase
            ((FSkinnedMeshComponentDescriptorBase *)this,
             (FSkinnedMeshComponentDescriptorBase *)param_1);
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptor__6B_;
  (this->SkinnedAsset).field0_0x0.DebugPtr = (USkinnedAsset *)0x0;
  (this->TransformProvider).field0_0x0.DebugPtr = (UTransformProviderData *)0x0;
  pUVar1 = TSoftObjectPtr<USkinnedAsset>::LoadSynchronous(&param_1->SkinnedAsset);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USkinnedAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->SkinnedAsset).field0_0x0.DebugPtr = pUVar1;
  pUVar2 = TSoftObjectPtr<UTransformProviderData>::LoadSynchronous(&param_1->TransformProvider);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UTransformProviderData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->TransformProvider).field0_0x0.DebugPtr = pUVar2;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  return this;
}

// FSkinnedMeshComponentDescriptor @ 1473d7110

FSkinnedMeshComponentDescriptor * __thiscall
FSkinnedMeshComponentDescriptor::FSkinnedMeshComponentDescriptor
          (FSkinnedMeshComponentDescriptor *this,ENoInit param_1)

{
  UClass *this_00;
  UInstancedSkinnedMeshComponent *pUVar1;
  
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0x101;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptorBase__6B_;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this_00 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
  pUVar1 = UClass::GetDefaultObject<UInstancedSkinnedMeshComponent>(this_00);
  FSkinnedMeshComponentDescriptorBase::InitFrom
            ((FSkinnedMeshComponentDescriptorBase *)this,pUVar1,true);
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptor__6B_;
  (this->SkinnedAsset).field0_0x0.DebugPtr = (USkinnedAsset *)0x0;
  (this->TransformProvider).field0_0x0.DebugPtr = (UTransformProviderData *)0x0;
  return this;
}

// FSkinnedMeshComponentDescriptor @ 1473d7190

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinnedMeshComponentDescriptor * __thiscall
FSkinnedMeshComponentDescriptor::FSkinnedMeshComponentDescriptor
          (FSkinnedMeshComponentDescriptor *this)

{
  UClass *this_00;
  UInstancedSkinnedMeshComponent *this_01;
  USkinnedAsset *pUVar1;
  UTransformProviderData *pUVar2;
  
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0x101;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptor__6B_;
  (this->SkinnedAsset).field0_0x0.DebugPtr = (USkinnedAsset *)0x0;
  (this->TransformProvider).field0_0x0.DebugPtr = (UTransformProviderData *)0x0;
  this_00 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
  this_01 = UClass::GetDefaultObject<UInstancedSkinnedMeshComponent>(this_00);
  FSkinnedMeshComponentDescriptorBase::InitFrom
            ((FSkinnedMeshComponentDescriptorBase *)this,this_01,true);
  pUVar1 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USkinnedAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->SkinnedAsset).field0_0x0.DebugPtr = pUVar1;
  pUVar2 = UInstancedSkinnedMeshComponent::GetTransformProvider(this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UTransformProviderData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->TransformProvider).field0_0x0.DebugPtr = pUVar2;
  return this;
}

// ~FSkinnedMeshComponentDescriptor @ 1473dacd0

void __thiscall
FSkinnedMeshComponentDescriptor::~FSkinnedMeshComponentDescriptor
          (FSkinnedMeshComponentDescriptor *this)

{
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptorBase__6B_;
  return;
}

// operator== @ 1473dc330

bool __thiscall
FSkinnedMeshComponentDescriptor::operator==
          (FSkinnedMeshComponentDescriptor *this,FSkinnedMeshComponentDescriptor *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = (int)this->_padding_;
  if ((((iVar1 == 0) || (iVar2 = (int)param_1->_padding_, iVar2 == 0)) || (iVar1 == iVar2)) &&
     (((this->SkinnedAsset).field0_0x0.DebugPtr == (param_1->SkinnedAsset).field0_0x0.DebugPtr &&
      ((this->TransformProvider).field0_0x0.DebugPtr ==
       (param_1->TransformProvider).field0_0x0.DebugPtr)))) {
    bVar3 = FSkinnedMeshComponentDescriptorBase::operator==
                      ((FSkinnedMeshComponentDescriptorBase *)this,
                       (FSkinnedMeshComponentDescriptorBase *)param_1);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// operator!= @ 1473dc670

bool __thiscall
FSkinnedMeshComponentDescriptor::operator!=
          (FSkinnedMeshComponentDescriptor *this,FSkinnedMeshComponentDescriptor *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = (int)this->_padding_;
  if ((((iVar1 == 0) || (iVar2 = (int)param_1->_padding_, iVar2 == 0)) || (iVar1 == iVar2)) &&
     (((this->SkinnedAsset).field0_0x0.DebugPtr == (param_1->SkinnedAsset).field0_0x0.DebugPtr &&
      ((this->TransformProvider).field0_0x0.DebugPtr ==
       (param_1->TransformProvider).field0_0x0.DebugPtr)))) {
    bVar3 = FSkinnedMeshComponentDescriptorBase::operator==
                      ((FSkinnedMeshComponentDescriptorBase *)this,
                       (FSkinnedMeshComponentDescriptorBase *)param_1);
    if (bVar3) {
      return false;
    }
  }
  return true;
}

// ComputeHash @ 1473f2500

uint __thiscall FSkinnedMeshComponentDescriptor::ComputeHash(FSkinnedMeshComponentDescriptor *this)

{
  UPackage *pUVar1;
  FArchiveCrc32 local_a8;
  
  *(undefined4 *)&this->_padding_ = 0;
  FArchiveCrc32::FArchiveCrc32(&local_a8,0,(UObject *)0x0);
  if (Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptor,(UObject *)pUVar1
                         ,L"SkinnedMeshComponentDescriptor");
  }
  UScriptStruct::SerializeItem
            (Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptor.OuterSingleton,
             (FArchive *)&local_a8,this,(void *)0x0);
  *(uint *)&this->_padding_ = local_a8.CRC;
  FArchive::~FArchive((FArchive *)&local_a8);
  return local_a8.CRC;
}

// CreateComponent @ 1473f4570

UInstancedSkinnedMeshComponent * __thiscall
FSkinnedMeshComponentDescriptor::CreateComponent
          (FSkinnedMeshComponentDescriptor *this,UObject *param_1,FName param_2,EObjectFlags param_3
          )

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
        goto LAB_1473f45d5;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1473f45d5:
  pUVar5 = NewObject<UInstancedSkinnedMeshComponent>
                     (param_1,pUVar4,param_2,param_3,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  (**(code **)(this->_padding_ + 0x10))(this,pUVar5);
  return pUVar5;
}

// InitComponent @ 147406330

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
FSkinnedMeshComponentDescriptor::InitComponent
          (FSkinnedMeshComponentDescriptor *this,UInstancedSkinnedMeshComponent *param_1)

{
  FSkinnedMeshComponentDescriptorBase::InitComponent
            ((FSkinnedMeshComponentDescriptorBase *)this,param_1);
  USkinnedMeshComponent::SetSkinnedAsset
            ((USkinnedMeshComponent *)param_1,(this->SkinnedAsset).field0_0x0.DebugPtr);
  UInstancedSkinnedMeshComponent::SetTransformProvider
            (param_1,(this->TransformProvider).field0_0x0.DebugPtr);
  return;
}

// InitFrom @ 147406580

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
FSkinnedMeshComponentDescriptor::InitFrom
          (FSkinnedMeshComponentDescriptor *this,UInstancedSkinnedMeshComponent *param_1,
          bool param_2)

{
  USkinnedAsset *pUVar1;
  UTransformProviderData *pUVar2;
  
  FSkinnedMeshComponentDescriptorBase::InitFrom
            ((FSkinnedMeshComponentDescriptorBase *)this,param_1,param_2);
  pUVar1 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USkinnedAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->SkinnedAsset).field0_0x0.DebugPtr = pUVar1;
  pUVar2 = UInstancedSkinnedMeshComponent::GetTransformProvider(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UTransformProviderData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->TransformProvider).field0_0x0.DebugPtr = pUVar2;
  return;
}

// PostLoadFixup @ 14740dbb0

void __thiscall
FSkinnedMeshComponentDescriptor::PostLoadFixup
          (FSkinnedMeshComponentDescriptor *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBank.cpp"
                       ,0x6fc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

