// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// operator= @ 149bea740

FPCGSoftSkinnedMeshComponentDescriptor * __thiscall
FPCGSoftSkinnedMeshComponentDescriptor::operator=
          (FPCGSoftSkinnedMeshComponentDescriptor *this,
          FPCGSoftSkinnedMeshComponentDescriptor *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  byte bVar5;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  bVar5 = *(byte *)((longlong)&this->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  bVar5 = (bVar5 ^ *(byte *)((longlong)&param_1->_padding_ + 4)) & 1 ^
          *(byte *)((longlong)&this->_padding_ + 4);
  *(byte *)((longlong)&this->_padding_ + 4) = bVar5;
  bVar5 = (bVar5 ^ *(byte *)((longlong)&param_1->_padding_ + 4)) & 2 ^ bVar5;
  *(byte *)((longlong)&this->_padding_ + 4) = bVar5;
  bVar5 = (bVar5 ^ *(byte *)((longlong)&param_1->_padding_ + 4)) & 4 ^ bVar5;
  *(byte *)((longlong)&this->_padding_ + 4) = bVar5;
  bVar5 = (bVar5 ^ *(byte *)((longlong)&param_1->_padding_ + 4)) & 8 ^ bVar5;
  *(byte *)((longlong)&this->_padding_ + 4) = bVar5;
  bVar5 = (bVar5 ^ *(byte *)((longlong)&param_1->_padding_ + 4)) & 0x10 ^ bVar5;
  *(byte *)((longlong)&this->_padding_ + 4) = bVar5;
  bVar5 = (bVar5 ^ *(byte *)((longlong)&param_1->_padding_ + 4)) & 0x20 ^ bVar5;
  *(byte *)((longlong)&this->_padding_ + 4) = bVar5;
  bVar5 = (bVar5 ^ *(byte *)((longlong)&param_1->_padding_ + 4)) & 0x40 ^ bVar5;
  *(byte *)((longlong)&this->_padding_ + 4) = bVar5;
  *(byte *)((longlong)&this->_padding_ + 4) =
       (bVar5 ^ *(byte *)((longlong)&param_1->_padding_ + 4)) & 0x7f ^
       *(byte *)((longlong)&param_1->_padding_ + 4);
  bVar5 = (*(byte *)((longlong)&this->_padding_ + 5) ^ *(byte *)((longlong)&param_1->_padding_ + 5))
          & 1 ^ *(byte *)((longlong)&this->_padding_ + 5);
  *(byte *)((longlong)&this->_padding_ + 5) = bVar5;
  *(byte *)((longlong)&this->_padding_ + 5) =
       (bVar5 ^ *(byte *)((longlong)&param_1->_padding_ + 5)) & 2 ^ bVar5;
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  *(undefined1 *)((longlong)&this->_padding_ + 7) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 7);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  lVar4 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar4;
  lVar4 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar4;
  lVar4 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar4;
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&this->_padding_,(FSoftObjectPath *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&this->_padding_,(FSoftObjectPath *)&param_1->_padding_);
  pTVar2 = &this->ComponentTags;
  if (pTVar2 != &param_1->ComponentTags) {
    iVar3 = (param_1->ComponentTags).ArrayNum;
    piVar1 = &(this->ComponentTags).ArrayMax;
    _Src = (param_1->ComponentTags).AllocatorInstance.Data;
    (this->ComponentTags).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
      }
    }
  }
  return this;
}

// StaticStruct @ 149d72eb0

UScriptStruct * __cdecl FPCGSoftSkinnedMeshComponentDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor,
                         (UObject *)pUVar1,L"PCGSoftSkinnedMeshComponentDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor.OuterSingleton;
}

// FPCGSoftSkinnedMeshComponentDescriptor @ 149e35cc0

FPCGSoftSkinnedMeshComponentDescriptor * __thiscall
FPCGSoftSkinnedMeshComponentDescriptor::FPCGSoftSkinnedMeshComponentDescriptor
          (FPCGSoftSkinnedMeshComponentDescriptor *this,
          FPCGSoftSkinnedMeshComponentDescriptor *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FSoftSkinnedMeshComponentDescriptor::FSoftSkinnedMeshComponentDescriptor
            ((FSoftSkinnedMeshComponentDescriptor *)this,
             (FSoftSkinnedMeshComponentDescriptor *)param_1);
  pTVar2 = &this->ComponentTags;
  this->_padding_ = (longlong)&___7FPCGSoftSkinnedMeshComponentDescriptor__6B_;
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
  return this;
}

// FPCGSoftSkinnedMeshComponentDescriptor @ 149e35d70

FPCGSoftSkinnedMeshComponentDescriptor * __thiscall
FPCGSoftSkinnedMeshComponentDescriptor::FPCGSoftSkinnedMeshComponentDescriptor
          (FPCGSoftSkinnedMeshComponentDescriptor *this,FSkinnedMeshComponentDescriptor *param_1)

{
  FSoftSkinnedMeshComponentDescriptor::FSoftSkinnedMeshComponentDescriptor
            ((FSoftSkinnedMeshComponentDescriptor *)this,param_1);
  this->_padding_ = (longlong)&___7FPCGSoftSkinnedMeshComponentDescriptor__6B_;
  (this->ComponentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTags).ArrayNum = 0;
  (this->ComponentTags).ArrayMax = 0;
  return this;
}

// FPCGSoftSkinnedMeshComponentDescriptor @ 149e35db0

FPCGSoftSkinnedMeshComponentDescriptor * __thiscall
FPCGSoftSkinnedMeshComponentDescriptor::FPCGSoftSkinnedMeshComponentDescriptor
          (FPCGSoftSkinnedMeshComponentDescriptor *this)

{
  UClass *pUVar1;
  
  FSoftSkinnedMeshComponentDescriptor::FSoftSkinnedMeshComponentDescriptor
            ((FSoftSkinnedMeshComponentDescriptor *)this);
  this->_padding_ = (longlong)&___7FPCGSoftSkinnedMeshComponentDescriptor__6B_;
  (this->ComponentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTags).ArrayNum = 0;
  (this->ComponentTags).ArrayMax = 0;
  pUVar1 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// GetOrAddAnimationIndex @ 149e5c420

int __thiscall
FPCGSoftSkinnedMeshComponentDescriptor::GetOrAddAnimationIndex
          (FPCGSoftSkinnedMeshComponentDescriptor *this,FSoftAnimBankItem *param_1)

{
  return -1;
}

// InitComponent @ 149e73860

void __thiscall
FPCGSoftSkinnedMeshComponentDescriptor::InitComponent
          (FPCGSoftSkinnedMeshComponentDescriptor *this,UInstancedSkinnedMeshComponent *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->field_0x68,&this->ComponentTags)
  ;
  FSoftSkinnedMeshComponentDescriptor::InitComponent
            ((FSoftSkinnedMeshComponentDescriptor *)this,param_1);
  return;
}

// InitFrom @ 149e738f0

void __thiscall
FPCGSoftSkinnedMeshComponentDescriptor::InitFrom
          (FPCGSoftSkinnedMeshComponentDescriptor *this,UInstancedSkinnedMeshComponent *param_1,
          bool param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->ComponentTags,(TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->field_0x68)
  ;
  FSoftSkinnedMeshComponentDescriptor::InitFrom
            ((FSoftSkinnedMeshComponentDescriptor *)this,param_1,param_2);
  return;
}

