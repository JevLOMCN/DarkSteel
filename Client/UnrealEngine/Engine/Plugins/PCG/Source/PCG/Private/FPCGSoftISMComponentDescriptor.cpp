// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// FPCGSoftISMComponentDescriptor @ 149c4a3e0

FPCGSoftISMComponentDescriptor * __thiscall
FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor
          (FPCGSoftISMComponentDescriptor *this,FPCGSoftISMComponentDescriptor *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FSoftISMComponentDescriptor::FSoftISMComponentDescriptor
            ((FSoftISMComponentDescriptor *)this,(FSoftISMComponentDescriptor *)param_1);
  pTVar2 = &this->ComponentTags;
  this->_padding_ = (longlong)&___7FPCGSoftISMComponentDescriptor__6B_;
  piVar1 = &(this->ComponentTags).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ComponentTags).ArrayNum;
  _Src = (param_1->ComponentTags).AllocatorInstance.Data;
  (this->ComponentTags).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  ::FString::FString(&this->AdditionalCommaSeparatedTags,&param_1->AdditionalCommaSeparatedTags);
  return this;
}

// operator= @ 149d35650

FPCGSoftISMComponentDescriptor * __thiscall
FPCGSoftISMComponentDescriptor::operator=
          (FPCGSoftISMComponentDescriptor *this,FPCGSoftISMComponentDescriptor *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  TSoftObjectPtr<UMaterialInterface> *pTVar5;
  TSoftObjectPtr<URuntimeVirtualTexture> *pTVar6;
  
  FISMComponentDescriptorBase::operator=
            ((FISMComponentDescriptorBase *)this,(FISMComponentDescriptorBase *)param_1);
  this->_padding_ = param_1->_padding_;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&this->_padding_,(FSoftObjectPath *)&param_1->_padding_);
  plVar2 = &this->_padding_;
  if (plVar2 != &param_1->_padding_) {
    DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
              ((TSoftObjectPtr<UMaterialInterface> *)*plVar2,(int)this->_padding_);
    iVar3 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    pTVar5 = (TSoftObjectPtr<UMaterialInterface> *)param_1->_padding_;
    iVar4 = *piVar1;
    *(int *)&this->_padding_ = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar3,iVar4,(ForAnyElementType *)plVar2,iVar3,piVar1);
      ConstructItems<TSoftObjectPtr<UMaterialInterface>,TSoftObjectPtr<UMaterialInterface>,int>
                ((void *)*plVar2,pTVar5,iVar3);
    }
  }
  this->_padding_ = param_1->_padding_;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&this->_padding_,(FSoftObjectPath *)&param_1->_padding_);
  plVar2 = &this->_padding_;
  if (plVar2 != &param_1->_padding_) {
    DestructItems<TSoftObjectPtr<URuntimeVirtualTexture>,int>
              ((TSoftObjectPtr<URuntimeVirtualTexture> *)*plVar2,(int)this->_padding_);
    iVar3 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    pTVar6 = (TSoftObjectPtr<URuntimeVirtualTexture> *)param_1->_padding_;
    iVar4 = *piVar1;
    *(int *)&this->_padding_ = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar3,iVar4,(ForAnyElementType *)plVar2,iVar3,piVar1);
      ConstructItems<TSoftObjectPtr<URuntimeVirtualTexture>,TSoftObjectPtr<URuntimeVirtualTexture>,int>
                ((void *)*plVar2,pTVar6,iVar3);
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->ComponentTags,&param_1->ComponentTags)
  ;
  ::FString::operator=(&this->AdditionalCommaSeparatedTags,&param_1->AdditionalCommaSeparatedTags);
  return this;
}

// StaticStruct @ 149d74490

UScriptStruct * __cdecl FPCGSoftISMComponentDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSoftISMComponentDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSoftISMComponentDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSoftISMComponentDescriptor,(UObject *)pUVar1,
                         L"PCGSoftISMComponentDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSoftISMComponentDescriptor.OuterSingleton;
}

// FPCGSoftISMComponentDescriptor @ 149e35be0

FPCGSoftISMComponentDescriptor * __thiscall
FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor
          (FPCGSoftISMComponentDescriptor *this,FISMComponentDescriptor *param_1)

{
  FSoftISMComponentDescriptor::FSoftISMComponentDescriptor
            ((FSoftISMComponentDescriptor *)this,param_1);
  this->_padding_ = (longlong)&___7FPCGSoftISMComponentDescriptor__6B_;
  (this->ComponentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTags).ArrayNum = 0;
  (this->ComponentTags).ArrayMax = 0;
  (this->AdditionalCommaSeparatedTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalCommaSeparatedTags).Data.ArrayNum = 0;
  (this->AdditionalCommaSeparatedTags).Data.ArrayMax = 0;
  return this;
}

// FPCGSoftISMComponentDescriptor @ 149e35c30

FPCGSoftISMComponentDescriptor * __thiscall
FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(FPCGSoftISMComponentDescriptor *this)

{
  byte *pbVar1;
  UClass *pUVar2;
  
  FSoftISMComponentDescriptor::FSoftISMComponentDescriptor((FSoftISMComponentDescriptor *)this);
  this->_padding_ = (longlong)&___7FPCGSoftISMComponentDescriptor__6B_;
  (this->ComponentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTags).ArrayNum = 0;
  (this->ComponentTags).ArrayMax = 0;
  (this->AdditionalCommaSeparatedTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalCommaSeparatedTags).Data.ArrayNum = 0;
  (this->AdditionalCommaSeparatedTags).Data.ArrayMax = 0;
  pUVar2 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfd;
  *(undefined1 *)&this->_padding_ = 0;
  FBodyInstance::SetCollisionProfileName
            ((FBodyInstance *)&this->_padding_,UCollisionProfile::NoCollision_ProfileName);
  return this;
}

// InitComponent @ 149e73720

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPCGSoftISMComponentDescriptor::InitComponent
          (FPCGSoftISMComponentDescriptor *this,UInstancedStaticMeshComponent *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  FName local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->_padding_,&this->ComponentTags);
  PCGHelpers::GetStringArrayFromCommaSeparatedList(&local_48,&this->AdditionalCommaSeparatedTags);
  iVar3 = local_48.ArrayNum;
  pFVar7 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10;
  FVar8.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar8.Data == pFVar7) break;
    iVar4 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar4 + 1;
    lVar2 = param_1->_padding_;
    iVar6 = *(int *)(FVar8.Data + 8) + -1;
    if (*(int *)(FVar8.Data + 8) == 0) {
      iVar6 = 0;
    }
    pFVar5 = ::FName::FName(&local_res10,iVar6,*(wchar_t **)FVar8.Data,FNAME_Add);
    FVar8.Data = FVar8.Data + 0x10;
    *(FName *)(lVar2 + (longlong)iVar4 * 8) = *pFVar5;
  }
  FSoftISMComponentDescriptor::InitComponent((FSoftISMComponentDescriptor *)this,param_1);
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// InitFrom @ 149e738a0

void __thiscall
FPCGSoftISMComponentDescriptor::InitFrom
          (FPCGSoftISMComponentDescriptor *this,UStaticMeshComponent *param_1,bool param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->ComponentTags,(TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  FSoftISMComponentDescriptor::InitFrom((FSoftISMComponentDescriptor *)this,param_1,param_2);
  return;
}

// SerializeFromMismatchedTag @ 149e8db30

bool __thiscall
FPCGSoftISMComponentDescriptor::SerializeFromMismatchedTag
          (FPCGSoftISMComponentDescriptor *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2
          )

{
  bool bVar1;
  UScriptStruct *pUVar2;
  FPropertyTypeName local_res10 [6];
  FSoftISMComponentDescriptor local_268;
  
  local_res10[0].Index = (param_1->TypeName).Index;
  pUVar2 = FSoftISMComponentDescriptor::StaticStruct();
  bVar1 = UE::FPropertyTypeName::IsStruct(local_res10,(FName)pUVar2->_padding_);
  if (bVar1) {
    FSoftISMComponentDescriptor::FSoftISMComponentDescriptor(&local_268);
    pUVar2 = FSoftISMComponentDescriptor::StaticStruct();
    UScriptStruct::SerializeItem(pUVar2,param_2,&local_268,(void *)0x0);
    FSoftISMComponentDescriptor::operator=((FSoftISMComponentDescriptor *)this,&local_268);
    FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor(&local_268);
    return true;
  }
  return false;
}

